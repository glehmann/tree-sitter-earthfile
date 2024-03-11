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
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 36

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
  anon_sym_IMAGE = 13,
  sym_expr = 14,
  sym_identifier = 15,
  anon_sym_COLON2 = 16,
  anon_sym_AT = 17,
  sym_image_name = 18,
  sym_image_tag = 19,
  sym_image_digest = 20,
  sym_immediate_identifier = 21,
  sym_path = 22,
  aux_sym_shell_fragment_token1 = 23,
  aux_sym_shell_fragment_token2 = 24,
  aux_sym_shell_fragment_token3 = 25,
  anon_sym_PLUS = 26,
  anon_sym_SLASH = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  sym_version_major_minor = 30,
  sym_allow_privileged = 31,
  anon_sym_DASH_DASH2 = 32,
  aux_sym_build_arg_token1 = 33,
  anon_sym_DASH_DASHcache_DASHfrom = 34,
  sym_cache_hint = 35,
  anon_sym_DASH_DASHchmod = 36,
  anon_sym_DASH_DASHchown = 37,
  sym_dir = 38,
  sym_entrypoint = 39,
  sym_feature_flag = 40,
  sym_force = 41,
  sym_global = 42,
  sym_if_exists = 43,
  sym_keep_own = 44,
  sym_keep_ts = 45,
  anon_sym_DASH_DASHmount = 46,
  sym_network_none = 47,
  sym_no_cache = 48,
  sym_pass_args = 49,
  anon_sym_DASH_DASHplatform = 50,
  sym_privileged = 51,
  sym_push = 52,
  sym_required = 53,
  anon_sym_DASH_DASHsecret = 54,
  sym_ssh = 55,
  sym_symlink_no_follow = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_double_quoted_string_token1 = 58,
  anon_sym_SQUOTE = 59,
  aux_sym_single_quoted_string_token1 = 60,
  sym_unquoted_string = 61,
  sym_line_continuation = 62,
  sym_comment = 63,
  sym_line_continuation_comment = 64,
  anon_sym_LF = 65,
  anon_sym_CRn = 66,
  anon_sym_FF = 67,
  sym__indent = 68,
  sym__dedent = 69,
  sym_source_file = 70,
  sym_arg_command = 71,
  sym_from_command = 72,
  sym_target = 73,
  sym_version_command = 74,
  sym_copy_command = 75,
  sym_run_command = 76,
  sym_save_artifact_command = 77,
  sym_save_image_command = 78,
  sym_image_spec = 79,
  sym_shell_fragment = 80,
  sym_target_ref = 81,
  sym_target_artifact = 82,
  sym_target_artifact_build_args = 83,
  sym_build_arg = 84,
  sym_cache_from = 85,
  sym_chmod = 86,
  sym_chown = 87,
  sym_mount = 88,
  sym_platform = 89,
  sym_secret = 90,
  sym__string = 91,
  sym_double_quoted_string = 92,
  sym_single_quoted_string = 93,
  sym__eol = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym_arg_command_repeat1 = 96,
  aux_sym_from_command_repeat1 = 97,
  aux_sym_from_command_repeat2 = 98,
  aux_sym_target_repeat1 = 99,
  aux_sym_version_command_repeat1 = 100,
  aux_sym_copy_command_repeat1 = 101,
  aux_sym_copy_command_repeat2 = 102,
  aux_sym_run_command_repeat1 = 103,
  aux_sym_save_artifact_command_repeat1 = 104,
  aux_sym_save_image_command_repeat1 = 105,
  aux_sym_save_image_command_repeat2 = 106,
  aux_sym_shell_fragment_repeat1 = 107,
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
  [anon_sym_IMAGE] = "IMAGE",
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
  [anon_sym_DASH_DASHcache_DASHfrom] = "--cache-from",
  [sym_cache_hint] = "cache_hint",
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
  [sym_save_image_command] = "save_image_command",
  [sym_image_spec] = "image_spec",
  [sym_shell_fragment] = "shell_fragment",
  [sym_target_ref] = "target_ref",
  [sym_target_artifact] = "target_artifact",
  [sym_target_artifact_build_args] = "target_artifact_build_args",
  [sym_build_arg] = "build_arg",
  [sym_cache_from] = "cache_from",
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
  [aux_sym_save_image_command_repeat1] = "save_image_command_repeat1",
  [aux_sym_save_image_command_repeat2] = "save_image_command_repeat2",
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
  [anon_sym_IMAGE] = anon_sym_IMAGE,
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
  [anon_sym_DASH_DASHcache_DASHfrom] = anon_sym_DASH_DASHcache_DASHfrom,
  [sym_cache_hint] = sym_cache_hint,
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
  [sym_save_image_command] = sym_save_image_command,
  [sym_image_spec] = sym_image_spec,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_target_ref] = sym_target_ref,
  [sym_target_artifact] = sym_target_artifact,
  [sym_target_artifact_build_args] = sym_target_artifact_build_args,
  [sym_build_arg] = sym_build_arg,
  [sym_cache_from] = sym_cache_from,
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
  [aux_sym_save_image_command_repeat1] = aux_sym_save_image_command_repeat1,
  [aux_sym_save_image_command_repeat2] = aux_sym_save_image_command_repeat2,
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
  [anon_sym_IMAGE] = {
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
  [anon_sym_DASH_DASHcache_DASHfrom] = {
    .visible = true,
    .named = false,
  },
  [sym_cache_hint] = {
    .visible = true,
    .named = true,
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
  [sym_save_image_command] = {
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
  [sym_cache_from] = {
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
  [aux_sym_save_image_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_save_image_command_repeat2] = {
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
  [22] = {.index = 40, .length = 1},
  [23] = {.index = 41, .length = 1},
  [24] = {.index = 42, .length = 2},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 3},
  [30] = {.index = 54, .length = 2},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 3},
  [34] = {.index = 64, .length = 3},
  [35] = {.index = 67, .length = 4},
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
    {field_option, 2},
  [41] =
    {field_option, 2, .inherited = true},
  [42] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [44] =
    {field_command, 2},
  [45] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [47] =
    {field_dest, 3},
    {field_src, 2},
  [49] =
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [51] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [54] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [56] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [59] =
    {field_as_local, 5},
    {field_src, 2},
  [61] =
    {field_as_local, 6},
    {field_dest, 3},
    {field_src, 2},
  [64] =
    {field_as_local, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [67] =
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 17,
  [24] = 24,
  [25] = 18,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 17,
  [34] = 34,
  [35] = 35,
  [36] = 18,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 37,
  [44] = 44,
  [45] = 29,
  [46] = 34,
  [47] = 47,
  [48] = 35,
  [49] = 38,
  [50] = 50,
  [51] = 51,
  [52] = 47,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 18,
  [62] = 62,
  [63] = 63,
  [64] = 17,
  [65] = 62,
  [66] = 51,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 53,
  [71] = 29,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 58,
  [76] = 76,
  [77] = 18,
  [78] = 78,
  [79] = 17,
  [80] = 56,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 67,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 59,
  [92] = 92,
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
  [105] = 51,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 83,
  [114] = 114,
  [115] = 92,
  [116] = 88,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 94,
  [125] = 125,
  [126] = 89,
  [127] = 97,
  [128] = 67,
  [129] = 114,
  [130] = 87,
  [131] = 81,
  [132] = 132,
  [133] = 59,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 138,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 139,
  [148] = 141,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 137,
  [153] = 153,
  [154] = 151,
  [155] = 153,
  [156] = 17,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 18,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 170,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 186,
  [194] = 194,
  [195] = 195,
  [196] = 172,
  [197] = 169,
  [198] = 198,
  [199] = 199,
  [200] = 192,
  [201] = 199,
  [202] = 202,
  [203] = 202,
  [204] = 172,
  [205] = 169,
  [206] = 192,
  [207] = 199,
  [208] = 202,
  [209] = 192,
  [210] = 199,
  [211] = 192,
  [212] = 199,
  [213] = 192,
  [214] = 199,
  [215] = 215,
  [216] = 179,
  [217] = 187,
  [218] = 179,
  [219] = 187,
  [220] = 179,
  [221] = 187,
  [222] = 179,
  [223] = 187,
  [224] = 179,
  [225] = 187,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(189);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == ',') ADVANCE(347);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '/') ADVANCE(355);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(185)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(399);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '#') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(351);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\f') ADVANCE(403);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\f') ADVANCE(412);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(409);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\f') ADVANCE(412);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '\f') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(411);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(350);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '\f') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(350);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '\f') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '\f') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(390);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(394);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '\f') ADVANCE(415);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '\f') ADVANCE(415);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(408);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '\f') ADVANCE(415);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(363);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(350);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(350);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(350);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == 'A') ADVANCE(272);
      if (lookahead == 'C') ADVANCE(269);
      if (lookahead == 'F') ADVANCE(273);
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead == 'S') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(346);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == 'R') ADVANCE(245);
      if (lookahead == 'S') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(248);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == 'R') ADVANCE(245);
      if (lookahead == 'S') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(252);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(184);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(360);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(183);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(143);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(209);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(216);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(190);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(190);
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(215);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(195);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(205);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(200);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'P') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'S') ADVANCE(213);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(212);
      END_STATE();
    case 85:
      if (lookahead == 'U') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'V') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'Y') ADVANCE(202);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(385);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 131:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(380);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(364);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 157:
      if (lookahead == 'q') ADVANCE(175);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(376);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 177:
      if (lookahead == 'v') ADVANCE(125);
      END_STATE();
    case 178:
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 179:
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 180:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 181:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 184:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 185:
      if (eof) ADVANCE(189);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(356);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(185)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 186:
      if (eof) ADVANCE(189);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(361);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'F') ADVANCE(226);
      if (lookahead == 'V') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(188)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 187:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(355);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'F') ADVANCE(226);
      if (lookahead == 'V') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 188:
      if (eof) ADVANCE(189);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(357);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'F') ADVANCE(226);
      if (lookahead == 'V') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_IMAGE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(399);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '#') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\f') ADVANCE(403);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(399);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '#') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\f') ADVANCE(403);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(399);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'k') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(278);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == 'k') ADVANCE(287);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\f') ADVANCE(403);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(400);
      if (lookahead == '\r') ADVANCE(388);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(388);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(401);
      if (lookahead == '\r') ADVANCE(392);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(399);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(399);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(400);
      if (lookahead == '\r') ADVANCE(388);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\f') ADVANCE(401);
      if (lookahead == '\r') ADVANCE(392);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\f') ADVANCE(403);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\f') ADVANCE(412);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(233);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '\f') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '\f') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '\f') ADVANCE(415);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(248);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(346);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(350);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\f') ADVANCE(412);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(233);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '\f') ADVANCE(413);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '\f') ADVANCE(414);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '+') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '\f') ADVANCE(415);
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
  [1] = {.lex_state = 187},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 38, .external_lex_state = 2},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 38, .external_lex_state = 2},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 38, .external_lex_state = 2},
  [27] = {.lex_state = 187},
  [28] = {.lex_state = 187},
  [29] = {.lex_state = 38, .external_lex_state = 2},
  [30] = {.lex_state = 38, .external_lex_state = 2},
  [31] = {.lex_state = 187},
  [32] = {.lex_state = 25, .external_lex_state = 2},
  [33] = {.lex_state = 38, .external_lex_state = 2},
  [34] = {.lex_state = 25, .external_lex_state = 2},
  [35] = {.lex_state = 25, .external_lex_state = 2},
  [36] = {.lex_state = 38, .external_lex_state = 2},
  [37] = {.lex_state = 25, .external_lex_state = 2},
  [38] = {.lex_state = 25, .external_lex_state = 2},
  [39] = {.lex_state = 38, .external_lex_state = 2},
  [40] = {.lex_state = 38, .external_lex_state = 2},
  [41] = {.lex_state = 38, .external_lex_state = 2},
  [42] = {.lex_state = 38, .external_lex_state = 2},
  [43] = {.lex_state = 187},
  [44] = {.lex_state = 36, .external_lex_state = 2},
  [45] = {.lex_state = 25, .external_lex_state = 2},
  [46] = {.lex_state = 187},
  [47] = {.lex_state = 186},
  [48] = {.lex_state = 187},
  [49] = {.lex_state = 187},
  [50] = {.lex_state = 36, .external_lex_state = 2},
  [51] = {.lex_state = 38, .external_lex_state = 2},
  [52] = {.lex_state = 20, .external_lex_state = 2},
  [53] = {.lex_state = 25, .external_lex_state = 2},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 187},
  [59] = {.lex_state = 38, .external_lex_state = 2},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 187},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 187},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 38, .external_lex_state = 2},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 187},
  [71] = {.lex_state = 187},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 25, .external_lex_state = 2},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 25, .external_lex_state = 2},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 25, .external_lex_state = 2},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 187, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 24},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 187},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 35},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 187},
  [116] = {.lex_state = 187},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 187},
  [119] = {.lex_state = 187},
  [120] = {.lex_state = 187},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 187},
  [125] = {.lex_state = 30},
  [126] = {.lex_state = 187},
  [127] = {.lex_state = 187},
  [128] = {.lex_state = 187},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 187},
  [131] = {.lex_state = 187},
  [132] = {.lex_state = 187},
  [133] = {.lex_state = 187},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 187},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 187},
  [143] = {.lex_state = 27},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 27},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 34},
  [162] = {.lex_state = 34},
  [163] = {.lex_state = 29},
  [164] = {.lex_state = 34},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 33},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 32},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 40},
  [173] = {.lex_state = 21},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 21},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 37},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 37},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 21},
  [183] = {.lex_state = 37},
  [184] = {.lex_state = 21},
  [185] = {.lex_state = 37},
  [186] = {.lex_state = 29},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 37},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 27},
  [196] = {.lex_state = 40},
  [197] = {.lex_state = 32},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 32},
  [203] = {.lex_state = 32},
  [204] = {.lex_state = 40},
  [205] = {.lex_state = 32},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 32},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 37},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 12},
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
    [anon_sym_IMAGE] = ACTIONS(1),
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
    [sym_source_file] = STATE(190),
    [sym_arg_command] = STATE(27),
    [sym_from_command] = STATE(27),
    [sym_target] = STATE(27),
    [sym_version_command] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
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
    STATE(78), 1,
      aux_sym_copy_command_repeat2,
    STATE(175), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
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
    STATE(5), 1,
      aux_sym_copy_command_repeat1,
    STATE(68), 1,
      aux_sym_copy_command_repeat2,
    STATE(175), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
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
    STATE(7), 1,
      aux_sym_run_command_repeat1,
    STATE(72), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(149), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(21), 2,
      sym_mount,
      sym_secret,
    ACTIONS(37), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [151] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(43), 1,
      sym_path,
    ACTIONS(50), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(53), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(56), 1,
      anon_sym_DASH_DASHplatform,
    STATE(5), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(10), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(47), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [192] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(35), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(39), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(41), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(59), 1,
      anon_sym_DASH_DASH,
    STATE(4), 1,
      aux_sym_run_command_repeat1,
    STATE(72), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(146), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(33), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(21), 2,
      sym_mount,
      sym_secret,
    ACTIONS(37), 6,
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
    STATE(21), 2,
      sym_mount,
      sym_secret,
    ACTIONS(65), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [274] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(76), 1,
      sym_image_name,
    ACTIONS(78), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(80), 1,
      sym_cache_hint,
    ACTIONS(82), 1,
      sym_push,
    ACTIONS(84), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_save_image_command_repeat1,
    STATE(40), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(74), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [314] = 4,
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
  [339] = 4,
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
  [364] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(94), 1,
      anon_sym_ARG,
    ACTIONS(96), 1,
      anon_sym_FROM,
    ACTIONS(98), 1,
      anon_sym_COPY,
    ACTIONS(100), 1,
      anon_sym_RUN,
    ACTIONS(102), 1,
      anon_sym_SAVE,
    ACTIONS(104), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(12), 7,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      aux_sym_target_repeat1,
  [399] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(94), 1,
      anon_sym_ARG,
    ACTIONS(96), 1,
      anon_sym_FROM,
    ACTIONS(98), 1,
      anon_sym_COPY,
    ACTIONS(100), 1,
      anon_sym_RUN,
    ACTIONS(102), 1,
      anon_sym_SAVE,
    ACTIONS(106), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 7,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      aux_sym_target_repeat1,
  [434] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(76), 1,
      sym_image_name,
    ACTIONS(78), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(82), 1,
      sym_push,
    ACTIONS(110), 1,
      sym__dedent,
    STATE(26), 1,
      aux_sym_save_image_command_repeat1,
    STATE(40), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(42), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(108), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [471] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(112), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(114), 12,
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
  [496] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_ARG,
    ACTIONS(119), 1,
      anon_sym_FROM,
    ACTIONS(122), 1,
      anon_sym_COPY,
    ACTIONS(125), 1,
      anon_sym_RUN,
    ACTIONS(128), 1,
      anon_sym_SAVE,
    ACTIONS(131), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 7,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      aux_sym_target_repeat1,
  [531] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(133), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(135), 12,
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
  [556] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(137), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 12,
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
  [581] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(141), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(143), 12,
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
  [606] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(147), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(145), 10,
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
  [630] = 10,
    ACTIONS(149), 1,
      sym_image_name,
    ACTIONS(151), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      sym_allow_privileged,
    ACTIONS(155), 1,
      anon_sym_DASH_DASHplatform,
    STATE(43), 1,
      sym_target_ref,
    STATE(85), 1,
      aux_sym_from_command_repeat1,
    STATE(166), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    STATE(127), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(157), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [666] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(161), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(159), 10,
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
  [690] = 10,
    ACTIONS(153), 1,
      sym_allow_privileged,
    ACTIONS(155), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(163), 1,
      sym_image_name,
    ACTIONS(165), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      sym_target_ref,
    STATE(84), 1,
      aux_sym_from_command_repeat1,
    STATE(166), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    STATE(97), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(167), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [726] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(137), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(139), 10,
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
  [750] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(171), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(169), 10,
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
  [774] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(141), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(143), 10,
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
  [798] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(175), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(178), 1,
      sym_push,
    ACTIONS(181), 1,
      sym__dedent,
    STATE(26), 1,
      aux_sym_save_image_command_repeat1,
    STATE(40), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(173), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [829] = 8,
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
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [859] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_ARG,
    ACTIONS(190), 1,
      anon_sym_FROM,
    ACTIONS(193), 1,
      anon_sym_VERSION,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [889] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(201), 1,
      anon_sym_COLON2,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(199), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [914] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(76), 1,
      sym_image_name,
    ACTIONS(209), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(207), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [939] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(215), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(31), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(213), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [964] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(211), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [987] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(137), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1008] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(221), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1031] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(225), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1054] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(143), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(141), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1075] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(227), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1098] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(229), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1121] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(233), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(231), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1142] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(237), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(235), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1163] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      sym_image_name,
    ACTIONS(244), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(239), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1188] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(76), 1,
      sym_image_name,
    ACTIONS(248), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(246), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1213] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(48), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(250), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1237] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(256), 1,
      anon_sym_AS,
    ACTIONS(258), 1,
      sym_path,
    ACTIONS(260), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(254), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1261] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(262), 1,
      anon_sym_COLON2,
    ACTIONS(264), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(205), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1283] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(266), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1307] = 4,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(270), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [1327] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(274), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1351] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
    ACTIONS(276), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1375] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_AS,
    ACTIONS(282), 1,
      sym_path,
    ACTIONS(284), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(278), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1399] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(288), 1,
      anon_sym_AT,
    ACTIONS(290), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(286), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1421] = 4,
    ACTIONS(268), 1,
      sym__dedent,
    ACTIONS(292), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(270), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1441] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(294), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1458] = 4,
    STATE(54), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(296), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(299), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1477] = 4,
    STATE(106), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(301), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(303), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1496] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      sym_expr,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    ACTIONS(311), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(139), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1521] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1540] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(319), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1559] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1578] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      sym_path,
    STATE(60), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [1599] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(141), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1618] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      sym_expr,
    ACTIONS(332), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(153), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1643] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(334), 1,
      sym_path,
    STATE(60), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(336), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [1664] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(137), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1683] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      sym_expr,
    ACTIONS(340), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(155), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(290), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1727] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(346), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(344), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1746] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      sym_path,
    STATE(76), 1,
      aux_sym_copy_command_repeat2,
    STATE(175), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1773] = 4,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(301), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(350), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(294), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(352), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1811] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_COLON2,
    ACTIONS(356), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(199), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1834] = 4,
    STATE(54), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(358), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(360), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1853] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      anon_sym_AS,
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
  [1872] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(366), 1,
      sym_path,
    STATE(63), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(336), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [1893] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(317), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1910] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      sym_path,
    ACTIONS(371), 1,
      anon_sym_PLUS,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      aux_sym_copy_command_repeat2,
    STATE(175), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1937] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(143), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1954] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      sym_path,
    STATE(76), 1,
      aux_sym_copy_command_repeat2,
    STATE(175), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [1981] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(139), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1998] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    ACTIONS(379), 1,
      sym_expr,
    ACTIONS(381), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(147), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(383), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2039] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(385), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2055] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2077] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(393), 1,
      anon_sym_PLUS,
    ACTIONS(395), 1,
      sym_allow_privileged,
    STATE(34), 1,
      sym_target_ref,
    STATE(117), 1,
      aux_sym_from_command_repeat1,
    STATE(166), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2103] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(395), 1,
      sym_allow_privileged,
    STATE(46), 1,
      sym_target_ref,
    STATE(117), 1,
      aux_sym_from_command_repeat1,
    STATE(166), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2129] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(346), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2145] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(397), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2161] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2193] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    ACTIONS(407), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2215] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2231] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2247] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(413), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2267] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(417), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2283] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2305] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    ACTIONS(421), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2327] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
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
  [2343] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(423), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2359] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(429), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2381] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2403] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2419] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(435), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2435] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(437), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2451] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2467] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(286), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(443), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2503] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(445), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2521] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(449), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2537] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      anon_sym_SQUOTE,
    ACTIONS(455), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2559] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(457), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2575] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2591] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(461), 6,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2607] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      anon_sym_SQUOTE,
    ACTIONS(467), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(70), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2629] = 4,
    ACTIONS(469), 1,
      anon_sym_EQ,
    STATE(94), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(471), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2646] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2663] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2680] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_PLUS,
    ACTIONS(479), 1,
      sym_allow_privileged,
    ACTIONS(482), 1,
      anon_sym_DASH_DASHplatform,
    STATE(117), 1,
      aux_sym_from_command_repeat1,
    STATE(166), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [2703] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(487), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2720] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(491), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2737] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(495), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2754] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      aux_sym_shell_fragment_token3,
    STATE(72), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(134), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2775] = 4,
    ACTIONS(497), 1,
      anon_sym_EQ,
    STATE(92), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(499), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2792] = 4,
    ACTIONS(501), 1,
      anon_sym_EQ,
    STATE(115), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(503), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2809] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2826] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(33), 1,
      aux_sym_shell_fragment_token3,
    STATE(72), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(144), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(35), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [2847] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2864] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(250), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2881] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(344), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2898] = 4,
    ACTIONS(509), 1,
      anon_sym_EQ,
    STATE(124), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(511), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2915] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(513), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(515), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2949] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(519), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2966] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2983] = 3,
    STATE(112), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(521), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2997] = 3,
    STATE(118), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(523), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3011] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(142), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
  [3029] = 3,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(527), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3043] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(140), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 2,
      sym_global,
      sym_required,
  [3061] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(533), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3075] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(140), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 2,
      sym_global,
      sym_required,
  [3093] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(143), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 2,
      sym_global,
      sym_required,
  [3111] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 2,
      sym_build_arg,
      aux_sym_from_command_repeat2,
  [3129] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(140), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 2,
      sym_global,
      sym_required,
  [3147] = 3,
    STATE(82), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(546), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3161] = 3,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(548), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3175] = 3,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(550), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3189] = 3,
    STATE(89), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(552), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3203] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      sym_identifier,
    STATE(138), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 2,
      sym_global,
      sym_required,
  [3221] = 3,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(556), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3235] = 3,
    STATE(93), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(558), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3249] = 3,
    STATE(81), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(560), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3263] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(562), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3277] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(564), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3291] = 3,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(566), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3305] = 3,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(568), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3319] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(137), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3330] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      sym_version_major_minor,
    ACTIONS(572), 1,
      sym_feature_flag,
    STATE(163), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3347] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      sym_version_major_minor,
    ACTIONS(576), 1,
      sym_feature_flag,
    STATE(158), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3364] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(579), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(581), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(583), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [3392] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(301), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(585), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3407] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(587), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(589), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3422] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(591), 1,
      sym_version_major_minor,
    ACTIONS(593), 1,
      sym_feature_flag,
    STATE(158), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3439] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(595), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(597), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3454] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(141), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(599), 3,
      anon_sym_PLUS,
      sym_allow_privileged,
      anon_sym_DASH_DASHplatform,
  [3478] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    STATE(177), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3492] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(601), 1,
      anon_sym_ARTIFACT,
    ACTIONS(603), 1,
      anon_sym_IMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3506] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(605), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(607), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3528] = 2,
    ACTIONS(609), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3548] = 2,
    ACTIONS(613), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3557] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(615), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3568] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3579] = 2,
    ACTIONS(619), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3588] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3599] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(623), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3610] = 2,
    ACTIONS(625), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(627), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3630] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(629), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3641] = 2,
    ACTIONS(631), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3650] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3661] = 2,
    ACTIONS(635), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3670] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3681] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(639), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3692] = 2,
    ACTIONS(641), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(643), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3723] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(647), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3734] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3745] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(651), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3756] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3767] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3778] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3789] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(659), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3800] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3811] = 2,
    ACTIONS(663), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3820] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3831] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3842] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3853] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3864] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3875] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(675), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3886] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3897] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3908] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3919] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3930] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3941] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3974] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(693), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3985] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3996] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4007] = 2,
    ACTIONS(699), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4016] = 2,
    ACTIONS(701), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4025] = 2,
    ACTIONS(703), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4034] = 2,
    ACTIONS(705), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4043] = 2,
    ACTIONS(707), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4052] = 2,
    ACTIONS(709), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4061] = 2,
    ACTIONS(711), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4070] = 2,
    ACTIONS(713), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4079] = 2,
    ACTIONS(715), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4088] = 2,
    ACTIONS(717), 1,
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
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 314,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 434,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 496,
  [SMALL_STATE(16)] = 531,
  [SMALL_STATE(17)] = 556,
  [SMALL_STATE(18)] = 581,
  [SMALL_STATE(19)] = 606,
  [SMALL_STATE(20)] = 630,
  [SMALL_STATE(21)] = 666,
  [SMALL_STATE(22)] = 690,
  [SMALL_STATE(23)] = 726,
  [SMALL_STATE(24)] = 750,
  [SMALL_STATE(25)] = 774,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 889,
  [SMALL_STATE(30)] = 914,
  [SMALL_STATE(31)] = 939,
  [SMALL_STATE(32)] = 964,
  [SMALL_STATE(33)] = 987,
  [SMALL_STATE(34)] = 1008,
  [SMALL_STATE(35)] = 1031,
  [SMALL_STATE(36)] = 1054,
  [SMALL_STATE(37)] = 1075,
  [SMALL_STATE(38)] = 1098,
  [SMALL_STATE(39)] = 1121,
  [SMALL_STATE(40)] = 1142,
  [SMALL_STATE(41)] = 1163,
  [SMALL_STATE(42)] = 1188,
  [SMALL_STATE(43)] = 1213,
  [SMALL_STATE(44)] = 1237,
  [SMALL_STATE(45)] = 1261,
  [SMALL_STATE(46)] = 1283,
  [SMALL_STATE(47)] = 1307,
  [SMALL_STATE(48)] = 1327,
  [SMALL_STATE(49)] = 1351,
  [SMALL_STATE(50)] = 1375,
  [SMALL_STATE(51)] = 1399,
  [SMALL_STATE(52)] = 1421,
  [SMALL_STATE(53)] = 1441,
  [SMALL_STATE(54)] = 1458,
  [SMALL_STATE(55)] = 1477,
  [SMALL_STATE(56)] = 1496,
  [SMALL_STATE(57)] = 1521,
  [SMALL_STATE(58)] = 1540,
  [SMALL_STATE(59)] = 1559,
  [SMALL_STATE(60)] = 1578,
  [SMALL_STATE(61)] = 1599,
  [SMALL_STATE(62)] = 1618,
  [SMALL_STATE(63)] = 1643,
  [SMALL_STATE(64)] = 1664,
  [SMALL_STATE(65)] = 1683,
  [SMALL_STATE(66)] = 1708,
  [SMALL_STATE(67)] = 1727,
  [SMALL_STATE(68)] = 1746,
  [SMALL_STATE(69)] = 1773,
  [SMALL_STATE(70)] = 1792,
  [SMALL_STATE(71)] = 1811,
  [SMALL_STATE(72)] = 1834,
  [SMALL_STATE(73)] = 1853,
  [SMALL_STATE(74)] = 1872,
  [SMALL_STATE(75)] = 1893,
  [SMALL_STATE(76)] = 1910,
  [SMALL_STATE(77)] = 1937,
  [SMALL_STATE(78)] = 1954,
  [SMALL_STATE(79)] = 1981,
  [SMALL_STATE(80)] = 1998,
  [SMALL_STATE(81)] = 2023,
  [SMALL_STATE(82)] = 2039,
  [SMALL_STATE(83)] = 2055,
  [SMALL_STATE(84)] = 2077,
  [SMALL_STATE(85)] = 2103,
  [SMALL_STATE(86)] = 2129,
  [SMALL_STATE(87)] = 2145,
  [SMALL_STATE(88)] = 2161,
  [SMALL_STATE(89)] = 2177,
  [SMALL_STATE(90)] = 2193,
  [SMALL_STATE(91)] = 2215,
  [SMALL_STATE(92)] = 2231,
  [SMALL_STATE(93)] = 2247,
  [SMALL_STATE(94)] = 2267,
  [SMALL_STATE(95)] = 2283,
  [SMALL_STATE(96)] = 2305,
  [SMALL_STATE(97)] = 2327,
  [SMALL_STATE(98)] = 2343,
  [SMALL_STATE(99)] = 2359,
  [SMALL_STATE(100)] = 2381,
  [SMALL_STATE(101)] = 2403,
  [SMALL_STATE(102)] = 2419,
  [SMALL_STATE(103)] = 2435,
  [SMALL_STATE(104)] = 2451,
  [SMALL_STATE(105)] = 2467,
  [SMALL_STATE(106)] = 2487,
  [SMALL_STATE(107)] = 2503,
  [SMALL_STATE(108)] = 2521,
  [SMALL_STATE(109)] = 2537,
  [SMALL_STATE(110)] = 2559,
  [SMALL_STATE(111)] = 2575,
  [SMALL_STATE(112)] = 2591,
  [SMALL_STATE(113)] = 2607,
  [SMALL_STATE(114)] = 2629,
  [SMALL_STATE(115)] = 2646,
  [SMALL_STATE(116)] = 2663,
  [SMALL_STATE(117)] = 2680,
  [SMALL_STATE(118)] = 2703,
  [SMALL_STATE(119)] = 2720,
  [SMALL_STATE(120)] = 2737,
  [SMALL_STATE(121)] = 2754,
  [SMALL_STATE(122)] = 2775,
  [SMALL_STATE(123)] = 2792,
  [SMALL_STATE(124)] = 2809,
  [SMALL_STATE(125)] = 2826,
  [SMALL_STATE(126)] = 2847,
  [SMALL_STATE(127)] = 2864,
  [SMALL_STATE(128)] = 2881,
  [SMALL_STATE(129)] = 2898,
  [SMALL_STATE(130)] = 2915,
  [SMALL_STATE(131)] = 2932,
  [SMALL_STATE(132)] = 2949,
  [SMALL_STATE(133)] = 2966,
  [SMALL_STATE(134)] = 2983,
  [SMALL_STATE(135)] = 2997,
  [SMALL_STATE(136)] = 3011,
  [SMALL_STATE(137)] = 3029,
  [SMALL_STATE(138)] = 3043,
  [SMALL_STATE(139)] = 3061,
  [SMALL_STATE(140)] = 3075,
  [SMALL_STATE(141)] = 3093,
  [SMALL_STATE(142)] = 3111,
  [SMALL_STATE(143)] = 3129,
  [SMALL_STATE(144)] = 3147,
  [SMALL_STATE(145)] = 3161,
  [SMALL_STATE(146)] = 3175,
  [SMALL_STATE(147)] = 3189,
  [SMALL_STATE(148)] = 3203,
  [SMALL_STATE(149)] = 3221,
  [SMALL_STATE(150)] = 3235,
  [SMALL_STATE(151)] = 3249,
  [SMALL_STATE(152)] = 3263,
  [SMALL_STATE(153)] = 3277,
  [SMALL_STATE(154)] = 3291,
  [SMALL_STATE(155)] = 3305,
  [SMALL_STATE(156)] = 3319,
  [SMALL_STATE(157)] = 3330,
  [SMALL_STATE(158)] = 3347,
  [SMALL_STATE(159)] = 3364,
  [SMALL_STATE(160)] = 3379,
  [SMALL_STATE(161)] = 3392,
  [SMALL_STATE(162)] = 3407,
  [SMALL_STATE(163)] = 3422,
  [SMALL_STATE(164)] = 3439,
  [SMALL_STATE(165)] = 3454,
  [SMALL_STATE(166)] = 3465,
  [SMALL_STATE(167)] = 3478,
  [SMALL_STATE(168)] = 3492,
  [SMALL_STATE(169)] = 3506,
  [SMALL_STATE(170)] = 3517,
  [SMALL_STATE(171)] = 3528,
  [SMALL_STATE(172)] = 3537,
  [SMALL_STATE(173)] = 3548,
  [SMALL_STATE(174)] = 3557,
  [SMALL_STATE(175)] = 3568,
  [SMALL_STATE(176)] = 3579,
  [SMALL_STATE(177)] = 3588,
  [SMALL_STATE(178)] = 3599,
  [SMALL_STATE(179)] = 3610,
  [SMALL_STATE(180)] = 3619,
  [SMALL_STATE(181)] = 3630,
  [SMALL_STATE(182)] = 3641,
  [SMALL_STATE(183)] = 3650,
  [SMALL_STATE(184)] = 3661,
  [SMALL_STATE(185)] = 3670,
  [SMALL_STATE(186)] = 3681,
  [SMALL_STATE(187)] = 3692,
  [SMALL_STATE(188)] = 3701,
  [SMALL_STATE(189)] = 3712,
  [SMALL_STATE(190)] = 3723,
  [SMALL_STATE(191)] = 3734,
  [SMALL_STATE(192)] = 3745,
  [SMALL_STATE(193)] = 3756,
  [SMALL_STATE(194)] = 3767,
  [SMALL_STATE(195)] = 3778,
  [SMALL_STATE(196)] = 3789,
  [SMALL_STATE(197)] = 3800,
  [SMALL_STATE(198)] = 3811,
  [SMALL_STATE(199)] = 3820,
  [SMALL_STATE(200)] = 3831,
  [SMALL_STATE(201)] = 3842,
  [SMALL_STATE(202)] = 3853,
  [SMALL_STATE(203)] = 3864,
  [SMALL_STATE(204)] = 3875,
  [SMALL_STATE(205)] = 3886,
  [SMALL_STATE(206)] = 3897,
  [SMALL_STATE(207)] = 3908,
  [SMALL_STATE(208)] = 3919,
  [SMALL_STATE(209)] = 3930,
  [SMALL_STATE(210)] = 3941,
  [SMALL_STATE(211)] = 3952,
  [SMALL_STATE(212)] = 3963,
  [SMALL_STATE(213)] = 3974,
  [SMALL_STATE(214)] = 3985,
  [SMALL_STATE(215)] = 3996,
  [SMALL_STATE(216)] = 4007,
  [SMALL_STATE(217)] = 4016,
  [SMALL_STATE(218)] = 4025,
  [SMALL_STATE(219)] = 4034,
  [SMALL_STATE(220)] = 4043,
  [SMALL_STATE(221)] = 4052,
  [SMALL_STATE(222)] = 4061,
  [SMALL_STATE(223)] = 4070,
  [SMALL_STATE(224)] = 4079,
  [SMALL_STATE(225)] = 4088,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(182),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(176),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(184),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(21),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(171),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(198),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(141),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(22),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(6),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(168),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(173),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_command_repeat2, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(174),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat2, 2), SHIFT_REPEAT(170),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(29),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 4, .production_id = 23),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 4, .production_id = 23),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(54),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 27),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(107),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 31),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(161),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(186),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(167),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 30),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 35),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 20),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 34),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 33),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 32),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 29),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 26),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 22),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 24),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 25),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(166),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(184),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(160),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(158),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [647] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
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
