const _string_base_tokens = "()[]{}$/,:@=+.-#";
function extra_tokens(except) {
  let res = [];
  for (const c of _string_base_tokens) {
    if (!except.includes(c)) {
      res.push(c);
    }
  }
  return res;
}

function repeat1_sep($, choices) {
  return seq(choices, repeat(seq($._sep, choices)));
}

function options($, o) {
  return optional(seq($._sep, field("options", alias(o, $.options))));
}

function block($, kind) {
  let commands = choice(
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
  );
  if (kind == "base") {
    return repeat1(choice($._eol, $.comment, commands));
  } else if (kind == "target") {
    return repeat1(choice($._eol, seq($._sep, commands)));
  } else if (kind == "other") {
    return repeat1(choice($._eol, $.comment, seq(optional($._sep), commands)));
  }
}
module.exports = grammar({
  name: "earthfile",

  extras: ($) => [],

  conflicts: ($) => [
    [$._conditional_block],
    [$._conditional_block_options],
    [$._eol, $.arg_command],
    [$.arg_options],
    [$.base_block, $.source_file],
    [$.base_block],
    [$.block],
    [$.build_arg],
    [$.build_args],
    [$.build_options],
    [$.cache_options],
    [$.copy_command],
    [$.copy_options],
    [$.do_options],
    [$.double_quoted_string, $.shell_fragment],
    [$.earthfile_ref, $.image_name, $.unquoted_string],
    [$.earthfile_ref, $.unquoted_string],
    [$.escape_sequence, $.shell_fragment],
    [$.for_options],
    [$.from_dockerfile_options],
    [$.from_options],
    [$.git_clone_options],
    [$.identifier, $.unquoted_string],
    [$.image_name, $.unquoted_string],
    [$.images],
    [$.import_options],
    [$.run_options],
    [$.save_artifact_options],
    [$.save_image_options],
    [$.shell_fragment, $.string_array],
    [$.shell_fragment],
    [$.source_file],
    [$.string],
    [$.string_array, $.unquoted_string],
    [$.strings],
    [$.target],
    [$.target_artifact_build_args],
    [$.target_block],
    [$.target_ref, $.unquoted_string],
    [$.try_command_finally_block],
    [$.unquoted_string],
    [$.unquoted_string_with_spaces],
    [$.variable, $.unquoted_string],
    [$.variable],
    [$.version_options],
    [$.with_docker_options],
  ],

  rules: {
    // main rule, for the whole file
    // it must be the first rule in the list
    source_file: ($) =>
      seq(
        repeat(choice($._eol, $.comment)),
        optional($.version_command),
        optional(seq(repeat($._eol), field("base_target", alias($.base_block, $.block)))),
        repeat(seq(repeat(choice($._eol, $.comment)), $.target)),
        repeat(choice($._eol, $.comment)),
      ),

    _sep: ($) => repeat1(choice(/[ \t]+/, $.line_continuation, $.line_continuation_comment)),

    // the root commands/elements
    project_command: ($) =>
      seq("PROJECT", $._sep, field("org_name", $.identifier), "/", field("project_name", $.identifier), $._eol),

    target: ($) => seq(field("name", $.identifier), ":", $._eol, optional(alias($.target_block, $.block))),

    version_command: ($) =>
      seq("VERSION", options($, $.version_options), $._sep, field("version", $.version_major_minor), $._eol),
    version_options: ($) => repeat1_sep($, $.feature_flag),

    // the target commands
    arg_command: ($) =>
      seq(
        "ARG",
        options($, $.arg_options),
        $._sep,
        field("name", $.variable),
        optional(
          seq(
            optional($._sep),
            "=",
            optional($._sep),
            field("default_value", optional(alias($.string_with_spaces, $.string))),
          ),
        ),
        $._eol,
      ),
    arg_options: ($) => repeat1_sep($, choice($.required, $.global, $.unknown_option)),

    build_command: ($) =>
      seq(
        "BUILD",
        options($, $.build_options),
        $._sep,
        choice($.target_ref, $.string),
        optional(seq($._sep, $.build_args)),
        $._eol,
      ),
    build_options: ($) =>
      repeat1_sep(
        $,
        choice($.auto_skip, $.allow_privileged, $.build_arg_deprecated, $.pass_args, $.platform, $.unknown_option),
      ),

    cache_command: ($) => seq("CACHE", options($, $.cache_options), $._sep, field("mount_point", $.string), $._eol),
    cache_options: ($) => repeat1_sep($, choice($.chmod, $.id, $.persist, $.sharing, $.unknown_option)),

    cmd_command: ($) => seq("CMD", $._sep, choice($.shell_fragment, $.string_array), $._eol),

    copy_command: ($) =>
      seq(
        "COPY",
        options($, $.copy_options),
        // repeat(
        //   seq(
        //     $._sep,
        //     field(
        //       "option",
        //       choice(
        //         $.allow_privileged,
        //         $.build_arg_deprecated,
        //         $.chmod,
        //         $.chown,
        //         $.dir,
        //         $.if_exists,
        //         $.keep_own,
        //         $.keep_ts,
        //         $.pass_args,
        //         $.platform,
        //         $.symlink_no_follow,
        //         $.unknown_option,
        //       ),
        //     ),
        //   ),
        // ),
        repeat1(seq($._sep, field("src", choice($.target_artifact, $.target_artifact_build_args, $.string)))),
        $._sep,
        field("dest", $.string),
        $._eol,
      ),
    copy_options: ($) =>
      repeat1_sep(
        $,
        choice(
          $.allow_privileged,
          $.build_arg_deprecated,
          $.chmod,
          $.chown,
          $.dir,
          $.if_exists,
          $.keep_own,
          $.keep_ts,
          $.pass_args,
          $.platform,
          $.symlink_no_follow,
          $.unknown_option,
        ),
      ),

    do_command: ($) =>
      seq(
        "DO",
        options($, $.do_options),
        $._sep,
        choice(alias($.target_ref, $.function_ref), $.string),
        optional(seq($._sep, $.build_args)),
        $._eol,
      ),
    do_options: ($) => repeat1_sep($, choice($.allow_privileged, $.pass_args, $.unknown_option)),

    entrypoint_command: ($) => seq("ENTRYPOINT", $._sep, choice($.shell_fragment, $.string_array), $._eol),

    env_command: ($) =>
      seq(
        "ENV",
        $._sep,
        field("key", $.variable),
        choice(/[ \t]+/, token(prec(5, "="))),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol,
      ),

    expose_command: ($) => seq("EXPOSE", repeat(seq($._sep, $.string)), $._eol),

    for_command: ($) =>
      seq(
        "FOR",
        options($, $.for_options),
        $._sep,
        field("name", $.variable),
        $._sep,
        "IN",
        $._sep,
        field("values", $.strings),
        $._eol,
        optional($.block),
        optional($._sep),
        "END",
        $._eol,
      ),
    for_options: ($) =>
      repeat1_sep($, choice($.sep, $.privileged, $.ssh, $.no_cache, $.mount, $.secret, $.unknown_option)),

    from_command: ($) =>
      seq(
        "FROM",
        options($, $.from_options),
        $._sep,
        choice($.target_ref, $.image_spec, $.string),
        optional(seq($._sep, $.build_args)),
        $._eol,
      ),
    from_options: ($) => repeat1_sep($, choice($.platform, $.allow_privileged, $.pass_args, $.unknown_option)),

    from_dockerfile_command: ($) =>
      seq(
        "FROM DOCKERFILE",
        options($, $.from_dockerfile_options),
        $._sep,
        field("context", choice($.target_artifact, $.target_artifact_build_args, $.string)),
        $._eol,
      ),
    from_dockerfile_options: ($) =>
      repeat1_sep(
        $,
        choice($.allow_privileged, $.docker_build_arg, $.docker_file, $.docker_target, $.platform, $.unknown_option),
      ),

    function_command: ($) => seq(choice("FUNCTION", "COMMAND"), $._eol),

    git_clone_command: ($) =>
      seq(
        "GIT CLONE",
        options($, $.git_clone_options),
        $._sep,
        field("url", $.string),
        $._sep,
        field("dest", $.string),
        $._eol,
      ),
    git_clone_options: ($) => repeat1_sep($, choice($.branch, $.keep_ts, $.unknown_option)),

    host_command: ($) => seq("HOST", $._sep, field("name", $.identifier), $._sep, field("ip", $.string), $._eol),

    if_command: ($) =>
      seq(
        "IF",
        $._conditional_block,
        repeat(field("alternative", $.elif_block)),
        optional(field("alternative", $.else_block)),
        optional($._sep),
        "END",
        $._eol,
      ),

    import_command: ($) =>
      seq(
        "IMPORT",
        options($, $.import_options),
        $._sep,
        choice($.earthfile_ref, $.string),
        optional(seq($._sep, "AS", $._sep, field("alias", $.identifier))),
        $._eol,
      ),
    import_options: ($) => repeat1_sep($, choice($.allow_privileged, $.unknown_option)),

    let_command: ($) =>
      seq(
        "LET",
        $._sep,
        field("name", $.variable),
        optional($._sep),
        "=",
        optional($._sep),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol,
      ),

    label_command: ($) => seq("LABEL", repeat(seq($._sep, $.label)), $._eol),

    locally_command: ($) => seq("LOCALLY", $._eol),

    run_command: ($) =>
      seq(
        "RUN",
        options($, $.run_options),
        optional(
          seq(
            $._sep,
            optional(seq(token(prec(3, "--")), $._sep)),
            field("command", choice($.string_array, $.shell_fragment)),
          ),
        ),
        $._eol,
      ),
    run_options: ($) =>
      repeat1_sep(
        $,
        choice(
          $.aws,
          $.entrypoint,
          $.interactive,
          $.mount,
          $.network_none,
          $.no_cache,
          $.privileged,
          $.oidc,
          $.push,
          $.raw_output,
          $.secret,
          $.ssh,
          $.unknown_option,
        ),
      ),

    save_artifact_command: ($) =>
      seq(
        "SAVE ARTIFACT",
        options($, $.save_artifact_options),
        $._sep,
        field("src", $.string),
        optional(seq($._sep, field("dest", $.string))),
        optional(seq($._sep, "AS LOCAL", $._sep, field("local_dest", $.string))),
        $._eol,
      ),
    save_artifact_options: ($) =>
      repeat1_sep($, choice($.if_exists, $.force, $.keep_own, $.keep_ts, $.symlink_no_follow, $.unknown_option)),

    save_image_command: ($) =>
      seq(
        "SAVE IMAGE",
        options($, $.save_image_options, $.options),
        optional(seq($._sep, field("images", $.images))),
        $._eol,
      ),
    save_image_options: ($) =>
      repeat1_sep($, choice($.cache_from, $.cache_hint, $.push, $.without_earthly_labels, $.unknown_option)),

    set_command: ($) =>
      seq(
        "SET",
        $._sep,
        field("name", $.variable),
        optional($._sep),
        "=",
        optional($._sep),
        field("value", alias($.string_with_spaces, $.string)),
        $._eol,
      ),

    try_command: ($) =>
      seq(
        "TRY",
        $._eol,
        optional(field("body", $.block)),
        optional($._sep),
        "FINALLY",
        $._eol,
        field("finally", optional(alias($.try_command_finally_block, $.block))),
        optional($._sep),
        "END",
        $._eol,
      ),
    try_command_finally_block: ($) => repeat1(seq($._sep, $.save_artifact_command)),

    user_command: ($) =>
      seq(
        "USER",
        $._sep,
        choice(
          seq(
            field("user", choice($.identifier, $.number)),
            optional(seq(":", field("group", choice($.identifier, $.number)))),
          ),
          $.string,
        ),
        $._eol,
      ),

    volume_command: ($) => seq("VOLUME", $._sep, choice($.string_array, $.strings), $._eol),

    wait_command: ($) => seq("WAIT", $._eol, optional($.block), optional($._sep), "END", $._eol),

    with_docker_command: ($) =>
      seq(
        "WITH DOCKER",
        options($, $.with_docker_options),
        repeat1($._eol),
        optional($._sep),
        $.run_command,
        repeat($._eol),
        optional($._sep),
        "END",
        $._eol,
      ),
    with_docker_options: ($) =>
      repeat1_sep(
        $,
        choice($.allow_privileged, $.cache_id, $.compose, $.load, $.platform, $.pull, $.service, $.unknown_option),
      ),

    workdir_command: ($) => seq("WORKDIR", $._sep, $.string, $._eol),

    // code blocks
    base_block: ($) => block($, "base"),
    target_block: ($) => block($, "target"),
    block: ($) => block($, "other"),
    _conditional_block: ($) =>
      seq(
        options($, $._conditional_block_options),
        $._sep,
        field("condition", $.shell_fragment),
        $._eol,
        field("body", optional($.block)),
      ),
    _conditional_block_options: ($) =>
      repeat1_sep($, choice($.ssh, $.privileged, $.no_cache, $.mount, $.secret, $.unknown_option)),
    elif_block: ($) => seq(optional($._sep), "ELSE IF", $._conditional_block),
    else_block: ($) => seq(optional($._sep), "ELSE", $._eol, field("body", $.block)),

    // command elements
    _dash_variable: ($) => seq($._string_base_alpha, repeat(choice($._string_base_alpha, $._string_base_num, "-"))),
    earthfile_ref: ($) =>
      seq(
        choice($._string_base_other, $._string_base_alpha, $._string_base_num, ...extra_tokens("+$=")),
        repeat(
          prec.left(
            choice(
              $._string_base_other,
              $._string_base_alpha,
              $._string_base_num,
              ...extra_tokens("+$="),
              $.escape_sequence,
            ),
          ),
        ),
      ),
    function_ref: (_) => "dummy node to be used as an alias for target_ref",
    identifier: ($) => seq($._string_base_alpha, repeat(choice($._string_base_alpha, $._string_base_num, ".", "-"))),
    image_spec: ($) =>
      seq(
        field("name", $.image_name),
        optional(seq(":", field("tag", $.image_tag))),
        optional(seq("@", field("digest", $.image_digest))),
      ),
    image_name: ($) =>
      seq(
        choice($._string_base_alpha, $._string_base_num),
        repeat(prec.left(choice($._string_base_other, $._string_base_alpha, $._string_base_num, "/", "-", "."))),
      ),
    image_tag: ($) =>
      seq(
        choice($._string_base_alpha, $._string_base_num),
        repeat(choice($._string_base_alpha, $._string_base_num, ".", "-")),
      ),
    image_digest: ($) =>
      seq(
        choice($._string_base_alpha, $._string_base_num),
        repeat(choice($._string_base_alpha, $._string_base_num, ":")),
      ),
    images: ($) => repeat1_sep($, choice($.image_spec, $.string)),
    label: ($) => seq(field("label", $.identifier), choice($._sep, "="), field("value", $.string)),
    number: (_) => /\d+/,
    options: (_) => "dummy node to use as an alias in the command options",
    shell_fragment: ($) =>
      seq(
        choice(
          $._string_base_other,
          $._string_base_alpha,
          $._string_base_num,
          ...extra_tokens("\"'"),
          /\\./,
          seq("'", repeat(choice(/[^'\n\\]+/, /\\./, "\\\n")), "'"),
          seq('"', repeat(choice(token(prec(15, /[^"\\\$]+/)), "$", /\\./, "\\\n")), '"'),
        ),
        repeat(
          choice(
            $._string_base_other,
            $._string_base_alpha,
            $._string_base_num,
            ...extra_tokens("\"'"),
            /\\./,
            seq("'", repeat(choice(/[^'\n\\]+/, /\\./, "\\\n")), "'"),
            seq('"', repeat(choice(token(prec(15, /[^"\\\$]+/)), "$", /\\./, "\\\n")), '"'),
            $._sep,
          ),
        ),
        optional(
          choice(
            $._string_base_other,
            $._string_base_alpha,
            $._string_base_num,
            ...extra_tokens("\"'"),
            /\\./,
            seq("'", repeat(choice(/[^'\n\\]+/, /\\./, "\\\n")), "'"),
            seq('"', repeat(choice(token(prec(15, /[^"\\\$]+/)), "$", /\\./, "\\\n")), '"'),
          ),
        ),
      ),
    string_array: ($) =>
      prec.dynamic(
        10,
        choice(
          seq("[", optional($._sep), "]"),
          seq(
            "[",
            repeat(seq(optional($._sep), $.double_quoted_string, optional($._sep), ",")),
            optional($._sep),
            $.double_quoted_string,
            optional($._sep),
            "]",
          ),
        ),
      ),
    target_ref: ($) => seq(optional(field("earthfile", $.earthfile_ref)), "+", field("name", $.identifier)),
    target_ref_with_build_args: ($) =>
      seq(
        token(prec(5, "(")),
        optional($._sep),
        $.target_ref,
        optional(seq($._sep, $.build_args)),
        token(prec(5, ")")),
      ),
    // TODO: use fields
    target_artifact: ($) => seq($.target_ref, "/", optional($.unquoted_string)),
    // TODO: use fields
    target_artifact_build_args: ($) =>
      seq(
        token(prec(5, "(")),
        optional($._sep),
        choice(prec.dynamic(1000, seq($.target_ref, "/", optional($.unquoted_string))), $.string),
        $._sep,
        optional($.build_args),
        optional($._sep),
        token(prec(5, ")")),
      ),
    variable: ($) => seq($._string_base_alpha, repeat(choice($._string_base_alpha, $._string_base_num))),
    version_major_minor: (_) => /[0-9]+\.[0-9]+/,

    // options
    allow_privileged: (_) => token(prec(5, "--allow-privileged")),
    auto_skip: (_) => token(prec(5, "--auto-skip")),
    aws: ($) => token(prec(5, "--aws")),
    branch: ($) => seq(token(prec(5, "--branch")), choice($._sep, "="), field("value", $.string)),
    build_arg: ($) =>
      seq(
        choice(token(prec(5, "--")), "-"),
        field("name", alias($._dash_variable, $.variable)),
        choice($._sep, "="),
        optional(field("value", $.string)),
      ),
    build_args: ($) => repeat1_sep($, $.build_arg),
    build_arg_deprecated: ($) => seq(token(prec(5, "--build-arg")), choice($._sep, "="), field("value", $.string)),
    cache_id: ($) => seq(token(prec(5, "--cache-id")), choice($._sep, "="), field("value", $.string)),
    cache_from: ($) => seq(token(prec(5, "--cache-from")), choice($._sep, "="), field("value", $.string)),
    cache_hint: (_) => token(prec(5, "--cache-hint")),
    chmod: ($) => seq(token(prec(5, "--chmod")), choice($._sep, "="), field("value", $.string)),
    chown: ($) => seq(token(prec(5, "--chown")), choice($._sep, "="), field("value", $.string)),
    compose: ($) => seq(token(prec(5, "--compose")), choice($._sep, "="), field("value", $.string)),
    dir: (_) => token(prec(5, "--dir")),
    docker_build_arg: ($) =>
      seq(
        token(prec(5, "--build-arg")),
        choice($._sep, "="),
        field("key", $.identifier),
        choice($._sep, "="),
        field("value", $.string),
      ),
    docker_file: ($) =>
      seq(
        token(prec(5, "-f")),
        choice($._sep, "="),
        field("value", choice($.target_artifact, $.target_artifact_build_args, $.string)),
      ),
    docker_target: ($) => seq(token(prec(5, "--target")), choice($._sep, "="), field("value", $.identifier)),
    entrypoint: (_) => token(prec(5, "--entrypoint")),
    feature_flag: (_) => /--[a-zA-Z0-9\-]+/,
    force: (_) => token(prec(5, "--force")),
    global: (_) => token(prec(5, "--global")),
    id: ($) => seq(token(prec(5, "--id")), choice($._sep, "="), $.identifier),
    if_exists: (_) => token(prec(5, "--if-exists")),
    interactive: (_) => choice(token(prec(5, "--interactive")), token(prec(5, "--interactive-keep"))),
    keep_own: (_) => token(prec(5, "--keep-own")),
    keep_ts: (_) => token(prec(5, "--keep-ts")),
    load: ($) =>
      seq(
        token(prec(5, "--load")),
        choice($._sep, "="),
        optional(seq(field("image", choice($.image_spec, $.string)), "=")),
        field("target", choice($.target_ref, $.target_ref_with_build_args, $.string)),
      ),
    mount: ($) => seq(token(prec(5, "--mount")), choice($._sep, "="), field("value", $.string)),
    network_none: (_) => token(prec(5, "--network=none")),
    no_cache: (_) => token(prec(5, "--no-cache")),
    oidc: ($) => seq(token(prec(5, "--oidc")), choice($._sep, "="), field("spec", $.string)),
    pass_args: (_) => token(prec(5, "--pass-args")),
    persist: (_) => token(prec(5, "--persist")),
    platform: ($) => prec.dynamic(10, seq(token(prec(5, "--platform")), choice($._sep, "="), field("value", $.string))),
    privileged: (_) => token(prec(5, "--privileged")),
    pull: ($) => seq(token(prec(5, "--pull")), choice($._sep, "="), field("value", choice($.image_spec, $.string))),
    push: (_) => token(prec(5, "--push")),
    raw_output: (_) => token(prec(5, "--raw-output")),
    required: (_) => token(prec(5, "--required")),
    secret: ($) =>
      seq(
        token(prec(5, "--secret")),
        choice($._sep, "="),
        choice(
          field("id", $.string),
          seq(field("var", choice($.variable, $.string)), token(prec(5, "=")), field("id", $.string)),
        ),
      ),
    sep: ($) => seq(token(prec(5, "--sep")), choice($._sep, "="), field("value", $.string)),
    service: ($) => seq(token(prec(5, "--service")), choice($._sep, "="), field("value", $.string)),
    sharing: ($) => seq(token(prec(5, "--sharing")), choice($._sep, "="), $.identifier),
    ssh: (_) => token(prec(5, "--ssh")),
    symlink_no_follow: (_) => token(prec(5, "--symlink-no-follow")),
    unknown_option: ($) => seq(token(prec(3, /--[a-z0-9-]+/)), optional(seq("=", field("value", $.string)))),
    without_earthly_labels: (_) => token(prec(5, "--without-earthly-labels")),

    // string stuff
    // _string_base: ($) => repeat1(choice($._string_base_other, $._string_base_alpha, $._string_base_num)),
    _string_base_other: (_) => /[^"'\s\\\$()\[\]{}+,:@=a-zA-Z0-9_/.#-]+/,
    _string_base_alpha: (_) => /[a-zA-Z_]+/,
    _string_base_num: (_) => /[0-9]+/,
    double_quoted_string: ($) =>
      prec.dynamic(
        -1,
        seq('"', repeat(choice(token(prec(15, /[^"\\\$]+/)), $.escape_sequence, $.expansion, "\\\n")), '"'),
      ),
    single_quoted_string: ($) =>
      prec.dynamic(-1, seq("'", repeat(choice(/[^'\n\\]+/, $.escape_sequence, "\\\n")), "'")),
    unquoted_string: ($) =>
      prec.dynamic(
        -1,
        seq(
          choice(
            $._string_base_other,
            $._string_base_alpha,
            $._string_base_num,
            $.expansion,
            $.escape_sequence,
            ...extra_tokens("$'\"#"),
          ),
          repeat(
            choice(
              $._string_base_other,
              $._string_base_alpha,
              $._string_base_num,
              $.expansion,
              $.escape_sequence,
              ...extra_tokens("$'\""),
            ),
          ),
        ),
      ),
    unquoted_string_with_spaces: ($) =>
      prec.dynamic(
        -1,
        seq(
          choice(
            $._string_base_other,
            $._string_base_alpha,
            $._string_base_num,
            $.expansion,
            $.escape_sequence,
            ...extra_tokens("$'\"#"),
          ),
          repeat(
            choice(
              $._string_base_other,
              $._string_base_alpha,
              $._string_base_num,
              $.escape_sequence,
              ...extra_tokens("$'\""),
              $._sep,
              $.expansion,
            ),
          ),
          optional(
            choice(
              $._string_base_other,
              $._string_base_alpha,
              $._string_base_num,
              $.expansion,
              $.escape_sequence,
              ...extra_tokens("$'\""),
            ),
          ),
        ),
      ),
    string_with_spaces: ($) =>
      prec.dynamic(
        -1,
        repeat1(
          choice(
            alias($.unquoted_string_with_spaces, $.unquoted_string),
            $.double_quoted_string,
            $.single_quoted_string,
          ),
        ),
      ),
    string: ($) => prec.dynamic(-1, repeat1(choice($.unquoted_string, $.double_quoted_string, $.single_quoted_string))),
    strings: ($) => repeat1_sep($, $.string),

    // expansion/variable stuff
    // expansion: ($) => seq(token("$"), $.variable),
    expansion: ($) =>
      seq("$", choice($.variable, seq("{", $.variable, "}"), seq("(", $.shell_fragment, token(prec(10, ")"))))),

    // extra tokens, eol, …
    escape_sequence: (_) => /\\./,
    line_continuation: (_) => "\\\n",
    comment: (_) => /#[^\n]*(\n|\r\n|\f)/,
    line_continuation_comment: (_) => /\\(\s*#.*\n)+/,
    _eol: ($) =>
      prec.dynamic(10, choice(seq(optional(/[ \t]+/), choice("\n", "\r\n", "\f", "\0")), seq(/[ \t]+/, $.comment))),
  },
});
