module.exports = grammar({
  name: "earthfile",

  externals: ($) => [$._indent, $._dedent],

  extras: ($) => [
    /\s+/,
    $.line_continuation,
    $.comment,
    $.line_continuation_comment,
  ],

  rules: {
    // main rule, for the whole file
    // it must be the first rule in the list
    source_file: ($) =>
      repeat(
        choice(
          $.arg_command,
          $.from_command,
          $.project_command,
          $.target,
          $.version_command
        )
      ),

    // the root commands/elements
    arg_command: ($) =>
      seq(
        "ARG",
        repeat(field("option", choice($.required, $.global))),
        field("name", $.identifier),
        optional(
          seq(
            token.immediate("="),
            choice(
              field("default_value", $._string),
              field("default_value_expr", $.expr)
            )
          )
        ),
        $._eol
      ),

    build_command: ($) =>
      seq(
        "BUILD",
        repeat(
          field(
            "option",
            choice($.auto_skip, $.allow_privileged, $.pass_args, $.platform)
          )
        ),
        $.target_ref,
        repeat($.build_arg),
        $._eol
      ),

    from_command: ($) =>
      seq(
        "FROM",
        choice(
          $.image_spec,
          seq(
            repeat(
              field(
                "option",
                choice($.platform, $.allow_privileged, $.pass_args)
              )
            ),
            $.target_ref,
            repeat($.build_arg)
          ),
          $._eol
        )
      ),

    project_command: ($) =>
      seq(
        "PROJECT",
        field("org_name", $.identifier),
        token.immediate("/"),
        field("project_name", $.identifier),
        $._eol
      ),

    target: ($) =>
      seq(
        field("name", $.identifier),
        ":",
        $._eol,
        optional(
          seq(
            $._indent,
            repeat(
              choice(
                $.arg_command,
                $.copy_command,
                $.from_command,
                $.git_clone_command,
                $.let_command,
                $.run_command,
                $.save_artifact_command,
                $.save_image_command,
                $.set_command
              )
            ),
            $._dedent
          )
        )
      ),

    version_command: ($) =>
      seq(
        "VERSION",
        field("option", repeat($.feature_flag)),
        field("version", $.version_major_minor),
        $._eol
      ),

    // the target commands
    copy_command: ($) =>
      seq(
        "COPY",
        repeat(
          field(
            "option",
            choice(
              $.allow_privileged,
              $.chmod,
              $.chown,
              $.dir,
              $.if_exists,
              $.keep_own,
              $.keep_ts,
              $.pass_args,
              $.platform,
              $.symlink_no_follow
            )
          )
        ),
        repeat1(
          field(
            "src",
            choice($.target_artifact, $.target_artifact_build_args, $.path)
          )
        ),
        field("dest", $.path),
        $._eol
      ),

    git_clone_command: ($) =>
      seq(
        "GIT",
        "CLONE",
        repeat(
          field(
            "option",
            choice(
              $.branch,
              $.keep_ts
            )
          )
        ),
        field("url", $.path),
        field("dest", $.path),
        $._eol
      ),

      let_command: ($) =>
      seq(
        "LET",
        field("name", $.identifier),
        token.immediate("="),
        field("value", $._string),
        $._eol
      ),

    run_command: ($) =>
      seq(
        "RUN",
        repeat(
          field(
            "option",
            choice(
              $.entrypoint,
              $.mount,
              $.network_none,
              $.no_cache,
              $.privileged,
              $.push,
              $.secret,
              $.ssh
            )
          )
        ),
        optional(" -- "),
        field("command", $.shell_fragment),
        $._eol
      ),

    save_artifact_command: ($) =>
      seq(
        "SAVE",
        "ARTIFACT",
        repeat(
          field(
            "option",
            choice(
              $.if_exists,
              $.force,
              $.keep_own,
              $.keep_ts,
              $.symlink_no_follow
            )
          )
        ),
        field("src", $.path),
        optional(field("dest", $.path)),
        optional(seq("AS", "LOCAL", field("local_dest", $.path)))
      ),

    save_image_command: ($) =>
      seq(
        "SAVE",
        "IMAGE",
        choice(
          seq(
            repeat(field("option", choice($.cache_from, $.push))),
            repeat($.image_spec)
          ),
          field("option", $.cache_hint)
        )
      ),

    set_command: ($) =>
      seq(
        "SET",
        field("name", $.identifier),
        token.immediate("="),
        field("value", $._string),
        $._eol
      ),

    // command elements
    expr: ($) => /\$\(.+\)/,
    identifier: ($) => /[a-zA-Z_]\w*/,
    image_spec: ($) =>
      seq(
        field("name", $.image_name),
        field("tag", optional(seq(token.immediate(":"), $.image_tag))),
        field("digest", optional(seq(token.immediate("@"), $.image_digest)))
      ),
    image_name: ($) => /[^@:\s\$-]+/,
    image_tag: ($) => token.immediate(/[^@\s\$]+/),
    image_digest: ($) => token.immediate(/[a-zA-Z0-9:]+/),
    immediate_identifier: ($) => token.immediate(/[a-zA-Z_]\w*/),
    path: ($) => /[^\s()\\]+/,
    shell_fragment: ($) =>
      repeat1(
        choice(
          // A shell fragment is broken into the same tokens as other
          // constructs because the lexer prefers the longer tokens
          // when it has a choice. The example below shows the tokenization
          // of the --mount parameter.
          //
          //   RUN --mount=foo=bar,baz=42 ls --all
          //       ^^     ^   ^   ^   ^
          //         ^^^^^ ^^^ ^^^ ^^^ ^^
          //       |--------param-------|
          //                              |--shell_command--|
          //
          /[,=-]/,
          /[^\\\[\n#\s,=-][^\\\n]*/,
          /\\[^\n,=-]/
        )
      ),
    target_ref: ($) =>
      seq(token(prec(5, "+")), field("name", $.immediate_identifier)),
    target_artifact: ($) => seq($.target_ref, token.immediate("/"), $.path),
    target_artifact_build_args: ($) =>
      seq(
        "(",
        $.target_ref,
        token.immediate("/"),
        $.path,
        repeat($.build_arg),
        ")"
      ),
    version_major_minor: ($) => /[0-9]+\.[0-9]+/,

    // options
    allow_privileged: ($) => token(prec(5, "--allow-privileged")),
    auto_skip: ($) => token(prec(5, "--auto-skip")),
    branch: ($) =>
      seq(
        token(prec(5, "--branch")),
        token.immediate(/[ =]/),
        field("value", $.path)
      ),
    build_arg: ($) =>
      seq(
        token(prec(5, "--")),
        field("name", $.immediate_identifier),
        optional(seq(token.immediate(/[ =]/), field("value", $._string)))
      ),
    cache_from: ($) =>
      seq(
        token(prec(5, "--cache-from")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    cache_hint: ($) => token(prec(5, "--cache-hint")),
    chmod: ($) =>
      seq(
        token(prec(5, "--chmod")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    chown: ($) =>
      seq(
        token(prec(5, "--chown")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    dir: ($) => token(prec(5, "--dir")),
    entrypoint: ($) => token(prec(5, "--entrypoint")),
    feature_flag: ($) => /--[a-zA-Z0-9\-]+/,
    force: ($) => token(prec(5, "--force")),
    global: ($) => token(prec(5, "--global")),
    if_exists: ($) => token(prec(5, "--if-exists")),
    keep_own: ($) => token(prec(5, "--keep-own")),
    keep_ts: ($) => token(prec(5, "--keep-ts")),
    mount: ($) =>
      seq(
        token(prec(5, "--mount")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    network_none: ($) => token(prec(5, "--network=none")),
    no_cache: ($) => token(prec(5, "--no-cache")),
    pass_args: ($) => token(prec(5, "--pass-args")),
    platform: ($) =>
      seq(
        token(prec(5, "--platform")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    privileged: ($) => token(prec(5, "--privileged")),
    push: ($) => token(prec(5, "--push")),
    required: ($) => token(prec(5, "--required")),
    secret: ($) =>
      seq(
        token(prec(5, "--secret")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    ssh: ($) => token(prec(5, "--ssh")),
    symlink_no_follow: ($) => token(prec(5, "--symlink-no-follow")),

    // string stuff
    _string: ($) =>
      choice($.double_quoted_string, $.single_quoted_string, $.unquoted_string),
    double_quoted_string: ($) =>
      seq('"', token.immediate(/[^"\n\\\$()]+/), '"'),
    single_quoted_string: ($) => seq("'", token.immediate(/[^'\n\\]+/), "'"),
    unquoted_string: ($) => /[^\s\n\"'\\\$]+/,

    // extra tokens, eol, …
    line_continuation: (_) => token(prec(10, "\\\n")),
    comment: (_) => token(prec(10, /#[^\n]*(\n|\r\n|\f)/)),
    line_continuation_comment: (_) => token(prec(10, /\\\s*#.*(\n|\r\n|\f)/)),
    _eol: ($) => choice("\n", "\rn", "\f", $.comment),
  },
});
