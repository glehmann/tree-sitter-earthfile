const string_base_regex = /[^"'\s\\\$()+:@=]+/;

module.exports = grammar({
  name: "earthfile",

  externals: ($) => [$._indent, $._dedent],

  extras: ($) => [
    /[ \t]+/,
    "\n",
    "\rn",
    "\f",
    $.line_continuation,
    $.comment,
    $.line_continuation_comment,
  ],

  conflicts: ($) => [
    [$.earthfile_ref, $.image_name, $.unquoted_string],
    [$.earthfile_ref, $.target_ref_with_build_args],
    [$.earthfile_ref, $.unquoted_string],
    [$.image_name, $.unquoted_string],
    [$.shell_fragment],
    [$.string],
    [$.unquoted_string],
  ],

  rules: {
    // main rule, for the whole file
    // it must be the first rule in the list
    source_file: ($) =>
      seq(
        optional($.version_command),
        optional($._command_block),
        repeat($.target)
      ),

    // the root commands/elements
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
        optional(seq($._indent, optional($._command_block), $._dedent))
      ),

    version_command: ($) =>
      seq(
        "VERSION",
        field("option", repeat($.feature_flag)),
        field("version", $.version_major_minor),
        $._eol
      ),

    // the target commands
    arg_command: ($) =>
      seq(
        "ARG",
        repeat(field("option", choice($.required, $.global))),
        field("name", $.variable),
        optional(
          seq(
            "=",
            field(
              "default_value",
              optional(alias($.string_with_spaces, $.string))
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
            choice(
              $.auto_skip,
              $.allow_privileged,
              $.build_arg_deprecated,
              $.pass_args,
              $.platform
            )
          )
        ),
        choice($.target_ref, $.string),
        repeat($.build_arg),
        $._eol
      ),

    cache_command: ($) =>
      seq(
        "CACHE",
        repeat(field("option", choice($.chmod, $.id, $.persist, $.sharing))),
        field("mount_point", $.string),
        $._eol
      ),

    cmd_command: ($) =>
      seq("CMD", choice($.shell_fragment, $.string_array), $._eol),

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
            choice($.target_artifact, $.target_artifact_build_args, $.string)
          )
        ),
        field("dest", $.string),
        $._eol
      ),

    do_command: ($) =>
      seq(
        "DO",
        repeat(field("option", choice($.allow_privileged, $.pass_args))),
        $.function_ref,
        repeat($.build_arg)
      ),

    entrypoint_command: ($) =>
      seq("ENTRYPOINT", choice($.shell_fragment, $.string_array), $._eol),

    env_command: ($) =>
      seq(
        "ENV",
        field("key", $.variable),
        optional(token(prec(5, "="))),
        repeat(field("value", $.string)),
        $._eol
      ),

    expose_command: ($) => seq("EXPOSE", repeat($.port), $._eol),

    for_command: ($) =>
      seq(
        "FOR",
        repeat(
          field(
            "option",
            choice($.sep, $.privileged, $.ssh, $.no_cache, $.mount, $.secret)
          )
        ),
        field("name", $.variable),
        "IN",
        repeat(field("value", $.string)),
        $._eol,
        optional($._command_block),
        "END",
        $._eol
      ),

    from_command: ($) =>
      seq(
        "FROM",
        repeat(
          field("option", choice($.platform, $.allow_privileged, $.pass_args))
        ),
        choice($.image_spec, $.target_ref, $.string),
        repeat($.build_arg),
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
        field("context", $.string),
        $._eol
      ),

    function_command: ($) => seq(choice("FUNCTION", "COMMAND"), $._eol),

    git_clone_command: ($) =>
      seq(
        "GIT CLONE",
        repeat(field("option", choice($.branch, $.keep_ts))),
        field("url", $.string),
        field("dest", $.string),
        $._eol
      ),

    host_command: ($) =>
      seq("HOST", field("name", $.identifier), field("ip", $.string), $._eol),

    if_command: ($) =>
      seq(
        "IF",
        $._conditional_block,
        repeat(field("else_if", seq("ELSE IF", $.else_if_block))),
        optional(field("else", seq("ELSE", $.else_block))),
        "END",
        $._eol
      ),

    import_command: ($) =>
      seq(
        "IMPORT",
        repeat(field("option", choice($.allow_privileged))),
        $.earthfile_ref,
        optional(seq("AS", field("alias", $.identifier))),
        $._eol
      ),

    let_command: ($) =>
      seq(
        "LET",
        field("name", $.variable),
        token.immediate("="),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol
      ),

    label_command: ($) => seq("LABEL", repeat($.label), $._eol),

    locally_command: ($) => seq("LOCALLY", $._eol),

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
        field("command", choice($.string_array, $.shell_fragment)),
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
        field("src", $.string),
        optional(field("dest", $.string)),
        optional(seq("AS LOCAL", field("local_dest", $.string))),
        $._eol
      ),

    save_image_command: ($) =>
      seq(
        "SAVE IMAGE",
        choice(
          seq(
            repeat(field("option", choice($.cache_from, $.push))),
            repeat(field("image", choice($.string, $.image_spec)))
          ),
          field("option", $.cache_hint)
        ),
        $._eol
      ),

    set_command: ($) =>
      seq(
        "SET",
        field("name", $.variable),
        token.immediate("="),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol
      ),

    try_command: ($) =>
      seq(
        "TRY",
        $._eol,
        optional($._command_block),
        "FINALLY",
        $._eol,
        repeat(field("finally", $.save_artifact_command)),
        "END",
        $._eol
      ),

    user_command: ($) =>
      seq(
        "USER",
        field("user", choice($.identifier, $.number)),
        optional(
          seq(
            token.immediate(":"),
            field("group", choice($.identifier, $.number))
          )
        ),
        $._eol
      ),

    volume_command: ($) =>
      seq("VOLUME", choice($.string_array, repeat($.string)), $._eol),

    wait_command: ($) => seq("WAIT", optional($._command_block), "END", $._eol),

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

    workdir_command: ($) => seq("WORKDIR", $.string, $._eol),

    // code blocks
    _command_block: ($) =>
      repeat1(
        choice(
          $.arg_command,
          $.build_command,
          $.cache_command,
          $.cmd_command,
          $.copy_command,
          $.do_command,
          $.entrypoint_command,
          $.env_command,
          $.expose_command,
          $.for_command,
          $.from_command,
          $.from_dockerfile_command,
          $.function_command,
          $.git_clone_command,
          $.host_command,
          $.if_command,
          $.import_command,
          $.let_command,
          $.label_command,
          $.locally_command,
          $.project_command,
          $.run_command,
          $.save_artifact_command,
          $.save_image_command,
          $.set_command,
          $.try_command,
          $.user_command,
          $.volume_command,
          $.wait_command,
          $.with_docker_command,
          $.workdir_command
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
        field("condition", $.shell_fragment),
        $._eol,
        optional($._command_block)
      ),
    else_if_block: ($) => $._conditional_block,
    else_block: ($) => $._command_block,

    // command elements
    _immediate_identifier: ($) =>
      seq(
        choice(token.immediate(/[a-zA-Z_]+/), $.expansion),
        repeat(
          choice(
            token.immediate(/[a-zA-Z0-9_\-.]+/),
            alias($._immediate_expansion, $.expansion)
          )
        )
      ),
    earthfile_ref: ($) =>
      seq(
        choice($._string_base, $.expansion, "(", ")", ":", "@", "="),
        repeat(
          choice(
            $._immediate_string_base,
            alias($._immediate_escape_sequence, $.escape_sequence),
            token.immediate("("),
            token.immediate(")"),
            // token.immediate("+"),
            token.immediate(":"),
            token.immediate("@"),
            token.immediate("="),
            alias($._immediate_expansion, $.expansion)
          )
        )
      ),
    expr: ($) => /\$\(.+\)/,
    function_ref: ($) =>
      seq(
        optional($.earthfile_ref),
        token(prec(5, "+")),
        field("name", alias($._immediate_identifier, $.identifier))
      ),
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_\-.]*/,
    image_spec: ($) =>
      seq(
        field("name", $.image_name),
        optional(seq(token.immediate(":"), field("tag", $.image_tag))),
        optional(seq(token.immediate("@"), field("digest", $.image_digest)))
      ),
    image_name: ($) =>
      prec(
        // higher precedence than the string rules
        10,
        seq(
          choice($._string_base, $.expansion),
          repeat(
            choice(
              $._immediate_string_base,
              // alias($._immediate_escape_sequence, $.escape_sequence),
              // token.immediate("("),
              // token.immediate(")"),
              // token.immediate("+"),
              // token.immediate(":"),
              // token.immediate("@"),
              // token.immediate("="),
              alias($._immediate_expansion, $.expansion)
            )
          )
        )
      ),
    image_tag: ($) =>
      repeat1(
        choice(
          token.immediate(/[^@\s\$=]+/),
          alias($._immediate_expansion, $.expansion)
        )
      ),
    image_digest: ($) =>
      repeat1(
        choice(
          token.immediate(/[a-zA-Z0-9:]+/),
          alias($._immediate_expansion, $.expansion)
        )
      ),
    label: ($) =>
      seq(
        field("label", $.identifier),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    number: (_) => /\d+/,
    port: ($) =>
      seq(
        $.number,
        optional(seq(token.immediate("/"), field("protocol", $.identifier)))
      ),
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
          /[^)"\\\n#\s,=-][^)"\\\n]*/,
          /\\[^"\n,=-]/,
          ")",
          seq(
            '"',
            repeat(
              choice(
                token.immediate(prec(15, /[^"\\]+/)),
                alias($._immediate_escape_sequence, $.escape_sequence)
              )
            ),
            '"'
          )
        )
      ),
    string_array: ($) =>
      choice(
        seq(token(prec(5, "[")), "]"),
        seq(token(prec(5, "[")), $.double_quoted_string, "]"),
        seq(
          token(prec(5, "[")),
          repeat(seq($.double_quoted_string, ",")),
          $.double_quoted_string,
          "]"
        )
      ),
    target_ref: ($) =>
      seq(
        optional($.earthfile_ref),
        token(prec(5, "+")),
        field("name", alias($._immediate_identifier, $.identifier))
      ),
    target_ref_with_build_args: ($) =>
      seq("(", $.target_ref, repeat1($.build_arg), token(prec(5, ")"))),
    target_artifact: ($) =>
      seq($.target_ref, token.immediate("/"), $.unquoted_string),
    target_artifact_build_args: ($) =>
      seq(
        token(prec(5, "(")),
        choice(
          seq($.target_ref, token.immediate("/"), $.unquoted_string),
          $.string
        ),
        repeat($.build_arg),
        token(prec(5, ")"))
      ),
    variable: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    version_major_minor: ($) => /[0-9]+\.[0-9]+/,

    // options
    allow_privileged: ($) => token(prec(5, "--allow-privileged")),
    auto_skip: ($) => token(prec(5, "--auto-skip")),
    branch: ($) =>
      seq(
        token(prec(5, "--branch")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    build_arg: ($) =>
      seq(
        choice(
          token(prec(5, "--")),
          token(/-/) // use a regex here so it has the same precedence as the other tokens
        ),
        field("name", alias($._immediate_variable, $.variable)),
        choice(
          seq(token.immediate("="), optional(field("value", $.string))),
          field("value", $.string)
        )
      ),
    build_arg_deprecated: ($) =>
      seq(
        token(prec(5, "--build-arg")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    cache_from: ($) =>
      seq(
        token(prec(5, "--cache-from")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    cache_hint: ($) => token(prec(5, "--cache-hint")),
    chmod: ($) =>
      seq(
        token(prec(5, "--chmod")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    chown: ($) =>
      seq(
        token(prec(5, "--chown")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    compose: ($) =>
      seq(
        token(prec(5, "--compose")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    dir: ($) => token(prec(5, "--dir")),
    docker_build_arg: ($) =>
      seq(
        token(prec(5, "--build-arg")),
        choice(token.immediate(" "), token.immediate("=")),
        field("key", $.identifier),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    docker_file: ($) =>
      seq(
        token(prec(5, "-f")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    docker_target: ($) =>
      seq(
        token(prec(5, "--target")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.identifier)
      ),
    entrypoint: ($) => token(prec(5, "--entrypoint")),
    feature_flag: ($) => /--[a-zA-Z0-9\-]+/,
    force: ($) => token(prec(5, "--force")),
    global: ($) => token(prec(5, "--global")),
    id: ($) =>
      seq(
        token(prec(5, "--id")),
        choice(token.immediate(" "), token.immediate("=")),
        $.identifier
      ),
    if_exists: ($) => token(prec(5, "--if-exists")),
    keep_own: ($) => token(prec(5, "--keep-own")),
    keep_ts: ($) => token(prec(5, "--keep-ts")),
    load: ($) =>
      seq(
        token(prec(5, "--load")),
        choice(token.immediate(" "), token.immediate("=")),
        optional(seq(field("image", $.image_spec), token.immediate("="))),
        field(
          "target",
          choice($.target_ref, $.target_ref_with_build_args, $.string)
        )
      ),
    mount: ($) =>
      seq(
        token(prec(5, "--mount")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    network_none: ($) => token(prec(5, "--network=none")),
    no_cache: ($) => token(prec(5, "--no-cache")),
    pass_args: ($) => token(prec(5, "--pass-args")),
    persist: ($) => token(prec(5, "--persist")),
    platform: ($) =>
      seq(
        token(prec(5, "--platform")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    privileged: ($) => token(prec(5, "--privileged")),
    pull: ($) =>
      seq(
        token(prec(5, "--pull")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.image_spec)
      ),
    push: ($) => token(prec(5, "--push")),
    required: ($) => token(prec(5, "--required")),
    secret: ($) =>
      seq(
        token(prec(5, "--secret")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    sep: ($) =>
      seq(
        token(prec(5, "--sep")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    service: ($) =>
      seq(
        token(prec(5, "--service")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string)
      ),
    sharing: ($) =>
      seq(
        token(prec(5, "--sharing")),
        choice(token.immediate(" "), token.immediate("=")),
        $.identifier
      ),
    ssh: ($) => token(prec(5, "--ssh")),
    symlink_no_follow: ($) => token(prec(5, "--symlink-no-follow")),

    // string stuff
    _string_base: ($) => string_base_regex,
    _immediate_string_base: ($) => token.immediate(string_base_regex),
    double_quoted_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(prec(15, /[^"\\\$]+/)),
            alias($._immediate_escape_sequence, $.escape_sequence),
            alias($._immediate_expansion, $.expansion)
          )
        ),
        '"'
      ),
    _immediate_double_quoted_string: ($) =>
      seq(
        token.immediate('"'),
        repeat(
          choice(
            token.immediate(prec(15, /[^"\\\$]+/)),
            alias($._immediate_escape_sequence, $.escape_sequence),
            alias($._immediate_expansion, $.expansion)
          )
        ),
        token.immediate('"')
      ),
    single_quoted_string: ($) =>
      seq(
        token.immediate("'"),
        repeat(
          choice(
            token.immediate(/[^'\n\\]+/),
            alias($._immediate_escape_sequence, $.escape_sequence)
          )
        ),
        token.immediate("'")
      ),
    _immediate_single_quoted_string: ($) =>
      seq(
        "'",
        repeat(
          choice(
            token.immediate(/[^'\n\\]+/),
            alias($._immediate_escape_sequence, $.escape_sequence)
          )
        ),
        "'"
      ),
    unquoted_string: ($) =>
      seq(
        choice($._string_base, $.expansion, "(", ")", "+", ":", "@", "="),
        optional($._immediate_unquoted_string)
      ),
    _immediate_unquoted_string: ($) =>
      repeat1(
        choice(
          $._immediate_string_base,
          alias($._immediate_escape_sequence, $.escape_sequence),
          token.immediate("("),
          token.immediate(")"),
          token.immediate("+"),
          token.immediate(":"),
          token.immediate("@"),
          token.immediate("="),
          alias($._immediate_expansion, $.expansion)
        )
      ),
    unquoted_string_with_spaces: ($) =>
      seq(
        choice($._string_base, $.expansion, "(", ")", "+", ":", "@", "="),
        repeat(
          choice(
            $._immediate_string_base,
            alias($._immediate_escape_sequence, $.escape_sequence),
            token.immediate("("),
            token.immediate(")"),
            token.immediate("+"),
            token.immediate(":"),
            token.immediate("@"),
            token.immediate("="),
            token.immediate(/[ \t]+/),
            alias($._immediate_expansion, $.expansion)
          )
        )
      ),
    string_with_spaces: ($) =>
      seq(
        choice(
          alias($.unquoted_string_with_spaces, $.unquoted_string),
          $.double_quoted_string,
          $.single_quoted_string
        ),
        repeat(
          choice(
            alias($.unquoted_string_with_spaces, $.unquoted_string),
            $.double_quoted_string,
            $.single_quoted_string
          )
        )
      ),
    string: ($) =>
      seq(
        choice(
          $.unquoted_string,
          $.double_quoted_string,
          $.single_quoted_string
        ),
        repeat(
          choice(
            alias($._immediate_unquoted_string, $.unquoted_string),
            alias($._immediate_double_quoted_string, $.double_quoted_string),
            alias($._immediate_double_quoted_string, $.single_quoted_string)
          )
        )
      ),

    // expansion/variable stuff
    // expansion: ($) => seq(token("$"), $.variable),
    expansion: ($) =>
      seq(
        "$",
        choice(
          alias($._immediate_variable, $.variable),
          seq(
            token.immediate("{"),
            alias($._immediate_variable, $.variable),
            "}"
          ),
          seq(token.immediate("("), $.shell_fragment, ")")
        )
      ),
    _immediate_expansion: ($) =>
      seq(
        token.immediate("$"),
        choice(
          alias($._immediate_variable, $.variable),
          seq(
            token.immediate("{"),
            alias($._immediate_variable, $.variable),
            token.immediate("}")
          ),
          seq(token.immediate("("), $.shell_fragment, token.immediate(")"))
        )
      ),
    _immediate_variable: ($) => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),

    shell_expr: ($) => /[a-zA-Z0-9_ ]+/,

    // extra tokens, eol, …
    _immediate_escape_sequence: (_) => /\\./,
    escape_sequence: (_) => /\\./,
    line_continuation: (_) => token(prec(10, "\\\n")),
    comment: (_) => token(prec(10, /#[^\n]*(\n|\r\n|\f)/)),
    line_continuation_comment: (_) => token(prec(10, /\\(\s*#.*\n)+/)),
    _eol: ($) => choice("\n", "\rn", "\f", $.comment),
  },
});
