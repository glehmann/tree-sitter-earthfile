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
        optional(seq($._indent, optional($._target_block), $._dedent))
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

    for_command: ($) =>
      seq(
        "FOR",
        repeat(
          field(
            "option",
            choice($.sep, $.privileged, $.ssh, $.no_cache, $.mount, $.secret)
          )
        ),
        field("name", $.identifier),
        "IN",
        repeat(field("value", choice($._string, $.expr))),
        $._eol,
        optional($._target_block),
        "END",
        $._eol
      ),

    from_dockerfile_command: ($) =>
      seq(
        "FROM DOCKERFILE",
        repeat(
          field(
            "option",
            choice(
              $.docker_build_arg,
              $.docker_file,
              $.docker_target,
              $.platform
            )
          )
        ),
        field("context", $.path),
        $._eol
      ),

    git_clone_command: ($) =>
      seq(
        "GIT",
        "CLONE",
        repeat(field("option", choice($.branch, $.keep_ts))),
        field("url", $.path),
        field("dest", $.path),
        $._eol
      ),

    if_command: ($) =>
      seq(
        "IF",
        $._conditional_block,
        repeat(field("else_if", seq("ELSE IF", $.else_if_block))),
        optional(field("else", seq("ELSE", $.else_block))),
        "END",
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
        "SAVE ARTIFACT",
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
        optional(seq("AS LOCAL", field("local_dest", $.path)))
      ),

    save_image_command: ($) =>
      seq(
        "SAVE IMAGE",
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

    wait_command: ($) => seq("WAIT", optional($._target_block), "END", $._eol),

    with_docker_command: ($) =>
      seq(
        "WITH DOCKER",
        repeat(
          field(
            "option",
            choice(
              $.allow_privileged,
              $.compose,
              $.load,
              $.platform,
              $.pull,
              $.service
            )
          )
        ),
        $.run_command,
        "END",
        $._eol
      ),

    // code blocks
    _target_block: ($) =>
      repeat1(
        choice(
          $.arg_command,
          $.copy_command,
          $.for_command,
          $.from_command,
          $.from_dockerfile_command,
          $.git_clone_command,
          $.if_command,
          $.let_command,
          $.run_command,
          $.save_artifact_command,
          $.save_image_command,
          $.set_command,
          $.wait_command,
          $.with_docker_command
        )
      ),
    _conditional_block: ($) =>
      seq(
        repeat(
          field(
            "option",
            choice($.ssh, $.privileged, $.no_cache, $.mount, $.secret)
          )
        ),
        field("condition", $.identifier),
        $._eol,
        optional($._target_block)
      ),
    else_if_block: ($) => $._conditional_block,
    else_block: ($) => $._target_block,

    // command elements
    expr: ($) => /\$\(.+\)/,
    identifier: ($) => /[a-zA-Z_]\w*/,
    image_spec: ($) =>
      seq(
        field("name", $.image_name),
        field("tag", optional(seq(token.immediate(":"), $.image_tag))),
        field("digest", optional(seq(token.immediate("@"), $.image_digest)))
      ),
    image_name: ($) => /[a-zA-Z0-9\-./]+/,
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
    compose: ($) =>
      seq(
        token(prec(5, "--compose")),
        token.immediate(/[ =]/),
        field("value", $.path)
      ),
    dir: ($) => token(prec(5, "--dir")),
    docker_build_arg: ($) =>
      seq(
        token(prec(5, "--build-arg")),
        token.immediate(/[ =]/),
        field("key", $.identifier),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    docker_file: ($) =>
      seq(
        token(prec(5, "-f")),
        token.immediate(/[ =]/),
        field("value", $.path)
      ),
    docker_target: ($) =>
      seq(
        token(prec(5, "--target")),
        token.immediate(/[ =]/),
        field("value", $.identifier)
      ),
    entrypoint: ($) => token(prec(5, "--entrypoint")),
    feature_flag: ($) => /--[a-zA-Z0-9\-]+/,
    force: ($) => token(prec(5, "--force")),
    global: ($) => token(prec(5, "--global")),
    if_exists: ($) => token(prec(5, "--if-exists")),
    keep_own: ($) => token(prec(5, "--keep-own")),
    keep_ts: ($) => token(prec(5, "--keep-ts")),
    load: ($) =>
      seq(
        token(prec(5, "--load")),
        token.immediate(/[ =]/),
        field("image", $.image_spec),
        token.immediate("="),
        field(
          "target",
          choice(
            $.target_ref,
            seq("(", $.target_ref, repeat1($.build_arg), ")")
          )
        )
      ),
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
    pull: ($) =>
      seq(
        token(prec(5, "--pull")),
        token.immediate(/[ =]/),
        field("value", $.image_spec)
      ),
    push: ($) => token(prec(5, "--push")),
    required: ($) => token(prec(5, "--required")),
    secret: ($) =>
      seq(
        token(prec(5, "--secret")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    sep: ($) =>
      seq(
        token(prec(5, "--sep")),
        token.immediate(/[ =]/),
        field("value", $._string)
      ),
    service: ($) =>
      seq(
        token(prec(5, "--service")),
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
    unquoted_string: ($) => /[^\s\n\"'\\\$)]+/,

    // extra tokens, eol, …
    line_continuation: (_) => token(prec(10, "\\\n")),
    comment: (_) => token(prec(10, /#[^\n]*(\n|\r\n|\f)/)),
    line_continuation_comment: (_) => token(prec(10, /\\\s*#.*(\n|\r\n|\f)/)),
    _eol: ($) => choice("\n", "\rn", "\f", $.comment),
  },
});
