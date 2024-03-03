#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 325
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  anon_sym_VERSION = 1,
  anon_sym_LF = 2,
  anon_sym_ARG = 3,
  anon_sym_EQ = 4,
  anon_sym_FROM = 5,
  anon_sym_RUN = 6,
  anon_sym_DASH_DASH = 7,
  anon_sym_COLON = 8,
  sym_version_major_minor = 9,
  sym_feature_flag = 10,
  anon_sym_DASH_DASH2 = 11,
  sym_option_identifier = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_double_quoted_string_token1 = 14,
  anon_sym_BSLASH = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_single_quoted_string_token1 = 17,
  aux_sym_unquoted_string_token1 = 18,
  anon_sym_BSLASH2 = 19,
  sym_double_quoted_escape_sequence = 20,
  sym_single_quoted_escape_sequence = 21,
  anon_sym_DOLLAR = 22,
  anon_sym_DOLLAR2 = 23,
  anon_sym_LBRACE = 24,
  aux_sym__expansion_body_token1 = 25,
  anon_sym_RBRACE = 26,
  sym_variable = 27,
  sym_identifier = 28,
  sym_comment = 29,
  sym_required = 30,
  sym_global = 31,
  sym_expr = 32,
  anon_sym_PLUS = 33,
  aux_sym_image_name_token1 = 34,
  aux_sym_image_name_token2 = 35,
  anon_sym_COLON2 = 36,
  aux_sym_image_tag_token1 = 37,
  anon_sym_AT = 38,
  aux_sym_image_digest_token1 = 39,
  aux_sym_shell_fragment_token1 = 40,
  aux_sym_shell_fragment_token2 = 41,
  aux_sym_shell_fragment_token3 = 42,
  sym__indent = 43,
  sym__dedent = 44,
  sym_source_file = 45,
  sym_version_command = 46,
  sym_arg_command = 47,
  sym_from_command = 48,
  sym_run_command = 49,
  sym_target = 50,
  sym_build_arg_flag = 51,
  sym_option = 52,
  sym_double_quoted_string = 53,
  sym_single_quoted_string = 54,
  sym_unquoted_string = 55,
  sym_expansion = 56,
  sym__immediate_expansion = 57,
  sym__imm_expansion = 58,
  sym__expansion_body = 59,
  sym_target_ref = 60,
  sym_image_spec = 61,
  sym_image_name = 62,
  sym_image_tag = 63,
  sym_image_digest = 64,
  sym__string = 65,
  sym_shell_fragment = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_version_command_repeat1 = 68,
  aux_sym_from_command_repeat1 = 69,
  aux_sym_from_command_repeat2 = 70,
  aux_sym_target_repeat1 = 71,
  aux_sym_double_quoted_string_repeat1 = 72,
  aux_sym_single_quoted_string_repeat1 = 73,
  aux_sym_unquoted_string_repeat1 = 74,
  aux_sym_image_name_repeat1 = 75,
  aux_sym_image_tag_repeat1 = 76,
  aux_sym_image_digest_repeat1 = 77,
  aux_sym_shell_fragment_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_LF] = "\n",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_FROM] = "FROM",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_COLON] = ":",
  [sym_version_major_minor] = "version_major_minor",
  [sym_feature_flag] = "feature_flag",
  [anon_sym_DASH_DASH2] = "--",
  [sym_option_identifier] = "option_identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "escape_sequence",
  [sym_single_quoted_escape_sequence] = "escape_sequence",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_required] = "required",
  [sym_global] = "global",
  [sym_expr] = "expr",
  [anon_sym_PLUS] = "+",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [anon_sym_COLON2] = ":",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_version_command] = "version_command",
  [sym_arg_command] = "arg_command",
  [sym_from_command] = "from_command",
  [sym_run_command] = "run_command",
  [sym_target] = "target",
  [sym_build_arg_flag] = "build_arg_flag",
  [sym_option] = "option",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_expansion] = "expansion",
  [sym__immediate_expansion] = "_immediate_expansion",
  [sym__imm_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [sym_target_ref] = "target_ref",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym__string] = "_string",
  [sym_shell_fragment] = "shell_fragment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_from_command_repeat2] = "from_command_repeat2",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_feature_flag] = sym_feature_flag,
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH2,
  [sym_option_identifier] = sym_option_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_required] = sym_required,
  [sym_global] = sym_global,
  [sym_expr] = sym_expr,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [anon_sym_COLON2] = anon_sym_COLON,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_version_command] = sym_version_command,
  [sym_arg_command] = sym_arg_command,
  [sym_from_command] = sym_from_command,
  [sym_run_command] = sym_run_command,
  [sym_target] = sym_target,
  [sym_build_arg_flag] = sym_build_arg_flag,
  [sym_option] = sym_option,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_expansion] = sym_expansion,
  [sym__immediate_expansion] = sym__immediate_expansion,
  [sym__imm_expansion] = sym_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [sym_target_ref] = sym_target_ref,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym__string] = sym__string,
  [sym_shell_fragment] = sym_shell_fragment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_from_command_repeat2] = aux_sym_from_command_repeat2,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_version_major_minor] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_flag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_option_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expansion_body_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_required] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version_command] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_command] = {
    .visible = true,
    .named = true,
  },
  [sym_from_command] = {
    .visible = true,
    .named = true,
  },
  [sym_run_command] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_build_arg_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__immediate_expansion] = {
    .visible = false,
    .named = true,
  },
  [sym__imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__expansion_body] = {
    .visible = false,
    .named = true,
  },
  [sym_target_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_command = 1,
  field_default_value = 2,
  field_default_value_expr = 3,
  field_digest = 4,
  field_feature = 5,
  field_global = 6,
  field_name = 7,
  field_required = 8,
  field_tag = 9,
  field_value = 10,
  field_version = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_digest] = "digest",
  [field_feature] = "feature",
  [field_global] = "global",
  [field_name] = "name",
  [field_required] = "required",
  [field_tag] = "tag",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 3},
  [15] = {.index = 28, .length = 3},
  [16] = {.index = 31, .length = 3},
  [17] = {.index = 34, .length = 3},
  [18] = {.index = 37, .length = 4},
  [19] = {.index = 41, .length = 4},
  [20] = {.index = 45, .length = 1},
  [21] = {.index = 46, .length = 1},
  [22] = {.index = 47, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_version, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_feature, 1},
    {field_version, 2},
  [9] =
    {field_name, 2},
    {field_required, 1},
  [11] =
    {field_global, 1},
    {field_name, 2},
  [13] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [16] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [18] =
    {field_default_value, 3},
    {field_name, 1},
  [20] =
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [23] =
    {field_name, 1},
    {field_value, 3},
  [25] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_required, 1},
  [28] =
    {field_default_value, 4},
    {field_name, 2},
    {field_required, 1},
  [31] =
    {field_default_value_expr, 4},
    {field_global, 1},
    {field_name, 2},
  [34] =
    {field_default_value, 4},
    {field_global, 1},
    {field_name, 2},
  [37] =
    {field_default_value_expr, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [41] =
    {field_default_value, 5},
    {field_global, 2},
    {field_name, 3},
    {field_required, 1},
  [45] =
    {field_command, 1},
  [46] =
    {field_command, 2},
  [47] =
    {field_command, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 2,
  [9] = 5,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 3,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 4,
  [22] = 22,
  [23] = 23,
  [24] = 12,
  [25] = 7,
  [26] = 23,
  [27] = 10,
  [28] = 28,
  [29] = 4,
  [30] = 30,
  [31] = 10,
  [32] = 13,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 34,
  [38] = 38,
  [39] = 35,
  [40] = 18,
  [41] = 16,
  [42] = 34,
  [43] = 30,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 28,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 35,
  [52] = 52,
  [53] = 34,
  [54] = 54,
  [55] = 55,
  [56] = 4,
  [57] = 10,
  [58] = 10,
  [59] = 34,
  [60] = 35,
  [61] = 38,
  [62] = 36,
  [63] = 63,
  [64] = 35,
  [65] = 34,
  [66] = 35,
  [67] = 34,
  [68] = 35,
  [69] = 69,
  [70] = 70,
  [71] = 55,
  [72] = 72,
  [73] = 73,
  [74] = 4,
  [75] = 75,
  [76] = 72,
  [77] = 55,
  [78] = 78,
  [79] = 72,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 72,
  [85] = 55,
  [86] = 45,
  [87] = 87,
  [88] = 49,
  [89] = 48,
  [90] = 90,
  [91] = 91,
  [92] = 52,
  [93] = 50,
  [94] = 94,
  [95] = 95,
  [96] = 35,
  [97] = 34,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 35,
  [114] = 63,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 34,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 35,
  [137] = 69,
  [138] = 83,
  [139] = 54,
  [140] = 140,
  [141] = 141,
  [142] = 34,
  [143] = 143,
  [144] = 35,
  [145] = 70,
  [146] = 146,
  [147] = 69,
  [148] = 83,
  [149] = 149,
  [150] = 146,
  [151] = 151,
  [152] = 34,
  [153] = 54,
  [154] = 151,
  [155] = 95,
  [156] = 70,
  [157] = 157,
  [158] = 146,
  [159] = 159,
  [160] = 160,
  [161] = 87,
  [162] = 162,
  [163] = 160,
  [164] = 162,
  [165] = 162,
  [166] = 166,
  [167] = 34,
  [168] = 157,
  [169] = 162,
  [170] = 35,
  [171] = 146,
  [172] = 172,
  [173] = 127,
  [174] = 108,
  [175] = 123,
  [176] = 176,
  [177] = 177,
  [178] = 103,
  [179] = 101,
  [180] = 126,
  [181] = 100,
  [182] = 104,
  [183] = 105,
  [184] = 109,
  [185] = 106,
  [186] = 120,
  [187] = 91,
  [188] = 115,
  [189] = 116,
  [190] = 117,
  [191] = 119,
  [192] = 121,
  [193] = 122,
  [194] = 124,
  [195] = 110,
  [196] = 130,
  [197] = 131,
  [198] = 132,
  [199] = 134,
  [200] = 99,
  [201] = 135,
  [202] = 128,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 204,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 208,
  [214] = 208,
  [215] = 208,
  [216] = 207,
  [217] = 205,
  [218] = 212,
  [219] = 125,
  [220] = 208,
  [221] = 211,
  [222] = 208,
  [223] = 206,
  [224] = 208,
  [225] = 208,
  [226] = 226,
  [227] = 208,
  [228] = 208,
  [229] = 208,
  [230] = 208,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 234,
  [236] = 236,
  [237] = 237,
  [238] = 236,
  [239] = 237,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 240,
  [244] = 244,
  [245] = 245,
  [246] = 69,
  [247] = 247,
  [248] = 83,
  [249] = 232,
  [250] = 70,
  [251] = 166,
  [252] = 241,
  [253] = 54,
  [254] = 233,
  [255] = 244,
  [256] = 242,
  [257] = 257,
  [258] = 258,
  [259] = 258,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 261,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 260,
  [275] = 262,
  [276] = 276,
  [277] = 277,
  [278] = 269,
  [279] = 272,
  [280] = 280,
  [281] = 281,
  [282] = 273,
  [283] = 276,
  [284] = 280,
  [285] = 285,
  [286] = 286,
  [287] = 271,
  [288] = 267,
  [289] = 285,
  [290] = 270,
  [291] = 291,
  [292] = 292,
  [293] = 267,
  [294] = 294,
  [295] = 267,
  [296] = 267,
  [297] = 267,
  [298] = 267,
  [299] = 267,
  [300] = 267,
  [301] = 267,
  [302] = 267,
  [303] = 267,
  [304] = 265,
  [305] = 263,
  [306] = 286,
  [307] = 307,
  [308] = 281,
  [309] = 292,
  [310] = 310,
  [311] = 311,
  [312] = 307,
  [313] = 313,
  [314] = 292,
  [315] = 292,
  [316] = 292,
  [317] = 292,
  [318] = 292,
  [319] = 292,
  [320] = 292,
  [321] = 292,
  [322] = 292,
  [323] = 292,
  [324] = 257,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(101);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == ',') ADVANCE(270);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '{') ADVANCE(183);
      if (lookahead == '}') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(48)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(48)
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '$') ADVANCE(178);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(205);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(205);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(55)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '\\') SKIP(13)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '\\') SKIP(13)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(46)
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(69)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(22)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(273);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(31)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(27)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '$') ADVANCE(182);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '[') ADVANCE(174);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == ',') ADVANCE(270);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(273);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(273);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(273);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(181);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(44);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '\\') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'V') ADVANCE(187);
      if (lookahead == '\\') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 37:
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 38:
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == 'A') ADVANCE(167);
      if (lookahead == 'F') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 39:
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(220);
      if (lookahead == 'F') ADVANCE(221);
      if (lookahead == 'R') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 40:
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == 'R') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 41:
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == 'A') ADVANCE(266);
      if (lookahead == 'F') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(268);
      if (lookahead == '\\') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 42:
      if (lookahead == '$') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 43:
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '(') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') SKIP(15)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == '\\') SKIP(5)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == '\\') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == '\\') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') SKIP(21)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == '\\') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'G') ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(122);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 68:
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69)
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '[') ADVANCE(273);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'q') ADVANCE(82);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == '{') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 89:
      if (eof) ADVANCE(101);
      if (lookahead == '\n') SKIP(95)
      END_STATE();
    case 90:
      if (eof) ADVANCE(101);
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 91:
      if (eof) ADVANCE(101);
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 92:
      if (eof) ADVANCE(101);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(179);
      if (lookahead == '\'') ADVANCE(149);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(92)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 93:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == 'A') ADVANCE(257);
      if (lookahead == 'F') ADVANCE(258);
      if (lookahead == 'V') ADVANCE(250);
      if (lookahead == '\\') SKIP(91)
      if (lookahead == '_') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(269);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 94:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'V') ADVANCE(187);
      if (lookahead == '\\') SKIP(89)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 95:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'V') ADVANCE(187);
      if (lookahead == '\\') SKIP(89)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 96:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'V') ADVANCE(187);
      if (lookahead == '\\') SKIP(90)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 97:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == 'A') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'V') ADVANCE(187);
      if (lookahead == '\\') SKIP(91)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 98:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'F') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(174);
      END_STATE();
    case 99:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == ':') ADVANCE(227);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(218);
      if (lookahead == 'V') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 100:
      if (eof) ADVANCE(101);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(180);
      if (lookahead == '@') ADVANCE(249);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'F') ADVANCE(240);
      if (lookahead == 'V') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(248);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(97)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(205);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(19);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_option_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'I') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'S') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(87);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead == '(') ADVANCE(87);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'E') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(119);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'N') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'N') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'U') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'I') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'M') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'O') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'R') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'R') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'R') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'G') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'M') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'N') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'O') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'U') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(141);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 94},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 98},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 99},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 98},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 100},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 100},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 38, .external_lex_state = 2},
  [22] = {.lex_state = 94},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 39, .external_lex_state = 2},
  [25] = {.lex_state = 39, .external_lex_state = 2},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 38, .external_lex_state = 2},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 39, .external_lex_state = 2},
  [33] = {.lex_state = 94},
  [34] = {.lex_state = 99},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 94},
  [37] = {.lex_state = 98},
  [38] = {.lex_state = 99},
  [39] = {.lex_state = 99},
  [40] = {.lex_state = 40, .external_lex_state = 2},
  [41] = {.lex_state = 40, .external_lex_state = 2},
  [42] = {.lex_state = 100},
  [43] = {.lex_state = 41, .external_lex_state = 2},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 41, .external_lex_state = 2},
  [48] = {.lex_state = 94},
  [49] = {.lex_state = 94},
  [50] = {.lex_state = 94},
  [51] = {.lex_state = 100},
  [52] = {.lex_state = 94},
  [53] = {.lex_state = 39, .external_lex_state = 2},
  [54] = {.lex_state = 94},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 93},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 39, .external_lex_state = 2},
  [62] = {.lex_state = 51, .external_lex_state = 2},
  [63] = {.lex_state = 94},
  [64] = {.lex_state = 39, .external_lex_state = 2},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 38, .external_lex_state = 2},
  [68] = {.lex_state = 38, .external_lex_state = 2},
  [69] = {.lex_state = 94},
  [70] = {.lex_state = 94},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 94},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 94},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 94, .external_lex_state = 3},
  [91] = {.lex_state = 31},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 94, .external_lex_state = 3},
  [95] = {.lex_state = 94},
  [96] = {.lex_state = 40, .external_lex_state = 2},
  [97] = {.lex_state = 40, .external_lex_state = 2},
  [98] = {.lex_state = 94},
  [99] = {.lex_state = 94},
  [100] = {.lex_state = 94},
  [101] = {.lex_state = 94},
  [102] = {.lex_state = 94},
  [103] = {.lex_state = 94},
  [104] = {.lex_state = 94},
  [105] = {.lex_state = 94},
  [106] = {.lex_state = 94},
  [107] = {.lex_state = 94},
  [108] = {.lex_state = 94},
  [109] = {.lex_state = 94},
  [110] = {.lex_state = 94},
  [111] = {.lex_state = 94},
  [112] = {.lex_state = 94},
  [113] = {.lex_state = 41, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 94},
  [116] = {.lex_state = 94},
  [117] = {.lex_state = 94},
  [118] = {.lex_state = 41, .external_lex_state = 2},
  [119] = {.lex_state = 94},
  [120] = {.lex_state = 94},
  [121] = {.lex_state = 94},
  [122] = {.lex_state = 94},
  [123] = {.lex_state = 94},
  [124] = {.lex_state = 94},
  [125] = {.lex_state = 30},
  [126] = {.lex_state = 94},
  [127] = {.lex_state = 94},
  [128] = {.lex_state = 94},
  [129] = {.lex_state = 94},
  [130] = {.lex_state = 94},
  [131] = {.lex_state = 94},
  [132] = {.lex_state = 94},
  [133] = {.lex_state = 94},
  [134] = {.lex_state = 94},
  [135] = {.lex_state = 94},
  [136] = {.lex_state = 37},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 69},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 31},
  [148] = {.lex_state = 31},
  [149] = {.lex_state = 69},
  [150] = {.lex_state = 20},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 37},
  [153] = {.lex_state = 31},
  [154] = {.lex_state = 42},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 20},
  [159] = {.lex_state = 20},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 20},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 20},
  [166] = {.lex_state = 31},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 20},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 51},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 53},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 83},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 51},
  [211] = {.lex_state = 83},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 83},
  [214] = {.lex_state = 83},
  [215] = {.lex_state = 83},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 53},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 83},
  [221] = {.lex_state = 83},
  [222] = {.lex_state = 83},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 83},
  [225] = {.lex_state = 83},
  [226] = {.lex_state = 51},
  [227] = {.lex_state = 83},
  [228] = {.lex_state = 83},
  [229] = {.lex_state = 83},
  [230] = {.lex_state = 83},
  [231] = {.lex_state = 22},
  [232] = {.lex_state = 22},
  [233] = {.lex_state = 22},
  [234] = {.lex_state = 22},
  [235] = {.lex_state = 22},
  [236] = {.lex_state = 22},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 22},
  [239] = {.lex_state = 22},
  [240] = {.lex_state = 22},
  [241] = {.lex_state = 53},
  [242] = {.lex_state = 22},
  [243] = {.lex_state = 22},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 22},
  [246] = {.lex_state = 22},
  [247] = {.lex_state = 22},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 22},
  [250] = {.lex_state = 22},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 53},
  [253] = {.lex_state = 22},
  [254] = {.lex_state = 22},
  [255] = {.lex_state = 22},
  [256] = {.lex_state = 22},
  [257] = {.lex_state = 86},
  [258] = {.lex_state = 53},
  [259] = {.lex_state = 53},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 86},
  [262] = {.lex_state = 12},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 86},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 12},
  [274] = {.lex_state = 12},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 12},
  [280] = {.lex_state = 12},
  [281] = {.lex_state = 53},
  [282] = {.lex_state = 12},
  [283] = {.lex_state = 12},
  [284] = {.lex_state = 12},
  [285] = {.lex_state = 12},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 12},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 12},
  [290] = {.lex_state = 12},
  [291] = {.lex_state = 12},
  [292] = {.lex_state = 88},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 12},
  [306] = {.lex_state = 53},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 53},
  [309] = {.lex_state = 88},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 12},
  [314] = {.lex_state = 88},
  [315] = {.lex_state = 88},
  [316] = {.lex_state = 88},
  [317] = {.lex_state = 88},
  [318] = {.lex_state = 88},
  [319] = {.lex_state = 88},
  [320] = {.lex_state = 88},
  [321] = {.lex_state = 88},
  [322] = {.lex_state = 88},
  [323] = {.lex_state = 88},
  [324] = {.lex_state = 86},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_version_major_minor] = ACTIONS(1),
    [anon_sym_DASH_DASH2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [sym_double_quoted_escape_sequence] = ACTIONS(1),
    [sym_single_quoted_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(310),
    [sym_version_command] = STATE(33),
    [sym_arg_command] = STATE(33),
    [sym_from_command] = STATE(33),
    [sym_target] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_VERSION] = ACTIONS(5),
    [anon_sym_ARG] = ACTIONS(7),
    [anon_sym_FROM] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(23), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(237), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [28] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(25), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(233), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [56] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(34), 1,
      anon_sym_BSLASH2,
    ACTIONS(37), 1,
      anon_sym_DOLLAR2,
    STATE(4), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(29), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      sym_identifier,
      sym_comment,
  [82] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(40), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(243), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [110] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(42), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(249), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [138] = 5,
    ACTIONS(48), 1,
      anon_sym_DOLLAR2,
    ACTIONS(50), 1,
      aux_sym_image_name_token2,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(13), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(46), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [162] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(52), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(239), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [190] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(54), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(240), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [218] = 6,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(62), 1,
      anon_sym_BSLASH2,
    ACTIONS(64), 1,
      anon_sym_DOLLAR2,
    STATE(4), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(58), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      sym_identifier,
      sym_comment,
  [244] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(66), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(232), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [272] = 5,
    ACTIONS(48), 1,
      anon_sym_DOLLAR2,
    ACTIONS(72), 1,
      aux_sym_image_name_token2,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(7), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(70), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [296] = 5,
    ACTIONS(78), 1,
      anon_sym_DOLLAR2,
    ACTIONS(81), 1,
      aux_sym_image_name_token2,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(13), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(76), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [320] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(84), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(57), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(254), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [348] = 6,
    ACTIONS(64), 1,
      anon_sym_DOLLAR2,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(10), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(87), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [373] = 5,
    ACTIONS(96), 1,
      anon_sym_DOLLAR2,
    ACTIONS(99), 1,
      aux_sym_image_tag_token1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(94), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [396] = 6,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_DOLLAR2,
    ACTIONS(106), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(27), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(161), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [421] = 5,
    ACTIONS(114), 1,
      anon_sym_DOLLAR2,
    ACTIONS(116), 1,
      aux_sym_image_tag_token1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(16), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(112), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [444] = 6,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      anon_sym_DOLLAR2,
    ACTIONS(122), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(31), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(166), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [469] = 6,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(126), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(251), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [494] = 6,
    ACTIONS(27), 1,
      sym__dedent,
    ACTIONS(130), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(133), 1,
      anon_sym_BSLASH2,
    ACTIONS(136), 1,
      anon_sym_DOLLAR2,
    STATE(21), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(29), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [518] = 7,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      anon_sym_VERSION,
    ACTIONS(144), 1,
      anon_sym_ARG,
    ACTIONS(147), 1,
      anon_sym_FROM,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(153), 1,
      sym_comment,
    STATE(22), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [544] = 10,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(160), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      anon_sym_PLUS,
    ACTIONS(164), 1,
      aux_sym_image_name_token1,
    STATE(12), 1,
      sym_expansion,
    STATE(36), 1,
      sym_image_name,
    STATE(50), 1,
      sym_target_ref,
    STATE(101), 1,
      sym_image_spec,
    STATE(160), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [576] = 5,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      aux_sym_image_name_token2,
    ACTIONS(68), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(70), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [598] = 5,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(170), 1,
      aux_sym_image_name_token2,
    ACTIONS(44), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(46), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [620] = 10,
    ACTIONS(158), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      anon_sym_DOLLAR,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(178), 1,
      aux_sym_image_name_token1,
    STATE(24), 1,
      sym_expansion,
    STATE(62), 1,
      sym_image_name,
    STATE(93), 1,
      sym_target_ref,
    STATE(179), 1,
      sym_image_spec,
    STATE(163), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [652] = 6,
    ACTIONS(56), 1,
      sym__dedent,
    ACTIONS(108), 1,
      anon_sym_DOLLAR2,
    ACTIONS(180), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(182), 1,
      anon_sym_BSLASH2,
    STATE(21), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(58), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [676] = 5,
    ACTIONS(188), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      aux_sym_image_digest_token1,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(28), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(186), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [698] = 6,
    ACTIONS(27), 1,
      anon_sym_DASH_DASH,
    ACTIONS(194), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(197), 1,
      anon_sym_BSLASH2,
    ACTIONS(200), 1,
      anon_sym_DOLLAR2,
    STATE(29), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(29), 4,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [722] = 5,
    ACTIONS(207), 1,
      anon_sym_DOLLAR2,
    ACTIONS(209), 1,
      aux_sym_image_digest_token1,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(28), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(205), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [744] = 6,
    ACTIONS(56), 1,
      anon_sym_DASH_DASH,
    ACTIONS(211), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(213), 1,
      anon_sym_BSLASH2,
    ACTIONS(215), 1,
      anon_sym_DOLLAR2,
    STATE(29), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(58), 4,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [768] = 5,
    ACTIONS(217), 1,
      anon_sym_DOLLAR2,
    ACTIONS(220), 1,
      aux_sym_image_name_token2,
    ACTIONS(74), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(76), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(32), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [790] = 7,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      anon_sym_ARG,
    ACTIONS(9), 1,
      anon_sym_FROM,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym_comment,
    STATE(22), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [816] = 2,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(229), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [831] = 2,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(233), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [846] = 6,
    ACTIONS(239), 1,
      anon_sym_COLON2,
    ACTIONS(241), 1,
      anon_sym_AT,
    STATE(63), 1,
      sym_image_tag,
    STATE(110), 1,
      sym_image_digest,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(237), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [869] = 2,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(229), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [884] = 2,
    ACTIONS(243), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(245), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [899] = 2,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(233), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [914] = 5,
    ACTIONS(247), 1,
      anon_sym_DOLLAR2,
    ACTIONS(249), 1,
      aux_sym_image_tag_token1,
    ACTIONS(110), 2,
      sym__dedent,
      anon_sym_AT,
    ACTIONS(112), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(41), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [935] = 5,
    ACTIONS(251), 1,
      anon_sym_DOLLAR2,
    ACTIONS(254), 1,
      aux_sym_image_tag_token1,
    ACTIONS(92), 2,
      sym__dedent,
      anon_sym_AT,
    ACTIONS(94), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(41), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [956] = 2,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(229), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [970] = 5,
    ACTIONS(203), 1,
      sym__dedent,
    ACTIONS(257), 1,
      anon_sym_DOLLAR2,
    ACTIONS(259), 1,
      aux_sym_image_digest_token1,
    ACTIONS(205), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [990] = 7,
    ACTIONS(261), 1,
      anon_sym_DASH_DASH,
    ACTIONS(263), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(265), 1,
      aux_sym_shell_fragment_token1,
    STATE(143), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(291), 1,
      sym_shell_fragment,
    ACTIONS(267), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(91), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [1014] = 4,
    ACTIONS(273), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(48), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(271), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1032] = 7,
    ACTIONS(263), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(265), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(275), 1,
      anon_sym_DASH_DASH,
    STATE(143), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(277), 1,
      sym_shell_fragment,
    ACTIONS(267), 2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    STATE(44), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [1056] = 5,
    ACTIONS(184), 1,
      sym__dedent,
    ACTIONS(277), 1,
      anon_sym_DOLLAR2,
    ACTIONS(280), 1,
      aux_sym_image_digest_token1,
    ACTIONS(186), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
    STATE(47), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1076] = 4,
    ACTIONS(273), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(49), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(285), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1094] = 4,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(49), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(289), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1112] = 4,
    ACTIONS(273), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(52), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(296), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1130] = 2,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(233), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [1144] = 4,
    ACTIONS(273), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(49), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(271), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1162] = 2,
    ACTIONS(227), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(229), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_name_token2,
  [1175] = 2,
    ACTIONS(298), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(300), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1188] = 5,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(306), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(79), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1207] = 6,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH2,
    ACTIONS(316), 1,
      anon_sym_DOLLAR2,
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1228] = 6,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH2,
    ACTIONS(323), 1,
      anon_sym_DOLLAR2,
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1249] = 5,
    ACTIONS(128), 1,
      anon_sym_DOLLAR2,
    ACTIONS(325), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(327), 1,
      anon_sym_BSLASH2,
    ACTIONS(58), 2,
      anon_sym_DASH_DASH2,
      anon_sym_PLUS,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1268] = 2,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(229), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [1281] = 2,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(233), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [1294] = 2,
    ACTIONS(243), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(245), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_name_token2,
  [1307] = 5,
    ACTIONS(329), 1,
      anon_sym_COLON2,
    ACTIONS(331), 1,
      anon_sym_AT,
    STATE(114), 1,
      sym_image_tag,
    STATE(195), 1,
      sym_image_digest,
    ACTIONS(235), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1326] = 4,
    ACTIONS(241), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_image_digest,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1343] = 2,
    ACTIONS(231), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(233), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_name_token2,
  [1356] = 2,
    ACTIONS(227), 2,
      anon_sym_DASH_DASH,
      anon_sym_BSLASH2,
    ACTIONS(229), 6,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      anon_sym_DOLLAR2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1369] = 2,
    ACTIONS(231), 2,
      anon_sym_DASH_DASH,
      anon_sym_BSLASH2,
    ACTIONS(233), 6,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      anon_sym_DOLLAR2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1382] = 2,
    ACTIONS(227), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(229), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
  [1395] = 2,
    ACTIONS(231), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(233), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
  [1408] = 2,
    ACTIONS(337), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(339), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1421] = 2,
    ACTIONS(341), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(343), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1434] = 5,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(349), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(72), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1453] = 5,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(355), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1472] = 5,
    ACTIONS(357), 1,
      anon_sym_ARG,
    ACTIONS(360), 1,
      anon_sym_FROM,
    ACTIONS(363), 1,
      anon_sym_RUN,
    ACTIONS(366), 1,
      sym__dedent,
    STATE(73), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1491] = 5,
    ACTIONS(368), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(371), 1,
      anon_sym_BSLASH2,
    ACTIONS(374), 1,
      anon_sym_DOLLAR2,
    ACTIONS(29), 2,
      anon_sym_DASH_DASH2,
      anon_sym_PLUS,
    STATE(74), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1510] = 5,
    ACTIONS(377), 1,
      anon_sym_ARG,
    ACTIONS(379), 1,
      anon_sym_FROM,
    ACTIONS(381), 1,
      anon_sym_RUN,
    ACTIONS(383), 1,
      sym__dedent,
    STATE(78), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1529] = 5,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1548] = 5,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(391), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(84), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1567] = 5,
    ACTIONS(377), 1,
      anon_sym_ARG,
    ACTIONS(379), 1,
      anon_sym_FROM,
    ACTIONS(381), 1,
      anon_sym_RUN,
    ACTIONS(393), 1,
      sym__dedent,
    STATE(73), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1586] = 5,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1605] = 5,
    ACTIONS(377), 1,
      anon_sym_ARG,
    ACTIONS(379), 1,
      anon_sym_FROM,
    ACTIONS(381), 1,
      anon_sym_RUN,
    ACTIONS(393), 1,
      sym__dedent,
    STATE(81), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1624] = 5,
    ACTIONS(377), 1,
      anon_sym_ARG,
    ACTIONS(379), 1,
      anon_sym_FROM,
    ACTIONS(381), 1,
      anon_sym_RUN,
    ACTIONS(397), 1,
      sym__dedent,
    STATE(73), 4,
      sym_arg_command,
      sym_from_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [1643] = 5,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(407), 1,
      anon_sym_DOLLAR2,
    ACTIONS(404), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1662] = 2,
    ACTIONS(410), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(412), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1675] = 5,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(353), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(82), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1694] = 5,
    ACTIONS(308), 1,
      anon_sym_DOLLAR2,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(420), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(76), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1713] = 3,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH2,
    STATE(89), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(269), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1727] = 2,
    ACTIONS(424), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1739] = 3,
    ACTIONS(428), 1,
      anon_sym_DASH_DASH2,
    STATE(88), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(287), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1753] = 3,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH2,
    STATE(88), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(283), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1767] = 3,
    ACTIONS(435), 1,
      sym__indent,
    ACTIONS(431), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(433), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1781] = 4,
    ACTIONS(439), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(442), 1,
      aux_sym_shell_fragment_token1,
    STATE(91), 2,
      sym_option,
      aux_sym_from_command_repeat1,
    ACTIONS(437), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [1797] = 3,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH2,
    STATE(88), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(269), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1811] = 3,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH2,
    STATE(92), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(294), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [1825] = 3,
    ACTIONS(448), 1,
      sym__indent,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1839] = 2,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH2,
      sym_comment,
    ACTIONS(452), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1851] = 2,
    ACTIONS(231), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(233), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_tag_token1,
  [1863] = 2,
    ACTIONS(227), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(229), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_tag_token1,
  [1875] = 2,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1886] = 2,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1897] = 2,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(464), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1908] = 2,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1919] = 2,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(468), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1930] = 2,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1941] = 2,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(476), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1952] = 2,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1963] = 2,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1974] = 2,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(488), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1985] = 2,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1996] = 2,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(496), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2007] = 2,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(500), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2018] = 2,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2029] = 2,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(508), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2040] = 2,
    ACTIONS(231), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(233), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_digest_token1,
  [2051] = 3,
    ACTIONS(331), 1,
      anon_sym_AT,
    STATE(178), 1,
      sym_image_digest,
    ACTIONS(333), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2064] = 2,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(512), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2075] = 2,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(516), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2086] = 2,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2097] = 2,
    ACTIONS(227), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(229), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      aux_sym_image_digest_token1,
  [2108] = 2,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(524), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2119] = 2,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2130] = 2,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2141] = 2,
    ACTIONS(534), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(536), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2152] = 2,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(540), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2163] = 2,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2174] = 3,
    ACTIONS(546), 1,
      anon_sym_EQ,
    ACTIONS(550), 2,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
    ACTIONS(548), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2187] = 2,
    ACTIONS(552), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(554), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2198] = 2,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(558), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2209] = 2,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(562), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2220] = 2,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(566), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2231] = 2,
    ACTIONS(568), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(570), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2242] = 2,
    ACTIONS(572), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(574), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2253] = 2,
    ACTIONS(576), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(578), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2264] = 2,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(582), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2275] = 2,
    ACTIONS(584), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(586), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2286] = 2,
    ACTIONS(588), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(590), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2297] = 2,
    ACTIONS(231), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(233), 3,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      anon_sym_PLUS,
  [2307] = 1,
    ACTIONS(337), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2315] = 1,
    ACTIONS(410), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2323] = 1,
    ACTIONS(298), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2331] = 3,
    STATE(143), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(294), 1,
      sym_shell_fragment,
    ACTIONS(267), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2343] = 3,
    ACTIONS(592), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(594), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2355] = 2,
    ACTIONS(227), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(229), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [2365] = 3,
    ACTIONS(597), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(599), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2377] = 2,
    ACTIONS(231), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(233), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [2387] = 1,
    ACTIONS(341), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2395] = 4,
    ACTIONS(603), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      aux_sym_single_quoted_string_token1,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(601), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2409] = 2,
    ACTIONS(339), 2,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
    ACTIONS(337), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2419] = 2,
    ACTIONS(412), 2,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
    ACTIONS(410), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2429] = 3,
    STATE(143), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(291), 1,
      sym_shell_fragment,
    ACTIONS(267), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2441] = 4,
    ACTIONS(605), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(601), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2455] = 3,
    ACTIONS(114), 1,
      anon_sym_DOLLAR2,
    ACTIONS(609), 1,
      aux_sym_image_tag_token1,
    STATE(18), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2467] = 2,
    ACTIONS(227), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(229), 3,
      anon_sym_DASH_DASH2,
      aux_sym_unquoted_string_token1,
      anon_sym_PLUS,
  [2477] = 2,
    ACTIONS(300), 2,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
    ACTIONS(298), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2487] = 3,
    ACTIONS(247), 1,
      anon_sym_DOLLAR2,
    ACTIONS(611), 1,
      aux_sym_image_tag_token1,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2499] = 1,
    ACTIONS(450), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2507] = 2,
    ACTIONS(343), 2,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
    ACTIONS(341), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2517] = 3,
    ACTIONS(207), 1,
      anon_sym_DOLLAR2,
    ACTIONS(613), 1,
      aux_sym_image_digest_token1,
    STATE(30), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2529] = 4,
    ACTIONS(605), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(601), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2543] = 4,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      aux_sym_single_quoted_string_token1,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(617), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2557] = 4,
    ACTIONS(625), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(627), 1,
      anon_sym_PLUS,
    STATE(45), 1,
      sym_target_ref,
    STATE(187), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [2571] = 1,
    ACTIONS(424), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [2579] = 4,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
    ACTIONS(633), 1,
      aux_sym_single_quoted_string_token1,
    STATE(146), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(629), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2593] = 4,
    ACTIONS(625), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(635), 1,
      anon_sym_PLUS,
    STATE(86), 1,
      sym_target_ref,
    STATE(187), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [2607] = 4,
    ACTIONS(639), 1,
      anon_sym_SQUOTE,
    ACTIONS(641), 1,
      aux_sym_single_quoted_string_token1,
    STATE(158), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(637), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2621] = 4,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      aux_sym_single_quoted_string_token1,
    STATE(150), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(643), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2635] = 2,
    ACTIONS(651), 2,
      anon_sym_DASH_DASH2,
      aux_sym_shell_fragment_token1,
    ACTIONS(649), 3,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
  [2645] = 2,
    ACTIONS(229), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [2655] = 3,
    ACTIONS(257), 1,
      anon_sym_DOLLAR2,
    ACTIONS(653), 1,
      aux_sym_image_digest_token1,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2667] = 4,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
    ACTIONS(659), 1,
      aux_sym_single_quoted_string_token1,
    STATE(171), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(655), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2681] = 2,
    ACTIONS(233), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [2691] = 4,
    ACTIONS(605), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
    STATE(159), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(601), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2705] = 1,
    ACTIONS(663), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2712] = 1,
    ACTIONS(556), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2719] = 1,
    ACTIONS(490), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2726] = 1,
    ACTIONS(538), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2733] = 1,
    ACTIONS(665), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2740] = 1,
    ACTIONS(667), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2747] = 1,
    ACTIONS(470), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2754] = 1,
    ACTIONS(294), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2761] = 1,
    ACTIONS(552), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2768] = 1,
    ACTIONS(462), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2775] = 1,
    ACTIONS(474), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2782] = 1,
    ACTIONS(478), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2789] = 1,
    ACTIONS(494), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2796] = 1,
    ACTIONS(482), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2803] = 1,
    ACTIONS(526), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2810] = 3,
    ACTIONS(437), 1,
      anon_sym_PLUS,
    ACTIONS(669), 1,
      anon_sym_DASH_DASH2,
    STATE(187), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [2821] = 1,
    ACTIONS(510), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2828] = 1,
    ACTIONS(514), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2835] = 1,
    ACTIONS(518), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2842] = 1,
    ACTIONS(522), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2849] = 1,
    ACTIONS(530), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2856] = 1,
    ACTIONS(534), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2863] = 1,
    ACTIONS(542), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2870] = 1,
    ACTIONS(498), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2877] = 1,
    ACTIONS(568), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2884] = 1,
    ACTIONS(572), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2891] = 1,
    ACTIONS(576), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2898] = 1,
    ACTIONS(584), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2905] = 1,
    ACTIONS(458), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2912] = 1,
    ACTIONS(588), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2919] = 1,
    ACTIONS(560), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_RUN,
  [2926] = 3,
    ACTIONS(672), 1,
      sym_version_major_minor,
    ACTIONS(674), 1,
      sym_feature_flag,
    STATE(226), 1,
      aux_sym_version_command_repeat1,
  [2936] = 3,
    ACTIONS(676), 1,
      anon_sym_LF,
    ACTIONS(678), 1,
      anon_sym_EQ,
    ACTIONS(680), 1,
      sym_comment,
  [2946] = 3,
    ACTIONS(682), 1,
      sym_identifier,
    ACTIONS(684), 1,
      sym_required,
    ACTIONS(686), 1,
      sym_global,
  [2956] = 3,
    ACTIONS(688), 1,
      anon_sym_LF,
    ACTIONS(690), 1,
      anon_sym_EQ,
    ACTIONS(692), 1,
      sym_comment,
  [2966] = 3,
    ACTIONS(694), 1,
      anon_sym_LF,
    ACTIONS(696), 1,
      anon_sym_EQ,
    ACTIONS(698), 1,
      sym_comment,
  [2976] = 3,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      sym_variable,
    STATE(167), 1,
      sym__expansion_body,
  [2986] = 3,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(708), 1,
      sym_comment,
  [2996] = 3,
    ACTIONS(710), 1,
      sym_version_major_minor,
    ACTIONS(712), 1,
      sym_feature_flag,
    STATE(203), 1,
      aux_sym_version_command_repeat1,
  [3006] = 3,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
    ACTIONS(716), 1,
      sym_variable,
    STATE(61), 1,
      sym__expansion_body,
  [3016] = 3,
    ACTIONS(718), 1,
      anon_sym_LF,
    ACTIONS(720), 1,
      anon_sym_EQ,
    ACTIONS(722), 1,
      sym_comment,
  [3026] = 3,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
    ACTIONS(726), 1,
      sym_variable,
    STATE(59), 1,
      sym__expansion_body,
  [3036] = 3,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
    ACTIONS(730), 1,
      sym_variable,
    STATE(34), 1,
      sym__expansion_body,
  [3046] = 3,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      sym_variable,
    STATE(67), 1,
      sym__expansion_body,
  [3056] = 3,
    ACTIONS(736), 1,
      anon_sym_LF,
    ACTIONS(738), 1,
      anon_sym_EQ,
    ACTIONS(740), 1,
      sym_comment,
  [3066] = 3,
    ACTIONS(742), 1,
      sym_identifier,
    ACTIONS(744), 1,
      sym_required,
    ACTIONS(746), 1,
      sym_global,
  [3076] = 3,
    ACTIONS(748), 1,
      anon_sym_LF,
    ACTIONS(750), 1,
      anon_sym_EQ,
    ACTIONS(752), 1,
      sym_comment,
  [3086] = 2,
    ACTIONS(754), 1,
      anon_sym_EQ,
    ACTIONS(548), 2,
      anon_sym_DASH_DASH2,
      anon_sym_PLUS,
  [3094] = 3,
    ACTIONS(756), 1,
      anon_sym_LBRACE,
    ACTIONS(758), 1,
      sym_variable,
    STATE(65), 1,
      sym__expansion_body,
  [3104] = 3,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
    ACTIONS(760), 1,
      sym_variable,
    STATE(38), 1,
      sym__expansion_body,
  [3114] = 3,
    ACTIONS(762), 1,
      anon_sym_LBRACE,
    ACTIONS(764), 1,
      sym_variable,
    STATE(142), 1,
      sym__expansion_body,
  [3124] = 3,
    ACTIONS(766), 1,
      anon_sym_LF,
    ACTIONS(768), 1,
      anon_sym_EQ,
    ACTIONS(770), 1,
      sym_comment,
  [3134] = 3,
    ACTIONS(772), 1,
      anon_sym_LBRACE,
    ACTIONS(774), 1,
      sym_variable,
    STATE(118), 1,
      sym__expansion_body,
  [3144] = 3,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
    ACTIONS(778), 1,
      sym_variable,
    STATE(97), 1,
      sym__expansion_body,
  [3154] = 3,
    ACTIONS(780), 1,
      sym_version_major_minor,
    ACTIONS(782), 1,
      sym_feature_flag,
    STATE(226), 1,
      aux_sym_version_command_repeat1,
  [3164] = 3,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
    ACTIONS(787), 1,
      sym_variable,
    STATE(152), 1,
      sym__expansion_body,
  [3174] = 3,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
    ACTIONS(789), 1,
      sym_variable,
    STATE(53), 1,
      sym__expansion_body,
  [3184] = 3,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(793), 1,
      sym_variable,
    STATE(42), 1,
      sym__expansion_body,
  [3194] = 3,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
    ACTIONS(797), 1,
      sym_variable,
    STATE(37), 1,
      sym__expansion_body,
  [3204] = 2,
    ACTIONS(799), 1,
      anon_sym_LF,
    ACTIONS(801), 1,
      sym_comment,
  [3211] = 2,
    ACTIONS(803), 1,
      anon_sym_LF,
    ACTIONS(805), 1,
      sym_comment,
  [3218] = 2,
    ACTIONS(807), 1,
      anon_sym_LF,
    ACTIONS(809), 1,
      sym_comment,
  [3225] = 2,
    ACTIONS(811), 1,
      anon_sym_LF,
    ACTIONS(813), 1,
      sym_comment,
  [3232] = 2,
    ACTIONS(815), 1,
      anon_sym_LF,
    ACTIONS(817), 1,
      sym_comment,
  [3239] = 2,
    ACTIONS(819), 1,
      anon_sym_LF,
    ACTIONS(821), 1,
      sym_comment,
  [3246] = 2,
    ACTIONS(823), 1,
      anon_sym_LF,
    ACTIONS(825), 1,
      sym_comment,
  [3253] = 2,
    ACTIONS(827), 1,
      anon_sym_LF,
    ACTIONS(829), 1,
      sym_comment,
  [3260] = 2,
    ACTIONS(831), 1,
      anon_sym_LF,
    ACTIONS(833), 1,
      sym_comment,
  [3267] = 2,
    ACTIONS(835), 1,
      anon_sym_LF,
    ACTIONS(837), 1,
      sym_comment,
  [3274] = 2,
    ACTIONS(839), 1,
      sym_identifier,
    ACTIONS(841), 1,
      sym_global,
  [3281] = 2,
    ACTIONS(843), 1,
      anon_sym_LF,
    ACTIONS(845), 1,
      sym_comment,
  [3288] = 2,
    ACTIONS(847), 1,
      anon_sym_LF,
    ACTIONS(849), 1,
      sym_comment,
  [3295] = 2,
    ACTIONS(851), 1,
      anon_sym_LF,
    ACTIONS(853), 1,
      sym_comment,
  [3302] = 2,
    ACTIONS(855), 1,
      anon_sym_LF,
    ACTIONS(857), 1,
      sym_comment,
  [3309] = 2,
    ACTIONS(337), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      sym_comment,
  [3316] = 2,
    ACTIONS(859), 1,
      anon_sym_LF,
    ACTIONS(861), 1,
      sym_comment,
  [3323] = 2,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(412), 1,
      sym_comment,
  [3330] = 2,
    ACTIONS(863), 1,
      anon_sym_LF,
    ACTIONS(865), 1,
      sym_comment,
  [3337] = 2,
    ACTIONS(341), 1,
      anon_sym_LF,
    ACTIONS(343), 1,
      sym_comment,
  [3344] = 1,
    ACTIONS(649), 2,
      anon_sym_DASH_DASH2,
      anon_sym_PLUS,
  [3349] = 2,
    ACTIONS(867), 1,
      sym_identifier,
    ACTIONS(869), 1,
      sym_global,
  [3356] = 2,
    ACTIONS(298), 1,
      anon_sym_LF,
    ACTIONS(300), 1,
      sym_comment,
  [3363] = 2,
    ACTIONS(871), 1,
      anon_sym_LF,
    ACTIONS(873), 1,
      sym_comment,
  [3370] = 2,
    ACTIONS(875), 1,
      anon_sym_LF,
    ACTIONS(877), 1,
      sym_comment,
  [3377] = 2,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(881), 1,
      sym_comment,
  [3384] = 1,
    ACTIONS(883), 1,
      sym_option_identifier,
  [3388] = 1,
    ACTIONS(885), 1,
      sym_identifier,
  [3392] = 1,
    ACTIONS(887), 1,
      sym_identifier,
  [3396] = 1,
    ACTIONS(889), 1,
      anon_sym_LF,
  [3400] = 1,
    ACTIONS(891), 1,
      sym_option_identifier,
  [3404] = 1,
    ACTIONS(893), 1,
      anon_sym_LF,
  [3408] = 1,
    ACTIONS(895), 1,
      anon_sym_LF,
  [3412] = 1,
    ACTIONS(897), 1,
      anon_sym_LF,
  [3416] = 1,
    ACTIONS(899), 1,
      anon_sym_LF,
  [3420] = 1,
    ACTIONS(901), 1,
      anon_sym_LF,
  [3424] = 1,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [3428] = 1,
    ACTIONS(905), 1,
      sym_option_identifier,
  [3432] = 1,
    ACTIONS(907), 1,
      anon_sym_LF,
  [3436] = 1,
    ACTIONS(909), 1,
      anon_sym_LF,
  [3440] = 1,
    ACTIONS(911), 1,
      anon_sym_LF,
  [3444] = 1,
    ACTIONS(913), 1,
      anon_sym_LF,
  [3448] = 1,
    ACTIONS(915), 1,
      anon_sym_LF,
  [3452] = 1,
    ACTIONS(917), 1,
      anon_sym_LF,
  [3456] = 1,
    ACTIONS(919), 1,
      anon_sym_LF,
  [3460] = 1,
    ACTIONS(921), 1,
      anon_sym_LF,
  [3464] = 1,
    ACTIONS(923), 1,
      anon_sym_LF,
  [3468] = 1,
    ACTIONS(925), 1,
      anon_sym_LF,
  [3472] = 1,
    ACTIONS(927), 1,
      anon_sym_LF,
  [3476] = 1,
    ACTIONS(929), 1,
      anon_sym_LF,
  [3480] = 1,
    ACTIONS(931), 1,
      sym_identifier,
  [3484] = 1,
    ACTIONS(933), 1,
      anon_sym_LF,
  [3488] = 1,
    ACTIONS(935), 1,
      anon_sym_LF,
  [3492] = 1,
    ACTIONS(937), 1,
      anon_sym_LF,
  [3496] = 1,
    ACTIONS(939), 1,
      anon_sym_LF,
  [3500] = 1,
    ACTIONS(941), 1,
      sym_identifier,
  [3504] = 1,
    ACTIONS(943), 1,
      anon_sym_LF,
  [3508] = 1,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
  [3512] = 1,
    ACTIONS(947), 1,
      anon_sym_LF,
  [3516] = 1,
    ACTIONS(949), 1,
      anon_sym_LF,
  [3520] = 1,
    ACTIONS(951), 1,
      anon_sym_LF,
  [3524] = 1,
    ACTIONS(953), 1,
      aux_sym__expansion_body_token1,
  [3528] = 1,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
  [3532] = 1,
    ACTIONS(957), 1,
      anon_sym_LF,
  [3536] = 1,
    ACTIONS(959), 1,
      anon_sym_RBRACE,
  [3540] = 1,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
  [3544] = 1,
    ACTIONS(963), 1,
      anon_sym_RBRACE,
  [3548] = 1,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
  [3552] = 1,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
  [3556] = 1,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
  [3560] = 1,
    ACTIONS(971), 1,
      anon_sym_RBRACE,
  [3564] = 1,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [3568] = 1,
    ACTIONS(975), 1,
      anon_sym_RBRACE,
  [3572] = 1,
    ACTIONS(977), 1,
      anon_sym_LF,
  [3576] = 1,
    ACTIONS(979), 1,
      anon_sym_LF,
  [3580] = 1,
    ACTIONS(981), 1,
      sym_identifier,
  [3584] = 1,
    ACTIONS(983), 1,
      anon_sym_EQ,
  [3588] = 1,
    ACTIONS(985), 1,
      sym_identifier,
  [3592] = 1,
    ACTIONS(987), 1,
      aux_sym__expansion_body_token1,
  [3596] = 1,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
  [3600] = 1,
    ACTIONS(991), 1,
      anon_sym_COLON,
  [3604] = 1,
    ACTIONS(993), 1,
      anon_sym_EQ,
  [3608] = 1,
    ACTIONS(995), 1,
      anon_sym_LF,
  [3612] = 1,
    ACTIONS(997), 1,
      aux_sym__expansion_body_token1,
  [3616] = 1,
    ACTIONS(999), 1,
      aux_sym__expansion_body_token1,
  [3620] = 1,
    ACTIONS(1001), 1,
      aux_sym__expansion_body_token1,
  [3624] = 1,
    ACTIONS(1003), 1,
      aux_sym__expansion_body_token1,
  [3628] = 1,
    ACTIONS(1005), 1,
      aux_sym__expansion_body_token1,
  [3632] = 1,
    ACTIONS(1007), 1,
      aux_sym__expansion_body_token1,
  [3636] = 1,
    ACTIONS(1009), 1,
      aux_sym__expansion_body_token1,
  [3640] = 1,
    ACTIONS(1011), 1,
      aux_sym__expansion_body_token1,
  [3644] = 1,
    ACTIONS(1013), 1,
      aux_sym__expansion_body_token1,
  [3648] = 1,
    ACTIONS(1015), 1,
      aux_sym__expansion_body_token1,
  [3652] = 1,
    ACTIONS(1017), 1,
      sym_option_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 296,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 396,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 444,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 494,
  [SMALL_STATE(22)] = 518,
  [SMALL_STATE(23)] = 544,
  [SMALL_STATE(24)] = 576,
  [SMALL_STATE(25)] = 598,
  [SMALL_STATE(26)] = 620,
  [SMALL_STATE(27)] = 652,
  [SMALL_STATE(28)] = 676,
  [SMALL_STATE(29)] = 698,
  [SMALL_STATE(30)] = 722,
  [SMALL_STATE(31)] = 744,
  [SMALL_STATE(32)] = 768,
  [SMALL_STATE(33)] = 790,
  [SMALL_STATE(34)] = 816,
  [SMALL_STATE(35)] = 831,
  [SMALL_STATE(36)] = 846,
  [SMALL_STATE(37)] = 869,
  [SMALL_STATE(38)] = 884,
  [SMALL_STATE(39)] = 899,
  [SMALL_STATE(40)] = 914,
  [SMALL_STATE(41)] = 935,
  [SMALL_STATE(42)] = 956,
  [SMALL_STATE(43)] = 970,
  [SMALL_STATE(44)] = 990,
  [SMALL_STATE(45)] = 1014,
  [SMALL_STATE(46)] = 1032,
  [SMALL_STATE(47)] = 1056,
  [SMALL_STATE(48)] = 1076,
  [SMALL_STATE(49)] = 1094,
  [SMALL_STATE(50)] = 1112,
  [SMALL_STATE(51)] = 1130,
  [SMALL_STATE(52)] = 1144,
  [SMALL_STATE(53)] = 1162,
  [SMALL_STATE(54)] = 1175,
  [SMALL_STATE(55)] = 1188,
  [SMALL_STATE(56)] = 1207,
  [SMALL_STATE(57)] = 1228,
  [SMALL_STATE(58)] = 1249,
  [SMALL_STATE(59)] = 1268,
  [SMALL_STATE(60)] = 1281,
  [SMALL_STATE(61)] = 1294,
  [SMALL_STATE(62)] = 1307,
  [SMALL_STATE(63)] = 1326,
  [SMALL_STATE(64)] = 1343,
  [SMALL_STATE(65)] = 1356,
  [SMALL_STATE(66)] = 1369,
  [SMALL_STATE(67)] = 1382,
  [SMALL_STATE(68)] = 1395,
  [SMALL_STATE(69)] = 1408,
  [SMALL_STATE(70)] = 1421,
  [SMALL_STATE(71)] = 1434,
  [SMALL_STATE(72)] = 1453,
  [SMALL_STATE(73)] = 1472,
  [SMALL_STATE(74)] = 1491,
  [SMALL_STATE(75)] = 1510,
  [SMALL_STATE(76)] = 1529,
  [SMALL_STATE(77)] = 1548,
  [SMALL_STATE(78)] = 1567,
  [SMALL_STATE(79)] = 1586,
  [SMALL_STATE(80)] = 1605,
  [SMALL_STATE(81)] = 1624,
  [SMALL_STATE(82)] = 1643,
  [SMALL_STATE(83)] = 1662,
  [SMALL_STATE(84)] = 1675,
  [SMALL_STATE(85)] = 1694,
  [SMALL_STATE(86)] = 1713,
  [SMALL_STATE(87)] = 1727,
  [SMALL_STATE(88)] = 1739,
  [SMALL_STATE(89)] = 1753,
  [SMALL_STATE(90)] = 1767,
  [SMALL_STATE(91)] = 1781,
  [SMALL_STATE(92)] = 1797,
  [SMALL_STATE(93)] = 1811,
  [SMALL_STATE(94)] = 1825,
  [SMALL_STATE(95)] = 1839,
  [SMALL_STATE(96)] = 1851,
  [SMALL_STATE(97)] = 1863,
  [SMALL_STATE(98)] = 1875,
  [SMALL_STATE(99)] = 1886,
  [SMALL_STATE(100)] = 1897,
  [SMALL_STATE(101)] = 1908,
  [SMALL_STATE(102)] = 1919,
  [SMALL_STATE(103)] = 1930,
  [SMALL_STATE(104)] = 1941,
  [SMALL_STATE(105)] = 1952,
  [SMALL_STATE(106)] = 1963,
  [SMALL_STATE(107)] = 1974,
  [SMALL_STATE(108)] = 1985,
  [SMALL_STATE(109)] = 1996,
  [SMALL_STATE(110)] = 2007,
  [SMALL_STATE(111)] = 2018,
  [SMALL_STATE(112)] = 2029,
  [SMALL_STATE(113)] = 2040,
  [SMALL_STATE(114)] = 2051,
  [SMALL_STATE(115)] = 2064,
  [SMALL_STATE(116)] = 2075,
  [SMALL_STATE(117)] = 2086,
  [SMALL_STATE(118)] = 2097,
  [SMALL_STATE(119)] = 2108,
  [SMALL_STATE(120)] = 2119,
  [SMALL_STATE(121)] = 2130,
  [SMALL_STATE(122)] = 2141,
  [SMALL_STATE(123)] = 2152,
  [SMALL_STATE(124)] = 2163,
  [SMALL_STATE(125)] = 2174,
  [SMALL_STATE(126)] = 2187,
  [SMALL_STATE(127)] = 2198,
  [SMALL_STATE(128)] = 2209,
  [SMALL_STATE(129)] = 2220,
  [SMALL_STATE(130)] = 2231,
  [SMALL_STATE(131)] = 2242,
  [SMALL_STATE(132)] = 2253,
  [SMALL_STATE(133)] = 2264,
  [SMALL_STATE(134)] = 2275,
  [SMALL_STATE(135)] = 2286,
  [SMALL_STATE(136)] = 2297,
  [SMALL_STATE(137)] = 2307,
  [SMALL_STATE(138)] = 2315,
  [SMALL_STATE(139)] = 2323,
  [SMALL_STATE(140)] = 2331,
  [SMALL_STATE(141)] = 2343,
  [SMALL_STATE(142)] = 2355,
  [SMALL_STATE(143)] = 2365,
  [SMALL_STATE(144)] = 2377,
  [SMALL_STATE(145)] = 2387,
  [SMALL_STATE(146)] = 2395,
  [SMALL_STATE(147)] = 2409,
  [SMALL_STATE(148)] = 2419,
  [SMALL_STATE(149)] = 2429,
  [SMALL_STATE(150)] = 2441,
  [SMALL_STATE(151)] = 2455,
  [SMALL_STATE(152)] = 2467,
  [SMALL_STATE(153)] = 2477,
  [SMALL_STATE(154)] = 2487,
  [SMALL_STATE(155)] = 2499,
  [SMALL_STATE(156)] = 2507,
  [SMALL_STATE(157)] = 2517,
  [SMALL_STATE(158)] = 2529,
  [SMALL_STATE(159)] = 2543,
  [SMALL_STATE(160)] = 2557,
  [SMALL_STATE(161)] = 2571,
  [SMALL_STATE(162)] = 2579,
  [SMALL_STATE(163)] = 2593,
  [SMALL_STATE(164)] = 2607,
  [SMALL_STATE(165)] = 2621,
  [SMALL_STATE(166)] = 2635,
  [SMALL_STATE(167)] = 2645,
  [SMALL_STATE(168)] = 2655,
  [SMALL_STATE(169)] = 2667,
  [SMALL_STATE(170)] = 2681,
  [SMALL_STATE(171)] = 2691,
  [SMALL_STATE(172)] = 2705,
  [SMALL_STATE(173)] = 2712,
  [SMALL_STATE(174)] = 2719,
  [SMALL_STATE(175)] = 2726,
  [SMALL_STATE(176)] = 2733,
  [SMALL_STATE(177)] = 2740,
  [SMALL_STATE(178)] = 2747,
  [SMALL_STATE(179)] = 2754,
  [SMALL_STATE(180)] = 2761,
  [SMALL_STATE(181)] = 2768,
  [SMALL_STATE(182)] = 2775,
  [SMALL_STATE(183)] = 2782,
  [SMALL_STATE(184)] = 2789,
  [SMALL_STATE(185)] = 2796,
  [SMALL_STATE(186)] = 2803,
  [SMALL_STATE(187)] = 2810,
  [SMALL_STATE(188)] = 2821,
  [SMALL_STATE(189)] = 2828,
  [SMALL_STATE(190)] = 2835,
  [SMALL_STATE(191)] = 2842,
  [SMALL_STATE(192)] = 2849,
  [SMALL_STATE(193)] = 2856,
  [SMALL_STATE(194)] = 2863,
  [SMALL_STATE(195)] = 2870,
  [SMALL_STATE(196)] = 2877,
  [SMALL_STATE(197)] = 2884,
  [SMALL_STATE(198)] = 2891,
  [SMALL_STATE(199)] = 2898,
  [SMALL_STATE(200)] = 2905,
  [SMALL_STATE(201)] = 2912,
  [SMALL_STATE(202)] = 2919,
  [SMALL_STATE(203)] = 2926,
  [SMALL_STATE(204)] = 2936,
  [SMALL_STATE(205)] = 2946,
  [SMALL_STATE(206)] = 2956,
  [SMALL_STATE(207)] = 2966,
  [SMALL_STATE(208)] = 2976,
  [SMALL_STATE(209)] = 2986,
  [SMALL_STATE(210)] = 2996,
  [SMALL_STATE(211)] = 3006,
  [SMALL_STATE(212)] = 3016,
  [SMALL_STATE(213)] = 3026,
  [SMALL_STATE(214)] = 3036,
  [SMALL_STATE(215)] = 3046,
  [SMALL_STATE(216)] = 3056,
  [SMALL_STATE(217)] = 3066,
  [SMALL_STATE(218)] = 3076,
  [SMALL_STATE(219)] = 3086,
  [SMALL_STATE(220)] = 3094,
  [SMALL_STATE(221)] = 3104,
  [SMALL_STATE(222)] = 3114,
  [SMALL_STATE(223)] = 3124,
  [SMALL_STATE(224)] = 3134,
  [SMALL_STATE(225)] = 3144,
  [SMALL_STATE(226)] = 3154,
  [SMALL_STATE(227)] = 3164,
  [SMALL_STATE(228)] = 3174,
  [SMALL_STATE(229)] = 3184,
  [SMALL_STATE(230)] = 3194,
  [SMALL_STATE(231)] = 3204,
  [SMALL_STATE(232)] = 3211,
  [SMALL_STATE(233)] = 3218,
  [SMALL_STATE(234)] = 3225,
  [SMALL_STATE(235)] = 3232,
  [SMALL_STATE(236)] = 3239,
  [SMALL_STATE(237)] = 3246,
  [SMALL_STATE(238)] = 3253,
  [SMALL_STATE(239)] = 3260,
  [SMALL_STATE(240)] = 3267,
  [SMALL_STATE(241)] = 3274,
  [SMALL_STATE(242)] = 3281,
  [SMALL_STATE(243)] = 3288,
  [SMALL_STATE(244)] = 3295,
  [SMALL_STATE(245)] = 3302,
  [SMALL_STATE(246)] = 3309,
  [SMALL_STATE(247)] = 3316,
  [SMALL_STATE(248)] = 3323,
  [SMALL_STATE(249)] = 3330,
  [SMALL_STATE(250)] = 3337,
  [SMALL_STATE(251)] = 3344,
  [SMALL_STATE(252)] = 3349,
  [SMALL_STATE(253)] = 3356,
  [SMALL_STATE(254)] = 3363,
  [SMALL_STATE(255)] = 3370,
  [SMALL_STATE(256)] = 3377,
  [SMALL_STATE(257)] = 3384,
  [SMALL_STATE(258)] = 3388,
  [SMALL_STATE(259)] = 3392,
  [SMALL_STATE(260)] = 3396,
  [SMALL_STATE(261)] = 3400,
  [SMALL_STATE(262)] = 3404,
  [SMALL_STATE(263)] = 3408,
  [SMALL_STATE(264)] = 3412,
  [SMALL_STATE(265)] = 3416,
  [SMALL_STATE(266)] = 3420,
  [SMALL_STATE(267)] = 3424,
  [SMALL_STATE(268)] = 3428,
  [SMALL_STATE(269)] = 3432,
  [SMALL_STATE(270)] = 3436,
  [SMALL_STATE(271)] = 3440,
  [SMALL_STATE(272)] = 3444,
  [SMALL_STATE(273)] = 3448,
  [SMALL_STATE(274)] = 3452,
  [SMALL_STATE(275)] = 3456,
  [SMALL_STATE(276)] = 3460,
  [SMALL_STATE(277)] = 3464,
  [SMALL_STATE(278)] = 3468,
  [SMALL_STATE(279)] = 3472,
  [SMALL_STATE(280)] = 3476,
  [SMALL_STATE(281)] = 3480,
  [SMALL_STATE(282)] = 3484,
  [SMALL_STATE(283)] = 3488,
  [SMALL_STATE(284)] = 3492,
  [SMALL_STATE(285)] = 3496,
  [SMALL_STATE(286)] = 3500,
  [SMALL_STATE(287)] = 3504,
  [SMALL_STATE(288)] = 3508,
  [SMALL_STATE(289)] = 3512,
  [SMALL_STATE(290)] = 3516,
  [SMALL_STATE(291)] = 3520,
  [SMALL_STATE(292)] = 3524,
  [SMALL_STATE(293)] = 3528,
  [SMALL_STATE(294)] = 3532,
  [SMALL_STATE(295)] = 3536,
  [SMALL_STATE(296)] = 3540,
  [SMALL_STATE(297)] = 3544,
  [SMALL_STATE(298)] = 3548,
  [SMALL_STATE(299)] = 3552,
  [SMALL_STATE(300)] = 3556,
  [SMALL_STATE(301)] = 3560,
  [SMALL_STATE(302)] = 3564,
  [SMALL_STATE(303)] = 3568,
  [SMALL_STATE(304)] = 3572,
  [SMALL_STATE(305)] = 3576,
  [SMALL_STATE(306)] = 3580,
  [SMALL_STATE(307)] = 3584,
  [SMALL_STATE(308)] = 3588,
  [SMALL_STATE(309)] = 3592,
  [SMALL_STATE(310)] = 3596,
  [SMALL_STATE(311)] = 3600,
  [SMALL_STATE(312)] = 3604,
  [SMALL_STATE(313)] = 3608,
  [SMALL_STATE(314)] = 3612,
  [SMALL_STATE(315)] = 3616,
  [SMALL_STATE(316)] = 3620,
  [SMALL_STATE(317)] = 3624,
  [SMALL_STATE(318)] = 3628,
  [SMALL_STATE(319)] = 3632,
  [SMALL_STATE(320)] = 3636,
  [SMALL_STATE(321)] = 3640,
  [SMALL_STATE(322)] = 3644,
  [SMALL_STATE(323)] = 3648,
  [SMALL_STATE(324)] = 3652,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(230),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(214),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(229),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(215),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(311),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(213),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(28),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(29),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(29),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(220),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(228),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(32),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(225),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(224),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(47),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(257),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(56),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(56),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(208),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(205),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(26),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(46),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(74),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(74),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(227),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(82),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(82),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(222),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg_flag, 4, .production_id = 13),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg_flag, 4, .production_id = 13),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(324),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 4, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_from_command_repeat1, 2), SHIFT_REPEAT(261),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat1, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 11),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 11),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 5, .production_id = 6),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 5, .production_id = 6),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 6),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 6),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 10),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 10),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 8),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 8),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 2, .production_id = 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 10),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 10),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 19),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 19),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 18),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 18),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 18),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 18),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 7, .production_id = 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 7, .production_id = 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 19),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 19),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(141),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(159),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(159),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 13),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4, .production_id = 13),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 22),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 20),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 21),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2), SHIFT_REPEAT(268),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(226),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [989] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_earthfile_external_scanner_create(void);
void tree_sitter_earthfile_external_scanner_destroy(void *);
bool tree_sitter_earthfile_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_earthfile_external_scanner_serialize(void *, char *);
void tree_sitter_earthfile_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_earthfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_earthfile_external_scanner_create,
      tree_sitter_earthfile_external_scanner_destroy,
      tree_sitter_earthfile_external_scanner_scan,
      tree_sitter_earthfile_external_scanner_serialize,
      tree_sitter_earthfile_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
