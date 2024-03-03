#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  anon_sym_VERSION = 1,
  anon_sym_LF = 2,
  anon_sym_ARG = 3,
  anon_sym_EQ = 4,
  anon_sym_FROM = 5,
  anon_sym_COLON = 6,
  sym_version_major_minor = 7,
  sym_feature_flag = 8,
  anon_sym_DASH_DASH = 9,
  sym_option_identifier = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_double_quoted_string_token1 = 12,
  anon_sym_BSLASH = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_single_quoted_string_token1 = 15,
  aux_sym_unquoted_string_token1 = 16,
  anon_sym_BSLASH2 = 17,
  sym_double_quoted_escape_sequence = 18,
  sym_single_quoted_escape_sequence = 19,
  anon_sym_DOLLAR = 20,
  anon_sym_DOLLAR2 = 21,
  anon_sym_LBRACE = 22,
  aux_sym__expansion_body_token1 = 23,
  anon_sym_RBRACE = 24,
  sym_variable = 25,
  sym_identifier = 26,
  sym_comment = 27,
  sym_required = 28,
  sym_global = 29,
  sym_expr = 30,
  anon_sym_PLUS = 31,
  aux_sym_image_name_token1 = 32,
  aux_sym_image_name_token2 = 33,
  anon_sym_COLON2 = 34,
  aux_sym_image_tag_token1 = 35,
  anon_sym_AT = 36,
  aux_sym_image_digest_token1 = 37,
  sym__indent = 38,
  sym__dedent = 39,
  sym_source_file = 40,
  sym_version_command = 41,
  sym_arg_command = 42,
  sym_from_command = 43,
  sym_target = 44,
  sym_build_arg_flag = 45,
  sym_option = 46,
  sym_double_quoted_string = 47,
  sym_single_quoted_string = 48,
  sym_unquoted_string = 49,
  sym_expansion = 50,
  sym__immediate_expansion = 51,
  sym__imm_expansion = 52,
  sym__expansion_body = 53,
  sym_target_ref = 54,
  sym_image_spec = 55,
  sym_image_name = 56,
  sym_image_tag = 57,
  sym_image_digest = 58,
  sym__string = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_version_command_repeat1 = 61,
  aux_sym_from_command_repeat1 = 62,
  aux_sym_from_command_repeat2 = 63,
  aux_sym_target_repeat1 = 64,
  aux_sym_double_quoted_string_repeat1 = 65,
  aux_sym_single_quoted_string_repeat1 = 66,
  aux_sym_unquoted_string_repeat1 = 67,
  aux_sym_image_name_repeat1 = 68,
  aux_sym_image_tag_repeat1 = 69,
  aux_sym_image_digest_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_LF] = "\n",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_FROM] = "FROM",
  [anon_sym_COLON] = ":",
  [sym_version_major_minor] = "version_major_minor",
  [sym_feature_flag] = "feature_flag",
  [anon_sym_DASH_DASH] = "--",
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
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_version_command] = "version_command",
  [sym_arg_command] = "arg_command",
  [sym_from_command] = "from_command",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_feature_flag] = sym_feature_flag,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
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
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_version_command] = sym_version_command,
  [sym_arg_command] = sym_arg_command,
  [sym_from_command] = sym_from_command,
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
  [anon_sym_DASH_DASH] = {
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
};

enum ts_field_identifiers {
  field_default_value = 1,
  field_default_value_expr = 2,
  field_digest = 3,
  field_feature = 4,
  field_global = 5,
  field_name = 6,
  field_required = 7,
  field_tag = 8,
  field_value = 9,
  field_version = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [5] = 4,
  [6] = 6,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 2,
  [12] = 12,
  [13] = 13,
  [14] = 6,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 8,
  [27] = 12,
  [28] = 28,
  [29] = 29,
  [30] = 10,
  [31] = 29,
  [32] = 32,
  [33] = 9,
  [34] = 13,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 15,
  [41] = 29,
  [42] = 42,
  [43] = 19,
  [44] = 44,
  [45] = 45,
  [46] = 23,
  [47] = 29,
  [48] = 48,
  [49] = 25,
  [50] = 8,
  [51] = 51,
  [52] = 52,
  [53] = 10,
  [54] = 54,
  [55] = 55,
  [56] = 8,
  [57] = 52,
  [58] = 48,
  [59] = 48,
  [60] = 52,
  [61] = 61,
  [62] = 10,
  [63] = 35,
  [64] = 64,
  [65] = 65,
  [66] = 32,
  [67] = 67,
  [68] = 68,
  [69] = 28,
  [70] = 29,
  [71] = 29,
  [72] = 35,
  [73] = 35,
  [74] = 74,
  [75] = 75,
  [76] = 42,
  [77] = 38,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 45,
  [82] = 29,
  [83] = 83,
  [84] = 84,
  [85] = 35,
  [86] = 86,
  [87] = 87,
  [88] = 44,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 37,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
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
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 64,
  [123] = 35,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 132,
  [133] = 35,
  [134] = 29,
  [135] = 35,
  [136] = 29,
  [137] = 35,
  [138] = 29,
  [139] = 124,
  [140] = 129,
  [141] = 125,
  [142] = 128,
  [143] = 29,
  [144] = 54,
  [145] = 67,
  [146] = 146,
  [147] = 61,
  [148] = 65,
  [149] = 55,
  [150] = 74,
  [151] = 90,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 91,
  [158] = 158,
  [159] = 105,
  [160] = 100,
  [161] = 93,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 99,
  [167] = 162,
  [168] = 168,
  [169] = 158,
  [170] = 83,
  [171] = 84,
  [172] = 168,
  [173] = 89,
  [174] = 152,
  [175] = 95,
  [176] = 152,
  [177] = 152,
  [178] = 108,
  [179] = 109,
  [180] = 110,
  [181] = 112,
  [182] = 116,
  [183] = 117,
  [184] = 119,
  [185] = 114,
  [186] = 115,
  [187] = 118,
  [188] = 120,
  [189] = 107,
  [190] = 106,
  [191] = 96,
  [192] = 94,
  [193] = 152,
  [194] = 194,
  [195] = 152,
  [196] = 97,
  [197] = 87,
  [198] = 152,
  [199] = 152,
  [200] = 200,
  [201] = 164,
  [202] = 165,
  [203] = 152,
  [204] = 152,
  [205] = 65,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 54,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 55,
  [215] = 215,
  [216] = 211,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 61,
  [221] = 209,
  [222] = 222,
  [223] = 208,
  [224] = 213,
  [225] = 225,
  [226] = 206,
  [227] = 212,
  [228] = 222,
  [229] = 218,
  [230] = 225,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 232,
  [240] = 233,
  [241] = 232,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 251,
  [253] = 253,
  [254] = 231,
  [255] = 255,
  [256] = 243,
  [257] = 237,
  [258] = 235,
  [259] = 234,
  [260] = 260,
  [261] = 247,
  [262] = 238,
  [263] = 248,
  [264] = 264,
  [265] = 232,
  [266] = 232,
  [267] = 232,
  [268] = 232,
  [269] = 232,
  [270] = 232,
  [271] = 232,
  [272] = 232,
  [273] = 244,
  [274] = 274,
  [275] = 242,
  [276] = 253,
  [277] = 264,
  [278] = 274,
  [279] = 279,
  [280] = 280,
  [281] = 249,
  [282] = 245,
  [283] = 274,
  [284] = 274,
  [285] = 274,
  [286] = 274,
  [287] = 274,
  [288] = 274,
  [289] = 274,
  [290] = 274,
  [291] = 274,
  [292] = 246,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '}') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '\'') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(146);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '$') ADVANCE(148);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(174);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '\\') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '\\') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(45)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') SKIP(1)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '$') ADVANCE(151);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '\\') SKIP(3)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') SKIP(5)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 27:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '+') ADVANCE(173);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(144);
      END_STATE();
    case 28:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'F') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(144);
      END_STATE();
    case 29:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(208);
      if (lookahead == 'F') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'F') ADVANCE(231);
      if (lookahead == '\\') SKIP(10)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 32:
      if (lookahead == '$') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 33:
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '(') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\\') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == '\\') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == '\\') SKIP(8)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') SKIP(21)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '{') ADVANCE(152);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == '\\') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == '\\') SKIP(10)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == 'q') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 70:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(74)
      END_STATE();
    case 71:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 72:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(79)
      END_STATE();
    case 73:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(78)
      END_STATE();
    case 74:
      if (eof) ADVANCE(83);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') SKIP(70)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 75:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(223);
      if (lookahead == 'V') ADVANCE(215);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == '_') ADVANCE(167);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= ':')) ADVANCE(232);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 76:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') SKIP(71)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 77:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') SKIP(73)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 78:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') SKIP(73)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 79:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '\\') SKIP(72)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 80:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'V') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(144);
      END_STATE();
    case 81:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'F') ADVANCE(186);
      if (lookahead == 'V') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(150);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'A') ADVANCE(205);
      if (lookahead == 'F') ADVANCE(206);
      if (lookahead == 'V') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(213);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(174);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_option_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(68);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead == '(') ADVANCE(68);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'G') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'I') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'M') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'N') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'O') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'E') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'M') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'O') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'O') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'R') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'R') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == 'S') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'G') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'M') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'O') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'R') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 80},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 81},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 82},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 75},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 75},
  [26] = {.lex_state = 28, .external_lex_state = 2},
  [27] = {.lex_state = 29, .external_lex_state = 2},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 80},
  [30] = {.lex_state = 28, .external_lex_state = 2},
  [31] = {.lex_state = 81},
  [32] = {.lex_state = 81},
  [33] = {.lex_state = 29, .external_lex_state = 2},
  [34] = {.lex_state = 29, .external_lex_state = 2},
  [35] = {.lex_state = 81},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 30, .external_lex_state = 2},
  [41] = {.lex_state = 82},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 30, .external_lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 31, .external_lex_state = 2},
  [47] = {.lex_state = 75},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 31, .external_lex_state = 2},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 75},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 29, .external_lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 37, .external_lex_state = 2},
  [70] = {.lex_state = 28, .external_lex_state = 2},
  [71] = {.lex_state = 29, .external_lex_state = 2},
  [72] = {.lex_state = 29, .external_lex_state = 2},
  [73] = {.lex_state = 28, .external_lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 37, .external_lex_state = 2},
  [77] = {.lex_state = 37, .external_lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 37, .external_lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 37, .external_lex_state = 2},
  [82] = {.lex_state = 30, .external_lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 30, .external_lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 37, .external_lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 37, .external_lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 37, .external_lex_state = 2},
  [103] = {.lex_state = 37, .external_lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 37, .external_lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 37, .external_lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 37, .external_lex_state = 2},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 32},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 31, .external_lex_state = 2},
  [134] = {.lex_state = 31, .external_lex_state = 2},
  [135] = {.lex_state = 27},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 32},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 37, .external_lex_state = 2},
  [145] = {.lex_state = 37, .external_lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 37, .external_lex_state = 2},
  [148] = {.lex_state = 37, .external_lex_state = 2},
  [149] = {.lex_state = 37, .external_lex_state = 2},
  [150] = {.lex_state = 37, .external_lex_state = 2},
  [151] = {.lex_state = 37, .external_lex_state = 2},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 42},
  [155] = {.lex_state = 42},
  [156] = {.lex_state = 77},
  [157] = {.lex_state = 37, .external_lex_state = 2},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 37, .external_lex_state = 2},
  [160] = {.lex_state = 37, .external_lex_state = 2},
  [161] = {.lex_state = 37, .external_lex_state = 2},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 77},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 37, .external_lex_state = 2},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 44},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 37, .external_lex_state = 2},
  [171] = {.lex_state = 37, .external_lex_state = 2},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 37, .external_lex_state = 2},
  [174] = {.lex_state = 44},
  [175] = {.lex_state = 37, .external_lex_state = 2},
  [176] = {.lex_state = 44},
  [177] = {.lex_state = 44},
  [178] = {.lex_state = 37, .external_lex_state = 2},
  [179] = {.lex_state = 37, .external_lex_state = 2},
  [180] = {.lex_state = 37, .external_lex_state = 2},
  [181] = {.lex_state = 37, .external_lex_state = 2},
  [182] = {.lex_state = 37, .external_lex_state = 2},
  [183] = {.lex_state = 37, .external_lex_state = 2},
  [184] = {.lex_state = 37, .external_lex_state = 2},
  [185] = {.lex_state = 37, .external_lex_state = 2},
  [186] = {.lex_state = 37, .external_lex_state = 2},
  [187] = {.lex_state = 37, .external_lex_state = 2},
  [188] = {.lex_state = 37, .external_lex_state = 2},
  [189] = {.lex_state = 37, .external_lex_state = 2},
  [190] = {.lex_state = 37, .external_lex_state = 2},
  [191] = {.lex_state = 37, .external_lex_state = 2},
  [192] = {.lex_state = 37, .external_lex_state = 2},
  [193] = {.lex_state = 44},
  [194] = {.lex_state = 77},
  [195] = {.lex_state = 44},
  [196] = {.lex_state = 37, .external_lex_state = 2},
  [197] = {.lex_state = 37, .external_lex_state = 2},
  [198] = {.lex_state = 44},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 44},
  [204] = {.lex_state = 44},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 14},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 14},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 14},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 14},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 42},
  [224] = {.lex_state = 14},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 14},
  [231] = {.lex_state = 42},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 16},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 67},
  [237] = {.lex_state = 16},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 42},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 67},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 42},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 16},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 42},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 69},
  [275] = {.lex_state = 42},
  [276] = {.lex_state = 16},
  [277] = {.lex_state = 42},
  [278] = {.lex_state = 69},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 44},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 69},
  [284] = {.lex_state = 69},
  [285] = {.lex_state = 69},
  [286] = {.lex_state = 69},
  [287] = {.lex_state = 69},
  [288] = {.lex_state = 69},
  [289] = {.lex_state = 69},
  [290] = {.lex_state = 69},
  [291] = {.lex_state = 69},
  [292] = {.lex_state = 67},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_version_major_minor] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [sym_double_quoted_escape_sequence] = ACTIONS(1),
    [sym_single_quoted_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(279),
    [sym_version_command] = STATE(22),
    [sym_arg_command] = STATE(22),
    [sym_from_command] = STATE(22),
    [sym_target] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
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
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(216), 4,
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
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(224), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [56] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(27), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(222), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [84] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(29), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(228), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [112] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(31), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(206), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [140] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DOLLAR2,
    ACTIONS(33), 1,
      sym_expr,
    ACTIONS(19), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(213), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [168] = 6,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(41), 1,
      anon_sym_BSLASH2,
    ACTIONS(43), 1,
      anon_sym_DOLLAR2,
    STATE(10), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(37), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
      sym_identifier,
      sym_comment,
  [194] = 5,
    ACTIONS(49), 1,
      anon_sym_DOLLAR2,
    ACTIONS(51), 1,
      aux_sym_image_name_token2,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(12), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(47), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [218] = 6,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(60), 1,
      anon_sym_BSLASH2,
    ACTIONS(63), 1,
      anon_sym_DOLLAR2,
    STATE(10), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(55), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
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
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(211), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [272] = 5,
    ACTIONS(72), 1,
      anon_sym_DOLLAR2,
    ACTIONS(75), 1,
      aux_sym_image_name_token2,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(12), 3,
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
    ACTIONS(49), 1,
      anon_sym_DOLLAR2,
    ACTIONS(82), 1,
      aux_sym_image_name_token2,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(9), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(80), 5,
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
    STATE(56), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(226), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [348] = 5,
    ACTIONS(90), 1,
      anon_sym_DOLLAR2,
    ACTIONS(93), 1,
      aux_sym_image_tag_token1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(15), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(88), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [371] = 6,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      anon_sym_DOLLAR2,
    ACTIONS(100), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(26), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(150), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [396] = 6,
    ACTIONS(43), 1,
      anon_sym_DOLLAR2,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(8), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(74), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [421] = 6,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_DOLLAR2,
    ACTIONS(110), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
    STATE(50), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(219), 4,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
      sym__string,
  [446] = 5,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(120), 1,
      aux_sym_image_tag_token1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    STATE(15), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
    ACTIONS(116), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
  [469] = 7,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      anon_sym_VERSION,
    ACTIONS(127), 1,
      anon_sym_ARG,
    ACTIONS(130), 1,
      anon_sym_FROM,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_comment,
    STATE(20), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [495] = 10,
    ACTIONS(139), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      anon_sym_DASH_DASH,
    ACTIONS(143), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      anon_sym_PLUS,
    ACTIONS(147), 1,
      aux_sym_image_name_token1,
    STATE(34), 1,
      sym_expansion,
    STATE(69), 1,
      sym_image_name,
    STATE(92), 1,
      sym_target_ref,
    STATE(196), 1,
      sym_image_spec,
    STATE(130), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [527] = 7,
    ACTIONS(5), 1,
      anon_sym_VERSION,
    ACTIONS(7), 1,
      anon_sym_ARG,
    ACTIONS(9), 1,
      anon_sym_FROM,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym_comment,
    STATE(20), 5,
      sym_version_command,
      sym_arg_command,
      sym_from_command,
      sym_target,
      aux_sym_source_file_repeat1,
  [553] = 5,
    ACTIONS(157), 1,
      anon_sym_DOLLAR2,
    ACTIONS(159), 1,
      aux_sym_image_digest_token1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(155), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [575] = 10,
    ACTIONS(141), 1,
      anon_sym_DASH_DASH,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_DOLLAR,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      aux_sym_image_name_token1,
    STATE(13), 1,
      sym_expansion,
    STATE(28), 1,
      sym_image_name,
    STATE(37), 1,
      sym_target_ref,
    STATE(97), 1,
      sym_image_spec,
    STATE(131), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [607] = 5,
    ACTIONS(173), 1,
      anon_sym_DOLLAR2,
    ACTIONS(176), 1,
      aux_sym_image_digest_token1,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(25), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
    ACTIONS(171), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [629] = 6,
    ACTIONS(35), 1,
      sym__dedent,
    ACTIONS(102), 1,
      anon_sym_DOLLAR2,
    ACTIONS(179), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(181), 1,
      anon_sym_BSLASH2,
    ACTIONS(37), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
    STATE(30), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [652] = 5,
    ACTIONS(183), 1,
      anon_sym_DOLLAR2,
    ACTIONS(186), 1,
      aux_sym_image_name_token2,
    ACTIONS(70), 2,
      anon_sym_ARG,
      anon_sym_FROM,
    ACTIONS(68), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(27), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [673] = 6,
    ACTIONS(193), 1,
      anon_sym_COLON2,
    ACTIONS(195), 1,
      anon_sym_AT,
    STATE(64), 1,
      sym_image_tag,
    STATE(91), 1,
      sym_image_digest,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(191), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [696] = 2,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(199), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [711] = 6,
    ACTIONS(53), 1,
      sym__dedent,
    ACTIONS(201), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(204), 1,
      anon_sym_BSLASH2,
    ACTIONS(207), 1,
      anon_sym_DOLLAR2,
    ACTIONS(55), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
    STATE(30), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [734] = 2,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(199), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [749] = 2,
    ACTIONS(210), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(212), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [764] = 5,
    ACTIONS(214), 1,
      anon_sym_DOLLAR2,
    ACTIONS(216), 1,
      aux_sym_image_name_token2,
    ACTIONS(47), 2,
      anon_sym_ARG,
      anon_sym_FROM,
    ACTIONS(45), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(27), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [785] = 5,
    ACTIONS(214), 1,
      anon_sym_DOLLAR2,
    ACTIONS(218), 1,
      aux_sym_image_name_token2,
    ACTIONS(80), 2,
      anon_sym_ARG,
      anon_sym_FROM,
    ACTIONS(78), 3,
      sym__dedent,
      anon_sym_COLON2,
      anon_sym_AT,
    STATE(33), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_name_repeat1,
  [806] = 2,
    ACTIONS(220), 4,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
    ACTIONS(222), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_name_token2,
  [821] = 2,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(222), 7,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
      aux_sym_unquoted_string_token1,
      sym_identifier,
      sym_comment,
  [836] = 4,
    ACTIONS(228), 1,
      anon_sym_DASH_DASH,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(42), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(226), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [854] = 4,
    ACTIONS(228), 1,
      anon_sym_DASH_DASH,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(232), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [872] = 2,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(222), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [886] = 5,
    ACTIONS(234), 1,
      anon_sym_DOLLAR2,
    ACTIONS(237), 1,
      aux_sym_image_tag_token1,
    ACTIONS(86), 2,
      sym__dedent,
      anon_sym_AT,
    ACTIONS(88), 2,
      anon_sym_ARG,
      anon_sym_FROM,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [906] = 2,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(199), 6,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      sym_comment,
      aux_sym_image_tag_token1,
  [920] = 4,
    ACTIONS(228), 1,
      anon_sym_DASH_DASH,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(242), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [938] = 5,
    ACTIONS(244), 1,
      anon_sym_DOLLAR2,
    ACTIONS(246), 1,
      aux_sym_image_tag_token1,
    ACTIONS(114), 2,
      sym__dedent,
      anon_sym_AT,
    ACTIONS(116), 2,
      anon_sym_ARG,
      anon_sym_FROM,
    STATE(40), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [958] = 4,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(250), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [976] = 4,
    ACTIONS(228), 1,
      anon_sym_DASH_DASH,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(38), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(242), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [994] = 5,
    ACTIONS(153), 1,
      sym__dedent,
    ACTIONS(255), 1,
      anon_sym_DOLLAR2,
    ACTIONS(257), 1,
      aux_sym_image_digest_token1,
    ACTIONS(155), 2,
      anon_sym_ARG,
      anon_sym_FROM,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1013] = 2,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [1026] = 5,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(265), 1,
      anon_sym_DOLLAR2,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1045] = 5,
    ACTIONS(169), 1,
      sym__dedent,
    ACTIONS(267), 1,
      anon_sym_DOLLAR2,
    ACTIONS(270), 1,
      aux_sym_image_digest_token1,
    ACTIONS(171), 2,
      anon_sym_ARG,
      anon_sym_FROM,
    STATE(49), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [1064] = 5,
    ACTIONS(112), 1,
      anon_sym_DOLLAR2,
    ACTIONS(273), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(275), 1,
      anon_sym_BSLASH2,
    ACTIONS(37), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1083] = 5,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(285), 1,
      anon_sym_DOLLAR2,
    ACTIONS(282), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1102] = 5,
    ACTIONS(265), 1,
      anon_sym_DOLLAR2,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(292), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(48), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1121] = 5,
    ACTIONS(294), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(297), 1,
      anon_sym_BSLASH2,
    ACTIONS(300), 1,
      anon_sym_DOLLAR2,
    ACTIONS(55), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS,
    STATE(53), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1140] = 2,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(305), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1153] = 2,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(309), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1166] = 6,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(311), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH2,
    ACTIONS(315), 1,
      anon_sym_DOLLAR2,
    STATE(62), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1187] = 5,
    ACTIONS(265), 1,
      anon_sym_DOLLAR2,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(321), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(59), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1206] = 5,
    ACTIONS(261), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(265), 1,
      anon_sym_DOLLAR2,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1225] = 5,
    ACTIONS(261), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(265), 1,
      anon_sym_DOLLAR2,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(51), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1244] = 5,
    ACTIONS(265), 1,
      anon_sym_DOLLAR2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(331), 2,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
    STATE(58), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1263] = 2,
    ACTIONS(333), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(335), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1276] = 6,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(340), 1,
      anon_sym_BSLASH2,
    ACTIONS(343), 1,
      anon_sym_DOLLAR2,
    STATE(62), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_unquoted_string_repeat1,
  [1297] = 2,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_DOLLAR2,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
      aux_sym_image_digest_token1,
  [1310] = 4,
    ACTIONS(195), 1,
      anon_sym_AT,
    STATE(99), 1,
      sym_image_digest,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(348), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1327] = 2,
    ACTIONS(350), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      sym_comment,
      anon_sym_PLUS,
    ACTIONS(352), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1340] = 2,
    ACTIONS(212), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      aux_sym_image_name_token2,
    ACTIONS(210), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
  [1352] = 2,
    ACTIONS(354), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      sym_comment,
    ACTIONS(356), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1364] = 3,
    ACTIONS(362), 1,
      sym__indent,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1378] = 5,
    ACTIONS(364), 1,
      anon_sym_COLON2,
    ACTIONS(366), 1,
      anon_sym_AT,
    STATE(122), 1,
      sym_image_tag,
    STATE(157), 1,
      sym_image_digest,
    ACTIONS(189), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [1396] = 2,
    ACTIONS(197), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(199), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
      aux_sym_unquoted_string_token1,
  [1408] = 2,
    ACTIONS(199), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      aux_sym_image_name_token2,
    ACTIONS(197), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
  [1420] = 2,
    ACTIONS(222), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      aux_sym_image_name_token2,
    ACTIONS(220), 4,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_COLON2,
      anon_sym_AT,
  [1432] = 2,
    ACTIONS(220), 3,
      sym__dedent,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(222), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
      aux_sym_unquoted_string_token1,
  [1444] = 2,
    ACTIONS(368), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH,
      sym_comment,
    ACTIONS(370), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1456] = 3,
    ACTIONS(376), 1,
      sym__indent,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(374), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1470] = 3,
    ACTIONS(378), 1,
      anon_sym_DASH_DASH,
    STATE(88), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(240), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [1483] = 3,
    ACTIONS(378), 1,
      anon_sym_DASH_DASH,
    STATE(88), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(230), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [1496] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(382), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1507] = 4,
    ACTIONS(384), 1,
      anon_sym_ARG,
    ACTIONS(386), 1,
      anon_sym_FROM,
    ACTIONS(388), 1,
      sym__dedent,
    STATE(102), 3,
      sym_arg_command,
      sym_from_command,
      aux_sym_target_repeat1,
  [1522] = 2,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(392), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1533] = 3,
    ACTIONS(378), 1,
      anon_sym_DASH_DASH,
    STATE(77), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(240), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [1546] = 2,
    ACTIONS(197), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(199), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      aux_sym_image_tag_token1,
  [1557] = 2,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(396), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1568] = 2,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(400), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1579] = 2,
    ACTIONS(220), 3,
      sym__dedent,
      anon_sym_DOLLAR2,
      anon_sym_AT,
    ACTIONS(222), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      aux_sym_image_tag_token1,
  [1590] = 2,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(404), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1601] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(408), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1612] = 3,
    ACTIONS(410), 1,
      anon_sym_DASH_DASH,
    STATE(88), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(248), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [1625] = 2,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(415), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1636] = 2,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(419), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1647] = 2,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1658] = 3,
    ACTIONS(378), 1,
      anon_sym_DASH_DASH,
    STATE(76), 2,
      sym_build_arg_flag,
      aux_sym_from_command_repeat2,
    ACTIONS(224), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [1671] = 2,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1682] = 2,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(431), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1693] = 2,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(435), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1704] = 2,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(439), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1715] = 2,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1726] = 2,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1737] = 2,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(447), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1748] = 2,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1759] = 2,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(455), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1770] = 4,
    ACTIONS(384), 1,
      anon_sym_ARG,
    ACTIONS(386), 1,
      anon_sym_FROM,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(111), 3,
      sym_arg_command,
      sym_from_command,
      aux_sym_target_repeat1,
  [1785] = 4,
    ACTIONS(384), 1,
      anon_sym_ARG,
    ACTIONS(386), 1,
      anon_sym_FROM,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(113), 3,
      sym_arg_command,
      sym_from_command,
      aux_sym_target_repeat1,
  [1800] = 2,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(461), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1811] = 2,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1822] = 2,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(469), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1833] = 2,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(473), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1844] = 2,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(477), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1855] = 2,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(481), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1866] = 2,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(485), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1877] = 4,
    ACTIONS(487), 1,
      anon_sym_ARG,
    ACTIONS(490), 1,
      anon_sym_FROM,
    ACTIONS(493), 1,
      sym__dedent,
    STATE(111), 3,
      sym_arg_command,
      sym_from_command,
      aux_sym_target_repeat1,
  [1892] = 2,
    ACTIONS(495), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(497), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1903] = 4,
    ACTIONS(384), 1,
      anon_sym_ARG,
    ACTIONS(386), 1,
      anon_sym_FROM,
    ACTIONS(499), 1,
      sym__dedent,
    STATE(111), 3,
      sym_arg_command,
      sym_from_command,
      aux_sym_target_repeat1,
  [1918] = 2,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(503), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1929] = 2,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(507), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1940] = 2,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(511), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1951] = 2,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(515), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1962] = 2,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(519), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1973] = 2,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(523), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1984] = 2,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(527), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [1995] = 2,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(531), 4,
      anon_sym_VERSION,
      anon_sym_ARG,
      anon_sym_FROM,
      sym_identifier,
  [2006] = 3,
    ACTIONS(366), 1,
      anon_sym_AT,
    STATE(166), 1,
      sym_image_digest,
    ACTIONS(346), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2018] = 2,
    ACTIONS(220), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(222), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [2028] = 4,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
    ACTIONS(537), 1,
      aux_sym_single_quoted_string_token1,
    STATE(132), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(533), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2042] = 4,
    ACTIONS(541), 1,
      anon_sym_SQUOTE,
    ACTIONS(543), 1,
      aux_sym_single_quoted_string_token1,
    STATE(124), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(539), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2056] = 4,
    ACTIONS(537), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
    STATE(132), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(533), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2070] = 4,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(551), 1,
      aux_sym_single_quoted_string_token1,
    STATE(126), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(547), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2084] = 3,
    ACTIONS(255), 1,
      anon_sym_DOLLAR2,
    ACTIONS(553), 1,
      aux_sym_image_digest_token1,
    STATE(46), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2096] = 3,
    ACTIONS(244), 1,
      anon_sym_DOLLAR2,
    ACTIONS(555), 1,
      aux_sym_image_tag_token1,
    STATE(43), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2108] = 4,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH,
    ACTIONS(559), 1,
      anon_sym_PLUS,
    STATE(81), 1,
      sym_target_ref,
    STATE(146), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [2122] = 4,
    ACTIONS(557), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      anon_sym_PLUS,
    STATE(45), 1,
      sym_target_ref,
    STATE(146), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [2136] = 4,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      aux_sym_single_quoted_string_token1,
    STATE(132), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(563), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2150] = 2,
    ACTIONS(220), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(222), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      aux_sym_image_digest_token1,
  [2160] = 2,
    ACTIONS(197), 2,
      sym__dedent,
      anon_sym_DOLLAR2,
    ACTIONS(199), 3,
      anon_sym_ARG,
      anon_sym_FROM,
      aux_sym_image_digest_token1,
  [2170] = 2,
    ACTIONS(220), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(222), 3,
      anon_sym_DASH_DASH,
      aux_sym_unquoted_string_token1,
      anon_sym_PLUS,
  [2180] = 2,
    ACTIONS(197), 2,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
    ACTIONS(199), 3,
      anon_sym_DASH_DASH,
      aux_sym_unquoted_string_token1,
      anon_sym_PLUS,
  [2190] = 2,
    ACTIONS(222), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [2200] = 2,
    ACTIONS(197), 2,
      aux_sym_double_quoted_string_token1,
      anon_sym_DOLLAR2,
    ACTIONS(199), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_double_quoted_escape_sequence,
  [2210] = 4,
    ACTIONS(537), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    STATE(132), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(533), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2224] = 3,
    ACTIONS(118), 1,
      anon_sym_DOLLAR2,
    ACTIONS(573), 1,
      aux_sym_image_tag_token1,
    STATE(19), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_tag_repeat1,
  [2236] = 4,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
    ACTIONS(579), 1,
      aux_sym_single_quoted_string_token1,
    STATE(139), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(575), 2,
      anon_sym_BSLASH,
      sym_single_quoted_escape_sequence,
  [2250] = 3,
    ACTIONS(157), 1,
      anon_sym_DOLLAR2,
    ACTIONS(581), 1,
      aux_sym_image_digest_token1,
    STATE(23), 3,
      sym__immediate_expansion,
      sym__imm_expansion,
      aux_sym_image_digest_repeat1,
  [2262] = 2,
    ACTIONS(199), 2,
      aux_sym_unquoted_string_token1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_LF,
      anon_sym_BSLASH2,
      anon_sym_DOLLAR2,
  [2272] = 1,
    ACTIONS(303), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
  [2279] = 1,
    ACTIONS(354), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
  [2286] = 3,
    ACTIONS(583), 1,
      anon_sym_DASH_DASH,
    ACTIONS(586), 1,
      anon_sym_PLUS,
    STATE(146), 2,
      sym_option,
      aux_sym_from_command_repeat1,
  [2297] = 1,
    ACTIONS(333), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
  [2304] = 1,
    ACTIONS(350), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
  [2311] = 1,
    ACTIONS(307), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
  [2318] = 1,
    ACTIONS(368), 4,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_DASH_DASH,
  [2325] = 1,
    ACTIONS(417), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2331] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      sym_variable,
    STATE(71), 1,
      sym__expansion_body,
  [2341] = 3,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym_variable,
    STATE(143), 1,
      sym__expansion_body,
  [2351] = 3,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_required,
    ACTIONS(600), 1,
      sym_global,
  [2361] = 3,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(604), 1,
      sym_required,
    ACTIONS(606), 1,
      sym_global,
  [2371] = 3,
    ACTIONS(608), 1,
      sym_version_major_minor,
    ACTIONS(610), 1,
      sym_feature_flag,
    STATE(194), 1,
      aux_sym_version_command_repeat1,
  [2381] = 1,
    ACTIONS(421), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2387] = 3,
    ACTIONS(612), 1,
      anon_sym_LF,
    ACTIONS(614), 1,
      anon_sym_EQ,
    ACTIONS(616), 1,
      sym_comment,
  [2397] = 1,
    ACTIONS(463), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2403] = 1,
    ACTIONS(449), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2409] = 1,
    ACTIONS(425), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2415] = 3,
    ACTIONS(618), 1,
      anon_sym_LF,
    ACTIONS(620), 1,
      anon_sym_EQ,
    ACTIONS(622), 1,
      sym_comment,
  [2425] = 3,
    ACTIONS(624), 1,
      sym_version_major_minor,
    ACTIONS(626), 1,
      sym_feature_flag,
    STATE(156), 1,
      aux_sym_version_command_repeat1,
  [2435] = 3,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(630), 1,
      anon_sym_EQ,
    ACTIONS(632), 1,
      sym_comment,
  [2445] = 3,
    ACTIONS(634), 1,
      anon_sym_LF,
    ACTIONS(636), 1,
      anon_sym_EQ,
    ACTIONS(638), 1,
      sym_comment,
  [2455] = 1,
    ACTIONS(445), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2461] = 3,
    ACTIONS(640), 1,
      anon_sym_LF,
    ACTIONS(642), 1,
      anon_sym_EQ,
    ACTIONS(644), 1,
      sym_comment,
  [2471] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(646), 1,
      sym_variable,
    STATE(66), 1,
      sym__expansion_body,
  [2481] = 3,
    ACTIONS(648), 1,
      anon_sym_LF,
    ACTIONS(650), 1,
      anon_sym_EQ,
    ACTIONS(652), 1,
      sym_comment,
  [2491] = 1,
    ACTIONS(394), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2497] = 1,
    ACTIONS(398), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2503] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      sym_variable,
    STATE(32), 1,
      sym__expansion_body,
  [2513] = 1,
    ACTIONS(413), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2519] = 3,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    ACTIONS(660), 1,
      sym_variable,
    STATE(70), 1,
      sym__expansion_body,
  [2529] = 1,
    ACTIONS(433), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2535] = 3,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    ACTIONS(664), 1,
      sym_variable,
    STATE(134), 1,
      sym__expansion_body,
  [2545] = 3,
    ACTIONS(666), 1,
      anon_sym_LBRACE,
    ACTIONS(668), 1,
      sym_variable,
    STATE(136), 1,
      sym__expansion_body,
  [2555] = 1,
    ACTIONS(475), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2561] = 1,
    ACTIONS(479), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2567] = 1,
    ACTIONS(483), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2573] = 1,
    ACTIONS(495), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2579] = 1,
    ACTIONS(509), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2585] = 1,
    ACTIONS(513), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2591] = 1,
    ACTIONS(521), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2597] = 1,
    ACTIONS(501), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2603] = 1,
    ACTIONS(505), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2609] = 1,
    ACTIONS(517), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2615] = 1,
    ACTIONS(525), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2621] = 1,
    ACTIONS(471), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2627] = 1,
    ACTIONS(467), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2633] = 1,
    ACTIONS(437), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2639] = 1,
    ACTIONS(429), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2645] = 3,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      sym_variable,
    STATE(41), 1,
      sym__expansion_body,
  [2655] = 3,
    ACTIONS(674), 1,
      sym_version_major_minor,
    ACTIONS(676), 1,
      sym_feature_flag,
    STATE(194), 1,
      aux_sym_version_command_repeat1,
  [2665] = 3,
    ACTIONS(654), 1,
      anon_sym_LBRACE,
    ACTIONS(679), 1,
      sym_variable,
    STATE(31), 1,
      sym__expansion_body,
  [2675] = 1,
    ACTIONS(224), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2681] = 1,
    ACTIONS(406), 3,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
  [2687] = 3,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
    ACTIONS(683), 1,
      sym_variable,
    STATE(47), 1,
      sym__expansion_body,
  [2697] = 3,
    ACTIONS(685), 1,
      anon_sym_LBRACE,
    ACTIONS(687), 1,
      sym_variable,
    STATE(29), 1,
      sym__expansion_body,
  [2707] = 2,
    ACTIONS(689), 1,
      anon_sym_EQ,
    ACTIONS(691), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS,
  [2715] = 3,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      anon_sym_EQ,
    ACTIONS(697), 1,
      sym_comment,
  [2725] = 3,
    ACTIONS(699), 1,
      anon_sym_LF,
    ACTIONS(701), 1,
      anon_sym_EQ,
    ACTIONS(703), 1,
      sym_comment,
  [2735] = 3,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(707), 1,
      sym_variable,
    STATE(138), 1,
      sym__expansion_body,
  [2745] = 3,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
    ACTIONS(711), 1,
      sym_variable,
    STATE(82), 1,
      sym__expansion_body,
  [2755] = 2,
    ACTIONS(350), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      sym_comment,
  [2762] = 2,
    ACTIONS(713), 1,
      anon_sym_LF,
    ACTIONS(715), 1,
      sym_comment,
  [2769] = 2,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 1,
      sym_comment,
  [2776] = 2,
    ACTIONS(721), 1,
      sym_identifier,
    ACTIONS(723), 1,
      sym_global,
  [2783] = 2,
    ACTIONS(725), 1,
      anon_sym_LF,
    ACTIONS(727), 1,
      sym_comment,
  [2790] = 2,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      sym_comment,
  [2797] = 2,
    ACTIONS(729), 1,
      anon_sym_LF,
    ACTIONS(731), 1,
      sym_comment,
  [2804] = 2,
    ACTIONS(733), 1,
      anon_sym_LF,
    ACTIONS(735), 1,
      sym_comment,
  [2811] = 2,
    ACTIONS(737), 1,
      anon_sym_LF,
    ACTIONS(739), 1,
      sym_comment,
  [2818] = 2,
    ACTIONS(307), 1,
      anon_sym_LF,
    ACTIONS(309), 1,
      sym_comment,
  [2825] = 2,
    ACTIONS(741), 1,
      anon_sym_LF,
    ACTIONS(743), 1,
      sym_comment,
  [2832] = 2,
    ACTIONS(745), 1,
      anon_sym_LF,
    ACTIONS(747), 1,
      sym_comment,
  [2839] = 2,
    ACTIONS(749), 1,
      anon_sym_LF,
    ACTIONS(751), 1,
      sym_comment,
  [2846] = 2,
    ACTIONS(753), 1,
      anon_sym_LF,
    ACTIONS(755), 1,
      sym_comment,
  [2853] = 1,
    ACTIONS(757), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS,
  [2858] = 2,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(335), 1,
      sym_comment,
  [2865] = 2,
    ACTIONS(759), 1,
      anon_sym_LF,
    ACTIONS(761), 1,
      sym_comment,
  [2872] = 2,
    ACTIONS(763), 1,
      anon_sym_LF,
    ACTIONS(765), 1,
      sym_comment,
  [2879] = 2,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(769), 1,
      sym_global,
  [2886] = 2,
    ACTIONS(771), 1,
      anon_sym_LF,
    ACTIONS(773), 1,
      sym_comment,
  [2893] = 2,
    ACTIONS(775), 1,
      anon_sym_LF,
    ACTIONS(777), 1,
      sym_comment,
  [2900] = 2,
    ACTIONS(779), 1,
      anon_sym_LF,
    ACTIONS(781), 1,
      sym_comment,
  [2907] = 2,
    ACTIONS(783), 1,
      anon_sym_LF,
    ACTIONS(785), 1,
      sym_comment,
  [2914] = 2,
    ACTIONS(787), 1,
      anon_sym_LF,
    ACTIONS(789), 1,
      sym_comment,
  [2921] = 2,
    ACTIONS(791), 1,
      anon_sym_LF,
    ACTIONS(793), 1,
      sym_comment,
  [2928] = 2,
    ACTIONS(795), 1,
      anon_sym_LF,
    ACTIONS(797), 1,
      sym_comment,
  [2935] = 1,
    ACTIONS(799), 1,
      sym_identifier,
  [2939] = 1,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
  [2943] = 1,
    ACTIONS(803), 1,
      anon_sym_LF,
  [2947] = 1,
    ACTIONS(805), 1,
      anon_sym_LF,
  [2951] = 1,
    ACTIONS(807), 1,
      anon_sym_LF,
  [2955] = 1,
    ACTIONS(809), 1,
      sym_option_identifier,
  [2959] = 1,
    ACTIONS(811), 1,
      anon_sym_LF,
  [2963] = 1,
    ACTIONS(813), 1,
      anon_sym_LF,
  [2967] = 1,
    ACTIONS(815), 1,
      anon_sym_RBRACE,
  [2971] = 1,
    ACTIONS(817), 1,
      anon_sym_LF,
  [2975] = 1,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
  [2979] = 1,
    ACTIONS(821), 1,
      sym_identifier,
  [2983] = 1,
    ACTIONS(823), 1,
      anon_sym_LF,
  [2987] = 1,
    ACTIONS(825), 1,
      anon_sym_LF,
  [2991] = 1,
    ACTIONS(827), 1,
      anon_sym_LF,
  [2995] = 1,
    ACTIONS(829), 1,
      sym_option_identifier,
  [2999] = 1,
    ACTIONS(831), 1,
      anon_sym_LF,
  [3003] = 1,
    ACTIONS(833), 1,
      anon_sym_LF,
  [3007] = 1,
    ACTIONS(835), 1,
      anon_sym_EQ,
  [3011] = 1,
    ACTIONS(837), 1,
      anon_sym_LF,
  [3015] = 1,
    ACTIONS(839), 1,
      anon_sym_LF,
  [3019] = 1,
    ACTIONS(841), 1,
      anon_sym_LF,
  [3023] = 1,
    ACTIONS(843), 1,
      anon_sym_LF,
  [3027] = 1,
    ACTIONS(845), 1,
      sym_identifier,
  [3031] = 1,
    ACTIONS(847), 1,
      anon_sym_LF,
  [3035] = 1,
    ACTIONS(849), 1,
      anon_sym_LF,
  [3039] = 1,
    ACTIONS(851), 1,
      anon_sym_LF,
  [3043] = 1,
    ACTIONS(853), 1,
      anon_sym_LF,
  [3047] = 1,
    ACTIONS(855), 1,
      anon_sym_LF,
  [3051] = 1,
    ACTIONS(857), 1,
      anon_sym_LF,
  [3055] = 1,
    ACTIONS(859), 1,
      anon_sym_LF,
  [3059] = 1,
    ACTIONS(861), 1,
      anon_sym_LF,
  [3063] = 1,
    ACTIONS(863), 1,
      anon_sym_LF,
  [3067] = 1,
    ACTIONS(865), 1,
      sym_identifier,
  [3071] = 1,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
  [3075] = 1,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
  [3079] = 1,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
  [3083] = 1,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
  [3087] = 1,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
  [3091] = 1,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
  [3095] = 1,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
  [3099] = 1,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
  [3103] = 1,
    ACTIONS(883), 1,
      anon_sym_LF,
  [3107] = 1,
    ACTIONS(885), 1,
      aux_sym__expansion_body_token1,
  [3111] = 1,
    ACTIONS(887), 1,
      sym_identifier,
  [3115] = 1,
    ACTIONS(889), 1,
      anon_sym_LF,
  [3119] = 1,
    ACTIONS(891), 1,
      sym_identifier,
  [3123] = 1,
    ACTIONS(893), 1,
      aux_sym__expansion_body_token1,
  [3127] = 1,
    ACTIONS(895), 1,
      ts_builtin_sym_end,
  [3131] = 1,
    ACTIONS(897), 1,
      anon_sym_COLON,
  [3135] = 1,
    ACTIONS(899), 1,
      anon_sym_EQ,
  [3139] = 1,
    ACTIONS(901), 1,
      anon_sym_LF,
  [3143] = 1,
    ACTIONS(903), 1,
      aux_sym__expansion_body_token1,
  [3147] = 1,
    ACTIONS(905), 1,
      aux_sym__expansion_body_token1,
  [3151] = 1,
    ACTIONS(907), 1,
      aux_sym__expansion_body_token1,
  [3155] = 1,
    ACTIONS(909), 1,
      aux_sym__expansion_body_token1,
  [3159] = 1,
    ACTIONS(911), 1,
      aux_sym__expansion_body_token1,
  [3163] = 1,
    ACTIONS(913), 1,
      aux_sym__expansion_body_token1,
  [3167] = 1,
    ACTIONS(915), 1,
      aux_sym__expansion_body_token1,
  [3171] = 1,
    ACTIONS(917), 1,
      aux_sym__expansion_body_token1,
  [3175] = 1,
    ACTIONS(919), 1,
      aux_sym__expansion_body_token1,
  [3179] = 1,
    ACTIONS(921), 1,
      sym_option_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 296,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 396,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 527,
  [SMALL_STATE(23)] = 553,
  [SMALL_STATE(24)] = 575,
  [SMALL_STATE(25)] = 607,
  [SMALL_STATE(26)] = 629,
  [SMALL_STATE(27)] = 652,
  [SMALL_STATE(28)] = 673,
  [SMALL_STATE(29)] = 696,
  [SMALL_STATE(30)] = 711,
  [SMALL_STATE(31)] = 734,
  [SMALL_STATE(32)] = 749,
  [SMALL_STATE(33)] = 764,
  [SMALL_STATE(34)] = 785,
  [SMALL_STATE(35)] = 806,
  [SMALL_STATE(36)] = 821,
  [SMALL_STATE(37)] = 836,
  [SMALL_STATE(38)] = 854,
  [SMALL_STATE(39)] = 872,
  [SMALL_STATE(40)] = 886,
  [SMALL_STATE(41)] = 906,
  [SMALL_STATE(42)] = 920,
  [SMALL_STATE(43)] = 938,
  [SMALL_STATE(44)] = 958,
  [SMALL_STATE(45)] = 976,
  [SMALL_STATE(46)] = 994,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1026,
  [SMALL_STATE(49)] = 1045,
  [SMALL_STATE(50)] = 1064,
  [SMALL_STATE(51)] = 1083,
  [SMALL_STATE(52)] = 1102,
  [SMALL_STATE(53)] = 1121,
  [SMALL_STATE(54)] = 1140,
  [SMALL_STATE(55)] = 1153,
  [SMALL_STATE(56)] = 1166,
  [SMALL_STATE(57)] = 1187,
  [SMALL_STATE(58)] = 1206,
  [SMALL_STATE(59)] = 1225,
  [SMALL_STATE(60)] = 1244,
  [SMALL_STATE(61)] = 1263,
  [SMALL_STATE(62)] = 1276,
  [SMALL_STATE(63)] = 1297,
  [SMALL_STATE(64)] = 1310,
  [SMALL_STATE(65)] = 1327,
  [SMALL_STATE(66)] = 1340,
  [SMALL_STATE(67)] = 1352,
  [SMALL_STATE(68)] = 1364,
  [SMALL_STATE(69)] = 1378,
  [SMALL_STATE(70)] = 1396,
  [SMALL_STATE(71)] = 1408,
  [SMALL_STATE(72)] = 1420,
  [SMALL_STATE(73)] = 1432,
  [SMALL_STATE(74)] = 1444,
  [SMALL_STATE(75)] = 1456,
  [SMALL_STATE(76)] = 1470,
  [SMALL_STATE(77)] = 1483,
  [SMALL_STATE(78)] = 1496,
  [SMALL_STATE(79)] = 1507,
  [SMALL_STATE(80)] = 1522,
  [SMALL_STATE(81)] = 1533,
  [SMALL_STATE(82)] = 1546,
  [SMALL_STATE(83)] = 1557,
  [SMALL_STATE(84)] = 1568,
  [SMALL_STATE(85)] = 1579,
  [SMALL_STATE(86)] = 1590,
  [SMALL_STATE(87)] = 1601,
  [SMALL_STATE(88)] = 1612,
  [SMALL_STATE(89)] = 1625,
  [SMALL_STATE(90)] = 1636,
  [SMALL_STATE(91)] = 1647,
  [SMALL_STATE(92)] = 1658,
  [SMALL_STATE(93)] = 1671,
  [SMALL_STATE(94)] = 1682,
  [SMALL_STATE(95)] = 1693,
  [SMALL_STATE(96)] = 1704,
  [SMALL_STATE(97)] = 1715,
  [SMALL_STATE(98)] = 1726,
  [SMALL_STATE(99)] = 1737,
  [SMALL_STATE(100)] = 1748,
  [SMALL_STATE(101)] = 1759,
  [SMALL_STATE(102)] = 1770,
  [SMALL_STATE(103)] = 1785,
  [SMALL_STATE(104)] = 1800,
  [SMALL_STATE(105)] = 1811,
  [SMALL_STATE(106)] = 1822,
  [SMALL_STATE(107)] = 1833,
  [SMALL_STATE(108)] = 1844,
  [SMALL_STATE(109)] = 1855,
  [SMALL_STATE(110)] = 1866,
  [SMALL_STATE(111)] = 1877,
  [SMALL_STATE(112)] = 1892,
  [SMALL_STATE(113)] = 1903,
  [SMALL_STATE(114)] = 1918,
  [SMALL_STATE(115)] = 1929,
  [SMALL_STATE(116)] = 1940,
  [SMALL_STATE(117)] = 1951,
  [SMALL_STATE(118)] = 1962,
  [SMALL_STATE(119)] = 1973,
  [SMALL_STATE(120)] = 1984,
  [SMALL_STATE(121)] = 1995,
  [SMALL_STATE(122)] = 2006,
  [SMALL_STATE(123)] = 2018,
  [SMALL_STATE(124)] = 2028,
  [SMALL_STATE(125)] = 2042,
  [SMALL_STATE(126)] = 2056,
  [SMALL_STATE(127)] = 2070,
  [SMALL_STATE(128)] = 2084,
  [SMALL_STATE(129)] = 2096,
  [SMALL_STATE(130)] = 2108,
  [SMALL_STATE(131)] = 2122,
  [SMALL_STATE(132)] = 2136,
  [SMALL_STATE(133)] = 2150,
  [SMALL_STATE(134)] = 2160,
  [SMALL_STATE(135)] = 2170,
  [SMALL_STATE(136)] = 2180,
  [SMALL_STATE(137)] = 2190,
  [SMALL_STATE(138)] = 2200,
  [SMALL_STATE(139)] = 2210,
  [SMALL_STATE(140)] = 2224,
  [SMALL_STATE(141)] = 2236,
  [SMALL_STATE(142)] = 2250,
  [SMALL_STATE(143)] = 2262,
  [SMALL_STATE(144)] = 2272,
  [SMALL_STATE(145)] = 2279,
  [SMALL_STATE(146)] = 2286,
  [SMALL_STATE(147)] = 2297,
  [SMALL_STATE(148)] = 2304,
  [SMALL_STATE(149)] = 2311,
  [SMALL_STATE(150)] = 2318,
  [SMALL_STATE(151)] = 2325,
  [SMALL_STATE(152)] = 2331,
  [SMALL_STATE(153)] = 2341,
  [SMALL_STATE(154)] = 2351,
  [SMALL_STATE(155)] = 2361,
  [SMALL_STATE(156)] = 2371,
  [SMALL_STATE(157)] = 2381,
  [SMALL_STATE(158)] = 2387,
  [SMALL_STATE(159)] = 2397,
  [SMALL_STATE(160)] = 2403,
  [SMALL_STATE(161)] = 2409,
  [SMALL_STATE(162)] = 2415,
  [SMALL_STATE(163)] = 2425,
  [SMALL_STATE(164)] = 2435,
  [SMALL_STATE(165)] = 2445,
  [SMALL_STATE(166)] = 2455,
  [SMALL_STATE(167)] = 2461,
  [SMALL_STATE(168)] = 2471,
  [SMALL_STATE(169)] = 2481,
  [SMALL_STATE(170)] = 2491,
  [SMALL_STATE(171)] = 2497,
  [SMALL_STATE(172)] = 2503,
  [SMALL_STATE(173)] = 2513,
  [SMALL_STATE(174)] = 2519,
  [SMALL_STATE(175)] = 2529,
  [SMALL_STATE(176)] = 2535,
  [SMALL_STATE(177)] = 2545,
  [SMALL_STATE(178)] = 2555,
  [SMALL_STATE(179)] = 2561,
  [SMALL_STATE(180)] = 2567,
  [SMALL_STATE(181)] = 2573,
  [SMALL_STATE(182)] = 2579,
  [SMALL_STATE(183)] = 2585,
  [SMALL_STATE(184)] = 2591,
  [SMALL_STATE(185)] = 2597,
  [SMALL_STATE(186)] = 2603,
  [SMALL_STATE(187)] = 2609,
  [SMALL_STATE(188)] = 2615,
  [SMALL_STATE(189)] = 2621,
  [SMALL_STATE(190)] = 2627,
  [SMALL_STATE(191)] = 2633,
  [SMALL_STATE(192)] = 2639,
  [SMALL_STATE(193)] = 2645,
  [SMALL_STATE(194)] = 2655,
  [SMALL_STATE(195)] = 2665,
  [SMALL_STATE(196)] = 2675,
  [SMALL_STATE(197)] = 2681,
  [SMALL_STATE(198)] = 2687,
  [SMALL_STATE(199)] = 2697,
  [SMALL_STATE(200)] = 2707,
  [SMALL_STATE(201)] = 2715,
  [SMALL_STATE(202)] = 2725,
  [SMALL_STATE(203)] = 2735,
  [SMALL_STATE(204)] = 2745,
  [SMALL_STATE(205)] = 2755,
  [SMALL_STATE(206)] = 2762,
  [SMALL_STATE(207)] = 2769,
  [SMALL_STATE(208)] = 2776,
  [SMALL_STATE(209)] = 2783,
  [SMALL_STATE(210)] = 2790,
  [SMALL_STATE(211)] = 2797,
  [SMALL_STATE(212)] = 2804,
  [SMALL_STATE(213)] = 2811,
  [SMALL_STATE(214)] = 2818,
  [SMALL_STATE(215)] = 2825,
  [SMALL_STATE(216)] = 2832,
  [SMALL_STATE(217)] = 2839,
  [SMALL_STATE(218)] = 2846,
  [SMALL_STATE(219)] = 2853,
  [SMALL_STATE(220)] = 2858,
  [SMALL_STATE(221)] = 2865,
  [SMALL_STATE(222)] = 2872,
  [SMALL_STATE(223)] = 2879,
  [SMALL_STATE(224)] = 2886,
  [SMALL_STATE(225)] = 2893,
  [SMALL_STATE(226)] = 2900,
  [SMALL_STATE(227)] = 2907,
  [SMALL_STATE(228)] = 2914,
  [SMALL_STATE(229)] = 2921,
  [SMALL_STATE(230)] = 2928,
  [SMALL_STATE(231)] = 2935,
  [SMALL_STATE(232)] = 2939,
  [SMALL_STATE(233)] = 2943,
  [SMALL_STATE(234)] = 2947,
  [SMALL_STATE(235)] = 2951,
  [SMALL_STATE(236)] = 2955,
  [SMALL_STATE(237)] = 2959,
  [SMALL_STATE(238)] = 2963,
  [SMALL_STATE(239)] = 2967,
  [SMALL_STATE(240)] = 2971,
  [SMALL_STATE(241)] = 2975,
  [SMALL_STATE(242)] = 2979,
  [SMALL_STATE(243)] = 2983,
  [SMALL_STATE(244)] = 2987,
  [SMALL_STATE(245)] = 2991,
  [SMALL_STATE(246)] = 2995,
  [SMALL_STATE(247)] = 2999,
  [SMALL_STATE(248)] = 3003,
  [SMALL_STATE(249)] = 3007,
  [SMALL_STATE(250)] = 3011,
  [SMALL_STATE(251)] = 3015,
  [SMALL_STATE(252)] = 3019,
  [SMALL_STATE(253)] = 3023,
  [SMALL_STATE(254)] = 3027,
  [SMALL_STATE(255)] = 3031,
  [SMALL_STATE(256)] = 3035,
  [SMALL_STATE(257)] = 3039,
  [SMALL_STATE(258)] = 3043,
  [SMALL_STATE(259)] = 3047,
  [SMALL_STATE(260)] = 3051,
  [SMALL_STATE(261)] = 3055,
  [SMALL_STATE(262)] = 3059,
  [SMALL_STATE(263)] = 3063,
  [SMALL_STATE(264)] = 3067,
  [SMALL_STATE(265)] = 3071,
  [SMALL_STATE(266)] = 3075,
  [SMALL_STATE(267)] = 3079,
  [SMALL_STATE(268)] = 3083,
  [SMALL_STATE(269)] = 3087,
  [SMALL_STATE(270)] = 3091,
  [SMALL_STATE(271)] = 3095,
  [SMALL_STATE(272)] = 3099,
  [SMALL_STATE(273)] = 3103,
  [SMALL_STATE(274)] = 3107,
  [SMALL_STATE(275)] = 3111,
  [SMALL_STATE(276)] = 3115,
  [SMALL_STATE(277)] = 3119,
  [SMALL_STATE(278)] = 3123,
  [SMALL_STATE(279)] = 3127,
  [SMALL_STATE(280)] = 3131,
  [SMALL_STATE(281)] = 3135,
  [SMALL_STATE(282)] = 3139,
  [SMALL_STATE(283)] = 3143,
  [SMALL_STATE(284)] = 3147,
  [SMALL_STATE(285)] = 3151,
  [SMALL_STATE(286)] = 3155,
  [SMALL_STATE(287)] = 3159,
  [SMALL_STATE(288)] = 3163,
  [SMALL_STATE(289)] = 3167,
  [SMALL_STATE(290)] = 3171,
  [SMALL_STATE(291)] = 3175,
  [SMALL_STATE(292)] = 3179,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(10),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(199),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(195),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(193),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(198),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(25),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(152),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(27),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__imm_expansion, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__imm_expansion, 2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(30),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(30),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(174),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(204),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(40),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(246),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(176),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(49),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(51),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(51),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(203),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(53),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(53),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(177),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(62),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(62),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(153),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 4, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 4, .production_id = 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg_flag, 4, .production_id = 13),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg_flag, 4, .production_id = 13),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 5, .production_id = 6),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 5, .production_id = 6),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 10),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 10),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 11),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 11),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(292),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 7),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 8),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 8),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 19),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 19),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 8, .production_id = 18),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 8, .production_id = 18),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 7, .production_id = 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 7, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 17),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 16),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 10),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 10),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 11),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(155),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(21),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 14),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 15),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 12),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 18),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 18),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 17),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 7, .production_id = 19),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 7, .production_id = 19),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 6),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 6),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(132),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(132),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2), SHIFT_REPEAT(236),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(194),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, .production_id = 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 13),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [895] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
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
