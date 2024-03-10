#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 26

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_FROM = 3,
  anon_sym_COLON = 4,
  anon_sym_VERSION = 5,
  anon_sym_COPY = 6,
  anon_sym_RUN = 7,
  anon_sym_DASH_DASH = 8,
  sym_expr = 9,
  sym_identifier = 10,
  anon_sym_COLON2 = 11,
  anon_sym_AT = 12,
  sym_image_name = 13,
  sym_image_tag = 14,
  sym_image_digest = 15,
  sym_immediate_identifier = 16,
  sym_path = 17,
  aux_sym_shell_fragment_token1 = 18,
  aux_sym_shell_fragment_token2 = 19,
  aux_sym_shell_fragment_token3 = 20,
  anon_sym_PLUS = 21,
  anon_sym_SLASH = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_version_major_minor = 25,
  sym_allow_privileged = 26,
  anon_sym_DASH_DASH2 = 27,
  aux_sym_build_arg_token1 = 28,
  anon_sym_DASH_DASHchmod = 29,
  anon_sym_DASH_DASHchown = 30,
  sym_dir = 31,
  sym_entrypoint = 32,
  sym_feature_flag = 33,
  sym_global = 34,
  sym_if_exists = 35,
  sym_keep_own = 36,
  sym_keep_ts = 37,
  anon_sym_DASH_DASHmount = 38,
  sym_network_none = 39,
  sym_no_cache = 40,
  sym_pass_args = 41,
  anon_sym_DASH_DASHplatform = 42,
  sym_privileged = 43,
  sym_push = 44,
  sym_required = 45,
  anon_sym_DASH_DASHsecret = 46,
  sym_ssh = 47,
  sym_symlink_no_follow = 48,
  anon_sym_DQUOTE = 49,
  aux_sym_double_quoted_string_token1 = 50,
  anon_sym_SQUOTE = 51,
  aux_sym_single_quoted_string_token1 = 52,
  sym_unquoted_string = 53,
  sym_line_continuation = 54,
  sym_comment = 55,
  sym_line_continuation_comment = 56,
  anon_sym_LF = 57,
  anon_sym_CRn = 58,
  anon_sym_FF = 59,
  sym__indent = 60,
  sym__dedent = 61,
  sym_source_file = 62,
  sym_arg_command = 63,
  sym_from_command = 64,
  sym_target = 65,
  sym_version_command = 66,
  sym_copy_command = 67,
  sym_run_command = 68,
  sym_image_spec = 69,
  sym_shell_fragment = 70,
  sym_target_ref = 71,
  sym_target_artifact = 72,
  sym_target_artifact_build_args = 73,
  sym_build_arg = 74,
  sym_chmod = 75,
  sym_chown = 76,
  sym_mount = 77,
  sym_platform = 78,
  sym_secret = 79,
  sym__string = 80,
  sym_double_quoted_string = 81,
  sym_single_quoted_string = 82,
  sym__eol = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_arg_command_repeat1 = 85,
  aux_sym_from_command_repeat1 = 86,
  aux_sym_from_command_repeat2 = 87,
  aux_sym_target_repeat1 = 88,
  aux_sym_version_command_repeat1 = 89,
  aux_sym_copy_command_repeat1 = 90,
  aux_sym_copy_command_repeat2 = 91,
  aux_sym_run_command_repeat1 = 92,
  aux_sym_shell_fragment_repeat1 = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_FROM] = "FROM",
  [anon_sym_COLON] = ":",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_COPY] = "COPY",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [sym_expr] = "expr",
  [sym_identifier] = "identifier",
  [anon_sym_COLON2] = ":",
  [anon_sym_AT] = "@",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_immediate_identifier] = "immediate_identifier",
  [sym_path] = "path",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_version_major_minor] = "version_major_minor",
  [sym_allow_privileged] = "allow_privileged",
  [anon_sym_DASH_DASH2] = "--",
  [aux_sym_build_arg_token1] = "build_arg_token1",
  [anon_sym_DASH_DASHchmod] = "--chmod",
  [anon_sym_DASH_DASHchown] = "--chown",
  [sym_dir] = "dir",
  [sym_entrypoint] = "entrypoint",
  [sym_feature_flag] = "feature_flag",
  [sym_global] = "global",
  [sym_if_exists] = "if_exists",
  [sym_keep_own] = "keep_own",
  [sym_keep_ts] = "keep_ts",
  [anon_sym_DASH_DASHmount] = "--mount",
  [sym_network_none] = "network_none",
  [sym_no_cache] = "no_cache",
  [sym_pass_args] = "pass_args",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [sym_privileged] = "privileged",
  [sym_push] = "push",
  [sym_required] = "required",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [sym_ssh] = "ssh",
  [sym_symlink_no_follow] = "symlink_no_follow",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [sym_unquoted_string] = "unquoted_string",
  [sym_line_continuation] = "line_continuation",
  [sym_comment] = "comment",
  [sym_line_continuation_comment] = "line_continuation_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CRn] = "\rn",
  [anon_sym_FF] = "\f",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_arg_command] = "arg_command",
  [sym_from_command] = "from_command",
  [sym_target] = "target",
  [sym_version_command] = "version_command",
  [sym_copy_command] = "copy_command",
  [sym_run_command] = "run_command",
  [sym_image_spec] = "image_spec",
  [sym_shell_fragment] = "shell_fragment",
  [sym_target_ref] = "target_ref",
  [sym_target_artifact] = "target_artifact",
  [sym_target_artifact_build_args] = "target_artifact_build_args",
  [sym_build_arg] = "build_arg",
  [sym_chmod] = "chmod",
  [sym_chown] = "chown",
  [sym_mount] = "mount",
  [sym_platform] = "platform",
  [sym_secret] = "secret",
  [sym__string] = "_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym__eol] = "_eol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_command_repeat1] = "arg_command_repeat1",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_from_command_repeat2] = "from_command_repeat2",
  [aux_sym_target_repeat1] = "target_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_copy_command_repeat1] = "copy_command_repeat1",
  [aux_sym_copy_command_repeat2] = "copy_command_repeat2",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_expr] = sym_expr,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_immediate_identifier] = sym_immediate_identifier,
  [sym_path] = sym_path,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_allow_privileged] = sym_allow_privileged,
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH2,
  [aux_sym_build_arg_token1] = aux_sym_build_arg_token1,
  [anon_sym_DASH_DASHchmod] = anon_sym_DASH_DASHchmod,
  [anon_sym_DASH_DASHchown] = anon_sym_DASH_DASHchown,
  [sym_dir] = sym_dir,
  [sym_entrypoint] = sym_entrypoint,
  [sym_feature_flag] = sym_feature_flag,
  [sym_global] = sym_global,
  [sym_if_exists] = sym_if_exists,
  [sym_keep_own] = sym_keep_own,
  [sym_keep_ts] = sym_keep_ts,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
  [sym_network_none] = sym_network_none,
  [sym_no_cache] = sym_no_cache,
  [sym_pass_args] = sym_pass_args,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [sym_privileged] = sym_privileged,
  [sym_push] = sym_push,
  [sym_required] = sym_required,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [sym_ssh] = sym_ssh,
  [sym_symlink_no_follow] = sym_symlink_no_follow,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_line_continuation] = sym_line_continuation,
  [sym_comment] = sym_comment,
  [sym_line_continuation_comment] = sym_line_continuation_comment,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CRn] = anon_sym_CRn,
  [anon_sym_FF] = anon_sym_FF,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_arg_command] = sym_arg_command,
  [sym_from_command] = sym_from_command,
  [sym_target] = sym_target,
  [sym_version_command] = sym_version_command,
  [sym_copy_command] = sym_copy_command,
  [sym_run_command] = sym_run_command,
  [sym_image_spec] = sym_image_spec,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_target_ref] = sym_target_ref,
  [sym_target_artifact] = sym_target_artifact,
  [sym_target_artifact_build_args] = sym_target_artifact_build_args,
  [sym_build_arg] = sym_build_arg,
  [sym_chmod] = sym_chmod,
  [sym_chown] = sym_chown,
  [sym_mount] = sym_mount,
  [sym_platform] = sym_platform,
  [sym_secret] = sym_secret,
  [sym__string] = sym__string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym__eol] = sym__eol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_command_repeat1] = aux_sym_arg_command_repeat1,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_from_command_repeat2] = aux_sym_from_command_repeat2,
  [aux_sym_target_repeat1] = aux_sym_target_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_copy_command_repeat1] = aux_sym_copy_command_repeat1,
  [aux_sym_copy_command_repeat2] = aux_sym_copy_command_repeat2,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_VERSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
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
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
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
  [sym_immediate_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_version_major_minor] = {
    .visible = true,
    .named = true,
  },
  [sym_allow_privileged] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_build_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASHchmod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHchown] = {
    .visible = true,
    .named = false,
  },
  [sym_dir] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_if_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_keep_own] = {
    .visible = true,
    .named = true,
  },
  [sym_keep_ts] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHmount] = {
    .visible = true,
    .named = false,
  },
  [sym_network_none] = {
    .visible = true,
    .named = true,
  },
  [sym_no_cache] = {
    .visible = true,
    .named = true,
  },
  [sym_pass_args] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHplatform] = {
    .visible = true,
    .named = false,
  },
  [sym_privileged] = {
    .visible = true,
    .named = true,
  },
  [sym_push] = {
    .visible = true,
    .named = true,
  },
  [sym_required] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHsecret] = {
    .visible = true,
    .named = false,
  },
  [sym_ssh] = {
    .visible = true,
    .named = true,
  },
  [sym_symlink_no_follow] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CRn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FF] = {
    .visible = true,
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
  [sym_version_command] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_command] = {
    .visible = true,
    .named = true,
  },
  [sym_run_command] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_target_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_target_artifact] = {
    .visible = true,
    .named = true,
  },
  [sym_target_artifact_build_args] = {
    .visible = true,
    .named = true,
  },
  [sym_build_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_chmod] = {
    .visible = true,
    .named = true,
  },
  [sym_chown] = {
    .visible = true,
    .named = true,
  },
  [sym_mount] = {
    .visible = true,
    .named = true,
  },
  [sym_platform] = {
    .visible = true,
    .named = true,
  },
  [sym_secret] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
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
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_command_repeat1] = {
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
  [aux_sym_version_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_command_repeat1] = {
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
  field_dest = 4,
  field_digest = 5,
  field_name = 6,
  field_option = 7,
  field_src = 8,
  field_tag = 9,
  field_value = 10,
  field_version = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_name] = "name",
  [field_option] = "option",
  [field_src] = "src",
  [field_tag] = "tag",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 3},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 5},
  [17] = {.index = 33, .length = 2},
  [18] = {.index = 35, .length = 1},
  [19] = {.index = 36, .length = 2},
  [20] = {.index = 38, .length = 1},
  [21] = {.index = 39, .length = 2},
  [22] = {.index = 41, .length = 1},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 3},
  [25] = {.index = 47, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_option, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [5] =
    {field_option, 1, .inherited = true},
  [6] =
    {field_version, 1},
  [7] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [9] =
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [12] =
    {field_digest, 1},
    {field_digest, 2},
    {field_name, 0},
  [15] =
    {field_value, 2},
  [16] =
    {field_option, 1},
    {field_version, 2},
  [18] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [20] =
    {field_default_value, 3},
    {field_name, 1},
  [22] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [25] =
    {field_default_value, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [28] =
    {field_digest, 3},
    {field_digest, 4},
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [33] =
    {field_name, 1},
    {field_value, 3},
  [35] =
    {field_src, 0},
  [36] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [38] =
    {field_command, 1},
  [39] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [41] =
    {field_command, 2},
  [42] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [44] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [47] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 12,
  [19] = 13,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 33,
  [37] = 37,
  [38] = 13,
  [39] = 39,
  [40] = 12,
  [41] = 41,
  [42] = 37,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 34,
  [51] = 51,
  [52] = 52,
  [53] = 44,
  [54] = 48,
  [55] = 55,
  [56] = 56,
  [57] = 51,
  [58] = 55,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 60,
  [67] = 62,
  [68] = 41,
  [69] = 12,
  [70] = 13,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 77,
  [84] = 84,
  [85] = 84,
  [86] = 76,
  [87] = 87,
  [88] = 88,
  [89] = 80,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 90,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 88,
  [104] = 74,
  [105] = 71,
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
  [119] = 110,
  [120] = 108,
  [121] = 116,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 125,
  [126] = 106,
  [127] = 107,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 13,
  [133] = 12,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 146,
  [156] = 156,
  [157] = 157,
  [158] = 141,
  [159] = 156,
  [160] = 154,
  [161] = 161,
  [162] = 148,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 148,
  [167] = 163,
  [168] = 148,
  [169] = 163,
  [170] = 148,
  [171] = 163,
  [172] = 163,
  [173] = 140,
  [174] = 143,
  [175] = 140,
  [176] = 143,
  [177] = 140,
  [178] = 143,
  [179] = 140,
  [180] = 143,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(152);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(148)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '#') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(266);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\f') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\f') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(321);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(182);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\f') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(182);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\f') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(323);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(265);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\f') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(265);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead == '\f') ADVANCE(326);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(322);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(261);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead == '\f') ADVANCE(326);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(261);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(302);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(306);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\f') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\f') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(320);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\f') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(277);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(265);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(265);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(265);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(261);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(261);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(261);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(186);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '(') ADVANCE(147);
      END_STATE();
    case 39:
      if (lookahead == ')') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'G') ADVANCE(153);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(156);
      END_STATE();
    case 52:
      if (lookahead == 'N') ADVANCE(162);
      END_STATE();
    case 53:
      if (lookahead == 'N') ADVANCE(159);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'Y') ADVANCE(161);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(294);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == 'q') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 140:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 141:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 142:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 143:
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 148:
      if (eof) ADVANCE(152);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(62);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(262);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(148)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 149:
      if (eof) ADVANCE(152);
      if (lookahead == ' ') ADVANCE(277);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(173);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(151)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 150:
      if (eof) ADVANCE(152);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(173);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(151)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(173);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(151)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '#') ADVANCE(181);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\f') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(309);
      if (lookahead == '#') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\f') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(198);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\f') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(300);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(313);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(311);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(312);
      if (lookahead == '\r') ADVANCE(300);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\f') ADVANCE(313);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == '\f') ADVANCE(315);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\f') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(180);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\f') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead == '\f') ADVANCE(326);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\f') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(182);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(261);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(265);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '\f') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(180);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\f') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(318);
      if (lookahead == '\f') ADVANCE(326);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(319);
      if (lookahead == '\f') ADVANCE(327);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 150},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 150},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 150},
  [26] = {.lex_state = 150},
  [27] = {.lex_state = 25, .external_lex_state = 2},
  [28] = {.lex_state = 150},
  [29] = {.lex_state = 25, .external_lex_state = 2},
  [30] = {.lex_state = 150},
  [31] = {.lex_state = 25, .external_lex_state = 2},
  [32] = {.lex_state = 150},
  [33] = {.lex_state = 150},
  [34] = {.lex_state = 149},
  [35] = {.lex_state = 25, .external_lex_state = 2},
  [36] = {.lex_state = 25, .external_lex_state = 2},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 150},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 150},
  [41] = {.lex_state = 150},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 150},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 20, .external_lex_state = 2},
  [51] = {.lex_state = 150},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 25, .external_lex_state = 2},
  [55] = {.lex_state = 150},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 25, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 150, .external_lex_state = 3},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 25, .external_lex_state = 2},
  [69] = {.lex_state = 25, .external_lex_state = 2},
  [70] = {.lex_state = 25, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 150},
  [73] = {.lex_state = 150},
  [74] = {.lex_state = 150},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 150},
  [77] = {.lex_state = 150},
  [78] = {.lex_state = 150},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 150},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 150},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 150},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 150},
  [97] = {.lex_state = 150},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 30},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 150},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 150},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 150},
  [115] = {.lex_state = 150},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 34},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 34},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 34},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 21},
  [145] = {.lex_state = 21},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 35},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 29},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 32},
  [157] = {.lex_state = 27},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 32},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 32},
  [165] = {.lex_state = 32},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_version_major_minor] = ACTIONS(1),
    [sym_entrypoint] = ACTIONS(1),
    [anon_sym_DASH_DASHmount] = ACTIONS(1),
    [sym_network_none] = ACTIONS(1),
    [sym_no_cache] = ACTIONS(1),
    [sym_privileged] = ACTIONS(1),
    [sym_push] = ACTIONS(1),
    [anon_sym_DASH_DASHsecret] = ACTIONS(1),
    [sym_ssh] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
    [anon_sym_CRn] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(152),
    [sym_arg_command] = STATE(25),
    [sym_from_command] = STATE(25),
    [sym_target] = STATE(25),
    [sym_version_command] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ARG] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(11),
    [anon_sym_VERSION] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(27), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    STATE(3), 1,
      aux_sym_copy_command_repeat1,
    STATE(43), 1,
      aux_sym_copy_command_repeat2,
    STATE(147), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(135), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(9), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(23), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [53] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(27), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    STATE(6), 1,
      aux_sym_copy_command_repeat1,
    STATE(45), 1,
      aux_sym_copy_command_repeat2,
    STATE(147), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(135), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(9), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(23), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [106] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(31), 1,
      anon_sym_DASH_DASH,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(39), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHsecret,
    STATE(5), 1,
      aux_sym_run_command_repeat1,
    STATE(39), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(122), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(15), 2,
      sym_mount,
      sym_secret,
    ACTIONS(37), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [151] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(39), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    STATE(7), 1,
      aux_sym_run_command_repeat1,
    STATE(39), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(109), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(15), 2,
      sym_mount,
      sym_secret,
    ACTIONS(37), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [196] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(45), 1,
      sym_path,
    ACTIONS(52), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(55), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(58), 1,
      anon_sym_DASH_DASHplatform,
    STATE(6), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(9), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(49), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [237] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(68), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(71), 1,
      anon_sym_DASH_DASHsecret,
    STATE(7), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(61), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(63), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(15), 2,
      sym_mount,
      sym_secret,
    ACTIONS(65), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [274] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(74), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(76), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [299] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(78), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(80), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [324] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(82), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(84), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [349] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(86), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(88), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [374] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(90), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(92), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [399] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(94), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(96), 12,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      sym_allow_privileged,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHchown,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
      sym_symlink_no_follow,
  [424] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(100), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(98), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [448] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(104), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(102), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [472] = 10,
    ACTIONS(106), 1,
      sym_image_name,
    ACTIONS(108), 1,
      anon_sym_PLUS,
    ACTIONS(110), 1,
      sym_allow_privileged,
    ACTIONS(112), 1,
      anon_sym_DASH_DASHplatform,
    STATE(28), 1,
      sym_target_ref,
    STATE(60), 1,
      aux_sym_from_command_repeat1,
    STATE(138), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    STATE(103), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(114), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [508] = 10,
    ACTIONS(110), 1,
      sym_allow_privileged,
    ACTIONS(112), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(116), 1,
      sym_image_name,
    ACTIONS(118), 1,
      anon_sym_PLUS,
    STATE(31), 1,
      sym_target_ref,
    STATE(66), 1,
      aux_sym_from_command_repeat1,
    STATE(138), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    STATE(88), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(120), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [544] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(90), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(92), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [568] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(94), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(96), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [592] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(124), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(122), 10,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
      sym_entrypoint,
      anon_sym_DASH_DASHmount,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [616] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(126), 1,
      anon_sym_ARG,
    ACTIONS(129), 1,
      anon_sym_FROM,
    ACTIONS(132), 1,
      anon_sym_COPY,
    ACTIONS(135), 1,
      anon_sym_RUN,
    ACTIONS(138), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 5,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [646] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_ARG,
    ACTIONS(145), 1,
      anon_sym_FROM,
    ACTIONS(148), 1,
      anon_sym_VERSION,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [676] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(154), 1,
      anon_sym_ARG,
    ACTIONS(156), 1,
      anon_sym_FROM,
    ACTIONS(158), 1,
      anon_sym_COPY,
    ACTIONS(160), 1,
      anon_sym_RUN,
    ACTIONS(162), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 5,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [706] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(154), 1,
      anon_sym_ARG,
    ACTIONS(156), 1,
      anon_sym_FROM,
    ACTIONS(158), 1,
      anon_sym_COPY,
    ACTIONS(160), 1,
      anon_sym_RUN,
    ACTIONS(164), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(23), 5,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      aux_sym_target_repeat1,
  [736] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      anon_sym_ARG,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(13), 1,
      anon_sym_VERSION,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [766] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(172), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(170), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [791] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [813] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(180), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [837] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(186), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(184), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [859] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(190), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [883] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(186), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(178), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [905] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(192), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [929] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(196), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [953] = 4,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(200), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [973] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(186), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(188), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [995] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(186), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(194), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [1017] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(204), 1,
      sym_expr,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(120), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1042] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(94), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1061] = 4,
    STATE(49), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(212), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(214), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1080] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(90), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1099] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(218), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1118] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      sym_expr,
    ACTIONS(222), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(108), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1143] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      sym_path,
    STATE(47), 1,
      aux_sym_copy_command_repeat2,
    STATE(147), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(135), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1170] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_expr,
    ACTIONS(228), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(107), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1195] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      sym_path,
    STATE(47), 1,
      aux_sym_copy_command_repeat2,
    STATE(147), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(135), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1222] = 4,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(232), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(234), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1241] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(236), 1,
      sym_path,
    ACTIONS(239), 1,
      anon_sym_PLUS,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_copy_command_repeat2,
    STATE(147), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(135), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1268] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      anon_sym_COLON2,
    ACTIONS(251), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(247), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1291] = 4,
    STATE(49), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(253), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(256), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1310] = 4,
    ACTIONS(198), 1,
      sym__dedent,
    ACTIONS(258), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(200), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [1329] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(262), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1348] = 4,
    STATE(94), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(232), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(264), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1367] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_expr,
    ACTIONS(268), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(127), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1392] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(270), 1,
      anon_sym_COLON2,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(245), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [1413] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(276), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1433] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(284), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(260), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [1471] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(286), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(274), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [1489] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1511] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(290), 1,
      sym_allow_privileged,
    STATE(33), 1,
      sym_target_ref,
    STATE(102), 1,
      aux_sym_from_command_repeat1,
    STATE(138), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [1537] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(296), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1559] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(302), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(68), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1581] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(304), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1603] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(308), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1623] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1645] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(290), 1,
      sym_allow_privileged,
    ACTIONS(314), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      sym_target_ref,
    STATE(102), 1,
      aux_sym_from_command_repeat1,
    STATE(138), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [1671] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1693] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [1709] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(92), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(96), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_DASH_DASH2,
  [1741] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(322), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [1756] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(326), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1773] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(330), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1790] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(334), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1807] = 4,
    ACTIONS(336), 1,
      anon_sym_EQ,
    STATE(84), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(338), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1824] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(342), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1841] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(346), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1858] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1875] = 4,
    ACTIONS(352), 1,
      anon_sym_EQ,
    STATE(85), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(354), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1892] = 4,
    ACTIONS(356), 1,
      anon_sym_EQ,
    STATE(93), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(358), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1909] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      aux_sym_shell_fragment_token3,
    STATE(39), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(113), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [1930] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(348), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(344), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [1960] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(360), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [1975] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(362), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1992] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(340), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2007] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(366), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(178), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2039] = 4,
    ACTIONS(368), 1,
      anon_sym_EQ,
    STATE(92), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(370), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2056] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(372), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2071] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2086] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2103] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(376), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2118] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(380), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(382), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2148] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(386), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2165] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(388), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2182] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(390), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2197] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      aux_sym_shell_fragment_token3,
    STATE(39), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(112), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2218] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(392), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2233] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2248] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(396), 1,
      anon_sym_PLUS,
    ACTIONS(398), 1,
      sym_allow_privileged,
    ACTIONS(401), 1,
      anon_sym_DASH_DASHplatform,
    STATE(102), 1,
      aux_sym_from_command_repeat1,
    STATE(138), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2271] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(180), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2288] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(332), 5,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
  [2303] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(404), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2320] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(406), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2334] = 3,
    STATE(97), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(408), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2348] = 3,
    STATE(77), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(410), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2362] = 3,
    STATE(95), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(412), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2376] = 3,
    STATE(76), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(414), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2390] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(416), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(418), 2,
      sym_global,
      sym_required,
  [2408] = 3,
    STATE(91), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(421), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2422] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(423), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2436] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(115), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
  [2454] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(182), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
  [2472] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(124), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(431), 2,
      sym_global,
      sym_required,
  [2490] = 3,
    STATE(72), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(433), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2504] = 3,
    STATE(96), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(435), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2518] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(437), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2532] = 3,
    STATE(83), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(439), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2546] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(431), 2,
      sym_global,
      sym_required,
  [2564] = 3,
    STATE(98), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(443), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2578] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(445), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(431), 2,
      sym_global,
      sym_required,
  [2596] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(431), 2,
      sym_global,
      sym_required,
  [2614] = 3,
    STATE(64), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(449), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2628] = 3,
    STATE(71), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(451), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2642] = 3,
    STATE(90), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(453), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2656] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2671] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(459), 1,
      sym_version_major_minor,
    ACTIONS(461), 1,
      sym_feature_flag,
    STATE(136), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2688] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(465), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2703] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(467), 1,
      sym_version_major_minor,
    ACTIONS(469), 1,
      sym_feature_flag,
    STATE(129), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2720] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(94), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2731] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(90), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2757] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(232), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2772] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      sym_version_major_minor,
    ACTIONS(479), 1,
      sym_feature_flag,
    STATE(136), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2789] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(482), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(484), 3,
      anon_sym_PLUS,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
  [2815] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    STATE(161), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2829] = 2,
    ACTIONS(486), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [2838] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2849] = 2,
    ACTIONS(490), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [2858] = 2,
    ACTIONS(492), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [2867] = 2,
    ACTIONS(494), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [2876] = 2,
    ACTIONS(496), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [2885] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(498), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2896] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(500), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2907] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(502), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2918] = 2,
    ACTIONS(504), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [2927] = 2,
    ACTIONS(506), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [2936] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2947] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2958] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2969] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2980] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(516), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(518), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3002] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3013] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(522), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3024] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(524), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3035] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3046] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(528), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3057] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(532), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3079] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(534), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3090] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(536), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3101] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3112] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3123] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3134] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3145] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3156] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(548), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3167] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3178] = 2,
    ACTIONS(552), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3187] = 2,
    ACTIONS(554), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3196] = 2,
    ACTIONS(556), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3205] = 2,
    ACTIONS(558), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3214] = 2,
    ACTIONS(560), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3223] = 2,
    ACTIONS(562), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3232] = 2,
    ACTIONS(564), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3241] = 2,
    ACTIONS(566), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 424,
  [SMALL_STATE(15)] = 448,
  [SMALL_STATE(16)] = 472,
  [SMALL_STATE(17)] = 508,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 568,
  [SMALL_STATE(20)] = 592,
  [SMALL_STATE(21)] = 616,
  [SMALL_STATE(22)] = 646,
  [SMALL_STATE(23)] = 676,
  [SMALL_STATE(24)] = 706,
  [SMALL_STATE(25)] = 736,
  [SMALL_STATE(26)] = 766,
  [SMALL_STATE(27)] = 791,
  [SMALL_STATE(28)] = 813,
  [SMALL_STATE(29)] = 837,
  [SMALL_STATE(30)] = 859,
  [SMALL_STATE(31)] = 883,
  [SMALL_STATE(32)] = 905,
  [SMALL_STATE(33)] = 929,
  [SMALL_STATE(34)] = 953,
  [SMALL_STATE(35)] = 973,
  [SMALL_STATE(36)] = 995,
  [SMALL_STATE(37)] = 1017,
  [SMALL_STATE(38)] = 1042,
  [SMALL_STATE(39)] = 1061,
  [SMALL_STATE(40)] = 1080,
  [SMALL_STATE(41)] = 1099,
  [SMALL_STATE(42)] = 1118,
  [SMALL_STATE(43)] = 1143,
  [SMALL_STATE(44)] = 1170,
  [SMALL_STATE(45)] = 1195,
  [SMALL_STATE(46)] = 1222,
  [SMALL_STATE(47)] = 1241,
  [SMALL_STATE(48)] = 1268,
  [SMALL_STATE(49)] = 1291,
  [SMALL_STATE(50)] = 1310,
  [SMALL_STATE(51)] = 1329,
  [SMALL_STATE(52)] = 1348,
  [SMALL_STATE(53)] = 1367,
  [SMALL_STATE(54)] = 1392,
  [SMALL_STATE(55)] = 1413,
  [SMALL_STATE(56)] = 1433,
  [SMALL_STATE(57)] = 1455,
  [SMALL_STATE(58)] = 1471,
  [SMALL_STATE(59)] = 1489,
  [SMALL_STATE(60)] = 1511,
  [SMALL_STATE(61)] = 1537,
  [SMALL_STATE(62)] = 1559,
  [SMALL_STATE(63)] = 1581,
  [SMALL_STATE(64)] = 1603,
  [SMALL_STATE(65)] = 1623,
  [SMALL_STATE(66)] = 1645,
  [SMALL_STATE(67)] = 1671,
  [SMALL_STATE(68)] = 1693,
  [SMALL_STATE(69)] = 1709,
  [SMALL_STATE(70)] = 1725,
  [SMALL_STATE(71)] = 1741,
  [SMALL_STATE(72)] = 1756,
  [SMALL_STATE(73)] = 1773,
  [SMALL_STATE(74)] = 1790,
  [SMALL_STATE(75)] = 1807,
  [SMALL_STATE(76)] = 1824,
  [SMALL_STATE(77)] = 1841,
  [SMALL_STATE(78)] = 1858,
  [SMALL_STATE(79)] = 1875,
  [SMALL_STATE(80)] = 1892,
  [SMALL_STATE(81)] = 1909,
  [SMALL_STATE(82)] = 1930,
  [SMALL_STATE(83)] = 1945,
  [SMALL_STATE(84)] = 1960,
  [SMALL_STATE(85)] = 1975,
  [SMALL_STATE(86)] = 1992,
  [SMALL_STATE(87)] = 2007,
  [SMALL_STATE(88)] = 2024,
  [SMALL_STATE(89)] = 2039,
  [SMALL_STATE(90)] = 2056,
  [SMALL_STATE(91)] = 2071,
  [SMALL_STATE(92)] = 2086,
  [SMALL_STATE(93)] = 2103,
  [SMALL_STATE(94)] = 2118,
  [SMALL_STATE(95)] = 2133,
  [SMALL_STATE(96)] = 2148,
  [SMALL_STATE(97)] = 2165,
  [SMALL_STATE(98)] = 2182,
  [SMALL_STATE(99)] = 2197,
  [SMALL_STATE(100)] = 2218,
  [SMALL_STATE(101)] = 2233,
  [SMALL_STATE(102)] = 2248,
  [SMALL_STATE(103)] = 2271,
  [SMALL_STATE(104)] = 2288,
  [SMALL_STATE(105)] = 2303,
  [SMALL_STATE(106)] = 2320,
  [SMALL_STATE(107)] = 2334,
  [SMALL_STATE(108)] = 2348,
  [SMALL_STATE(109)] = 2362,
  [SMALL_STATE(110)] = 2376,
  [SMALL_STATE(111)] = 2390,
  [SMALL_STATE(112)] = 2408,
  [SMALL_STATE(113)] = 2422,
  [SMALL_STATE(114)] = 2436,
  [SMALL_STATE(115)] = 2454,
  [SMALL_STATE(116)] = 2472,
  [SMALL_STATE(117)] = 2490,
  [SMALL_STATE(118)] = 2504,
  [SMALL_STATE(119)] = 2518,
  [SMALL_STATE(120)] = 2532,
  [SMALL_STATE(121)] = 2546,
  [SMALL_STATE(122)] = 2564,
  [SMALL_STATE(123)] = 2578,
  [SMALL_STATE(124)] = 2596,
  [SMALL_STATE(125)] = 2614,
  [SMALL_STATE(126)] = 2628,
  [SMALL_STATE(127)] = 2642,
  [SMALL_STATE(128)] = 2656,
  [SMALL_STATE(129)] = 2671,
  [SMALL_STATE(130)] = 2688,
  [SMALL_STATE(131)] = 2703,
  [SMALL_STATE(132)] = 2720,
  [SMALL_STATE(133)] = 2731,
  [SMALL_STATE(134)] = 2742,
  [SMALL_STATE(135)] = 2757,
  [SMALL_STATE(136)] = 2772,
  [SMALL_STATE(137)] = 2789,
  [SMALL_STATE(138)] = 2802,
  [SMALL_STATE(139)] = 2815,
  [SMALL_STATE(140)] = 2829,
  [SMALL_STATE(141)] = 2838,
  [SMALL_STATE(142)] = 2849,
  [SMALL_STATE(143)] = 2858,
  [SMALL_STATE(144)] = 2867,
  [SMALL_STATE(145)] = 2876,
  [SMALL_STATE(146)] = 2885,
  [SMALL_STATE(147)] = 2896,
  [SMALL_STATE(148)] = 2907,
  [SMALL_STATE(149)] = 2918,
  [SMALL_STATE(150)] = 2927,
  [SMALL_STATE(151)] = 2936,
  [SMALL_STATE(152)] = 2947,
  [SMALL_STATE(153)] = 2958,
  [SMALL_STATE(154)] = 2969,
  [SMALL_STATE(155)] = 2980,
  [SMALL_STATE(156)] = 2991,
  [SMALL_STATE(157)] = 3002,
  [SMALL_STATE(158)] = 3013,
  [SMALL_STATE(159)] = 3024,
  [SMALL_STATE(160)] = 3035,
  [SMALL_STATE(161)] = 3046,
  [SMALL_STATE(162)] = 3057,
  [SMALL_STATE(163)] = 3068,
  [SMALL_STATE(164)] = 3079,
  [SMALL_STATE(165)] = 3090,
  [SMALL_STATE(166)] = 3101,
  [SMALL_STATE(167)] = 3112,
  [SMALL_STATE(168)] = 3123,
  [SMALL_STATE(169)] = 3134,
  [SMALL_STATE(170)] = 3145,
  [SMALL_STATE(171)] = 3156,
  [SMALL_STATE(172)] = 3167,
  [SMALL_STATE(173)] = 3178,
  [SMALL_STATE(174)] = 3187,
  [SMALL_STATE(175)] = 3196,
  [SMALL_STATE(176)] = 3205,
  [SMALL_STATE(177)] = 3214,
  [SMALL_STATE(178)] = 3223,
  [SMALL_STATE(179)] = 3232,
  [SMALL_STATE(180)] = 3241,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(150),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(149),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(142),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(145),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(144),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(116),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(17),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(154),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(160),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(135),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(146),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(139),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(49),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 25),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 24),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 23),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 20),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 22),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 21),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(138),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(142),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(137),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(136),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [510] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
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
