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
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 36

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_BUILD = 3,
  anon_sym_FROM = 4,
  anon_sym_COLON = 5,
  anon_sym_VERSION = 6,
  anon_sym_COPY = 7,
  anon_sym_LET = 8,
  anon_sym_RUN = 9,
  anon_sym_DASH_DASH = 10,
  anon_sym_SAVE = 11,
  anon_sym_ARTIFACT = 12,
  anon_sym_AS = 13,
  anon_sym_LOCAL = 14,
  anon_sym_IMAGE = 15,
  sym_expr = 16,
  sym_identifier = 17,
  anon_sym_COLON2 = 18,
  anon_sym_AT = 19,
  sym_image_name = 20,
  sym_image_tag = 21,
  sym_image_digest = 22,
  sym_immediate_identifier = 23,
  sym_path = 24,
  aux_sym_shell_fragment_token1 = 25,
  aux_sym_shell_fragment_token2 = 26,
  aux_sym_shell_fragment_token3 = 27,
  anon_sym_PLUS = 28,
  anon_sym_SLASH = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  sym_version_major_minor = 32,
  sym_allow_privileged = 33,
  anon_sym_DASH_DASH2 = 34,
  aux_sym_build_arg_token1 = 35,
  anon_sym_DASH_DASHcache_DASHfrom = 36,
  sym_cache_hint = 37,
  anon_sym_DASH_DASHchmod = 38,
  anon_sym_DASH_DASHchown = 39,
  sym_dir = 40,
  sym_entrypoint = 41,
  sym_feature_flag = 42,
  sym_force = 43,
  sym_global = 44,
  sym_if_exists = 45,
  sym_keep_own = 46,
  sym_keep_ts = 47,
  anon_sym_DASH_DASHmount = 48,
  sym_network_none = 49,
  sym_no_cache = 50,
  sym_pass_args = 51,
  anon_sym_DASH_DASHplatform = 52,
  sym_privileged = 53,
  sym_push = 54,
  sym_required = 55,
  anon_sym_DASH_DASHsecret = 56,
  sym_ssh = 57,
  sym_symlink_no_follow = 58,
  anon_sym_DQUOTE = 59,
  aux_sym_double_quoted_string_token1 = 60,
  anon_sym_SQUOTE = 61,
  aux_sym_single_quoted_string_token1 = 62,
  sym_unquoted_string = 63,
  sym_line_continuation = 64,
  sym_comment = 65,
  sym_line_continuation_comment = 66,
  anon_sym_LF = 67,
  anon_sym_CRn = 68,
  anon_sym_FF = 69,
  sym__indent = 70,
  sym__dedent = 71,
  sym_source_file = 72,
  sym_arg_command = 73,
  sym_from_command = 74,
  sym_target = 75,
  sym_version_command = 76,
  sym_copy_command = 77,
  sym_let_command = 78,
  sym_run_command = 79,
  sym_save_artifact_command = 80,
  sym_save_image_command = 81,
  sym_image_spec = 82,
  sym_shell_fragment = 83,
  sym_target_ref = 84,
  sym_target_artifact = 85,
  sym_target_artifact_build_args = 86,
  sym_build_arg = 87,
  sym_cache_from = 88,
  sym_chmod = 89,
  sym_chown = 90,
  sym_mount = 91,
  sym_platform = 92,
  sym_secret = 93,
  sym__string = 94,
  sym_double_quoted_string = 95,
  sym_single_quoted_string = 96,
  sym__eol = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym_arg_command_repeat1 = 99,
  aux_sym_build_command_repeat2 = 100,
  aux_sym_from_command_repeat1 = 101,
  aux_sym_target_repeat1 = 102,
  aux_sym_version_command_repeat1 = 103,
  aux_sym_copy_command_repeat1 = 104,
  aux_sym_copy_command_repeat2 = 105,
  aux_sym_run_command_repeat1 = 106,
  aux_sym_save_artifact_command_repeat1 = 107,
  aux_sym_save_image_command_repeat1 = 108,
  aux_sym_save_image_command_repeat2 = 109,
  aux_sym_shell_fragment_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_BUILD] = "BUILD",
  [anon_sym_FROM] = "FROM",
  [anon_sym_COLON] = ":",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_COPY] = "COPY",
  [anon_sym_LET] = "LET",
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
  [sym_let_command] = "let_command",
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
  [aux_sym_build_command_repeat2] = "build_command_repeat2",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
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
  [anon_sym_BUILD] = anon_sym_BUILD,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_LET] = anon_sym_LET,
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
  [sym_let_command] = sym_let_command,
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
  [aux_sym_build_command_repeat2] = aux_sym_build_command_repeat2,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
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
  [anon_sym_BUILD] = {
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
  [anon_sym_LET] = {
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
  [sym_let_command] = {
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
  [aux_sym_build_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_command_repeat1] = {
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
  field_command = 1,
  field_default_value = 2,
  field_default_value_expr = 3,
  field_dest = 4,
  field_digest = 5,
  field_local_dest = 6,
  field_name = 7,
  field_option = 8,
  field_src = 9,
  field_tag = 10,
  field_value = 11,
  field_version = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_local_dest] = "local_dest",
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
    {field_local_dest, 5},
    {field_src, 2},
  [61] =
    {field_dest, 3},
    {field_local_dest, 6},
    {field_src, 2},
  [64] =
    {field_local_dest, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [67] =
    {field_dest, 4},
    {field_local_dest, 7},
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
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 17,
  [25] = 25,
  [26] = 13,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 13,
  [36] = 17,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 45,
  [46] = 40,
  [47] = 47,
  [48] = 48,
  [49] = 37,
  [50] = 50,
  [51] = 38,
  [52] = 28,
  [53] = 53,
  [54] = 13,
  [55] = 55,
  [56] = 56,
  [57] = 17,
  [58] = 58,
  [59] = 45,
  [60] = 47,
  [61] = 27,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 56,
  [71] = 71,
  [72] = 64,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 58,
  [79] = 48,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 50,
  [90] = 90,
  [91] = 91,
  [92] = 17,
  [93] = 76,
  [94] = 94,
  [95] = 95,
  [96] = 39,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 13,
  [101] = 101,
  [102] = 94,
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
  [115] = 45,
  [116] = 114,
  [117] = 50,
  [118] = 118,
  [119] = 68,
  [120] = 120,
  [121] = 121,
  [122] = 67,
  [123] = 65,
  [124] = 77,
  [125] = 118,
  [126] = 69,
  [127] = 74,
  [128] = 128,
  [129] = 121,
  [130] = 56,
  [131] = 71,
  [132] = 132,
  [133] = 133,
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
  [148] = 141,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 138,
  [154] = 150,
  [155] = 149,
  [156] = 156,
  [157] = 146,
  [158] = 136,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 17,
  [163] = 13,
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
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 174,
  [201] = 201,
  [202] = 192,
  [203] = 191,
  [204] = 173,
  [205] = 174,
  [206] = 172,
  [207] = 176,
  [208] = 208,
  [209] = 173,
  [210] = 192,
  [211] = 174,
  [212] = 172,
  [213] = 176,
  [214] = 214,
  [215] = 172,
  [216] = 174,
  [217] = 172,
  [218] = 174,
  [219] = 172,
  [220] = 198,
  [221] = 184,
  [222] = 183,
  [223] = 184,
  [224] = 183,
  [225] = 184,
  [226] = 183,
  [227] = 184,
  [228] = 183,
  [229] = 184,
  [230] = 183,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(202);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(198)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(420);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == '#') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(372);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\f') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(433);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == 'n') ADVANCE(430);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(433);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\f') ADVANCE(434);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(367);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\f') ADVANCE(434);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(367);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\f') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(432);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(371);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\f') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(371);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(415);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '#') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(411);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\f') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\f') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\f') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(31)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(371);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(22)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(371);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(371);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(367);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(367);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(367);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(367);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(367);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'F') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(253);
      if (lookahead == 'R') ADVANCE(264);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(267);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'F') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(253);
      if (lookahead == 'R') ADVANCE(264);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(250);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(268);
      if (lookahead == '\\') ADVANCE(269);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(271);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '(') ADVANCE(197);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(196);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(208);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(233);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(203);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(203);
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(232);
      END_STATE();
    case 76:
      if (lookahead == 'M') ADVANCE(209);
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(222);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(214);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(230);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(219);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(229);
      END_STATE();
    case 91:
      if (lookahead == 'U') ADVANCE(71);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 94:
      if (lookahead == 'Y') ADVANCE(216);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(119);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(403);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(54);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(401);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 'q') ADVANCE(188);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 176:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 190:
      if (lookahead == 'v') ADVANCE(135);
      END_STATE();
    case 191:
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 192:
      if (lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 193:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 196:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 197:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 198:
      if (eof) ADVANCE(202);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(198)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 199:
      if (eof) ADVANCE(202);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == 'V') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(201)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 200:
      if (eof) ADVANCE(202);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == 'V') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(201)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 201:
      if (eof) ADVANCE(202);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == 'V') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(201)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_IMAGE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(420);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == '#') ADVANCE(251);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\f') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(420);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == '#') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\f') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(420);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(286);
      if (lookahead == 'S') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'k') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'k') ADVANCE(308);
      if (lookahead == 's') ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\f') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_build_arg_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(409);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(409);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(421);
      if (lookahead == '\r') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(420);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(420);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(421);
      if (lookahead == '\r') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == '\f') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(409);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\f') ADVANCE(424);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(433);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(250);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\f') ADVANCE(434);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\f') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\f') ADVANCE(436);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(267);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(371);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\f') ADVANCE(433);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(250);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == '\f') ADVANCE(434);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '+') ADVANCE(375);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == '\f') ADVANCE(435);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == '\f') ADVANCE(436);
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
  [1] = {.lex_state = 200},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 38, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 38, .external_lex_state = 2},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 38, .external_lex_state = 2},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 25, .external_lex_state = 2},
  [28] = {.lex_state = 25, .external_lex_state = 2},
  [29] = {.lex_state = 38, .external_lex_state = 2},
  [30] = {.lex_state = 38, .external_lex_state = 2},
  [31] = {.lex_state = 200},
  [32] = {.lex_state = 38, .external_lex_state = 2},
  [33] = {.lex_state = 38, .external_lex_state = 2},
  [34] = {.lex_state = 38, .external_lex_state = 2},
  [35] = {.lex_state = 38, .external_lex_state = 2},
  [36] = {.lex_state = 38, .external_lex_state = 2},
  [37] = {.lex_state = 25, .external_lex_state = 2},
  [38] = {.lex_state = 25, .external_lex_state = 2},
  [39] = {.lex_state = 38, .external_lex_state = 2},
  [40] = {.lex_state = 25, .external_lex_state = 2},
  [41] = {.lex_state = 200},
  [42] = {.lex_state = 36, .external_lex_state = 2},
  [43] = {.lex_state = 36, .external_lex_state = 2},
  [44] = {.lex_state = 25, .external_lex_state = 2},
  [45] = {.lex_state = 38, .external_lex_state = 2},
  [46] = {.lex_state = 200},
  [47] = {.lex_state = 20, .external_lex_state = 2},
  [48] = {.lex_state = 25, .external_lex_state = 2},
  [49] = {.lex_state = 200},
  [50] = {.lex_state = 38, .external_lex_state = 2},
  [51] = {.lex_state = 200},
  [52] = {.lex_state = 200},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 25, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 38, .external_lex_state = 2},
  [57] = {.lex_state = 25, .external_lex_state = 2},
  [58] = {.lex_state = 25, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 199},
  [61] = {.lex_state = 200},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 24},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 200},
  [79] = {.lex_state = 200},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 34},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 35},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 200},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 200},
  [97] = {.lex_state = 34},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 34},
  [100] = {.lex_state = 200},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 35},
  [111] = {.lex_state = 200, .external_lex_state = 3},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 200},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 200},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 200},
  [120] = {.lex_state = 200},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 200},
  [123] = {.lex_state = 200},
  [124] = {.lex_state = 200},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 200},
  [127] = {.lex_state = 200},
  [128] = {.lex_state = 200},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 200},
  [131] = {.lex_state = 200},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 30},
  [134] = {.lex_state = 200},
  [135] = {.lex_state = 200},
  [136] = {.lex_state = 27},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 200},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 200},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 27},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 27},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 34},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 27},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 29},
  [167] = {.lex_state = 34},
  [168] = {.lex_state = 29},
  [169] = {.lex_state = 34},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 37},
  [176] = {.lex_state = 32},
  [177] = {.lex_state = 27},
  [178] = {.lex_state = 21},
  [179] = {.lex_state = 37},
  [180] = {.lex_state = 21},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 37},
  [186] = {.lex_state = 37},
  [187] = {.lex_state = 200},
  [188] = {.lex_state = 21},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 27},
  [191] = {.lex_state = 29},
  [192] = {.lex_state = 32},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 37},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 29},
  [199] = {.lex_state = 37},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 32},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 40},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 32},
  [208] = {.lex_state = 21},
  [209] = {.lex_state = 40},
  [210] = {.lex_state = 32},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 29},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 12},
  [230] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BUILD] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
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
    [sym_source_file] = STATE(189),
    [sym_arg_command] = STATE(41),
    [sym_from_command] = STATE(41),
    [sym_target] = STATE(41),
    [sym_version_command] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(41),
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
    STATE(84), 1,
      aux_sym_copy_command_repeat2,
    STATE(181), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(18), 3,
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
    STATE(97), 1,
      aux_sym_copy_command_repeat2,
    STATE(181), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(18), 3,
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
    STATE(18), 3,
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
    STATE(11), 1,
      aux_sym_run_command_repeat1,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(137), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(49), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(25), 2,
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
    STATE(5), 1,
      aux_sym_run_command_repeat1,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(140), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(49), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(25), 2,
      sym_mount,
      sym_secret,
    ACTIONS(53), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [237] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(63), 1,
      sym_image_name,
    ACTIONS(65), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(67), 1,
      sym_cache_hint,
    ACTIONS(69), 1,
      sym_push,
    ACTIONS(71), 1,
      sym__dedent,
    STATE(12), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(29), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(61), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [278] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(73), 1,
      anon_sym_ARG,
    ACTIONS(75), 1,
      anon_sym_FROM,
    ACTIONS(77), 1,
      anon_sym_COPY,
    ACTIONS(79), 1,
      anon_sym_LET,
    ACTIONS(81), 1,
      anon_sym_RUN,
    ACTIONS(83), 1,
      anon_sym_SAVE,
    ACTIONS(85), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 8,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      aux_sym_target_repeat1,
  [317] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(73), 1,
      anon_sym_ARG,
    ACTIONS(75), 1,
      anon_sym_FROM,
    ACTIONS(77), 1,
      anon_sym_COPY,
    ACTIONS(79), 1,
      anon_sym_LET,
    ACTIONS(81), 1,
      anon_sym_RUN,
    ACTIONS(83), 1,
      anon_sym_SAVE,
    ACTIONS(87), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 8,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      aux_sym_target_repeat1,
  [356] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(89), 1,
      anon_sym_ARG,
    ACTIONS(92), 1,
      anon_sym_FROM,
    ACTIONS(95), 1,
      anon_sym_COPY,
    ACTIONS(98), 1,
      anon_sym_LET,
    ACTIONS(101), 1,
      anon_sym_RUN,
    ACTIONS(104), 1,
      anon_sym_SAVE,
    ACTIONS(107), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 8,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      aux_sym_target_repeat1,
  [395] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(119), 1,
      anon_sym_DASH_DASHsecret,
    STATE(11), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(109), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(111), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(25), 2,
      sym_mount,
      sym_secret,
    ACTIONS(113), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [432] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(63), 1,
      sym_image_name,
    ACTIONS(65), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(69), 1,
      sym_push,
    ACTIONS(124), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(122), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(126), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(128), 12,
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
  [495] = 10,
    ACTIONS(130), 1,
      sym_image_name,
    ACTIONS(132), 1,
      anon_sym_PLUS,
    ACTIONS(136), 1,
      anon_sym_DASH_DASHplatform,
    STATE(37), 1,
      sym_target_ref,
    STATE(93), 1,
      aux_sym_from_command_repeat1,
    STATE(145), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(134), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(77), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(138), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [532] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(140), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(142), 12,
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
  [557] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(144), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(146), 12,
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
  [582] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(148), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(150), 12,
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
  [607] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(152), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(154), 12,
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
  [632] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(156), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(158), 12,
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
  [657] = 10,
    ACTIONS(136), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(160), 1,
      sym_image_name,
    ACTIONS(162), 1,
      anon_sym_PLUS,
    STATE(49), 1,
      sym_target_ref,
    STATE(76), 1,
      aux_sym_from_command_repeat1,
    STATE(145), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(134), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(124), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(164), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [694] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(168), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(166), 10,
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
  [718] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(172), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(170), 10,
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
  [742] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(176), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(179), 1,
      sym_push,
    ACTIONS(182), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_save_image_command_repeat1,
    STATE(30), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(174), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [774] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(148), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(150), 10,
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
  [798] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(186), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(184), 10,
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
  [822] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(126), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(128), 10,
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
  [846] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(40), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(188), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [870] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(192), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [894] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(63), 1,
      sym_image_name,
    ACTIONS(196), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(194), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [920] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(200), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(198), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [942] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_ARG,
    ACTIONS(207), 1,
      anon_sym_FROM,
    ACTIONS(210), 1,
      anon_sym_VERSION,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [972] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(63), 1,
      sym_image_name,
    ACTIONS(218), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(216), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [998] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      sym_image_name,
    ACTIONS(225), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(220), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1024] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(227), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(128), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(126), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1068] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(150), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(148), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1090] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(231), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1114] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(40), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(233), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1138] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(237), 1,
      anon_sym_COLON2,
    ACTIONS(239), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1164] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(245), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(40), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(243), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1188] = 8,
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
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 5,
      sym_arg_command,
      sym_from_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [1218] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(252), 1,
      anon_sym_AS,
    ACTIONS(254), 1,
      sym_path,
    ACTIONS(256), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(250), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1243] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(260), 1,
      anon_sym_AS,
    ACTIONS(262), 1,
      sym_path,
    ACTIONS(264), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(258), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1268] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(266), 1,
      anon_sym_COLON2,
    ACTIONS(268), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(241), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1291] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(270), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1314] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(276), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1339] = 4,
    ACTIONS(283), 1,
      aux_sym_build_arg_token1,
    ACTIONS(285), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(281), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(287), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1378] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(51), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(289), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1402] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1422] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(297), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1446] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(61), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(299), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1490] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(128), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1508] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1528] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      sym_image_name,
  [1548] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(150), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1566] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 8,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_DASH_DASH2,
  [1584] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(274), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1604] = 4,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(281), 6,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [1624] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(319), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(321), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1682] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      sym_expr,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(331), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(146), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1741] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(337), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1758] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(339), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1775] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(341), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1792] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(311), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(343), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1826] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(345), 1,
      sym_expr,
    ACTIONS(347), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(157), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1851] = 4,
    STATE(63), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(349), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(351), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [1870] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1887] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(355), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1904] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    STATE(52), 1,
      sym_target_ref,
    STATE(112), 1,
      aux_sym_from_command_repeat1,
    STATE(145), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(357), 2,
      sym_allow_privileged,
      sym_pass_args,
  [1931] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(231), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [1948] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(359), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1967] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(361), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [1986] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2003] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(365), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2020] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(367), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2037] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(369), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2054] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      sym_path,
    STATE(99), 1,
      aux_sym_copy_command_repeat2,
    STATE(181), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2081] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(373), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2098] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      sym_path,
    STATE(101), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(377), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2119] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(379), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2136] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(381), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2153] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2170] = 4,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(383), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(385), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2189] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      sym_path,
    STATE(86), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(377), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2210] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(148), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2229] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(29), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(389), 1,
      anon_sym_PLUS,
    STATE(28), 1,
      sym_target_ref,
    STATE(112), 1,
      aux_sym_from_command_repeat1,
    STATE(145), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(357), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2256] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      sym_expr,
    ACTIONS(393), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(154), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2281] = 4,
    STATE(95), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(395), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(398), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2300] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      anon_sym_COLON2,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2323] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      sym_path,
    STATE(99), 1,
      aux_sym_copy_command_repeat2,
    STATE(181), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2350] = 4,
    STATE(66), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(349), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(406), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2369] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(408), 1,
      sym_path,
    ACTIONS(411), 1,
      anon_sym_PLUS,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      aux_sym_copy_command_repeat2,
    STATE(181), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [2396] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(126), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2415] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      sym_path,
    STATE(101), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(419), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2436] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(422), 1,
      sym_expr,
    ACTIONS(424), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(150), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(426), 7,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
  [2478] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2500] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    ACTIONS(434), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2522] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(159), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2544] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2566] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      anon_sym_SQUOTE,
    ACTIONS(448), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2588] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2610] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(452), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(454), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2628] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(458), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2648] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      anon_sym_PLUS,
    ACTIONS(467), 1,
      anon_sym_DASH_DASHplatform,
    STATE(112), 1,
      aux_sym_from_command_repeat1,
    STATE(145), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(464), 2,
      sym_allow_privileged,
      sym_pass_args,
  [2672] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      anon_sym_SQUOTE,
    ACTIONS(470), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2694] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    ACTIONS(476), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(78), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2716] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(478), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(270), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2736] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
    ACTIONS(484), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(58), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2758] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2775] = 4,
    ACTIONS(486), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(488), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2792] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(490), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2809] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(494), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2826] = 4,
    ACTIONS(496), 1,
      anon_sym_EQ,
    STATE(71), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(498), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2843] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(500), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2860] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(502), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2877] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2894] = 4,
    ACTIONS(504), 1,
      anon_sym_EQ,
    STATE(127), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(506), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2911] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(508), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2928] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2945] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2962] = 4,
    ACTIONS(516), 1,
      anon_sym_EQ,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(518), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2979] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(309), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(520), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3013] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      aux_sym_shell_fragment_token3,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(143), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(51), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3034] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      aux_sym_shell_fragment_token3,
    STATE(90), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(151), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(51), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [3055] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(524), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3072] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(528), 4,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_VERSION,
      sym_identifier,
  [3089] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 2,
      sym_global,
      sym_required,
  [3107] = 3,
    STATE(75), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(534), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3121] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(536), 1,
      sym_identifier,
    STATE(142), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 2,
      sym_global,
      sym_required,
  [3139] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(147), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3157] = 3,
    STATE(103), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(540), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3171] = 3,
    STATE(122), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(542), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3185] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(142), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(546), 2,
      sym_global,
      sym_required,
  [3203] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(549), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3217] = 3,
    STATE(128), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(551), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(553), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [3245] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(555), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3259] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(291), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [3277] = 3,
    STATE(67), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(559), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3291] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(561), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3305] = 3,
    STATE(119), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(563), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3319] = 3,
    STATE(85), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(565), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3333] = 3,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(567), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3347] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(569), 1,
      sym_identifier,
    STATE(142), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 2,
      sym_global,
      sym_required,
  [3365] = 3,
    STATE(68), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(571), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3379] = 3,
    STATE(69), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(573), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3393] = 3,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(575), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3407] = 3,
    STATE(65), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(577), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3421] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(138), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 2,
      sym_global,
      sym_required,
  [3439] = 3,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(581), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3453] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(583), 1,
      sym_version_major_minor,
    ACTIONS(585), 1,
      sym_feature_flag,
    STATE(166), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(349), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(587), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3485] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(148), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3496] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(126), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(589), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [3520] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(591), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(593), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3535] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(595), 1,
      sym_version_major_minor,
    ACTIONS(597), 1,
      sym_feature_flag,
    STATE(166), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3552] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(602), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3567] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      sym_version_major_minor,
    ACTIONS(606), 1,
      sym_feature_flag,
    STATE(160), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3584] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3599] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_ARTIFACT,
    ACTIONS(614), 1,
      anon_sym_IMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3613] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    STATE(197), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3627] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3638] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3649] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3660] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(626), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3693] = 2,
    ACTIONS(628), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3702] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3713] = 2,
    ACTIONS(632), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3744] = 2,
    ACTIONS(638), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3753] = 2,
    ACTIONS(640), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3762] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3784] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(646), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3795] = 2,
    ACTIONS(648), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3804] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3815] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3826] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3837] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3848] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(658), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3859] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3870] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(662), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3881] = 2,
    ACTIONS(664), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3890] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3901] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3912] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(670), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3923] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3934] = 2,
    ACTIONS(674), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3954] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(678), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3965] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3976] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(682), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3987] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [3998] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(686), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4009] = 2,
    ACTIONS(688), 1,
      aux_sym_build_arg_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4018] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4040] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4051] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4062] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(698), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4073] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4084] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(702), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4095] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(706), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4117] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4128] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(712), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4150] = 2,
    ACTIONS(714), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4159] = 2,
    ACTIONS(716), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4168] = 2,
    ACTIONS(718), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4177] = 2,
    ACTIONS(720), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4186] = 2,
    ACTIONS(722), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4195] = 2,
    ACTIONS(724), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4204] = 2,
    ACTIONS(726), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4213] = 2,
    ACTIONS(728), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4222] = 2,
    ACTIONS(730), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [4231] = 2,
    ACTIONS(732), 1,
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
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 317,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 395,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 470,
  [SMALL_STATE(14)] = 495,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 557,
  [SMALL_STATE(17)] = 582,
  [SMALL_STATE(18)] = 607,
  [SMALL_STATE(19)] = 632,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 694,
  [SMALL_STATE(22)] = 718,
  [SMALL_STATE(23)] = 742,
  [SMALL_STATE(24)] = 774,
  [SMALL_STATE(25)] = 798,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 846,
  [SMALL_STATE(28)] = 870,
  [SMALL_STATE(29)] = 894,
  [SMALL_STATE(30)] = 920,
  [SMALL_STATE(31)] = 942,
  [SMALL_STATE(32)] = 972,
  [SMALL_STATE(33)] = 998,
  [SMALL_STATE(34)] = 1024,
  [SMALL_STATE(35)] = 1046,
  [SMALL_STATE(36)] = 1068,
  [SMALL_STATE(37)] = 1090,
  [SMALL_STATE(38)] = 1114,
  [SMALL_STATE(39)] = 1138,
  [SMALL_STATE(40)] = 1164,
  [SMALL_STATE(41)] = 1188,
  [SMALL_STATE(42)] = 1218,
  [SMALL_STATE(43)] = 1243,
  [SMALL_STATE(44)] = 1268,
  [SMALL_STATE(45)] = 1291,
  [SMALL_STATE(46)] = 1314,
  [SMALL_STATE(47)] = 1339,
  [SMALL_STATE(48)] = 1360,
  [SMALL_STATE(49)] = 1378,
  [SMALL_STATE(50)] = 1402,
  [SMALL_STATE(51)] = 1422,
  [SMALL_STATE(52)] = 1446,
  [SMALL_STATE(53)] = 1470,
  [SMALL_STATE(54)] = 1490,
  [SMALL_STATE(55)] = 1508,
  [SMALL_STATE(56)] = 1528,
  [SMALL_STATE(57)] = 1548,
  [SMALL_STATE(58)] = 1566,
  [SMALL_STATE(59)] = 1584,
  [SMALL_STATE(60)] = 1604,
  [SMALL_STATE(61)] = 1624,
  [SMALL_STATE(62)] = 1648,
  [SMALL_STATE(63)] = 1665,
  [SMALL_STATE(64)] = 1682,
  [SMALL_STATE(65)] = 1707,
  [SMALL_STATE(66)] = 1724,
  [SMALL_STATE(67)] = 1741,
  [SMALL_STATE(68)] = 1758,
  [SMALL_STATE(69)] = 1775,
  [SMALL_STATE(70)] = 1792,
  [SMALL_STATE(71)] = 1809,
  [SMALL_STATE(72)] = 1826,
  [SMALL_STATE(73)] = 1851,
  [SMALL_STATE(74)] = 1870,
  [SMALL_STATE(75)] = 1887,
  [SMALL_STATE(76)] = 1904,
  [SMALL_STATE(77)] = 1931,
  [SMALL_STATE(78)] = 1948,
  [SMALL_STATE(79)] = 1967,
  [SMALL_STATE(80)] = 1986,
  [SMALL_STATE(81)] = 2003,
  [SMALL_STATE(82)] = 2020,
  [SMALL_STATE(83)] = 2037,
  [SMALL_STATE(84)] = 2054,
  [SMALL_STATE(85)] = 2081,
  [SMALL_STATE(86)] = 2098,
  [SMALL_STATE(87)] = 2119,
  [SMALL_STATE(88)] = 2136,
  [SMALL_STATE(89)] = 2153,
  [SMALL_STATE(90)] = 2170,
  [SMALL_STATE(91)] = 2189,
  [SMALL_STATE(92)] = 2210,
  [SMALL_STATE(93)] = 2229,
  [SMALL_STATE(94)] = 2256,
  [SMALL_STATE(95)] = 2281,
  [SMALL_STATE(96)] = 2300,
  [SMALL_STATE(97)] = 2323,
  [SMALL_STATE(98)] = 2350,
  [SMALL_STATE(99)] = 2369,
  [SMALL_STATE(100)] = 2396,
  [SMALL_STATE(101)] = 2415,
  [SMALL_STATE(102)] = 2436,
  [SMALL_STATE(103)] = 2461,
  [SMALL_STATE(104)] = 2478,
  [SMALL_STATE(105)] = 2500,
  [SMALL_STATE(106)] = 2522,
  [SMALL_STATE(107)] = 2544,
  [SMALL_STATE(108)] = 2566,
  [SMALL_STATE(109)] = 2588,
  [SMALL_STATE(110)] = 2610,
  [SMALL_STATE(111)] = 2628,
  [SMALL_STATE(112)] = 2648,
  [SMALL_STATE(113)] = 2672,
  [SMALL_STATE(114)] = 2694,
  [SMALL_STATE(115)] = 2716,
  [SMALL_STATE(116)] = 2736,
  [SMALL_STATE(117)] = 2758,
  [SMALL_STATE(118)] = 2775,
  [SMALL_STATE(119)] = 2792,
  [SMALL_STATE(120)] = 2809,
  [SMALL_STATE(121)] = 2826,
  [SMALL_STATE(122)] = 2843,
  [SMALL_STATE(123)] = 2860,
  [SMALL_STATE(124)] = 2877,
  [SMALL_STATE(125)] = 2894,
  [SMALL_STATE(126)] = 2911,
  [SMALL_STATE(127)] = 2928,
  [SMALL_STATE(128)] = 2945,
  [SMALL_STATE(129)] = 2962,
  [SMALL_STATE(130)] = 2979,
  [SMALL_STATE(131)] = 2996,
  [SMALL_STATE(132)] = 3013,
  [SMALL_STATE(133)] = 3034,
  [SMALL_STATE(134)] = 3055,
  [SMALL_STATE(135)] = 3072,
  [SMALL_STATE(136)] = 3089,
  [SMALL_STATE(137)] = 3107,
  [SMALL_STATE(138)] = 3121,
  [SMALL_STATE(139)] = 3139,
  [SMALL_STATE(140)] = 3157,
  [SMALL_STATE(141)] = 3171,
  [SMALL_STATE(142)] = 3185,
  [SMALL_STATE(143)] = 3203,
  [SMALL_STATE(144)] = 3217,
  [SMALL_STATE(145)] = 3231,
  [SMALL_STATE(146)] = 3245,
  [SMALL_STATE(147)] = 3259,
  [SMALL_STATE(148)] = 3277,
  [SMALL_STATE(149)] = 3291,
  [SMALL_STATE(150)] = 3305,
  [SMALL_STATE(151)] = 3319,
  [SMALL_STATE(152)] = 3333,
  [SMALL_STATE(153)] = 3347,
  [SMALL_STATE(154)] = 3365,
  [SMALL_STATE(155)] = 3379,
  [SMALL_STATE(156)] = 3393,
  [SMALL_STATE(157)] = 3407,
  [SMALL_STATE(158)] = 3421,
  [SMALL_STATE(159)] = 3439,
  [SMALL_STATE(160)] = 3453,
  [SMALL_STATE(161)] = 3470,
  [SMALL_STATE(162)] = 3485,
  [SMALL_STATE(163)] = 3496,
  [SMALL_STATE(164)] = 3507,
  [SMALL_STATE(165)] = 3520,
  [SMALL_STATE(166)] = 3535,
  [SMALL_STATE(167)] = 3552,
  [SMALL_STATE(168)] = 3567,
  [SMALL_STATE(169)] = 3584,
  [SMALL_STATE(170)] = 3599,
  [SMALL_STATE(171)] = 3613,
  [SMALL_STATE(172)] = 3627,
  [SMALL_STATE(173)] = 3638,
  [SMALL_STATE(174)] = 3649,
  [SMALL_STATE(175)] = 3660,
  [SMALL_STATE(176)] = 3671,
  [SMALL_STATE(177)] = 3682,
  [SMALL_STATE(178)] = 3693,
  [SMALL_STATE(179)] = 3702,
  [SMALL_STATE(180)] = 3713,
  [SMALL_STATE(181)] = 3722,
  [SMALL_STATE(182)] = 3733,
  [SMALL_STATE(183)] = 3744,
  [SMALL_STATE(184)] = 3753,
  [SMALL_STATE(185)] = 3762,
  [SMALL_STATE(186)] = 3773,
  [SMALL_STATE(187)] = 3784,
  [SMALL_STATE(188)] = 3795,
  [SMALL_STATE(189)] = 3804,
  [SMALL_STATE(190)] = 3815,
  [SMALL_STATE(191)] = 3826,
  [SMALL_STATE(192)] = 3837,
  [SMALL_STATE(193)] = 3848,
  [SMALL_STATE(194)] = 3859,
  [SMALL_STATE(195)] = 3870,
  [SMALL_STATE(196)] = 3881,
  [SMALL_STATE(197)] = 3890,
  [SMALL_STATE(198)] = 3901,
  [SMALL_STATE(199)] = 3912,
  [SMALL_STATE(200)] = 3923,
  [SMALL_STATE(201)] = 3934,
  [SMALL_STATE(202)] = 3943,
  [SMALL_STATE(203)] = 3954,
  [SMALL_STATE(204)] = 3965,
  [SMALL_STATE(205)] = 3976,
  [SMALL_STATE(206)] = 3987,
  [SMALL_STATE(207)] = 3998,
  [SMALL_STATE(208)] = 4009,
  [SMALL_STATE(209)] = 4018,
  [SMALL_STATE(210)] = 4029,
  [SMALL_STATE(211)] = 4040,
  [SMALL_STATE(212)] = 4051,
  [SMALL_STATE(213)] = 4062,
  [SMALL_STATE(214)] = 4073,
  [SMALL_STATE(215)] = 4084,
  [SMALL_STATE(216)] = 4095,
  [SMALL_STATE(217)] = 4106,
  [SMALL_STATE(218)] = 4117,
  [SMALL_STATE(219)] = 4128,
  [SMALL_STATE(220)] = 4139,
  [SMALL_STATE(221)] = 4150,
  [SMALL_STATE(222)] = 4159,
  [SMALL_STATE(223)] = 4168,
  [SMALL_STATE(224)] = 4177,
  [SMALL_STATE(225)] = 4186,
  [SMALL_STATE(226)] = 4195,
  [SMALL_STATE(227)] = 4204,
  [SMALL_STATE(228)] = 4213,
  [SMALL_STATE(229)] = 4222,
  [SMALL_STATE(230)] = 4231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(178),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(180),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(201),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(158),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(14),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(177),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(170),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(25),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(188),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(196),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(208),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(30),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 4, .production_id = 23),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 4, .production_id = 23),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(203),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 21),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 28),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(191),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 16),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 27),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 31),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 32),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 29),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 24),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 26),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 17),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 35),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 34),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 33),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 22),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 25),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 30),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 17),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(95),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(161),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(220),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 19), SHIFT_REPEAT(171),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(110),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 20),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(145),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(201),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 14),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(164),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 18),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(166),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [650] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
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
