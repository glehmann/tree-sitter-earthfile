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
#define STATE_COUNT 342
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 44

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_BUILD = 3,
  anon_sym_FROM = 4,
  anon_sym_PROJECT = 5,
  anon_sym_SLASH = 6,
  anon_sym_COLON = 7,
  anon_sym_VERSION = 8,
  anon_sym_COPY = 9,
  anon_sym_DOCKERFILE = 10,
  anon_sym_GIT = 11,
  anon_sym_CLONE = 12,
  anon_sym_LET = 13,
  anon_sym_RUN = 14,
  anon_sym_DASH_DASH = 15,
  anon_sym_SAVE = 16,
  anon_sym_ARTIFACT = 17,
  anon_sym_AS = 18,
  anon_sym_LOCAL = 19,
  anon_sym_IMAGE = 20,
  anon_sym_SET = 21,
  anon_sym_WITH = 22,
  anon_sym_DOCKER = 23,
  anon_sym_END = 24,
  sym_expr = 25,
  sym_identifier = 26,
  anon_sym_COLON2 = 27,
  anon_sym_AT = 28,
  sym_image_name = 29,
  sym_image_tag = 30,
  sym_image_digest = 31,
  sym_immediate_identifier = 32,
  sym_path = 33,
  aux_sym_shell_fragment_token1 = 34,
  aux_sym_shell_fragment_token2 = 35,
  aux_sym_shell_fragment_token3 = 36,
  anon_sym_PLUS = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  sym_version_major_minor = 40,
  sym_allow_privileged = 41,
  anon_sym_DASH_DASHbranch = 42,
  aux_sym_branch_token1 = 43,
  anon_sym_DASH_DASH2 = 44,
  anon_sym_DASH_DASHcache_DASHfrom = 45,
  sym_cache_hint = 46,
  anon_sym_DASH_DASHchmod = 47,
  anon_sym_DASH_DASHchown = 48,
  anon_sym_DASH_DASHcompose = 49,
  sym_dir = 50,
  anon_sym_DASH_DASHbuild_DASHarg = 51,
  anon_sym_DASHf = 52,
  anon_sym_DASH_DASHtarget = 53,
  sym_entrypoint = 54,
  sym_feature_flag = 55,
  sym_force = 56,
  sym_global = 57,
  sym_if_exists = 58,
  sym_keep_own = 59,
  sym_keep_ts = 60,
  anon_sym_DASH_DASHload = 61,
  anon_sym_DASH_DASHmount = 62,
  sym_network_none = 63,
  sym_no_cache = 64,
  sym_pass_args = 65,
  anon_sym_DASH_DASHplatform = 66,
  sym_privileged = 67,
  anon_sym_DASH_DASHpull = 68,
  sym_push = 69,
  sym_required = 70,
  anon_sym_DASH_DASHsecret = 71,
  anon_sym_DASH_DASHservice = 72,
  sym_ssh = 73,
  sym_symlink_no_follow = 74,
  anon_sym_DQUOTE = 75,
  aux_sym_double_quoted_string_token1 = 76,
  anon_sym_SQUOTE = 77,
  aux_sym_single_quoted_string_token1 = 78,
  sym_unquoted_string = 79,
  sym_line_continuation = 80,
  sym_comment = 81,
  sym_line_continuation_comment = 82,
  anon_sym_LF = 83,
  anon_sym_CRn = 84,
  anon_sym_FF = 85,
  sym__indent = 86,
  sym__dedent = 87,
  sym_source_file = 88,
  sym_arg_command = 89,
  sym_from_command = 90,
  sym_project_command = 91,
  sym_target = 92,
  sym_version_command = 93,
  sym_copy_command = 94,
  sym_from_dockerfile_command = 95,
  sym_git_clone_command = 96,
  sym_let_command = 97,
  sym_run_command = 98,
  sym_save_artifact_command = 99,
  sym_save_image_command = 100,
  sym_set_command = 101,
  sym_with_docker_command = 102,
  sym_image_spec = 103,
  sym_shell_fragment = 104,
  sym_target_ref = 105,
  sym_target_artifact = 106,
  sym_target_artifact_build_args = 107,
  sym_branch = 108,
  sym_build_arg = 109,
  sym_cache_from = 110,
  sym_chmod = 111,
  sym_chown = 112,
  sym_compose = 113,
  sym_docker_build_arg = 114,
  sym_docker_file = 115,
  sym_docker_target = 116,
  sym_load = 117,
  sym_mount = 118,
  sym_platform = 119,
  sym_pull = 120,
  sym_secret = 121,
  sym_service = 122,
  sym__string = 123,
  sym_double_quoted_string = 124,
  sym_single_quoted_string = 125,
  sym__eol = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_arg_command_repeat1 = 128,
  aux_sym_build_command_repeat2 = 129,
  aux_sym_from_command_repeat1 = 130,
  aux_sym_target_repeat1 = 131,
  aux_sym_version_command_repeat1 = 132,
  aux_sym_copy_command_repeat1 = 133,
  aux_sym_copy_command_repeat2 = 134,
  aux_sym_from_dockerfile_command_repeat1 = 135,
  aux_sym_git_clone_command_repeat1 = 136,
  aux_sym_run_command_repeat1 = 137,
  aux_sym_save_artifact_command_repeat1 = 138,
  aux_sym_save_image_command_repeat1 = 139,
  aux_sym_save_image_command_repeat2 = 140,
  aux_sym_with_docker_command_repeat1 = 141,
  aux_sym_shell_fragment_repeat1 = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_BUILD] = "BUILD",
  [anon_sym_FROM] = "FROM",
  [anon_sym_PROJECT] = "PROJECT",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_COPY] = "COPY",
  [anon_sym_DOCKERFILE] = "DOCKERFILE",
  [anon_sym_GIT] = "GIT",
  [anon_sym_CLONE] = "CLONE",
  [anon_sym_LET] = "LET",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_SAVE] = "SAVE",
  [anon_sym_ARTIFACT] = "ARTIFACT",
  [anon_sym_AS] = "AS",
  [anon_sym_LOCAL] = "LOCAL",
  [anon_sym_IMAGE] = "IMAGE",
  [anon_sym_SET] = "SET",
  [anon_sym_WITH] = "WITH",
  [anon_sym_DOCKER] = "DOCKER",
  [anon_sym_END] = "END",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_version_major_minor] = "version_major_minor",
  [sym_allow_privileged] = "allow_privileged",
  [anon_sym_DASH_DASHbranch] = "--branch",
  [aux_sym_branch_token1] = "branch_token1",
  [anon_sym_DASH_DASH2] = "--",
  [anon_sym_DASH_DASHcache_DASHfrom] = "--cache-from",
  [sym_cache_hint] = "cache_hint",
  [anon_sym_DASH_DASHchmod] = "--chmod",
  [anon_sym_DASH_DASHchown] = "--chown",
  [anon_sym_DASH_DASHcompose] = "--compose",
  [sym_dir] = "dir",
  [anon_sym_DASH_DASHbuild_DASHarg] = "--build-arg",
  [anon_sym_DASHf] = "-f",
  [anon_sym_DASH_DASHtarget] = "--target",
  [sym_entrypoint] = "entrypoint",
  [sym_feature_flag] = "feature_flag",
  [sym_force] = "force",
  [sym_global] = "global",
  [sym_if_exists] = "if_exists",
  [sym_keep_own] = "keep_own",
  [sym_keep_ts] = "keep_ts",
  [anon_sym_DASH_DASHload] = "--load",
  [anon_sym_DASH_DASHmount] = "--mount",
  [sym_network_none] = "network_none",
  [sym_no_cache] = "no_cache",
  [sym_pass_args] = "pass_args",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [sym_privileged] = "privileged",
  [anon_sym_DASH_DASHpull] = "--pull",
  [sym_push] = "push",
  [sym_required] = "required",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [anon_sym_DASH_DASHservice] = "--service",
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
  [sym_project_command] = "project_command",
  [sym_target] = "target",
  [sym_version_command] = "version_command",
  [sym_copy_command] = "copy_command",
  [sym_from_dockerfile_command] = "from_dockerfile_command",
  [sym_git_clone_command] = "git_clone_command",
  [sym_let_command] = "let_command",
  [sym_run_command] = "run_command",
  [sym_save_artifact_command] = "save_artifact_command",
  [sym_save_image_command] = "save_image_command",
  [sym_set_command] = "set_command",
  [sym_with_docker_command] = "with_docker_command",
  [sym_image_spec] = "image_spec",
  [sym_shell_fragment] = "shell_fragment",
  [sym_target_ref] = "target_ref",
  [sym_target_artifact] = "target_artifact",
  [sym_target_artifact_build_args] = "target_artifact_build_args",
  [sym_branch] = "branch",
  [sym_build_arg] = "build_arg",
  [sym_cache_from] = "cache_from",
  [sym_chmod] = "chmod",
  [sym_chown] = "chown",
  [sym_compose] = "compose",
  [sym_docker_build_arg] = "docker_build_arg",
  [sym_docker_file] = "docker_file",
  [sym_docker_target] = "docker_target",
  [sym_load] = "load",
  [sym_mount] = "mount",
  [sym_platform] = "platform",
  [sym_pull] = "pull",
  [sym_secret] = "secret",
  [sym_service] = "service",
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
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_save_artifact_command_repeat1] = "save_artifact_command_repeat1",
  [aux_sym_save_image_command_repeat1] = "save_image_command_repeat1",
  [aux_sym_save_image_command_repeat2] = "save_image_command_repeat2",
  [aux_sym_with_docker_command_repeat1] = "with_docker_command_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BUILD] = anon_sym_BUILD,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_PROJECT] = anon_sym_PROJECT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_DOCKERFILE] = anon_sym_DOCKERFILE,
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_CLONE] = anon_sym_CLONE,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_SAVE] = anon_sym_SAVE,
  [anon_sym_ARTIFACT] = anon_sym_ARTIFACT,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_LOCAL] = anon_sym_LOCAL,
  [anon_sym_IMAGE] = anon_sym_IMAGE,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_WITH] = anon_sym_WITH,
  [anon_sym_DOCKER] = anon_sym_DOCKER,
  [anon_sym_END] = anon_sym_END,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_version_major_minor] = sym_version_major_minor,
  [sym_allow_privileged] = sym_allow_privileged,
  [anon_sym_DASH_DASHbranch] = anon_sym_DASH_DASHbranch,
  [aux_sym_branch_token1] = aux_sym_branch_token1,
  [anon_sym_DASH_DASH2] = anon_sym_DASH_DASH2,
  [anon_sym_DASH_DASHcache_DASHfrom] = anon_sym_DASH_DASHcache_DASHfrom,
  [sym_cache_hint] = sym_cache_hint,
  [anon_sym_DASH_DASHchmod] = anon_sym_DASH_DASHchmod,
  [anon_sym_DASH_DASHchown] = anon_sym_DASH_DASHchown,
  [anon_sym_DASH_DASHcompose] = anon_sym_DASH_DASHcompose,
  [sym_dir] = sym_dir,
  [anon_sym_DASH_DASHbuild_DASHarg] = anon_sym_DASH_DASHbuild_DASHarg,
  [anon_sym_DASHf] = anon_sym_DASHf,
  [anon_sym_DASH_DASHtarget] = anon_sym_DASH_DASHtarget,
  [sym_entrypoint] = sym_entrypoint,
  [sym_feature_flag] = sym_feature_flag,
  [sym_force] = sym_force,
  [sym_global] = sym_global,
  [sym_if_exists] = sym_if_exists,
  [sym_keep_own] = sym_keep_own,
  [sym_keep_ts] = sym_keep_ts,
  [anon_sym_DASH_DASHload] = anon_sym_DASH_DASHload,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
  [sym_network_none] = sym_network_none,
  [sym_no_cache] = sym_no_cache,
  [sym_pass_args] = sym_pass_args,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [sym_privileged] = sym_privileged,
  [anon_sym_DASH_DASHpull] = anon_sym_DASH_DASHpull,
  [sym_push] = sym_push,
  [sym_required] = sym_required,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [anon_sym_DASH_DASHservice] = anon_sym_DASH_DASHservice,
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
  [sym_project_command] = sym_project_command,
  [sym_target] = sym_target,
  [sym_version_command] = sym_version_command,
  [sym_copy_command] = sym_copy_command,
  [sym_from_dockerfile_command] = sym_from_dockerfile_command,
  [sym_git_clone_command] = sym_git_clone_command,
  [sym_let_command] = sym_let_command,
  [sym_run_command] = sym_run_command,
  [sym_save_artifact_command] = sym_save_artifact_command,
  [sym_save_image_command] = sym_save_image_command,
  [sym_set_command] = sym_set_command,
  [sym_with_docker_command] = sym_with_docker_command,
  [sym_image_spec] = sym_image_spec,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_target_ref] = sym_target_ref,
  [sym_target_artifact] = sym_target_artifact,
  [sym_target_artifact_build_args] = sym_target_artifact_build_args,
  [sym_branch] = sym_branch,
  [sym_build_arg] = sym_build_arg,
  [sym_cache_from] = sym_cache_from,
  [sym_chmod] = sym_chmod,
  [sym_chown] = sym_chown,
  [sym_compose] = sym_compose,
  [sym_docker_build_arg] = sym_docker_build_arg,
  [sym_docker_file] = sym_docker_file,
  [sym_docker_target] = sym_docker_target,
  [sym_load] = sym_load,
  [sym_mount] = sym_mount,
  [sym_platform] = sym_platform,
  [sym_pull] = sym_pull,
  [sym_secret] = sym_secret,
  [sym_service] = sym_service,
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
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_save_artifact_command_repeat1] = aux_sym_save_artifact_command_repeat1,
  [aux_sym_save_image_command_repeat1] = aux_sym_save_image_command_repeat1,
  [aux_sym_save_image_command_repeat2] = aux_sym_save_image_command_repeat2,
  [aux_sym_with_docker_command_repeat1] = aux_sym_with_docker_command_repeat1,
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
  [anon_sym_PROJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [anon_sym_DOCKERFILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLONE] = {
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
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOCKER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
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
  [anon_sym_DASH_DASHbranch] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_branch_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH2] = {
    .visible = true,
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
  [anon_sym_DASH_DASHcompose] = {
    .visible = true,
    .named = false,
  },
  [sym_dir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASHbuild_DASHarg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHtarget] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH_DASHload] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH_DASHpull] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH_DASHservice] = {
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
  [sym_project_command] = {
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
  [sym_from_dockerfile_command] = {
    .visible = true,
    .named = true,
  },
  [sym_git_clone_command] = {
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
  [sym_set_command] = {
    .visible = true,
    .named = true,
  },
  [sym_with_docker_command] = {
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
  [sym_branch] = {
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
  [sym_compose] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_build_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_file] = {
    .visible = true,
    .named = true,
  },
  [sym_docker_target] = {
    .visible = true,
    .named = true,
  },
  [sym_load] = {
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
  [sym_pull] = {
    .visible = true,
    .named = true,
  },
  [sym_secret] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
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
  [aux_sym_from_dockerfile_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_git_clone_command_repeat1] = {
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
  [aux_sym_with_docker_command_repeat1] = {
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
  field_context = 2,
  field_default_value = 3,
  field_default_value_expr = 4,
  field_dest = 5,
  field_digest = 6,
  field_image = 7,
  field_key = 8,
  field_local_dest = 9,
  field_name = 10,
  field_option = 11,
  field_org_name = 12,
  field_project_name = 13,
  field_src = 14,
  field_tag = 15,
  field_target = 16,
  field_url = 17,
  field_value = 18,
  field_version = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_context] = "context",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_image] = "image",
  [field_key] = "key",
  [field_local_dest] = "local_dest",
  [field_name] = "name",
  [field_option] = "option",
  [field_org_name] = "org_name",
  [field_project_name] = "project_name",
  [field_src] = "src",
  [field_tag] = "tag",
  [field_target] = "target",
  [field_url] = "url",
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
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 5},
  [18] = {.index = 35, .length = 2},
  [19] = {.index = 37, .length = 1},
  [20] = {.index = 38, .length = 2},
  [21] = {.index = 40, .length = 1},
  [22] = {.index = 41, .length = 1},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 1},
  [28] = {.index = 48, .length = 2},
  [29] = {.index = 50, .length = 2},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 2},
  [32] = {.index = 56, .length = 3},
  [33] = {.index = 59, .length = 2},
  [34] = {.index = 61, .length = 2},
  [35] = {.index = 63, .length = 3},
  [36] = {.index = 66, .length = 3},
  [37] = {.index = 69, .length = 2},
  [38] = {.index = 71, .length = 2},
  [39] = {.index = 73, .length = 3},
  [40] = {.index = 76, .length = 3},
  [41] = {.index = 79, .length = 2},
  [42] = {.index = 81, .length = 4},
  [43] = {.index = 85, .length = 5},
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
    {field_org_name, 1},
    {field_project_name, 3},
  [24] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [27] =
    {field_default_value, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [30] =
    {field_digest, 3},
    {field_digest, 4},
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [35] =
    {field_name, 1},
    {field_value, 3},
  [37] =
    {field_src, 0},
  [38] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [40] =
    {field_command, 1},
  [41] =
    {field_src, 2},
  [42] =
    {field_option, 2},
  [43] =
    {field_option, 2, .inherited = true},
  [44] =
    {field_context, 2},
  [45] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [47] =
    {field_command, 2},
  [48] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [50] =
    {field_dest, 3},
    {field_src, 2},
  [52] =
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [54] =
    {field_context, 3},
    {field_option, 2, .inherited = true},
  [56] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [59] =
    {field_dest, 3},
    {field_url, 2},
  [61] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [63] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [66] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [69] =
    {field_local_dest, 5},
    {field_src, 2},
  [71] =
    {field_key, 2},
    {field_value, 4},
  [73] =
    {field_dest, 3},
    {field_local_dest, 6},
    {field_src, 2},
  [76] =
    {field_local_dest, 6},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [79] =
    {field_image, 2},
    {field_target, 4},
  [81] =
    {field_dest, 4},
    {field_local_dest, 7},
    {field_option, 2, .inherited = true},
    {field_src, 3},
  [85] =
    {field_image, 2},
    {field_target, 4},
    {field_target, 5},
    {field_target, 6},
    {field_target, 7},
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
  [11] = 10,
  [12] = 12,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 20,
  [36] = 36,
  [37] = 37,
  [38] = 27,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 29,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 20,
  [50] = 27,
  [51] = 51,
  [52] = 52,
  [53] = 27,
  [54] = 54,
  [55] = 55,
  [56] = 40,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 20,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 21,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 59,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 58,
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
  [92] = 92,
  [93] = 28,
  [94] = 26,
  [95] = 25,
  [96] = 29,
  [97] = 29,
  [98] = 19,
  [99] = 47,
  [100] = 57,
  [101] = 55,
  [102] = 20,
  [103] = 27,
  [104] = 40,
  [105] = 40,
  [106] = 106,
  [107] = 58,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 27,
  [118] = 20,
  [119] = 59,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 58,
  [127] = 59,
  [128] = 128,
  [129] = 24,
  [130] = 130,
  [131] = 55,
  [132] = 132,
  [133] = 115,
  [134] = 112,
  [135] = 116,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 77,
  [142] = 142,
  [143] = 79,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 78,
  [148] = 148,
  [149] = 149,
  [150] = 73,
  [151] = 61,
  [152] = 74,
  [153] = 153,
  [154] = 75,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 142,
  [160] = 142,
  [161] = 161,
  [162] = 162,
  [163] = 139,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 24,
  [172] = 167,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 175,
  [179] = 170,
  [180] = 27,
  [181] = 20,
  [182] = 168,
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
  [195] = 192,
  [196] = 196,
  [197] = 197,
  [198] = 186,
  [199] = 199,
  [200] = 187,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 204,
  [207] = 184,
  [208] = 208,
  [209] = 196,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 183,
  [214] = 212,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 203,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 27,
  [228] = 20,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
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
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 63,
  [260] = 84,
  [261] = 70,
  [262] = 91,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 270,
  [286] = 286,
  [287] = 287,
  [288] = 247,
  [289] = 245,
  [290] = 290,
  [291] = 257,
  [292] = 292,
  [293] = 271,
  [294] = 269,
  [295] = 256,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 270,
  [302] = 247,
  [303] = 245,
  [304] = 304,
  [305] = 271,
  [306] = 269,
  [307] = 256,
  [308] = 247,
  [309] = 245,
  [310] = 271,
  [311] = 269,
  [312] = 256,
  [313] = 271,
  [314] = 269,
  [315] = 271,
  [316] = 269,
  [317] = 271,
  [318] = 269,
  [319] = 271,
  [320] = 269,
  [321] = 321,
  [322] = 265,
  [323] = 323,
  [324] = 283,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 323,
  [329] = 265,
  [330] = 323,
  [331] = 283,
  [332] = 323,
  [333] = 283,
  [334] = 323,
  [335] = 283,
  [336] = 323,
  [337] = 283,
  [338] = 323,
  [339] = 283,
  [340] = 323,
  [341] = 283,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(236);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == ',') ADVANCE(528);
      if (lookahead == '-') ADVANCE(529);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(232)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(587);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '#') ADVANCE(533);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(532);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\f') ADVANCE(591);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\f') ADVANCE(601);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(598);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\f') ADVANCE(601);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\f') ADVANCE(602);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(600);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(531);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\f') ADVANCE(602);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(531);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\f') ADVANCE(603);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(599);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\f') ADVANCE(603);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(582);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(578);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '\f') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(598);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '\f') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\f') ADVANCE(605);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\f') ADVANCE(605);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(597);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\f') ADVANCE(605);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(529);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(597);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(528);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(529);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(528);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(530);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(528);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(542);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(28)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(543);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(39)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(528);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(24)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(531);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(530);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(528);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(24)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(531);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(584);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'C') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == 'G') ADVANCE(323);
      if (lookahead == 'L') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(341);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'W') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'D') ADVANCE(111);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == 'D') ADVANCE(111);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'C') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == 'G') ADVANCE(323);
      if (lookahead == 'L') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(341);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'W') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'C') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == 'G') ADVANCE(323);
      if (lookahead == 'L') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(341);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'W') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'C') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == 'G') ADVANCE(323);
      if (lookahead == 'L') ADVANCE(318);
      if (lookahead == 'R') ADVANCE(341);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == 'W') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(528);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(531);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '-') ADVANCE(405);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == 'C') ADVANCE(422);
      if (lookahead == 'F') ADVANCE(426);
      if (lookahead == 'G') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(431);
      if (lookahead == 'S') ADVANCE(413);
      if (lookahead == 'W') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(527);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(395);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '(') ADVANCE(231);
      END_STATE();
    case 51:
      if (lookahead == ')') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'C') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'C') ADVANCE(125);
      END_STATE();
    case 67:
      if (lookahead == 'C') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(285);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(242);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(269);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(276);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'F') ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(237);
      END_STATE();
    case 83:
      if (lookahead == 'G') ADVANCE(237);
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == 'H') ADVANCE(280);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'J') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'K') ADVANCE(80);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(275);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 99:
      if (lookahead == 'M') ADVANCE(61);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(243);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(265);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(251);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(130);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(273);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(283);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(262);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(277);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(247);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(272);
      END_STATE();
    case 127:
      if (lookahead == 'U') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 129:
      if (lookahead == 'V') ADVANCE(71);
      END_STATE();
    case 130:
      if (lookahead == 'Y') ADVANCE(253);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 136:
      if (lookahead == 'b') ADVANCE(134);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 160:
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(569);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 174:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(557);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(566);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 204:
      if (lookahead == 'q') ADVANCE(221);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 223:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 224:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 225:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 226:
      if (lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 227:
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 228:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 230:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 232:
      if (eof) ADVANCE(236);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(575);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(579);
      if (lookahead == '(') ADVANCE(536);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(529);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(77);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(528);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(232)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 233:
      if (eof) ADVANCE(236);
      if (lookahead == ' ') ADVANCE(542);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'F') ADVANCE(299);
      if (lookahead == 'P') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(235)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 234:
      if (eof) ADVANCE(236);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'F') ADVANCE(299);
      if (lookahead == 'P') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(235)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 235:
      if (eof) ADVANCE(236);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(537);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'F') ADVANCE(299);
      if (lookahead == 'P') ADVANCE(301);
      if (lookahead == 'V') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(235)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOCKERFILE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOCKERFILE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SAVE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_SAVE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_ARTIFACT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LOCAL);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_IMAGE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_WITH);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_WITH);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_WITH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DOCKER);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DOCKER);
      if (lookahead == 'F') ADVANCE(89);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(350);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(359);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(360);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(345);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(379);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(347);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(353);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'E') ADVANCE(339);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(326);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(270);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(257);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(338);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(335);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(324);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(239);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(281);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(337);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(327);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(340);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'K') ADVANCE(319);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(317);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(245);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(266);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(333);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(328);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(321);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(320);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(331);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(259);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(263);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(278);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(329);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(316);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(254);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(351);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'p') ADVANCE(346);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(348);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(381);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(389);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(365);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(366);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(539);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(354);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(308);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(362);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(309);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(367);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(380);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(378);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(355);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(384);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(569);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(356);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(358);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(375);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(391);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(370);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(377);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(371);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(566);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(545);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(388);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(374);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(392);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(383);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(382);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(376);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(363);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(368);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(373);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(565);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(364);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(312);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(546);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(361);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(385);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(369);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(311);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(587);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '#') ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\f') ADVANCE(591);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(587);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(441);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(416);
      if (lookahead == 'S') ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'k') ADVANCE(451);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(507);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'k') ADVANCE(451);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(145);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\f') ADVANCE(591);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(589);
      if (lookahead == '\r') ADVANCE(576);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(588);
      if (lookahead == '\r') ADVANCE(580);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(582);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(582);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(587);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(587);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(588);
      if (lookahead == '\r') ADVANCE(580);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(580);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\f') ADVANCE(589);
      if (lookahead == '\r') ADVANCE(576);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(576);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\f') ADVANCE(591);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\f') ADVANCE(601);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\f') ADVANCE(602);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\f') ADVANCE(603);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '\f') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\f') ADVANCE(605);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(527);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(531);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\f') ADVANCE(601);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(593);
      if (lookahead == '\f') ADVANCE(602);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(594);
      if (lookahead == '\f') ADVANCE(603);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(595);
      if (lookahead == '\f') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(535);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(596);
      if (lookahead == '\f') ADVANCE(605);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 234},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 27, .external_lex_state = 2},
  [8] = {.lex_state = 34, .external_lex_state = 2},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 34, .external_lex_state = 2},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 28, .external_lex_state = 2},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 28, .external_lex_state = 2},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 28, .external_lex_state = 2},
  [26] = {.lex_state = 28, .external_lex_state = 2},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 28, .external_lex_state = 2},
  [29] = {.lex_state = 35, .external_lex_state = 2},
  [30] = {.lex_state = 34, .external_lex_state = 2},
  [31] = {.lex_state = 34, .external_lex_state = 2},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 35, .external_lex_state = 2},
  [34] = {.lex_state = 35, .external_lex_state = 2},
  [35] = {.lex_state = 34, .external_lex_state = 2},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 34, .external_lex_state = 2},
  [39] = {.lex_state = 35, .external_lex_state = 2},
  [40] = {.lex_state = 35, .external_lex_state = 2},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 46, .external_lex_state = 2},
  [44] = {.lex_state = 46, .external_lex_state = 2},
  [45] = {.lex_state = 29, .external_lex_state = 2},
  [46] = {.lex_state = 234},
  [47] = {.lex_state = 22, .external_lex_state = 2},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 234},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 28, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 28, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 28, .external_lex_state = 2},
  [58] = {.lex_state = 35, .external_lex_state = 2},
  [59] = {.lex_state = 35, .external_lex_state = 2},
  [60] = {.lex_state = 28, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 234},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 234},
  [94] = {.lex_state = 234},
  [95] = {.lex_state = 234},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 234},
  [98] = {.lex_state = 234},
  [99] = {.lex_state = 233},
  [100] = {.lex_state = 234},
  [101] = {.lex_state = 234},
  [102] = {.lex_state = 234},
  [103] = {.lex_state = 234},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 234},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 234},
  [108] = {.lex_state = 44},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 44},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 42},
  [115] = {.lex_state = 26},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 29},
  [120] = {.lex_state = 234, .external_lex_state = 3},
  [121] = {.lex_state = 44},
  [122] = {.lex_state = 29},
  [123] = {.lex_state = 42},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 42},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 234},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 26},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 234},
  [141] = {.lex_state = 234},
  [142] = {.lex_state = 26},
  [143] = {.lex_state = 234},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 234},
  [147] = {.lex_state = 234},
  [148] = {.lex_state = 26},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 234},
  [151] = {.lex_state = 234},
  [152] = {.lex_state = 234},
  [153] = {.lex_state = 26},
  [154] = {.lex_state = 234},
  [155] = {.lex_state = 234},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 26},
  [159] = {.lex_state = 26},
  [160] = {.lex_state = 26},
  [161] = {.lex_state = 234},
  [162] = {.lex_state = 234},
  [163] = {.lex_state = 26},
  [164] = {.lex_state = 26},
  [165] = {.lex_state = 45},
  [166] = {.lex_state = 43},
  [167] = {.lex_state = 37},
  [168] = {.lex_state = 37},
  [169] = {.lex_state = 43},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 43},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 43},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 43},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 43},
  [181] = {.lex_state = 43},
  [182] = {.lex_state = 37},
  [183] = {.lex_state = 15},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 15},
  [186] = {.lex_state = 15},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 15},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 15},
  [192] = {.lex_state = 31},
  [193] = {.lex_state = 15},
  [194] = {.lex_state = 234},
  [195] = {.lex_state = 31},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 41},
  [200] = {.lex_state = 15},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 15},
  [203] = {.lex_state = 31},
  [204] = {.lex_state = 15},
  [205] = {.lex_state = 15},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 234},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 15},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 31},
  [218] = {.lex_state = 234},
  [219] = {.lex_state = 31},
  [220] = {.lex_state = 42},
  [221] = {.lex_state = 42},
  [222] = {.lex_state = 33},
  [223] = {.lex_state = 33},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 31},
  [226] = {.lex_state = 42},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 15},
  [229] = {.lex_state = 42},
  [230] = {.lex_state = 45},
  [231] = {.lex_state = 33},
  [232] = {.lex_state = 234},
  [233] = {.lex_state = 45},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 38},
  [236] = {.lex_state = 38},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 29},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 31},
  [245] = {.lex_state = 40},
  [246] = {.lex_state = 31},
  [247] = {.lex_state = 48},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 23},
  [250] = {.lex_state = 23},
  [251] = {.lex_state = 23},
  [252] = {.lex_state = 23},
  [253] = {.lex_state = 47},
  [254] = {.lex_state = 23},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 40},
  [257] = {.lex_state = 33},
  [258] = {.lex_state = 234},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 23},
  [266] = {.lex_state = 47},
  [267] = {.lex_state = 23},
  [268] = {.lex_state = 23},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 33},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 47},
  [274] = {.lex_state = 47},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 23},
  [277] = {.lex_state = 47},
  [278] = {.lex_state = 234},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 31},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 33},
  [286] = {.lex_state = 23},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 48},
  [289] = {.lex_state = 40},
  [290] = {.lex_state = 47},
  [291] = {.lex_state = 33},
  [292] = {.lex_state = 47},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 40},
  [296] = {.lex_state = 234},
  [297] = {.lex_state = 31},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 47},
  [300] = {.lex_state = 23},
  [301] = {.lex_state = 33},
  [302] = {.lex_state = 48},
  [303] = {.lex_state = 40},
  [304] = {.lex_state = 47},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 40},
  [308] = {.lex_state = 48},
  [309] = {.lex_state = 40},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 40},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 47},
  [322] = {.lex_state = 23},
  [323] = {.lex_state = 12},
  [324] = {.lex_state = 11},
  [325] = {.lex_state = 47},
  [326] = {.lex_state = 31},
  [327] = {.lex_state = 31},
  [328] = {.lex_state = 12},
  [329] = {.lex_state = 23},
  [330] = {.lex_state = 12},
  [331] = {.lex_state = 11},
  [332] = {.lex_state = 12},
  [333] = {.lex_state = 11},
  [334] = {.lex_state = 12},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 12},
  [337] = {.lex_state = 11},
  [338] = {.lex_state = 12},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 12},
  [341] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BUILD] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_PROJECT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_DOCKERFILE] = ACTIONS(1),
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_CLONE] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVE] = ACTIONS(1),
    [anon_sym_ARTIFACT] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_LOCAL] = ACTIONS(1),
    [anon_sym_IMAGE] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_WITH] = ACTIONS(1),
    [anon_sym_DOCKER] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [sym_source_file] = STATE(279),
    [sym_arg_command] = STATE(51),
    [sym_from_command] = STATE(51),
    [sym_project_command] = STATE(51),
    [sym_target] = STATE(51),
    [sym_version_command] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ARG] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(11),
    [anon_sym_PROJECT] = ACTIONS(13),
    [anon_sym_VERSION] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_GIT,
    ACTIONS(27), 1,
      anon_sym_LET,
    ACTIONS(29), 1,
      anon_sym_RUN,
    ACTIONS(31), 1,
      anon_sym_SAVE,
    ACTIONS(33), 1,
      anon_sym_SET,
    ACTIONS(35), 1,
      anon_sym_WITH,
    ACTIONS(37), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(4), 12,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym_target_repeat1,
  [52] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_ARG,
    ACTIONS(42), 1,
      anon_sym_FROM,
    ACTIONS(45), 1,
      anon_sym_COPY,
    ACTIONS(48), 1,
      anon_sym_GIT,
    ACTIONS(51), 1,
      anon_sym_LET,
    ACTIONS(54), 1,
      anon_sym_RUN,
    ACTIONS(57), 1,
      anon_sym_SAVE,
    ACTIONS(60), 1,
      anon_sym_SET,
    ACTIONS(63), 1,
      anon_sym_WITH,
    ACTIONS(66), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(3), 12,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym_target_repeat1,
  [104] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_GIT,
    ACTIONS(27), 1,
      anon_sym_LET,
    ACTIONS(29), 1,
      anon_sym_RUN,
    ACTIONS(31), 1,
      anon_sym_SAVE,
    ACTIONS(33), 1,
      anon_sym_SET,
    ACTIONS(35), 1,
      anon_sym_WITH,
    ACTIONS(68), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(3), 12,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym_target_repeat1,
  [156] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(70), 1,
      sym_path,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(80), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(82), 1,
      anon_sym_DASH_DASHplatform,
    STATE(12), 1,
      aux_sym_copy_command_repeat1,
    STATE(123), 1,
      aux_sym_copy_command_repeat2,
    STATE(275), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(229), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(22), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(76), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [209] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(70), 1,
      sym_path,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(80), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(82), 1,
      anon_sym_DASH_DASHplatform,
    STATE(5), 1,
      aux_sym_copy_command_repeat1,
    STATE(114), 1,
      aux_sym_copy_command_repeat2,
    STATE(275), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(229), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(22), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(76), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [262] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(86), 1,
      sym_image_name,
    ACTIONS(88), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(90), 1,
      sym_cache_hint,
    ACTIONS(92), 1,
      sym_push,
    ACTIONS(94), 1,
      sym__dedent,
    STATE(8), 1,
      aux_sym_save_image_command_repeat1,
    STATE(31), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(84), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [306] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(86), 1,
      sym_image_name,
    ACTIONS(88), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(92), 1,
      sym_push,
    ACTIONS(98), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_save_image_command_repeat1,
    STATE(31), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(96), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [347] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(100), 1,
      anon_sym_DASH_DASH,
    ACTIONS(104), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(108), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(110), 1,
      anon_sym_DASH_DASHsecret,
    STATE(15), 1,
      aux_sym_run_command_repeat1,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(202), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(102), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(48), 2,
      sym_mount,
      sym_secret,
    ACTIONS(106), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [392] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(108), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(110), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(112), 1,
      anon_sym_DASH_DASH,
    STATE(9), 1,
      aux_sym_run_command_repeat1,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(183), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(102), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(48), 2,
      sym_mount,
      sym_secret,
    ACTIONS(106), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [437] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(108), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(110), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(114), 1,
      anon_sym_DASH_DASH,
    STATE(13), 1,
      aux_sym_run_command_repeat1,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(213), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(102), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(48), 2,
      sym_mount,
      sym_secret,
    ACTIONS(106), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [482] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(116), 1,
      sym_path,
    ACTIONS(123), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(126), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(129), 1,
      anon_sym_DASH_DASHplatform,
    STATE(12), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(118), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(22), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(120), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [523] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(104), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(108), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(110), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(132), 1,
      anon_sym_DASH_DASH,
    STATE(15), 1,
      aux_sym_run_command_repeat1,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(201), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(102), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(48), 2,
      sym_mount,
      sym_secret,
    ACTIONS(106), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [568] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(136), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(139), 1,
      sym_push,
    ACTIONS(142), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_save_image_command_repeat1,
    STATE(31), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(134), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [603] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(151), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(154), 1,
      anon_sym_DASH_DASHsecret,
    STATE(15), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(144), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(146), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(48), 2,
      sym_mount,
      sym_secret,
    ACTIONS(148), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [640] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(157), 1,
      anon_sym_RUN,
    ACTIONS(159), 1,
      sym_allow_privileged,
    ACTIONS(161), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(163), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(165), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(167), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(169), 1,
      anon_sym_DASH_DASHservice,
    STATE(32), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(282), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(132), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [682] = 11,
    ACTIONS(171), 1,
      anon_sym_DOCKERFILE,
    ACTIONS(173), 1,
      sym_image_name,
    ACTIONS(175), 1,
      anon_sym_PLUS,
    ACTIONS(179), 1,
      anon_sym_DASH_DASHplatform,
    STATE(28), 1,
      sym_target_ref,
    STATE(116), 1,
      aux_sym_from_command_repeat1,
    STATE(199), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(177), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(79), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(181), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [722] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(157), 1,
      anon_sym_RUN,
    ACTIONS(159), 1,
      sym_allow_privileged,
    ACTIONS(161), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(163), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(165), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(167), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(169), 1,
      anon_sym_DASH_DASHservice,
    STATE(16), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(241), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(132), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [764] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(185), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(183), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [791] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(189), 12,
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
  [816] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(193), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(191), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [843] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(196), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(198), 12,
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
  [868] = 10,
    ACTIONS(179), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(200), 1,
      sym_image_name,
    ACTIONS(202), 1,
      anon_sym_PLUS,
    STATE(93), 1,
      sym_target_ref,
    STATE(135), 1,
      aux_sym_from_command_repeat1,
    STATE(199), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(177), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(143), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(204), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [905] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(208), 12,
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
  [930] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(185), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(210), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [957] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(185), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(212), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [984] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(214), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 12,
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
  [1009] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(185), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(218), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1036] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_COLON2,
    ACTIONS(224), 1,
      anon_sym_AT,
    ACTIONS(226), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(220), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1065] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(230), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(228), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(234), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(232), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1115] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(236), 1,
      anon_sym_RUN,
    ACTIONS(238), 1,
      sym_allow_privileged,
    ACTIONS(241), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(244), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(247), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(250), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(253), 1,
      anon_sym_DASH_DASHservice,
    STATE(32), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(132), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [1154] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(258), 1,
      sym_image_name,
    ACTIONS(261), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(256), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1183] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(86), 1,
      sym_image_name,
    ACTIONS(265), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(263), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1212] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(189), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(187), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1237] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(269), 12,
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
  [1262] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(273), 12,
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
  [1287] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 3,
      sym__dedent,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(214), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1312] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(86), 1,
      sym_image_name,
    ACTIONS(277), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(33), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(275), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1341] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(279), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1367] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(287), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(285), 10,
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
  [1391] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(291), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(289), 10,
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
  [1415] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_AS,
    ACTIONS(297), 1,
      sym_path,
    ACTIONS(299), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1443] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(303), 1,
      anon_sym_AS,
    ACTIONS(305), 1,
      sym_path,
    ACTIONS(307), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1471] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(309), 1,
      anon_sym_COLON2,
    ACTIONS(311), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(226), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1497] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_ARG,
    ACTIONS(318), 1,
      anon_sym_FROM,
    ACTIONS(321), 1,
      anon_sym_PROJECT,
    ACTIONS(324), 1,
      anon_sym_VERSION,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [1531] = 4,
    ACTIONS(332), 1,
      aux_sym_branch_token1,
    ACTIONS(334), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(330), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      anon_sym_DASH_DASH2,
  [1555] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(338), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(336), 10,
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
  [1579] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(187), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(189), 10,
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
  [1603] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(214), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(216), 10,
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
  [1627] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      anon_sym_ARG,
    ACTIONS(11), 1,
      anon_sym_FROM,
    ACTIONS(13), 1,
      anon_sym_PROJECT,
    ACTIONS(15), 1,
      anon_sym_VERSION,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [1661] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(344), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(342), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1684] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 11,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      anon_sym_DASH_DASH2,
  [1705] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(348), 1,
      anon_sym_AS,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(346), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1728] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 11,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      anon_sym_DASH_DASH2,
  [1749] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1772] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 11,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      anon_sym_DASH_DASH2,
  [1793] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(358), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(356), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1816] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(362), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(360), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      sym_image_name,
  [1839] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(189), 11,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
      anon_sym_DASH_DASH2,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(364), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1880] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(366), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1900] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(368), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [1920] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(64), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(370), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [1946] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      sym_path,
    ACTIONS(377), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(380), 1,
      anon_sym_DASHf,
    ACTIONS(383), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(386), 1,
      anon_sym_DASH_DASHplatform,
    STATE(65), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(176), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [1978] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(389), 1,
      sym_path,
    ACTIONS(391), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(393), 1,
      anon_sym_DASHf,
    ACTIONS(395), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(397), 1,
      anon_sym_DASH_DASHplatform,
    STATE(65), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(176), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2030] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2050] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2070] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(362), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2170] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(413), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(358), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2210] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(415), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2230] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(417), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2250] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(218), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2270] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(419), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2290] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(421), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2310] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(423), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(425), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(427), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2370] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2390] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(431), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2410] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2430] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(435), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2450] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(393), 1,
      anon_sym_DASHf,
    ACTIONS(395), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(397), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(437), 1,
      sym_path,
    STATE(66), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(176), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [2482] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2502] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(441), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2522] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(443), 10,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_GIT,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVE,
      anon_sym_SET,
      anon_sym_WITH,
  [2542] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(94), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(445), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2567] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(449), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2592] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(451), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2617] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(453), 1,
      anon_sym_COLON2,
    ACTIONS(455), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(226), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2640] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      anon_sym_COLON2,
    ACTIONS(459), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(220), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2665] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(461), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2690] = 4,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(330), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [2711] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(354), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(465), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2731] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(467), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2751] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(187), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(214), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2791] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2811] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(279), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(473), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2850] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(356), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [2869] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(475), 1,
      sym_path,
    STATE(108), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(477), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2890] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(480), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2907] = 4,
    STATE(136), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(482), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(484), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2926] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(486), 1,
      sym_path,
    STATE(121), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(488), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [2947] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(490), 1,
      sym_expr,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
    ACTIONS(496), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(206), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2972] = 4,
    STATE(80), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(498), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(500), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [2991] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      sym_path,
    STATE(125), 1,
      aux_sym_copy_command_repeat2,
    STATE(275), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(229), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [3018] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
    ACTIONS(504), 1,
      sym_expr,
    ACTIONS(506), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(212), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3043] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(82), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(508), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      sym_target_ref,
    STATE(156), 1,
      aux_sym_from_command_repeat1,
    STATE(199), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 2,
      sym_allow_privileged,
      sym_pass_args,
  [3070] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3087] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(189), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3104] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(362), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3121] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3142] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(518), 1,
      sym_path,
    STATE(108), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(488), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [3163] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(520), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3180] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      sym_path,
    STATE(125), 1,
      aux_sym_copy_command_repeat2,
    STATE(275), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(229), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [3207] = 4,
    STATE(67), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(498), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(524), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3226] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      sym_path,
    ACTIONS(529), 1,
      anon_sym_PLUS,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      aux_sym_copy_command_repeat2,
    STATE(275), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(229), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(358), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3270] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(360), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3289] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(208), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3340] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(350), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3357] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(539), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3374] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
    ACTIONS(541), 1,
      sym_expr,
    ACTIONS(543), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(214), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3399] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
    ACTIONS(545), 1,
      sym_expr,
    ACTIONS(547), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(204), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3424] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      anon_sym_DASH_DASHplatform,
    STATE(95), 1,
      sym_target_ref,
    STATE(156), 1,
      aux_sym_from_command_repeat1,
    STATE(199), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 2,
      sym_allow_privileged,
      sym_pass_args,
  [3451] = 4,
    STATE(136), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(549), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(552), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [3470] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
    ACTIONS(558), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(36), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3492] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(562), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [3510] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(100), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3532] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(574), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3568] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    ACTIONS(580), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(129), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3590] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3608] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
    ACTIONS(582), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(191), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3630] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    ACTIONS(588), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3652] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(592), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3670] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(594), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3688] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_DQUOTE,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    ACTIONS(596), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(42), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3710] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
    ACTIONS(598), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(185), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3732] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(600), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3750] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(602), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(604), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3786] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      anon_sym_DQUOTE,
    ACTIONS(608), 1,
      anon_sym_SQUOTE,
    ACTIONS(610), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(169), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3826] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3844] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_PLUS,
    ACTIONS(623), 1,
      anon_sym_DASH_DASHplatform,
    STATE(156), 1,
      aux_sym_from_command_repeat1,
    STATE(199), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 2,
      sym_allow_privileged,
      sym_pass_args,
  [3868] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(122), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3890] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
    ACTIONS(628), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3912] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
    ACTIONS(630), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3934] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      anon_sym_DQUOTE,
    ACTIONS(608), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(171), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [3956] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(636), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3974] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(640), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [3992] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      anon_sym_SQUOTE,
    ACTIONS(646), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(57), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [4014] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [4036] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(654), 1,
      sym_path,
    ACTIONS(656), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(659), 1,
      sym_keep_ts,
    STATE(165), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(233), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4059] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(662), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(664), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [4076] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(102), 1,
      aux_sym_shell_fragment_token3,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(200), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(104), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [4097] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(102), 1,
      aux_sym_shell_fragment_token3,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(186), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(104), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [4118] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(666), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(668), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [4135] = 4,
    ACTIONS(670), 1,
      anon_sym_EQ,
    STATE(77), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(672), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4152] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(206), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(208), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [4169] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(102), 1,
      aux_sym_shell_fragment_token3,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(187), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(104), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [4190] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(674), 1,
      sym_path,
    ACTIONS(676), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(678), 1,
      sym_keep_ts,
    STATE(165), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(233), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4213] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(682), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [4230] = 4,
    ACTIONS(684), 1,
      anon_sym_EQ,
    STATE(78), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(686), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4247] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(690), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [4264] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(678), 1,
      sym_keep_ts,
    ACTIONS(692), 1,
      sym_path,
    STATE(173), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(233), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4287] = 4,
    ACTIONS(694), 1,
      anon_sym_EQ,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(696), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4304] = 4,
    ACTIONS(698), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(700), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4321] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(214), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(216), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [4338] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(189), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [4355] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(102), 1,
      aux_sym_shell_fragment_token3,
    STATE(110), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(198), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(104), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [4376] = 3,
    STATE(259), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(702), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4390] = 3,
    STATE(150), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(704), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4404] = 3,
    STATE(92), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(706), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4418] = 3,
    STATE(260), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(708), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4432] = 3,
    STATE(91), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(710), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4446] = 3,
    STATE(140), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(712), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4460] = 3,
    STATE(155), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(714), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4474] = 3,
    STATE(69), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(716), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4488] = 3,
    STATE(90), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(718), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4502] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(720), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(722), 2,
      sym_global,
      sym_required,
  [4520] = 3,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(724), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4534] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(211), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [4552] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(722), 2,
      sym_global,
      sym_required,
  [4570] = 3,
    STATE(154), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(730), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4584] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(732), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4598] = 3,
    STATE(84), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4612] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(736), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [4626] = 3,
    STATE(262), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(738), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4640] = 3,
    STATE(70), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(740), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4654] = 3,
    STATE(261), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(742), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4668] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(744), 1,
      sym_identifier,
    STATE(195), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(722), 2,
      sym_global,
      sym_required,
  [4686] = 3,
    STATE(151), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(746), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4700] = 3,
    STATE(162), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(748), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4714] = 3,
    STATE(61), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(750), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4728] = 3,
    STATE(73), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(752), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4742] = 3,
    STATE(62), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(754), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4756] = 3,
    STATE(75), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(756), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4770] = 3,
    STATE(71), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(758), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4784] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [4802] = 3,
    STATE(74), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(762), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4816] = 3,
    STATE(63), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(764), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4830] = 3,
    STATE(152), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(766), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4844] = 3,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(768), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4858] = 3,
    STATE(120), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(770), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [4872] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(772), 1,
      sym_identifier,
    STATE(217), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(774), 2,
      sym_global,
      sym_required,
  [4890] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [4908] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(779), 1,
      sym_identifier,
    STATE(192), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(722), 2,
      sym_global,
      sym_required,
  [4926] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(783), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [4941] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(785), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(787), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [4956] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(789), 1,
      sym_version_major_minor,
    ACTIONS(791), 1,
      sym_feature_flag,
    STATE(231), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4973] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(793), 1,
      sym_version_major_minor,
    ACTIONS(795), 1,
      sym_feature_flag,
    STATE(223), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [4990] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(798), 1,
      anon_sym_PLUS,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5007] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(802), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [5020] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(804), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(806), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [5035] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(214), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [5046] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(187), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [5057] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(498), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [5072] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(810), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(812), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [5087] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(814), 1,
      sym_version_major_minor,
    ACTIONS(816), 1,
      sym_feature_flag,
    STATE(223), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5104] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(218), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [5119] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(818), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(820), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [5134] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(822), 1,
      anon_sym_ARTIFACT,
    ACTIONS(824), 1,
      anon_sym_IMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5148] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(826), 1,
      sym_image_name,
    STATE(258), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5162] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      sym_image_name,
    STATE(109), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5176] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    STATE(232), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5190] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(72), 1,
      anon_sym_PLUS,
    STATE(239), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5204] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(830), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5215] = 2,
    ACTIONS(832), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5224] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(834), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5235] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(836), 1,
      anon_sym_DOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5246] = 2,
    ACTIONS(838), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5255] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(840), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5266] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(842), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(844), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5288] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(846), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5299] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(848), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5310] = 2,
    ACTIONS(850), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5319] = 2,
    ACTIONS(852), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5328] = 2,
    ACTIONS(854), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5337] = 2,
    ACTIONS(856), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5346] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(858), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5357] = 2,
    ACTIONS(860), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5366] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(862), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5377] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(864), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5388] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(866), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5399] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5410] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(368), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5421] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5432] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(405), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5443] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5454] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(870), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(872), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5476] = 2,
    ACTIONS(874), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5485] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(876), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5496] = 2,
    ACTIONS(878), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5505] = 2,
    ACTIONS(880), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5514] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(882), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5525] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(884), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5536] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5547] = 2,
    ACTIONS(888), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5556] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(890), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5567] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(892), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5578] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(894), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5589] = 2,
    ACTIONS(896), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5598] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(898), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5609] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(900), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5620] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(902), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5631] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(904), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5642] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5653] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(908), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5664] = 2,
    ACTIONS(910), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5673] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(912), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5684] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(914), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5695] = 2,
    ACTIONS(916), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5704] = 2,
    ACTIONS(918), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5713] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5724] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(922), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5735] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(924), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5746] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(926), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5757] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(928), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5768] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5779] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(932), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5790] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(934), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5801] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5812] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(938), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5823] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(940), 1,
      anon_sym_LOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5834] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(942), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5845] = 2,
    ACTIONS(944), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [5854] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(946), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5865] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(948), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5876] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(950), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5887] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(952), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5898] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5909] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(956), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5920] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(958), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5931] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(960), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5942] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(962), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5953] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(964), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5964] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(966), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5975] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(968), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5986] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [5997] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(972), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6008] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6019] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(976), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6030] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(978), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6041] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(980), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6052] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(982), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6063] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(984), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6074] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(986), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6085] = 2,
    ACTIONS(988), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6094] = 2,
    ACTIONS(990), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6103] = 2,
    ACTIONS(992), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6112] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(994), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6123] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6134] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [6145] = 2,
    ACTIONS(1000), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6154] = 2,
    ACTIONS(1002), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6163] = 2,
    ACTIONS(1004), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6172] = 2,
    ACTIONS(1006), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6181] = 2,
    ACTIONS(1008), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6190] = 2,
    ACTIONS(1010), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6199] = 2,
    ACTIONS(1012), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6208] = 2,
    ACTIONS(1014), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6217] = 2,
    ACTIONS(1016), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6226] = 2,
    ACTIONS(1018), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6235] = 2,
    ACTIONS(1020), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6244] = 2,
    ACTIONS(1022), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6253] = 2,
    ACTIONS(1024), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [6262] = 2,
    ACTIONS(1026), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 209,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 347,
  [SMALL_STATE(10)] = 392,
  [SMALL_STATE(11)] = 437,
  [SMALL_STATE(12)] = 482,
  [SMALL_STATE(13)] = 523,
  [SMALL_STATE(14)] = 568,
  [SMALL_STATE(15)] = 603,
  [SMALL_STATE(16)] = 640,
  [SMALL_STATE(17)] = 682,
  [SMALL_STATE(18)] = 722,
  [SMALL_STATE(19)] = 764,
  [SMALL_STATE(20)] = 791,
  [SMALL_STATE(21)] = 816,
  [SMALL_STATE(22)] = 843,
  [SMALL_STATE(23)] = 868,
  [SMALL_STATE(24)] = 905,
  [SMALL_STATE(25)] = 930,
  [SMALL_STATE(26)] = 957,
  [SMALL_STATE(27)] = 984,
  [SMALL_STATE(28)] = 1009,
  [SMALL_STATE(29)] = 1036,
  [SMALL_STATE(30)] = 1065,
  [SMALL_STATE(31)] = 1090,
  [SMALL_STATE(32)] = 1115,
  [SMALL_STATE(33)] = 1154,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1212,
  [SMALL_STATE(36)] = 1237,
  [SMALL_STATE(37)] = 1262,
  [SMALL_STATE(38)] = 1287,
  [SMALL_STATE(39)] = 1312,
  [SMALL_STATE(40)] = 1341,
  [SMALL_STATE(41)] = 1367,
  [SMALL_STATE(42)] = 1391,
  [SMALL_STATE(43)] = 1415,
  [SMALL_STATE(44)] = 1443,
  [SMALL_STATE(45)] = 1471,
  [SMALL_STATE(46)] = 1497,
  [SMALL_STATE(47)] = 1531,
  [SMALL_STATE(48)] = 1555,
  [SMALL_STATE(49)] = 1579,
  [SMALL_STATE(50)] = 1603,
  [SMALL_STATE(51)] = 1627,
  [SMALL_STATE(52)] = 1661,
  [SMALL_STATE(53)] = 1684,
  [SMALL_STATE(54)] = 1705,
  [SMALL_STATE(55)] = 1728,
  [SMALL_STATE(56)] = 1749,
  [SMALL_STATE(57)] = 1772,
  [SMALL_STATE(58)] = 1793,
  [SMALL_STATE(59)] = 1816,
  [SMALL_STATE(60)] = 1839,
  [SMALL_STATE(61)] = 1860,
  [SMALL_STATE(62)] = 1880,
  [SMALL_STATE(63)] = 1900,
  [SMALL_STATE(64)] = 1920,
  [SMALL_STATE(65)] = 1946,
  [SMALL_STATE(66)] = 1978,
  [SMALL_STATE(67)] = 2010,
  [SMALL_STATE(68)] = 2030,
  [SMALL_STATE(69)] = 2050,
  [SMALL_STATE(70)] = 2070,
  [SMALL_STATE(71)] = 2090,
  [SMALL_STATE(72)] = 2110,
  [SMALL_STATE(73)] = 2130,
  [SMALL_STATE(74)] = 2150,
  [SMALL_STATE(75)] = 2170,
  [SMALL_STATE(76)] = 2190,
  [SMALL_STATE(77)] = 2210,
  [SMALL_STATE(78)] = 2230,
  [SMALL_STATE(79)] = 2250,
  [SMALL_STATE(80)] = 2270,
  [SMALL_STATE(81)] = 2290,
  [SMALL_STATE(82)] = 2310,
  [SMALL_STATE(83)] = 2330,
  [SMALL_STATE(84)] = 2350,
  [SMALL_STATE(85)] = 2370,
  [SMALL_STATE(86)] = 2390,
  [SMALL_STATE(87)] = 2410,
  [SMALL_STATE(88)] = 2430,
  [SMALL_STATE(89)] = 2450,
  [SMALL_STATE(90)] = 2482,
  [SMALL_STATE(91)] = 2502,
  [SMALL_STATE(92)] = 2522,
  [SMALL_STATE(93)] = 2542,
  [SMALL_STATE(94)] = 2567,
  [SMALL_STATE(95)] = 2592,
  [SMALL_STATE(96)] = 2617,
  [SMALL_STATE(97)] = 2640,
  [SMALL_STATE(98)] = 2665,
  [SMALL_STATE(99)] = 2690,
  [SMALL_STATE(100)] = 2711,
  [SMALL_STATE(101)] = 2731,
  [SMALL_STATE(102)] = 2751,
  [SMALL_STATE(103)] = 2771,
  [SMALL_STATE(104)] = 2791,
  [SMALL_STATE(105)] = 2811,
  [SMALL_STATE(106)] = 2833,
  [SMALL_STATE(107)] = 2850,
  [SMALL_STATE(108)] = 2869,
  [SMALL_STATE(109)] = 2890,
  [SMALL_STATE(110)] = 2907,
  [SMALL_STATE(111)] = 2926,
  [SMALL_STATE(112)] = 2947,
  [SMALL_STATE(113)] = 2972,
  [SMALL_STATE(114)] = 2991,
  [SMALL_STATE(115)] = 3018,
  [SMALL_STATE(116)] = 3043,
  [SMALL_STATE(117)] = 3070,
  [SMALL_STATE(118)] = 3087,
  [SMALL_STATE(119)] = 3104,
  [SMALL_STATE(120)] = 3121,
  [SMALL_STATE(121)] = 3142,
  [SMALL_STATE(122)] = 3163,
  [SMALL_STATE(123)] = 3180,
  [SMALL_STATE(124)] = 3207,
  [SMALL_STATE(125)] = 3226,
  [SMALL_STATE(126)] = 3253,
  [SMALL_STATE(127)] = 3270,
  [SMALL_STATE(128)] = 3289,
  [SMALL_STATE(129)] = 3306,
  [SMALL_STATE(130)] = 3323,
  [SMALL_STATE(131)] = 3340,
  [SMALL_STATE(132)] = 3357,
  [SMALL_STATE(133)] = 3374,
  [SMALL_STATE(134)] = 3399,
  [SMALL_STATE(135)] = 3424,
  [SMALL_STATE(136)] = 3451,
  [SMALL_STATE(137)] = 3470,
  [SMALL_STATE(138)] = 3492,
  [SMALL_STATE(139)] = 3510,
  [SMALL_STATE(140)] = 3532,
  [SMALL_STATE(141)] = 3550,
  [SMALL_STATE(142)] = 3568,
  [SMALL_STATE(143)] = 3590,
  [SMALL_STATE(144)] = 3608,
  [SMALL_STATE(145)] = 3630,
  [SMALL_STATE(146)] = 3652,
  [SMALL_STATE(147)] = 3670,
  [SMALL_STATE(148)] = 3688,
  [SMALL_STATE(149)] = 3710,
  [SMALL_STATE(150)] = 3732,
  [SMALL_STATE(151)] = 3750,
  [SMALL_STATE(152)] = 3768,
  [SMALL_STATE(153)] = 3786,
  [SMALL_STATE(154)] = 3808,
  [SMALL_STATE(155)] = 3826,
  [SMALL_STATE(156)] = 3844,
  [SMALL_STATE(157)] = 3868,
  [SMALL_STATE(158)] = 3890,
  [SMALL_STATE(159)] = 3912,
  [SMALL_STATE(160)] = 3934,
  [SMALL_STATE(161)] = 3956,
  [SMALL_STATE(162)] = 3974,
  [SMALL_STATE(163)] = 3992,
  [SMALL_STATE(164)] = 4014,
  [SMALL_STATE(165)] = 4036,
  [SMALL_STATE(166)] = 4059,
  [SMALL_STATE(167)] = 4076,
  [SMALL_STATE(168)] = 4097,
  [SMALL_STATE(169)] = 4118,
  [SMALL_STATE(170)] = 4135,
  [SMALL_STATE(171)] = 4152,
  [SMALL_STATE(172)] = 4169,
  [SMALL_STATE(173)] = 4190,
  [SMALL_STATE(174)] = 4213,
  [SMALL_STATE(175)] = 4230,
  [SMALL_STATE(176)] = 4247,
  [SMALL_STATE(177)] = 4264,
  [SMALL_STATE(178)] = 4287,
  [SMALL_STATE(179)] = 4304,
  [SMALL_STATE(180)] = 4321,
  [SMALL_STATE(181)] = 4338,
  [SMALL_STATE(182)] = 4355,
  [SMALL_STATE(183)] = 4376,
  [SMALL_STATE(184)] = 4390,
  [SMALL_STATE(185)] = 4404,
  [SMALL_STATE(186)] = 4418,
  [SMALL_STATE(187)] = 4432,
  [SMALL_STATE(188)] = 4446,
  [SMALL_STATE(189)] = 4460,
  [SMALL_STATE(190)] = 4474,
  [SMALL_STATE(191)] = 4488,
  [SMALL_STATE(192)] = 4502,
  [SMALL_STATE(193)] = 4520,
  [SMALL_STATE(194)] = 4534,
  [SMALL_STATE(195)] = 4552,
  [SMALL_STATE(196)] = 4570,
  [SMALL_STATE(197)] = 4584,
  [SMALL_STATE(198)] = 4598,
  [SMALL_STATE(199)] = 4612,
  [SMALL_STATE(200)] = 4626,
  [SMALL_STATE(201)] = 4640,
  [SMALL_STATE(202)] = 4654,
  [SMALL_STATE(203)] = 4668,
  [SMALL_STATE(204)] = 4686,
  [SMALL_STATE(205)] = 4700,
  [SMALL_STATE(206)] = 4714,
  [SMALL_STATE(207)] = 4728,
  [SMALL_STATE(208)] = 4742,
  [SMALL_STATE(209)] = 4756,
  [SMALL_STATE(210)] = 4770,
  [SMALL_STATE(211)] = 4784,
  [SMALL_STATE(212)] = 4802,
  [SMALL_STATE(213)] = 4816,
  [SMALL_STATE(214)] = 4830,
  [SMALL_STATE(215)] = 4844,
  [SMALL_STATE(216)] = 4858,
  [SMALL_STATE(217)] = 4872,
  [SMALL_STATE(218)] = 4890,
  [SMALL_STATE(219)] = 4908,
  [SMALL_STATE(220)] = 4926,
  [SMALL_STATE(221)] = 4941,
  [SMALL_STATE(222)] = 4956,
  [SMALL_STATE(223)] = 4973,
  [SMALL_STATE(224)] = 4990,
  [SMALL_STATE(225)] = 5007,
  [SMALL_STATE(226)] = 5020,
  [SMALL_STATE(227)] = 5035,
  [SMALL_STATE(228)] = 5046,
  [SMALL_STATE(229)] = 5057,
  [SMALL_STATE(230)] = 5072,
  [SMALL_STATE(231)] = 5087,
  [SMALL_STATE(232)] = 5104,
  [SMALL_STATE(233)] = 5119,
  [SMALL_STATE(234)] = 5134,
  [SMALL_STATE(235)] = 5148,
  [SMALL_STATE(236)] = 5162,
  [SMALL_STATE(237)] = 5176,
  [SMALL_STATE(238)] = 5190,
  [SMALL_STATE(239)] = 5204,
  [SMALL_STATE(240)] = 5215,
  [SMALL_STATE(241)] = 5224,
  [SMALL_STATE(242)] = 5235,
  [SMALL_STATE(243)] = 5246,
  [SMALL_STATE(244)] = 5255,
  [SMALL_STATE(245)] = 5266,
  [SMALL_STATE(246)] = 5277,
  [SMALL_STATE(247)] = 5288,
  [SMALL_STATE(248)] = 5299,
  [SMALL_STATE(249)] = 5310,
  [SMALL_STATE(250)] = 5319,
  [SMALL_STATE(251)] = 5328,
  [SMALL_STATE(252)] = 5337,
  [SMALL_STATE(253)] = 5346,
  [SMALL_STATE(254)] = 5357,
  [SMALL_STATE(255)] = 5366,
  [SMALL_STATE(256)] = 5377,
  [SMALL_STATE(257)] = 5388,
  [SMALL_STATE(258)] = 5399,
  [SMALL_STATE(259)] = 5410,
  [SMALL_STATE(260)] = 5421,
  [SMALL_STATE(261)] = 5432,
  [SMALL_STATE(262)] = 5443,
  [SMALL_STATE(263)] = 5454,
  [SMALL_STATE(264)] = 5465,
  [SMALL_STATE(265)] = 5476,
  [SMALL_STATE(266)] = 5485,
  [SMALL_STATE(267)] = 5496,
  [SMALL_STATE(268)] = 5505,
  [SMALL_STATE(269)] = 5514,
  [SMALL_STATE(270)] = 5525,
  [SMALL_STATE(271)] = 5536,
  [SMALL_STATE(272)] = 5547,
  [SMALL_STATE(273)] = 5556,
  [SMALL_STATE(274)] = 5567,
  [SMALL_STATE(275)] = 5578,
  [SMALL_STATE(276)] = 5589,
  [SMALL_STATE(277)] = 5598,
  [SMALL_STATE(278)] = 5609,
  [SMALL_STATE(279)] = 5620,
  [SMALL_STATE(280)] = 5631,
  [SMALL_STATE(281)] = 5642,
  [SMALL_STATE(282)] = 5653,
  [SMALL_STATE(283)] = 5664,
  [SMALL_STATE(284)] = 5673,
  [SMALL_STATE(285)] = 5684,
  [SMALL_STATE(286)] = 5695,
  [SMALL_STATE(287)] = 5704,
  [SMALL_STATE(288)] = 5713,
  [SMALL_STATE(289)] = 5724,
  [SMALL_STATE(290)] = 5735,
  [SMALL_STATE(291)] = 5746,
  [SMALL_STATE(292)] = 5757,
  [SMALL_STATE(293)] = 5768,
  [SMALL_STATE(294)] = 5779,
  [SMALL_STATE(295)] = 5790,
  [SMALL_STATE(296)] = 5801,
  [SMALL_STATE(297)] = 5812,
  [SMALL_STATE(298)] = 5823,
  [SMALL_STATE(299)] = 5834,
  [SMALL_STATE(300)] = 5845,
  [SMALL_STATE(301)] = 5854,
  [SMALL_STATE(302)] = 5865,
  [SMALL_STATE(303)] = 5876,
  [SMALL_STATE(304)] = 5887,
  [SMALL_STATE(305)] = 5898,
  [SMALL_STATE(306)] = 5909,
  [SMALL_STATE(307)] = 5920,
  [SMALL_STATE(308)] = 5931,
  [SMALL_STATE(309)] = 5942,
  [SMALL_STATE(310)] = 5953,
  [SMALL_STATE(311)] = 5964,
  [SMALL_STATE(312)] = 5975,
  [SMALL_STATE(313)] = 5986,
  [SMALL_STATE(314)] = 5997,
  [SMALL_STATE(315)] = 6008,
  [SMALL_STATE(316)] = 6019,
  [SMALL_STATE(317)] = 6030,
  [SMALL_STATE(318)] = 6041,
  [SMALL_STATE(319)] = 6052,
  [SMALL_STATE(320)] = 6063,
  [SMALL_STATE(321)] = 6074,
  [SMALL_STATE(322)] = 6085,
  [SMALL_STATE(323)] = 6094,
  [SMALL_STATE(324)] = 6103,
  [SMALL_STATE(325)] = 6112,
  [SMALL_STATE(326)] = 6123,
  [SMALL_STATE(327)] = 6134,
  [SMALL_STATE(328)] = 6145,
  [SMALL_STATE(329)] = 6154,
  [SMALL_STATE(330)] = 6163,
  [SMALL_STATE(331)] = 6172,
  [SMALL_STATE(332)] = 6181,
  [SMALL_STATE(333)] = 6190,
  [SMALL_STATE(334)] = 6199,
  [SMALL_STATE(335)] = 6208,
  [SMALL_STATE(336)] = 6217,
  [SMALL_STATE(337)] = 6226,
  [SMALL_STATE(338)] = 6235,
  [SMALL_STATE(339)] = 6244,
  [SMALL_STATE(340)] = 6253,
  [SMALL_STATE(341)] = 6262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(219),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(17),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(248),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(246),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(11),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(234),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(244),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2), SHIFT_REPEAT(242),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 24),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(22),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(267),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(268),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(265),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(252),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(48),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(300),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(254),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(291),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(132),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(251),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(250),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(329),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(249),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(243),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(29),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 4, .production_id = 24),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 30),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 30),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 22),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(280),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 29),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 35),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 6, .production_id = 24),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 21),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(257),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(240),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(287),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(286),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(322),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 26),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 23),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 25),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 28),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 5, .production_id = 31),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 32),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 8, .production_id = 42),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 40),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 7, .production_id = 39),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 27),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 37),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 36),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 33),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 34),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(138),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(229),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(270),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 20), SHIFT_REPEAT(238),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 41),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 43),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(136),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(199),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(265),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(272),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(233),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 38),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 38),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(225),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(223),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [902] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
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
