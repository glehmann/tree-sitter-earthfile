const _string_base_tokens = "()[]{}$/,:@=+.-";
function extra_tokens(except) {
  let res = [];
  for (const c of _string_base_tokens) {
    if (!except.includes(c)) {
      res.push(c);
    }
  }
  return res;
}

function extra_immediate_tokens(except) {
  return extra_tokens(except).map((t) => token.immediate(t));
}

module.exports = grammar({
  name: "earthfile",

  externals: ($) => [$._indent, $._dedent],

  extras: ($) => [/[ \t]+/, "\n", "\r\n", "\f", $.line_continuation, $.comment, $.line_continuation_comment],

  conflicts: ($) => [
    [$._immediate_identifier, $._immediate_string_base],
    [$._string_base],
    [$.build_arg],
    [$.earthfile_ref, $.image_name, $.unquoted_string],
    [$.earthfile_ref, $.unquoted_string],
    [$.image_name, $.unquoted_string],
    [$.shell_fragment],
    [$.string],
    [$.target_ref, $.unquoted_string],
    [$.unquoted_string],
    [$.unquoted_string_with_spaces],
    [$.variable, $._immediate_string_base],
    [$.variable, $._string_base],
  ],

  rules: {
    // main rule, for the whole file
    // it must be the first rule in the list
    source_file: ($) => seq(optional($.version_command), optional(field("base_target", $.block)), repeat($.target)),

    // the root commands/elements
    project_command: ($) =>
      seq(
        "PROJECT",
        field("org_name", $.identifier),
        token.immediate("/"),
        field("project_name", $.identifier),
        $._eol,
      ),

    target: ($) =>
      seq(field("name", $.identifier), ":", $._eol, optional(seq($._indent, optional($.block), $._dedent))),

    version_command: ($) =>
      seq(
        "VERSION",
        field("options", optional(alias($.version_options, $.options))),
        field("version", $.version_major_minor),
        $._eol,
      ),
    version_options: ($) => repeat1($.feature_flag),

    // the target commands
    arg_command: ($) =>
      seq(
        "ARG",
        field("options", optional(alias($.arg_options, $.options))),
        field("name", $.variable),
        optional(seq("=", field("default_value", optional(alias($.string_with_spaces, $.string))))),
        $._eol,
      ),
    arg_options: ($) => repeat1(choice($.required, $.global)),

    build_command: ($) =>
      seq(
        "BUILD",
        field("options", optional(alias($.build_options, $.options))),
        choice($.target_ref, $.string),
        optional($.build_args),
        $._eol,
      ),
    build_options: ($) =>
      repeat1(choice($.auto_skip, $.allow_privileged, $.build_arg_deprecated, $.pass_args, $.platform)),

    cache_command: ($) =>
      seq(
        "CACHE",
        field("options", optional(alias($.cache_options, $.options))),
        field("mount_point", $.string),
        $._eol,
      ),
    cache_options: ($) => repeat1(choice($.chmod, $.id, $.persist, $.sharing)),

    cmd_command: ($) => seq("CMD", choice($.shell_fragment, $.string_array), $._eol),

    copy_command: ($) =>
      seq(
        "COPY", // FIXME: foo!
        field("options", optional(alias($.copy_options, $.options))),
        repeat1(field("src", choice($.target_artifact, $.target_artifact_build_args, $.string))),
        field("dest", $.string),
        $._eol,
      ),
    copy_options: ($) =>
      repeat1(
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
          $.symlink_no_follow,
        ),
      ),

    do_command: ($) =>
      seq(
        "DO",
        field("options", optional(alias($.do_options, $.options))),
        choice(alias($.target_ref, $.function_ref), $.string),
        optional($.build_args),
      ),
    do_options: ($) => repeat1(choice($.allow_privileged, $.pass_args)),

    entrypoint_command: ($) => seq("ENTRYPOINT", choice($.shell_fragment, $.string_array), $._eol),

    env_command: ($) =>
      seq(
        "ENV",
        field("key", $.variable),
        optional(token(prec(5, "="))),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol,
      ),

    expose_command: ($) => seq("EXPOSE", repeat($.port), $._eol),

    for_command: ($) =>
      seq(
        "FOR",
        field("options", optional(alias($.for_options, $.options))),
        field("name", $.variable),
        "IN",
        field("values", $.strings),
        $._eol,
        optional($.block),
        "END",
        $._eol,
      ),
    for_options: ($) => repeat1(choice($.sep, $.privileged, $.ssh, $.no_cache, $.mount, $.secret)),

    from_command: ($) =>
      seq(
        "FROM",
        field("options", optional(alias($.from_options, $.options))),
        choice($.target_ref, $.image_spec, $.string),
        optional($.build_args),
        $._eol,
      ),
    from_options: ($) => repeat1(choice($.platform, $.allow_privileged, $.pass_args)),

    from_dockerfile_command: ($) =>
      seq(
        "FROM DOCKERFILE",
        field("options", optional(alias($.from_dockerfile_options, $.options))),
        field("context", choice($.target_artifact, $.target_artifact_build_args, $.string)),
        $._eol,
      ),
    from_dockerfile_options: ($) => repeat1(choice($.docker_build_arg, $.docker_file, $.docker_target, $.platform)),

    function_command: ($) => seq(choice("FUNCTION", "COMMAND"), $._eol),

    git_clone_command: ($) =>
      seq(
        "GIT CLONE",
        field("options", optional(alias($.git_clone_options, $.options))),
        field("url", $.string),
        field("dest", $.string),
        $._eol,
      ),
    git_clone_options: ($) => repeat1(choice($.branch, $.keep_ts)),

    host_command: ($) => seq("HOST", field("name", $.identifier), field("ip", $.string), $._eol),

    if_command: ($) =>
      seq(
        "IF",
        $._conditional_block,
        repeat(field("alternative", $.elif_block)),
        optional(field("alternative", $.else_block)),
        "END",
        $._eol,
      ),

    import_command: ($) =>
      seq(
        "IMPORT",
        field("options", optional(alias($.import_options, $.options))),
        $.earthfile_ref,
        optional(seq("AS", field("alias", $.identifier))),
        $._eol,
      ),
    import_options: ($) => repeat1(choice($.allow_privileged)),

    let_command: ($) =>
      seq(
        "LET",
        field("name", $.variable),
        token.immediate("="),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol,
      ),

    label_command: ($) => seq("LABEL", repeat($.label), $._eol),

    locally_command: ($) => seq("LOCALLY", $._eol),

    run_command: ($) =>
      seq(
        "RUN",
        field("options", optional(alias($.run_options, $.options))),
        choice(" -- ", / +/),
        field("command", choice($.string_array, $.shell_fragment)),
        $._eol,
      ),
    run_options: ($) =>
      repeat1(
        choice(
          $.entrypoint,
          $.interactive,
          $.mount,
          $.network_none,
          $.no_cache,
          $.privileged,
          $.push,
          $.raw_output,
          $.secret,
          $.ssh,
        ),
      ),

    save_artifact_command: ($) =>
      seq(
        "SAVE ARTIFACT",
        field("options", optional(alias($.save_artifact_options, $.options))),
        field("src", $.string),
        optional(field("dest", $.string)),
        optional(seq("AS LOCAL", field("local_dest", $.string))),
        $._eol,
      ),
    save_artifact_options: ($) => repeat1(choice($.if_exists, $.force, $.keep_own, $.keep_ts, $.symlink_no_follow)),

    save_image_command: ($) =>
      seq(
        "SAVE IMAGE",
        field("options", optional(alias($.save_image_options, $.options))),
        optional(field("images", $.images)),
        $._eol,
      ),
    save_image_options: ($) => repeat1(choice($.cache_from, $.cache_hint, $.push)),

    set_command: ($) =>
      seq(
        "SET",
        field("name", $.variable),
        token.immediate("="),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol,
      ),

    try_command: ($) =>
      seq(
        "TRY",
        $._eol,
        optional(field("body", $.block)),
        "FINALLY",
        $._eol,
        field("finally", optional(alias($.try_command_finally_block, $.block))),
        "END",
        $._eol,
      ),
    try_command_finally_block: ($) => repeat1($.save_artifact_command),

    user_command: ($) =>
      seq(
        "USER",
        field("user", choice($.identifier, $.number)),
        optional(seq(token.immediate(":"), field("group", choice($.identifier, $.number)))),
        $._eol,
      ),

    volume_command: ($) => seq("VOLUME", choice($.string_array, repeat($.string)), $._eol),

    wait_command: ($) => seq("WAIT", $._eol, optional($.block), "END", $._eol),

    with_docker_command: ($) =>
      seq(
        "WITH DOCKER",
        field("options", optional(alias($.with_docker_options, $.options))),
        $._eol,
        $.run_command,
        "END",
        $._eol,
      ),
    with_docker_options: ($) => repeat1(choice($.allow_privileged, $.compose, $.load, $.platform, $.pull, $.service)),

    workdir_command: ($) => seq("WORKDIR", $.string, $._eol),

    // code blocks
    block: ($) =>
      repeat1(
        choice(
          /\s+/,
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
          $.workdir_command,
        ),
      ),
    _conditional_block: ($) =>
      seq(
        field("options", optional(alias($._conditional_block_options, $.options))),
        field("condition", $.shell_fragment),
        $._eol,
        field("body", optional($.block)),
      ),
    _conditional_block_options: ($) => repeat1(choice($.ssh, $.privileged, $.no_cache, $.mount, $.secret)),
    elif_block: ($) => seq("ELSE IF", $._conditional_block),
    else_block: ($) => seq("ELSE", field("body", $.block)),

    // command elements
    _immediate_identifier: ($) =>
      seq(
        $._immediate_string_base_alpha,
        repeat(
          choice(
            $._immediate_string_base_alpha,
            $._immediate_string_base_num,
            token.immediate("."),
            token.immediate("-"),
          ),
        ),
      ),
    earthfile_ref: ($) =>
      seq(
        choice($._string_base, ...extra_tokens("+$=")),
        repeat(
          prec.left(
            choice(
              $._immediate_string_base,
              ...extra_immediate_tokens("+$="),
              alias($._immediate_escape_sequence, $.escape_sequence),
            ),
          ),
        ),
      ),
    function_ref: (_) => "dummy node to be used as an alias for target_ref",
    identifier: ($) =>
      seq(
        $._string_base_alpha,
        repeat(
          choice(
            $._immediate_string_base_alpha,
            $._immediate_string_base_num,
            token.immediate("."),
            token.immediate("-"),
          ),
        ),
      ),
    image_spec: ($) =>
      seq(
        field("name", $.image_name),
        optional(seq(token.immediate(":"), field("tag", $.image_tag))),
        optional(seq(token.immediate("@"), field("digest", $.image_digest))),
      ),
    image_name: ($) =>
      seq(
        $._string_base,
        repeat(
          prec.left(choice($._immediate_string_base, token.immediate("/"), token.immediate("-"), token.immediate("."))),
        ),
      ),
    image_tag: ($) =>
      seq(
        choice($._immediate_string_base_alpha, $._immediate_string_base_num),
        repeat(
          choice(
            $._immediate_string_base_alpha,
            $._immediate_string_base_num,
            token.immediate("."),
            token.immediate("-"),
          ),
        ),
      ),
    image_digest: ($) =>
      seq(
        choice($._immediate_string_base_alpha, $._immediate_string_base_num),
        repeat(choice($._immediate_string_base_alpha, $._immediate_string_base_num, token.immediate(":"))),
      ),
    images: ($) => repeat1(choice($.image_spec, $.string)),
    label: ($) =>
      seq(field("label", $.identifier), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    number: (_) => /\d+/,
    options: (_) => "dummy node to use as an alias in the command options",
    port: ($) => seq($.number, optional(seq(token.immediate("/"), field("protocol", $.identifier)))),
    shell_fragment: ($) =>
      repeat1(
        choice(
          $._string_base,
          $.comment,
          ...extra_tokens("\"'"),
          alias($.escape_sequence, $._immediate_escape_sequence),
          seq('"', repeat(choice(token.immediate(prec(15, /[^"\\]+/)), $._immediate_escape_sequence)), '"'),
          seq("'", repeat(choice(token.immediate(prec(15, /[^'\\]+/)), $._immediate_escape_sequence)), "'"),
        ),
      ),
    string_array: ($) =>
      choice(
        seq(token(prec(5, "[")), "]"),
        seq(token(prec(5, "[")), repeat(seq($.double_quoted_string, ",")), $.double_quoted_string, "]"),
      ),
    target_ref: ($) =>
      seq(
        optional(field("earthfile", $.earthfile_ref)),
        "+",
        field("name", alias($._immediate_identifier, $.identifier)),
      ),
    target_ref_with_build_args: ($) => seq(token(prec(5, "(")), $.target_ref, $.build_args, token(prec(5, ")"))),
    // TODO: use fields
    target_artifact: ($) =>
      seq($.target_ref, token.immediate("/"), alias($._immediate_unquoted_string, $.unquoted_string)),
    // TODO: use fields
    target_artifact_build_args: ($) =>
      seq(
        token(prec(5, "(")),
        choice(
          seq($.target_ref, token.immediate("/"), alias($._immediate_unquoted_string, $.unquoted_string)),
          $.string,
        ),
        optional($.build_args),
        token(prec(5, ")")),
      ),
    variable: ($) =>
      seq($._string_base_alpha, repeat(choice($._immediate_string_base_alpha, $._immediate_string_base_num))),
    version_major_minor: (_) => /[0-9]+\.[0-9]+/,

    // options
    allow_privileged: (_) => token(prec(5, "--allow-privileged")),
    auto_skip: (_) => token(prec(5, "--auto-skip")),
    branch: ($) =>
      seq(token(prec(5, "--branch")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    build_arg: ($) =>
      seq(
        choice(token(prec(5, "--")), "-"),
        field("name", alias($._immediate_variable, $.variable)),
        choice(seq(token.immediate("="), optional(field("value", $.string))), field("value", $.string)),
      ),
    build_args: ($) => repeat1($.build_arg),
    build_arg_deprecated: ($) =>
      seq(token(prec(5, "--build-arg")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    cache_from: ($) =>
      seq(token(prec(5, "--cache-from")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    cache_hint: (_) => token(prec(5, "--cache-hint")),
    chmod: ($) =>
      seq(token(prec(5, "--chmod")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    chown: ($) =>
      seq(token(prec(5, "--chown")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    compose: ($) =>
      seq(token(prec(5, "--compose")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    dir: (_) => token(prec(5, "--dir")),
    docker_build_arg: ($) =>
      seq(
        token(prec(5, "--build-arg")),
        choice(token.immediate(" "), token.immediate("=")),
        field("key", $.identifier),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", $.string),
      ),
    docker_file: ($) =>
      seq(
        token(prec(5, "-f")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", choice($.target_artifact, $.target_artifact_build_args, $.string)),
      ),
    docker_target: ($) =>
      seq(token(prec(5, "--target")), choice(token.immediate(" "), token.immediate("=")), field("value", $.identifier)),
    entrypoint: (_) => token(prec(5, "--entrypoint")),
    feature_flag: (_) => /--[a-zA-Z0-9\-]+/,
    force: (_) => token(prec(5, "--force")),
    global: (_) => token(prec(5, "--global")),
    id: ($) => seq(token(prec(5, "--id")), choice(token.immediate(" "), token.immediate("=")), $.identifier),
    if_exists: (_) => token(prec(5, "--if-exists")),
    interactive: (_) => choice(token(prec(5, "--interactive")), token(prec(5, "--interactive-keep"))),
    keep_own: (_) => token(prec(5, "--keep-own")),
    keep_ts: (_) => token(prec(5, "--keep-ts")),
    load: ($) =>
      seq(
        token(prec(5, "--load")),
        choice(token.immediate(" "), token.immediate("=")),
        optional(seq(field("image", choice($.image_spec, $.string)), token.immediate("="))),
        field("target", choice($.target_ref, $.target_ref_with_build_args, $.string)),
      ),
    mount: ($) =>
      seq(token(prec(5, "--mount")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    network_none: (_) => token(prec(5, "--network=none")),
    no_cache: (_) => token(prec(5, "--no-cache")),
    pass_args: (_) => token(prec(5, "--pass-args")),
    persist: (_) => token(prec(5, "--persist")),
    platform: ($) =>
      seq(token(prec(5, "--platform")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    privileged: (_) => token(prec(5, "--privileged")),
    pull: ($) =>
      seq(
        token(prec(5, "--pull")),
        choice(token.immediate(" "), token.immediate("=")),
        field("value", choice($.image_spec, $.string)),
      ),
    push: (_) => token(prec(5, "--push")),
    raw_output: (_) => token(prec(5, "--raw-output")),
    required: (_) => token(prec(5, "--required")),
    secret: ($) =>
      seq(
        token(prec(5, "--secret")),
        choice(token.immediate(" "), token.immediate("=")),
        choice(
          field("id", $.string),
          seq(field("var", choice($.variable, $.string)), token.immediate(prec(5, "=")), field("id", $.string)),
        ),
      ),
    sep: ($) =>
      seq(token(prec(5, "--sep")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    service: ($) =>
      seq(token(prec(5, "--service")), choice(token.immediate(" "), token.immediate("=")), field("value", $.string)),
    sharing: ($) => seq(token(prec(5, "--sharing")), choice(token.immediate(" "), token.immediate("=")), $.identifier),
    ssh: (_) => token(prec(5, "--ssh")),
    symlink_no_follow: (_) => token(prec(5, "--symlink-no-follow")),

    // string stuff
    _string_base: ($) =>
      seq(choice($._string_base_other, $._string_base_alpha, $._string_base_num), optional($._immediate_string_base)),
    _string_base_other: (_) => /[^"'\s\\\$()\[\]{}+,:@=a-zA-Z0-9_/.-]+/,
    _string_base_alpha: (_) => /[a-zA-Z_]+/,
    _string_base_num: (_) => /[0-9]+/,
    _immediate_string_base: ($) =>
      prec(
        2,
        repeat1(choice($._immediate_string_base_other, $._immediate_string_base_alpha, $._immediate_string_base_num)),
      ),
    _immediate_string_base_other: (_) => token.immediate(/[^"'\s\\\$()\[\]{}+,:@=a-zA-Z0-9_/.-]+/),
    _immediate_string_base_alpha: (_) => token.immediate(/[a-zA-Z_]+/),
    _immediate_string_base_num: (_) => token.immediate(/[0-9]+/),
    double_quoted_string: ($) =>
      prec.dynamic(
        -1,
        seq(
          '"',
          repeat(
            choice(
              token.immediate(prec(15, /[^"\\\$]+/)),
              alias($._immediate_escape_sequence, $.escape_sequence),
              alias($._immediate_expansion, $.expansion),
            ),
          ),
          '"',
        ),
      ),
    _immediate_double_quoted_string: ($) =>
      prec(
        2,
        seq(
          token.immediate('"'),
          repeat(
            choice(
              token.immediate(prec(15, /[^"\\\$]+/)),
              alias($._immediate_escape_sequence, $.escape_sequence),
              alias($._immediate_expansion, $.expansion),
            ),
          ),
          token.immediate('"'),
        ),
      ),
    single_quoted_string: ($) =>
      prec.dynamic(
        -1,
        seq(
          token.immediate("'"),
          repeat(choice(token.immediate(/[^'\n\\]+/), alias($._immediate_escape_sequence, $.escape_sequence))),
          token.immediate("'"),
        ),
      ),
    _immediate_single_quoted_string: ($) =>
      prec(
        2,
        seq(
          "'",
          repeat(choice(token.immediate(/[^'\n\\]+/), alias($._immediate_escape_sequence, $.escape_sequence))),
          "'",
        ),
      ),
    unquoted_string: ($) =>
      prec.dynamic(
        -1,
        seq(
          choice($._string_base, $.expansion, $.escape_sequence, ...extra_tokens("$'\"")),
          repeat(
            choice(
              $._immediate_string_base,
              alias($._immediate_escape_sequence, $.escape_sequence),
              ...extra_immediate_tokens("$'\""),
              alias($._immediate_expansion, $.expansion),
            ),
          ),
        ),
      ),
    _immediate_unquoted_string: ($) =>
      prec(
        2,
        repeat1(
          choice(
            $._immediate_string_base,
            alias($._immediate_escape_sequence, $.escape_sequence),
            ...extra_immediate_tokens("$'\""),
            alias($._immediate_expansion, $.expansion),
          ),
        ),
      ),
    unquoted_string_with_spaces: ($) =>
      prec.dynamic(
        -1,
        seq(
          choice($._string_base, $.expansion, $.escape_sequence, ...extra_tokens("$'\"")),
          repeat(
            choice(
              $._immediate_string_base,
              alias($._immediate_escape_sequence, $.escape_sequence),
              ...extra_immediate_tokens("$'\""),
              token.immediate(/[ \t]+/),
              alias($._immediate_expansion, $.expansion),
            ),
          ),
        ),
      ),
    string_with_spaces: ($) =>
      prec.dynamic(
        -1,
        seq(
          choice(
            alias($.unquoted_string_with_spaces, $.unquoted_string),
            $.double_quoted_string,
            $.single_quoted_string,
          ),
          repeat(
            choice(
              alias($.unquoted_string_with_spaces, $.unquoted_string),
              $.double_quoted_string,
              $.single_quoted_string,
            ),
          ),
        ),
      ),
    string: ($) =>
      prec.dynamic(
        -1,
        seq(
          choice($.unquoted_string, $.double_quoted_string, $.single_quoted_string),
          repeat(
            choice(
              alias($._immediate_unquoted_string, $.unquoted_string),
              alias($._immediate_double_quoted_string, $.double_quoted_string),
              alias($._immediate_double_quoted_string, $.single_quoted_string),
            ),
          ),
        ),
      ),
    strings: ($) => repeat1($.string),

    // expansion/variable stuff
    // expansion: ($) => seq(token("$"), $.variable),
    expansion: ($) =>
      seq(
        "$",
        choice(
          alias($._immediate_variable, $.variable),
          seq(token.immediate("{"), alias($._immediate_variable, $.variable), "}"),
          seq(token.immediate("("), $.shell_fragment, token(prec(10, ")"))),
        ),
      ),
    _immediate_expansion: ($) =>
      seq(
        token.immediate("$"),
        choice(
          alias($._immediate_variable, $.variable),
          seq(token.immediate("{"), alias($._immediate_variable, $.variable), token.immediate("}")),
          seq(token.immediate("("), $.shell_fragment, token.immediate(")")),
        ),
      ),
    _immediate_variable: ($) =>
      prec.left(
        2,
        seq(
          $._immediate_string_base_alpha,
          repeat(choice($._immediate_string_base_alpha, $._immediate_string_base_num)),
        ),
      ),

    // extra tokens, eol, …
    _immediate_escape_sequence: (_) => /\\./,
    escape_sequence: (_) => /\\./,
    line_continuation: (_) => token(prec(10, "\\\n")),
    comment: (_) => token(prec(10, /#[^\n]*(\n|\r\n|\f)/)),
    line_continuation_comment: (_) => token(prec(10, /\\(\s*#.*\n)+/)),
    _eol: ($) => choice("\n", "\r\n", "\f", $.comment),
  },
});
