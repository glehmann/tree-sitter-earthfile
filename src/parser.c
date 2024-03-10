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
#define STATE_COUNT 202
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 34

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_FROM = 3,
  anon_sym_COLON = 4,
  anon_sym_VERSION = 5,
  anon_sym_COPY = 6,
  anon_sym_RUN = 7,
  anon_sym_DASH_DASH = 8,
  anon_sym_SAVE = 9,
  anon_sym_ARTIFACT = 10,
  anon_sym_AS = 11,
  anon_sym_LOCAL = 12,
  sym_expr = 13,
  sym_identifier = 14,
  anon_sym_COLON2 = 15,
  anon_sym_AT = 16,
  sym_image_name = 17,
  sym_image_tag = 18,
  sym_image_digest = 19,
  sym_immediate_identifier = 20,
  sym_path = 21,
  aux_sym_shell_fragment_token1 = 22,
  aux_sym_shell_fragment_token2 = 23,
  aux_sym_shell_fragment_token3 = 24,
  anon_sym_PLUS = 25,
  anon_sym_SLASH = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  sym_version_major_minor = 29,
  sym_allow_privileged = 30,
  anon_sym_DASH_DASH2 = 31,
  aux_sym_build_arg_token1 = 32,
  anon_sym_DASH_DASHchmod = 33,
  anon_sym_DASH_DASHchown = 34,
  sym_dir = 35,
  sym_entrypoint = 36,
  sym_feature_flag = 37,
  sym_force = 38,
  sym_global = 39,
  sym_if_exists = 40,
  sym_keep_own = 41,
  sym_keep_ts = 42,
  anon_sym_DASH_DASHmount = 43,
  sym_network_none = 44,
  sym_no_cache = 45,
  sym_pass_args = 46,
  anon_sym_DASH_DASHplatform = 47,
  sym_privileged = 48,
  sym_push = 49,
  sym_required = 50,
  anon_sym_DASH_DASHsecret = 51,
  sym_ssh = 52,
  sym_symlink_no_follow = 53,
  anon_sym_DQUOTE = 54,
  aux_sym_double_quoted_string_token1 = 55,
  anon_sym_SQUOTE = 56,
  aux_sym_single_quoted_string_token1 = 57,
  sym_unquoted_string = 58,
  sym_line_continuation = 59,
  sym_comment = 60,
  sym_line_continuation_comment = 61,
  anon_sym_LF = 62,
  anon_sym_CRn = 63,
  anon_sym_FF = 64,
  sym__indent = 65,
  sym__dedent = 66,
  sym_source_file = 67,
  sym_arg_command = 68,
  sym_from_command = 69,
  sym_target = 70,
  sym_version_command = 71,
  sym_copy_command = 72,
  sym_run_command = 73,
  sym_save_artifact_command = 74,
  sym_image_spec = 75,
  sym_shell_fragment = 76,
  sym_target_ref = 77,
  sym_target_artifact = 78,
  sym_target_artifact_build_args = 79,
  sym_build_arg = 80,
  sym_chmod = 81,
  sym_chown = 82,
  sym_mount = 83,
  sym_platform = 84,
  sym_secret = 85,
  sym__string = 86,
  sym_double_quoted_string = 87,
  sym_single_quoted_string = 88,
  sym__eol = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_arg_command_repeat1 = 91,
  aux_sym_from_command_repeat1 = 92,
  aux_sym_from_command_repeat2 = 93,
  aux_sym_target_repeat1 = 94,
  aux_sym_version_command_repeat1 = 95,
  aux_sym_copy_command_repeat1 = 96,
  aux_sym_copy_command_repeat2 = 97,
  aux_sym_run_command_repeat1 = 98,
  aux_sym_save_artifact_command_repeat1 = 99,
  aux_sym_shell_fragment_repeat1 = 100,
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
  [anon_sym_SAVE] = "SAVE",
  [anon_sym_ARTIFACT] = "ARTIFACT",
  [anon_sym_AS] = "AS",
  [anon_sym_LOCAL] = "LOCAL",
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
  [sym_force] = "force",
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
  [sym_save_artifact_command] = "save_artifact_command",
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
  [aux_sym_save_artifact_command_repeat1] = "save_artifact_command_repeat1",
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
  [anon_sym_SAVE] = anon_sym_SAVE,
  [anon_sym_ARTIFACT] = anon_sym_ARTIFACT,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_LOCAL] = anon_sym_LOCAL,
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
  [sym_force] = sym_force,
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
  [sym_save_artifact_command] = sym_save_artifact_command,
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
  [aux_sym_save_artifact_command_repeat1] = aux_sym_save_artifact_command_repeat1,
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
  [anon_sym_SAVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARTIFACT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOCAL] = {
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
  [sym_force] = {
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
  [sym_save_artifact_command] = {
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
  [aux_sym_save_artifact_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_as_local = 1,
  field_command = 2,
  field_default_value = 3,
  field_default_value_expr = 4,
  field_dest = 5,
  field_digest = 6,
  field_name = 7,
  field_option = 8,
  field_src = 9,
  field_tag = 10,
  field_value = 11,
  field_version = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as_local] = "as_local",
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
  [21] = {.index = 39, .length = 1},
  [22] = {.index = 40, .length = 2},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 2},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 2},
  [27] = {.index = 49, .length = 3},
  [28] = {.index = 52, .length = 2},
  [29] = {.index = 54, .length = 3},
  [30] = {.index = 57, .length = 2},
  [31] = {.index = 59, .length = 3},
  [32] = {.index = 62, .length = 3},
  [33] = {.index = 65, .length = 4},
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
    {field_src, 2},
  [40] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [42] =
    {field_command, 2},
  [43] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [45] =
    {field_dest, 3},
    {field_src, 2},
  [47] =
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [49] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [52] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [54] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [57] =
    {field_as_local, 5},
    {field_src, 2},
  [59] =
    {field_as_local, 6},
    {field_dest, 3},
    {field_src, 2},
  [62] =
    {field_as_local, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [65] =
    {field_as_local, 7},
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
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
  [17] = 17,
  [18] = 12,
  [19] = 13,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 31,
  [36] = 36,
  [37] = 30,
  [38] = 26,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 43,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 12,
  [60] = 13,
  [61] = 40,
  [62] = 12,
  [63] = 13,
  [64] = 50,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 74,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 48,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 93,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 82,
  [105] = 89,
  [106] = 86,
  [107] = 79,
  [108] = 85,
  [109] = 109,
  [110] = 109,
  [111] = 94,
  [112] = 102,
  [113] = 113,
  [114] = 114,
  [115] = 72,
  [116] = 69,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 120,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 118,
  [133] = 124,
  [134] = 134,
  [135] = 134,
  [136] = 125,
  [137] = 137,
  [138] = 122,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 12,
  [144] = 144,
  [145] = 13,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 169,
  [177] = 177,
  [178] = 178,
  [179] = 175,
  [180] = 153,
  [181] = 170,
  [182] = 182,
  [183] = 161,
  [184] = 162,
  [185] = 177,
  [186] = 186,
  [187] = 161,
  [188] = 162,
  [189] = 161,
  [190] = 162,
  [191] = 161,
  [192] = 162,
  [193] = 193,
  [194] = 158,
  [195] = 159,
  [196] = 158,
  [197] = 159,
  [198] = 158,
  [199] = 159,
  [200] = 158,
  [201] = 159,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(168);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '@') ADVANCE(204);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(355);
      if (lookahead == '#') ADVANCE(312);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(311);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(355);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\f') ADVANCE(361);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\f') ADVANCE(370);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\f') ADVANCE(370);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead == '\f') ADVANCE(371);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(310);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead == '\f') ADVANCE(371);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(310);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(364);
      if (lookahead == '\f') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(364);
      if (lookahead == '\f') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(348);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(352);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == '\f') ADVANCE(373);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == '\f') ADVANCE(373);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == '\f') ADVANCE(373);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(323);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(310);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(310);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '@') ADVANCE(204);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(310);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead == 'C') ADVANCE(229);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == 'R') ADVANCE(234);
      if (lookahead == 'S') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(306);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(163);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'F') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(169);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 63:
      if (lookahead == 'M') ADVANCE(173);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(181);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(177);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 'P') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(187);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(186);
      END_STATE();
    case 77:
      if (lookahead == 'U') ADVANCE(64);
      END_STATE();
    case 78:
      if (lookahead == 'V') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'Y') ADVANCE(179);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(343);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(340);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'q') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 156:
      if (lookahead == 'v') ADVANCE(111);
      END_STATE();
    case 157:
      if (lookahead == 'v') ADVANCE(114);
      END_STATE();
    case 158:
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 159:
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 160:
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 162:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 164:
      if (eof) ADVANCE(168);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 165:
      if (eof) ADVANCE(168);
      if (lookahead == ' ') ADVANCE(322);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'F') ADVANCE(199);
      if (lookahead == 'V') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(167)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      if (eof) ADVANCE(168);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '@') ADVANCE(204);
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'F') ADVANCE(199);
      if (lookahead == 'V') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(167)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      if (eof) ADVANCE(168);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'F') ADVANCE(199);
      if (lookahead == 'V') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(167)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(355);
      if (lookahead == '#') ADVANCE(207);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\f') ADVANCE(361);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(355);
      if (lookahead == '#') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\f') ADVANCE(361);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(226);
      if (lookahead == 'S') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(247);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\f') ADVANCE(361);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(358);
      if (lookahead == '\r') ADVANCE(346);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(359);
      if (lookahead == '\r') ADVANCE(350);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(357);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(358);
      if (lookahead == '\r') ADVANCE(346);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(356);
      if (lookahead == '\f') ADVANCE(359);
      if (lookahead == '\r') ADVANCE(350);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\f') ADVANCE(361);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\f') ADVANCE(370);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(206);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead == '\f') ADVANCE(371);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(364);
      if (lookahead == '\f') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == '\f') ADVANCE(373);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(208);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(306);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(310);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(362);
      if (lookahead == '\f') ADVANCE(370);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(206);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(363);
      if (lookahead == '\f') ADVANCE(371);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(364);
      if (lookahead == '\f') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(365);
      if (lookahead == '\f') ADVANCE(373);
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
  [1] = {.lex_state = 166},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 166},
  [25] = {.lex_state = 166},
  [26] = {.lex_state = 25, .external_lex_state = 2},
  [27] = {.lex_state = 25, .external_lex_state = 2},
  [28] = {.lex_state = 166},
  [29] = {.lex_state = 25, .external_lex_state = 2},
  [30] = {.lex_state = 25, .external_lex_state = 2},
  [31] = {.lex_state = 25, .external_lex_state = 2},
  [32] = {.lex_state = 166},
  [33] = {.lex_state = 36, .external_lex_state = 2},
  [34] = {.lex_state = 36, .external_lex_state = 2},
  [35] = {.lex_state = 166},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 166},
  [38] = {.lex_state = 166},
  [39] = {.lex_state = 165},
  [40] = {.lex_state = 25, .external_lex_state = 2},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 166},
  [46] = {.lex_state = 25, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 25, .external_lex_state = 2},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 166},
  [59] = {.lex_state = 166},
  [60] = {.lex_state = 166},
  [61] = {.lex_state = 166},
  [62] = {.lex_state = 25, .external_lex_state = 2},
  [63] = {.lex_state = 25, .external_lex_state = 2},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 35},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 166, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 35},
  [96] = {.lex_state = 166},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 166},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 166},
  [101] = {.lex_state = 30},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 166},
  [104] = {.lex_state = 166},
  [105] = {.lex_state = 166},
  [106] = {.lex_state = 166},
  [107] = {.lex_state = 166},
  [108] = {.lex_state = 166},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 166},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 166},
  [114] = {.lex_state = 166},
  [115] = {.lex_state = 166},
  [116] = {.lex_state = 166},
  [117] = {.lex_state = 30},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 166},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 27},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 166},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 27},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 33},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 34},
  [147] = {.lex_state = 27},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 34},
  [150] = {.lex_state = 29},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 21},
  [153] = {.lex_state = 32},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 37},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 37},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 37},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 21},
  [166] = {.lex_state = 21},
  [167] = {.lex_state = 21},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 29},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 21},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 38},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 32},
  [178] = {.lex_state = 27},
  [179] = {.lex_state = 38},
  [180] = {.lex_state = 32},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 37},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 32},
  [186] = {.lex_state = 37},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 11},
  [195] = {.lex_state = 12},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 11},
  [201] = {.lex_state = 12},
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
    [anon_sym_SAVE] = ACTIONS(1),
    [anon_sym_ARTIFACT] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_LOCAL] = ACTIONS(1),
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
    [sym_source_file] = STATE(173),
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
    STATE(57), 1,
      aux_sym_copy_command_repeat2,
    STATE(168), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(146), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(10), 3,
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
    STATE(4), 1,
      aux_sym_copy_command_repeat1,
    STATE(42), 1,
      aux_sym_copy_command_repeat2,
    STATE(168), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(146), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(10), 3,
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
  [106] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(31), 1,
      sym_path,
    ACTIONS(38), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(44), 1,
      anon_sym_DASH_DASHplatform,
    STATE(4), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(10), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(35), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [147] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(51), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(55), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(57), 1,
      anon_sym_DASH_DASHsecret,
    STATE(6), 1,
      aux_sym_run_command_repeat1,
    STATE(65), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(128), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(49), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(15), 2,
      sym_mount,
      sym_secret,
    ACTIONS(53), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [192] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(55), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(57), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(59), 1,
      anon_sym_DASH_DASH,
    STATE(7), 1,
      aux_sym_run_command_repeat1,
    STATE(65), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(139), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(49), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(15), 2,
      sym_mount,
      sym_secret,
    ACTIONS(53), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
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
  [424] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(98), 1,
      anon_sym_ARG,
    ACTIONS(100), 1,
      anon_sym_FROM,
    ACTIONS(102), 1,
      anon_sym_COPY,
    ACTIONS(104), 1,
      anon_sym_RUN,
    ACTIONS(106), 1,
      anon_sym_SAVE,
    ACTIONS(108), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 6,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      sym_save_artifact_command,
      aux_sym_target_repeat1,
  [458] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(112), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(110), 10,
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
  [482] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(114), 1,
      anon_sym_ARG,
    ACTIONS(117), 1,
      anon_sym_FROM,
    ACTIONS(120), 1,
      anon_sym_COPY,
    ACTIONS(123), 1,
      anon_sym_RUN,
    ACTIONS(126), 1,
      anon_sym_SAVE,
    ACTIONS(129), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 6,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      sym_save_artifact_command,
      aux_sym_target_repeat1,
  [516] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(98), 1,
      anon_sym_ARG,
    ACTIONS(100), 1,
      anon_sym_FROM,
    ACTIONS(102), 1,
      anon_sym_COPY,
    ACTIONS(104), 1,
      anon_sym_RUN,
    ACTIONS(106), 1,
      anon_sym_SAVE,
    ACTIONS(131), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 6,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      sym_save_artifact_command,
      aux_sym_target_repeat1,
  [550] = 4,
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
  [574] = 4,
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
  [598] = 10,
    ACTIONS(133), 1,
      sym_image_name,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      sym_allow_privileged,
    ACTIONS(139), 1,
      anon_sym_DASH_DASHplatform,
    STATE(31), 1,
      sym_target_ref,
    STATE(74), 1,
      aux_sym_from_command_repeat1,
    STATE(140), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    STATE(72), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(141), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [634] = 10,
    ACTIONS(137), 1,
      sym_allow_privileged,
    ACTIONS(139), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(143), 1,
      sym_image_name,
    ACTIONS(145), 1,
      anon_sym_PLUS,
    STATE(35), 1,
      sym_target_ref,
    STATE(92), 1,
      aux_sym_from_command_repeat1,
    STATE(140), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    STATE(115), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(147), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [670] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(151), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(149), 10,
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
  [694] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(155), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(153), 10,
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
  [718] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      anon_sym_ARG,
    ACTIONS(162), 1,
      anon_sym_FROM,
    ACTIONS(165), 1,
      anon_sym_VERSION,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [748] = 8,
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
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [778] = 5,
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
    ACTIONS(173), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [801] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(177), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [824] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(184), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(28), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(182), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [849] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(187), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [872] = 5,
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
    ACTIONS(189), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [895] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(191), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [918] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(193), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [942] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(199), 1,
      anon_sym_AS,
    ACTIONS(201), 1,
      sym_path,
    ACTIONS(203), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(197), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [966] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(207), 1,
      anon_sym_AS,
    ACTIONS(209), 1,
      sym_path,
    ACTIONS(211), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(205), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [990] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(213), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1014] = 4,
    ACTIONS(217), 1,
      aux_sym_build_arg_token1,
    ACTIONS(219), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(215), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1034] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(221), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1058] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(223), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1082] = 4,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(215), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [1102] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      anon_sym_COLON2,
    ACTIONS(231), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(227), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1124] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      sym_path,
    STATE(54), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [1145] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym_path,
    STATE(52), 1,
      aux_sym_copy_command_repeat2,
    STATE(168), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(146), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1172] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      sym_expr,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    ACTIONS(245), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(135), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1197] = 4,
    STATE(44), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(247), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(250), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1216] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(254), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1235] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(252), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1252] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(258), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(256), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1271] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(262), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(260), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1290] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(266), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(264), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1309] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_expr,
    ACTIONS(270), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(132), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1334] = 4,
    STATE(81), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(272), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(274), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1353] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      sym_path,
    ACTIONS(279), 1,
      anon_sym_PLUS,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      aux_sym_copy_command_repeat2,
    STATE(168), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(146), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1380] = 4,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(272), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(285), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1399] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(287), 1,
      sym_path,
    STATE(54), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [1420] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_expr,
    ACTIONS(294), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(296), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1462] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      sym_path,
    STATE(52), 1,
      aux_sym_copy_command_repeat2,
    STATE(168), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(146), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1489] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(296), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(300), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1508] = 4,
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
  [1527] = 4,
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
  [1546] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      anon_sym_COLON2,
    ACTIONS(306), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(302), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1569] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(92), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1586] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(96), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1603] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      sym_expr,
    ACTIONS(310), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(118), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1628] = 4,
    STATE(44), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(312), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(314), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1647] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(316), 1,
      sym_path,
    STATE(41), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [1668] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(318), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1684] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(324), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1706] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(326), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1722] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1744] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(58), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1766] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(191), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1782] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    ACTIONS(344), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(56), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1804] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(346), 1,
      anon_sym_PLUS,
    ACTIONS(348), 1,
      sym_allow_privileged,
    STATE(29), 1,
      sym_target_ref,
    STATE(99), 1,
      aux_sym_from_command_repeat1,
    STATE(140), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(352), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1862] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1878] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(356), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(358), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1910] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(360), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(362), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1942] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(364), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1958] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(366), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1974] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(370), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1994] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(374), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(376), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(378), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2042] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(380), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(382), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2074] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2096] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2118] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(348), 1,
      sym_allow_privileged,
    STATE(32), 1,
      sym_target_ref,
    STATE(99), 1,
      aux_sym_from_command_repeat1,
    STATE(140), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2144] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(388), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(390), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2176] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2194] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2214] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(23), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2236] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(404), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2253] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(406), 1,
      anon_sym_PLUS,
    ACTIONS(408), 1,
      sym_allow_privileged,
    ACTIONS(411), 1,
      anon_sym_DASH_DASHplatform,
    STATE(99), 1,
      aux_sym_from_command_repeat1,
    STATE(140), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2276] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(388), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2293] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      aux_sym_shell_fragment_token3,
    STATE(65), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(129), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(51), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2314] = 4,
    ACTIONS(416), 1,
      anon_sym_EQ,
    STATE(79), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(418), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2331] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(422), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2348] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(424), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2365] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(426), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2382] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(428), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2399] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(430), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2416] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(432), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2433] = 4,
    ACTIONS(434), 1,
      anon_sym_EQ,
    STATE(69), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(436), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2450] = 4,
    ACTIONS(438), 1,
      anon_sym_EQ,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(440), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2467] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(442), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2484] = 4,
    ACTIONS(444), 1,
      anon_sym_EQ,
    STATE(107), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(446), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2501] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(450), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(454), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2535] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(213), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2552] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(456), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2569] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      aux_sym_shell_fragment_token3,
    STATE(65), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(119), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(51), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2590] = 3,
    STATE(94), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(458), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2604] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(460), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2618] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(462), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2632] = 3,
    STATE(98), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(464), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2646] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(125), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(468), 2,
      sym_global,
      sym_required,
  [2664] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(131), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
  [2682] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(472), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2696] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(137), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(468), 2,
      sym_global,
      sym_required,
  [2714] = 3,
    STATE(84), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(476), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2728] = 3,
    STATE(93), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(478), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2742] = 3,
    STATE(67), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(480), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2756] = 3,
    STATE(80), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(482), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2770] = 3,
    STATE(113), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(484), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2784] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
  [2802] = 3,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(488), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2816] = 3,
    STATE(89), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(490), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2830] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(492), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2844] = 3,
    STATE(106), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(494), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2858] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(137), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(468), 2,
      sym_global,
      sym_required,
  [2876] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(137), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(500), 2,
      sym_global,
      sym_required,
  [2894] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(136), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(468), 2,
      sym_global,
      sym_required,
  [2912] = 3,
    STATE(83), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(505), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 3,
      anon_sym_PLUS,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
  [2939] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(509), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2954] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(515), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2969] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(90), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2980] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      sym_version_major_minor,
    ACTIONS(519), 1,
      sym_feature_flag,
    STATE(148), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2997] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(94), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3008] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(521), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3023] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(523), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [3036] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(525), 1,
      sym_version_major_minor,
    ACTIONS(527), 1,
      sym_feature_flag,
    STATE(150), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3053] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3068] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
      sym_version_major_minor,
    ACTIONS(535), 1,
      sym_feature_flag,
    STATE(150), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3085] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    STATE(164), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3099] = 2,
    ACTIONS(538), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3108] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3119] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3130] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(544), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3141] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3152] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(548), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3163] = 2,
    ACTIONS(550), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3172] = 2,
    ACTIONS(552), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3181] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3192] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3203] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3214] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3225] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3236] = 2,
    ACTIONS(564), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3245] = 2,
    ACTIONS(566), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3254] = 2,
    ACTIONS(568), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3285] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3296] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3307] = 2,
    ACTIONS(578), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3316] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3327] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3338] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3349] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(586), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3360] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(588), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3371] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3382] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3393] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(594), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3404] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(596), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3415] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(598), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3426] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3437] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3448] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3470] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3481] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3492] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3503] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3514] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3525] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3536] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_ARTIFACT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3547] = 2,
    ACTIONS(622), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3556] = 2,
    ACTIONS(624), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3565] = 2,
    ACTIONS(626), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3574] = 2,
    ACTIONS(628), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3583] = 2,
    ACTIONS(630), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3592] = 2,
    ACTIONS(632), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3601] = 2,
    ACTIONS(634), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3610] = 2,
    ACTIONS(636), 1,
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
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 374,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 424,
  [SMALL_STATE(15)] = 458,
  [SMALL_STATE(16)] = 482,
  [SMALL_STATE(17)] = 516,
  [SMALL_STATE(18)] = 550,
  [SMALL_STATE(19)] = 574,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 670,
  [SMALL_STATE(23)] = 694,
  [SMALL_STATE(24)] = 718,
  [SMALL_STATE(25)] = 748,
  [SMALL_STATE(26)] = 778,
  [SMALL_STATE(27)] = 801,
  [SMALL_STATE(28)] = 824,
  [SMALL_STATE(29)] = 849,
  [SMALL_STATE(30)] = 872,
  [SMALL_STATE(31)] = 895,
  [SMALL_STATE(32)] = 918,
  [SMALL_STATE(33)] = 942,
  [SMALL_STATE(34)] = 966,
  [SMALL_STATE(35)] = 990,
  [SMALL_STATE(36)] = 1014,
  [SMALL_STATE(37)] = 1034,
  [SMALL_STATE(38)] = 1058,
  [SMALL_STATE(39)] = 1082,
  [SMALL_STATE(40)] = 1102,
  [SMALL_STATE(41)] = 1124,
  [SMALL_STATE(42)] = 1145,
  [SMALL_STATE(43)] = 1172,
  [SMALL_STATE(44)] = 1197,
  [SMALL_STATE(45)] = 1216,
  [SMALL_STATE(46)] = 1235,
  [SMALL_STATE(47)] = 1252,
  [SMALL_STATE(48)] = 1271,
  [SMALL_STATE(49)] = 1290,
  [SMALL_STATE(50)] = 1309,
  [SMALL_STATE(51)] = 1334,
  [SMALL_STATE(52)] = 1353,
  [SMALL_STATE(53)] = 1380,
  [SMALL_STATE(54)] = 1399,
  [SMALL_STATE(55)] = 1420,
  [SMALL_STATE(56)] = 1445,
  [SMALL_STATE(57)] = 1462,
  [SMALL_STATE(58)] = 1489,
  [SMALL_STATE(59)] = 1508,
  [SMALL_STATE(60)] = 1527,
  [SMALL_STATE(61)] = 1546,
  [SMALL_STATE(62)] = 1569,
  [SMALL_STATE(63)] = 1586,
  [SMALL_STATE(64)] = 1603,
  [SMALL_STATE(65)] = 1628,
  [SMALL_STATE(66)] = 1647,
  [SMALL_STATE(67)] = 1668,
  [SMALL_STATE(68)] = 1684,
  [SMALL_STATE(69)] = 1706,
  [SMALL_STATE(70)] = 1722,
  [SMALL_STATE(71)] = 1744,
  [SMALL_STATE(72)] = 1766,
  [SMALL_STATE(73)] = 1782,
  [SMALL_STATE(74)] = 1804,
  [SMALL_STATE(75)] = 1830,
  [SMALL_STATE(76)] = 1846,
  [SMALL_STATE(77)] = 1862,
  [SMALL_STATE(78)] = 1878,
  [SMALL_STATE(79)] = 1894,
  [SMALL_STATE(80)] = 1910,
  [SMALL_STATE(81)] = 1926,
  [SMALL_STATE(82)] = 1942,
  [SMALL_STATE(83)] = 1958,
  [SMALL_STATE(84)] = 1974,
  [SMALL_STATE(85)] = 1994,
  [SMALL_STATE(86)] = 2010,
  [SMALL_STATE(87)] = 2026,
  [SMALL_STATE(88)] = 2042,
  [SMALL_STATE(89)] = 2058,
  [SMALL_STATE(90)] = 2074,
  [SMALL_STATE(91)] = 2096,
  [SMALL_STATE(92)] = 2118,
  [SMALL_STATE(93)] = 2144,
  [SMALL_STATE(94)] = 2160,
  [SMALL_STATE(95)] = 2176,
  [SMALL_STATE(96)] = 2194,
  [SMALL_STATE(97)] = 2214,
  [SMALL_STATE(98)] = 2236,
  [SMALL_STATE(99)] = 2253,
  [SMALL_STATE(100)] = 2276,
  [SMALL_STATE(101)] = 2293,
  [SMALL_STATE(102)] = 2314,
  [SMALL_STATE(103)] = 2331,
  [SMALL_STATE(104)] = 2348,
  [SMALL_STATE(105)] = 2365,
  [SMALL_STATE(106)] = 2382,
  [SMALL_STATE(107)] = 2399,
  [SMALL_STATE(108)] = 2416,
  [SMALL_STATE(109)] = 2433,
  [SMALL_STATE(110)] = 2450,
  [SMALL_STATE(111)] = 2467,
  [SMALL_STATE(112)] = 2484,
  [SMALL_STATE(113)] = 2501,
  [SMALL_STATE(114)] = 2518,
  [SMALL_STATE(115)] = 2535,
  [SMALL_STATE(116)] = 2552,
  [SMALL_STATE(117)] = 2569,
  [SMALL_STATE(118)] = 2590,
  [SMALL_STATE(119)] = 2604,
  [SMALL_STATE(120)] = 2618,
  [SMALL_STATE(121)] = 2632,
  [SMALL_STATE(122)] = 2646,
  [SMALL_STATE(123)] = 2664,
  [SMALL_STATE(124)] = 2682,
  [SMALL_STATE(125)] = 2696,
  [SMALL_STATE(126)] = 2714,
  [SMALL_STATE(127)] = 2728,
  [SMALL_STATE(128)] = 2742,
  [SMALL_STATE(129)] = 2756,
  [SMALL_STATE(130)] = 2770,
  [SMALL_STATE(131)] = 2784,
  [SMALL_STATE(132)] = 2802,
  [SMALL_STATE(133)] = 2816,
  [SMALL_STATE(134)] = 2830,
  [SMALL_STATE(135)] = 2844,
  [SMALL_STATE(136)] = 2858,
  [SMALL_STATE(137)] = 2876,
  [SMALL_STATE(138)] = 2894,
  [SMALL_STATE(139)] = 2912,
  [SMALL_STATE(140)] = 2926,
  [SMALL_STATE(141)] = 2939,
  [SMALL_STATE(142)] = 2954,
  [SMALL_STATE(143)] = 2969,
  [SMALL_STATE(144)] = 2980,
  [SMALL_STATE(145)] = 2997,
  [SMALL_STATE(146)] = 3008,
  [SMALL_STATE(147)] = 3023,
  [SMALL_STATE(148)] = 3036,
  [SMALL_STATE(149)] = 3053,
  [SMALL_STATE(150)] = 3068,
  [SMALL_STATE(151)] = 3085,
  [SMALL_STATE(152)] = 3099,
  [SMALL_STATE(153)] = 3108,
  [SMALL_STATE(154)] = 3119,
  [SMALL_STATE(155)] = 3130,
  [SMALL_STATE(156)] = 3141,
  [SMALL_STATE(157)] = 3152,
  [SMALL_STATE(158)] = 3163,
  [SMALL_STATE(159)] = 3172,
  [SMALL_STATE(160)] = 3181,
  [SMALL_STATE(161)] = 3192,
  [SMALL_STATE(162)] = 3203,
  [SMALL_STATE(163)] = 3214,
  [SMALL_STATE(164)] = 3225,
  [SMALL_STATE(165)] = 3236,
  [SMALL_STATE(166)] = 3245,
  [SMALL_STATE(167)] = 3254,
  [SMALL_STATE(168)] = 3263,
  [SMALL_STATE(169)] = 3274,
  [SMALL_STATE(170)] = 3285,
  [SMALL_STATE(171)] = 3296,
  [SMALL_STATE(172)] = 3307,
  [SMALL_STATE(173)] = 3316,
  [SMALL_STATE(174)] = 3327,
  [SMALL_STATE(175)] = 3338,
  [SMALL_STATE(176)] = 3349,
  [SMALL_STATE(177)] = 3360,
  [SMALL_STATE(178)] = 3371,
  [SMALL_STATE(179)] = 3382,
  [SMALL_STATE(180)] = 3393,
  [SMALL_STATE(181)] = 3404,
  [SMALL_STATE(182)] = 3415,
  [SMALL_STATE(183)] = 3426,
  [SMALL_STATE(184)] = 3437,
  [SMALL_STATE(185)] = 3448,
  [SMALL_STATE(186)] = 3459,
  [SMALL_STATE(187)] = 3470,
  [SMALL_STATE(188)] = 3481,
  [SMALL_STATE(189)] = 3492,
  [SMALL_STATE(190)] = 3503,
  [SMALL_STATE(191)] = 3514,
  [SMALL_STATE(192)] = 3525,
  [SMALL_STATE(193)] = 3536,
  [SMALL_STATE(194)] = 3547,
  [SMALL_STATE(195)] = 3556,
  [SMALL_STATE(196)] = 3565,
  [SMALL_STATE(197)] = 3574,
  [SMALL_STATE(198)] = 3583,
  [SMALL_STATE(199)] = 3592,
  [SMALL_STATE(200)] = 3601,
  [SMALL_STATE(201)] = 3610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(172),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(152),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(167),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(166),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(165),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(138),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(20),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(5),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(193),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(181),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(170),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 26),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 26),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(44),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 25),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 29),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(146),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(169),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(151),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(95),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 33),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 32),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 31),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 30),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 28),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 27),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 24),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 23),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 22),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(140),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(167),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(147),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(150),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [580] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
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
