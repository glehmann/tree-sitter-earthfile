module.exports = grammar({
  name: "earthfile",

  externals: ($) => [
    $._indent,
    $._dedent,
  ],

  extras: ($) => [/\s+/, "\\\n"],

  rules: {
    source_file: ($) =>
        repeat(choice($.version_command, $.arg_command, $.target, $.comment)),

    version_command: ($) =>
      seq(
        "VERSION",
        field("feature", repeat($.feature_flag)),
        field("version", $.version_major_minor),
        optional($.comment),
        "\n"
      ),

    arg_command: ($) =>
      seq(
        "ARG",
        optional(field("required", $.required)),
        optional(field("global", $.global)),
        field("name", $.identifier),
        optional(
          seq(
            token.immediate("="),
            choice(
              field(
                "default_value",
                choice(
                  $.double_quoted_string,
                  $.single_quoted_string,
                  $.unquoted_string
                )
              ),
              field("default_value_expr", $.expr)
            )
          )
        ),
        optional($.comment),
        "\n"
      ),

    target: ($) =>
      seq(
        field("name", $.identifier),
        ":",
        optional($.comment),
        "\n",
        optional(
          seq(
            $._indent,
            repeat($.arg_command),
            $._dedent
          )
        )
      ),

    version_major_minor: ($) => /[0-9]+\.[0-9]+/,
    feature_flag: ($) => /--[a-zA-Z0-9\-]+/,

    double_quoted_string: ($) =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(/[^"\n\\\$]+/),
            alias($.double_quoted_escape_sequence, $.escape_sequence),
            "\\",
            $._immediate_expansion
          )
        ),
        '"'
      ),

    // same as double_quoted_string but without $-expansions:
    single_quoted_string: ($) =>
      seq(
        "'",
        repeat(
          choice(
            token.immediate(/[^'\n\\]+/),
            alias($.single_quoted_escape_sequence, $.escape_sequence),
            "\\"
          )
        ),
        "'"
      ),

    unquoted_string: ($) =>
      repeat1(
        choice(
          token.immediate(/[^\s\n\"'\\\$]+/),
          token.immediate("\\ "),
          $._immediate_expansion
        )
      ),

    double_quoted_escape_sequence: ($) =>
      token.immediate(choice("\\\\", '\\"')),

    single_quoted_escape_sequence: ($) =>
      token.immediate(choice("\\\\", "\\'")),

    // we have 2 rules b/c aliases don't work as expected on seq() directly
    _immediate_expansion: ($) => alias($._imm_expansion, $.expansion),
    _imm_expansion: ($) => seq(token.immediate("$"), $._expansion_body),

    _expansion_body: ($) =>
      choice(
        $.variable,
        seq(
          token.immediate("{"),
          alias(token.immediate(/[^\}]+/), $.variable),
          token.immediate("}")
        )
      ),

    variable: ($) => token.immediate(/[a-zA-Z_][a-zA-Z0-9_]*/),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: ($) => /#.*/,

    required: ($) => "--required",
    global: ($) => "--global",

    expr: ($) => /\$\(.+\)/,
  },
});
