use std::io::Write;

use clap::{Args, Parser};
use toml_edit::{value, DocumentMut};
use xshell::{cmd, Shell};

/// Utility commands
#[derive(Parser, Debug)]
#[command(author, version, about, long_about)]
#[command(name = "cargo xtask")]
#[command(bin_name = "cargo xtask")]
enum Command {
    /// Bump the version and create a new draft release on github
    Release(Release),
}

#[derive(Args, Debug)]
struct Release {
    /// The new version number
    version: String,
}

fn main() -> anyhow::Result<()> {
    let args = Command::parse();
    match args {
        Command::Release(args) => release(&args)?,
    };
    Ok(())
}

fn release(args: &Release) -> anyhow::Result<()> {
    let sh = Shell::new()?;
    let version = &args.version;

    // update package.json
    cmd!(sh, "npm version {version}").run()?;

    // update the workspace Cargo.toml
    let toml = std::fs::read_to_string("Cargo.toml")?;
    let mut doc = toml.parse::<DocumentMut>()?;
    doc["workspace"]["package"]["version"] = value(&args.version);
    std::fs::File::create("Cargo.toml")?.write_all(doc.to_string().as_bytes())?;

    // update pyproject.toml
    let toml = std::fs::read_to_string("pyproject.toml")?;
    let mut doc = toml.parse::<DocumentMut>()?;
    doc["project"]["version"] = value(&args.version);
    std::fs::File::create("pyproject.toml")?.write_all(doc.to_string().as_bytes())?;

    // update Makefile
    let content = std::fs::read_to_string("Makefile")?;
    let re = regex::Regex::new(r"VERSION := \d+\.\d+\.\d+").unwrap();
    let content = re
        .replace_all(&content, format!("VERSION := {version}"))
        .to_string();
    println!("{}", &content);
    std::fs::write("Makefile", content)?;

    // generate the parser and run tree-sitter tests
    cmd!(sh, "tree-sitter generate").run()?;
    cmd!(sh, "tree-sitter test").run()?;
    cmd!(sh, "./test/parse.sh").run()?;
    cmd!(sh, "cargo build").run()?;
    cmd!(sh, "cargo test").run()?;

    // commit, tag and push
    let message = format!("bump version to {version}");
    cmd!(sh, "git commit -am {message}").run()?;
    cmd!(sh, "git tag -am {version} {version}").run()?;
    cmd!(sh, "git push").run()?;
    cmd!(sh, "git push --tags").run()?;

    Ok(())
}
