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
#define STATE_COUNT 613
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 56

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
  anon_sym_FOR = 10,
  anon_sym_IN = 11,
  anon_sym_END = 12,
  anon_sym_FROMDOCKERFILE = 13,
  anon_sym_GIT = 14,
  anon_sym_CLONE = 15,
  anon_sym_IF = 16,
  anon_sym_ELSEIF = 17,
  anon_sym_ELSE = 18,
  anon_sym_LET = 19,
  anon_sym_RUN = 20,
  anon_sym_DASH_DASH = 21,
  anon_sym_SAVEARTIFACT = 22,
  anon_sym_ASLOCAL = 23,
  anon_sym_SAVEIMAGE = 24,
  anon_sym_SET = 25,
  anon_sym_WITHDOCKER = 26,
  sym_expr = 27,
  sym_identifier = 28,
  anon_sym_COLON2 = 29,
  anon_sym_AT = 30,
  sym_image_name = 31,
  sym_image_tag = 32,
  sym_image_digest = 33,
  sym_immediate_identifier = 34,
  sym_path = 35,
  aux_sym_shell_fragment_token1 = 36,
  aux_sym_shell_fragment_token2 = 37,
  aux_sym_shell_fragment_token3 = 38,
  anon_sym_PLUS = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  sym_version_major_minor = 42,
  sym_allow_privileged = 43,
  anon_sym_DASH_DASHbranch = 44,
  aux_sym_branch_token1 = 45,
  anon_sym_DASH_DASH2 = 46,
  anon_sym_DASH_DASHcache_DASHfrom = 47,
  sym_cache_hint = 48,
  anon_sym_DASH_DASHchmod = 49,
  anon_sym_DASH_DASHchown = 50,
  anon_sym_DASH_DASHcompose = 51,
  sym_dir = 52,
  anon_sym_DASH_DASHbuild_DASHarg = 53,
  anon_sym_DASHf = 54,
  anon_sym_DASH_DASHtarget = 55,
  sym_entrypoint = 56,
  sym_feature_flag = 57,
  sym_force = 58,
  sym_global = 59,
  sym_if_exists = 60,
  sym_keep_own = 61,
  sym_keep_ts = 62,
  anon_sym_DASH_DASHload = 63,
  anon_sym_DASH_DASHmount = 64,
  sym_network_none = 65,
  sym_no_cache = 66,
  sym_pass_args = 67,
  anon_sym_DASH_DASHplatform = 68,
  sym_privileged = 69,
  anon_sym_DASH_DASHpull = 70,
  sym_push = 71,
  sym_required = 72,
  anon_sym_DASH_DASHsecret = 73,
  anon_sym_DASH_DASHsep = 74,
  anon_sym_DASH_DASHservice = 75,
  sym_ssh = 76,
  sym_symlink_no_follow = 77,
  anon_sym_DQUOTE = 78,
  aux_sym_double_quoted_string_token1 = 79,
  anon_sym_SQUOTE = 80,
  aux_sym_single_quoted_string_token1 = 81,
  sym_unquoted_string = 82,
  sym_line_continuation = 83,
  sym_comment = 84,
  sym_line_continuation_comment = 85,
  anon_sym_LF = 86,
  anon_sym_CRn = 87,
  anon_sym_FF = 88,
  sym__indent = 89,
  sym__dedent = 90,
  sym_source_file = 91,
  sym_arg_command = 92,
  sym_from_command = 93,
  sym_project_command = 94,
  sym_target = 95,
  sym_version_command = 96,
  sym_copy_command = 97,
  sym_for_command = 98,
  sym_from_dockerfile_command = 99,
  sym_git_clone_command = 100,
  sym_if_command = 101,
  sym_let_command = 102,
  sym_run_command = 103,
  sym_save_artifact_command = 104,
  sym_save_image_command = 105,
  sym_set_command = 106,
  sym_with_docker_command = 107,
  aux_sym__target_block = 108,
  sym__conditional_block = 109,
  sym_else_if_block = 110,
  sym_else_block = 111,
  sym_image_spec = 112,
  sym_shell_fragment = 113,
  sym_target_ref = 114,
  sym_target_artifact = 115,
  sym_target_artifact_build_args = 116,
  sym_branch = 117,
  sym_build_arg = 118,
  sym_cache_from = 119,
  sym_chmod = 120,
  sym_chown = 121,
  sym_compose = 122,
  sym_docker_build_arg = 123,
  sym_docker_file = 124,
  sym_docker_target = 125,
  sym_load = 126,
  sym_mount = 127,
  sym_platform = 128,
  sym_pull = 129,
  sym_secret = 130,
  sym_sep = 131,
  sym_service = 132,
  sym__string = 133,
  sym_double_quoted_string = 134,
  sym_single_quoted_string = 135,
  sym__eol = 136,
  aux_sym_source_file_repeat1 = 137,
  aux_sym_arg_command_repeat1 = 138,
  aux_sym_build_command_repeat2 = 139,
  aux_sym_from_command_repeat1 = 140,
  aux_sym_version_command_repeat1 = 141,
  aux_sym_copy_command_repeat1 = 142,
  aux_sym_copy_command_repeat2 = 143,
  aux_sym_for_command_repeat1 = 144,
  aux_sym_for_command_repeat2 = 145,
  aux_sym_from_dockerfile_command_repeat1 = 146,
  aux_sym_git_clone_command_repeat1 = 147,
  aux_sym_if_command_repeat1 = 148,
  aux_sym_run_command_repeat1 = 149,
  aux_sym_save_artifact_command_repeat1 = 150,
  aux_sym_save_image_command_repeat1 = 151,
  aux_sym_save_image_command_repeat2 = 152,
  aux_sym_with_docker_command_repeat1 = 153,
  aux_sym__conditional_block_repeat1 = 154,
  aux_sym_shell_fragment_repeat1 = 155,
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
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_END] = "END",
  [anon_sym_FROMDOCKERFILE] = "FROM DOCKERFILE",
  [anon_sym_GIT] = "GIT",
  [anon_sym_CLONE] = "CLONE",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_LET] = "LET",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_SAVEARTIFACT] = "SAVE ARTIFACT",
  [anon_sym_ASLOCAL] = "AS LOCAL",
  [anon_sym_SAVEIMAGE] = "SAVE IMAGE",
  [anon_sym_SET] = "SET",
  [anon_sym_WITHDOCKER] = "WITH DOCKER",
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
  [anon_sym_DASH_DASHsep] = "--sep",
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
  [sym_for_command] = "for_command",
  [sym_from_dockerfile_command] = "from_dockerfile_command",
  [sym_git_clone_command] = "git_clone_command",
  [sym_if_command] = "if_command",
  [sym_let_command] = "let_command",
  [sym_run_command] = "run_command",
  [sym_save_artifact_command] = "save_artifact_command",
  [sym_save_image_command] = "save_image_command",
  [sym_set_command] = "set_command",
  [sym_with_docker_command] = "with_docker_command",
  [aux_sym__target_block] = "_target_block",
  [sym__conditional_block] = "_conditional_block",
  [sym_else_if_block] = "else_if_block",
  [sym_else_block] = "else_block",
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
  [sym_sep] = "sep",
  [sym_service] = "service",
  [sym__string] = "_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym__eol] = "_eol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_command_repeat1] = "arg_command_repeat1",
  [aux_sym_build_command_repeat2] = "build_command_repeat2",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_copy_command_repeat1] = "copy_command_repeat1",
  [aux_sym_copy_command_repeat2] = "copy_command_repeat2",
  [aux_sym_for_command_repeat1] = "for_command_repeat1",
  [aux_sym_for_command_repeat2] = "for_command_repeat2",
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_save_artifact_command_repeat1] = "save_artifact_command_repeat1",
  [aux_sym_save_image_command_repeat1] = "save_image_command_repeat1",
  [aux_sym_save_image_command_repeat2] = "save_image_command_repeat2",
  [aux_sym_with_docker_command_repeat1] = "with_docker_command_repeat1",
  [aux_sym__conditional_block_repeat1] = "_conditional_block_repeat1",
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
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_FROMDOCKERFILE] = anon_sym_FROMDOCKERFILE,
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_CLONE] = anon_sym_CLONE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_SAVEARTIFACT] = anon_sym_SAVEARTIFACT,
  [anon_sym_ASLOCAL] = anon_sym_ASLOCAL,
  [anon_sym_SAVEIMAGE] = anon_sym_SAVEIMAGE,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_WITHDOCKER] = anon_sym_WITHDOCKER,
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
  [anon_sym_DASH_DASHsep] = anon_sym_DASH_DASHsep,
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
  [sym_for_command] = sym_for_command,
  [sym_from_dockerfile_command] = sym_from_dockerfile_command,
  [sym_git_clone_command] = sym_git_clone_command,
  [sym_if_command] = sym_if_command,
  [sym_let_command] = sym_let_command,
  [sym_run_command] = sym_run_command,
  [sym_save_artifact_command] = sym_save_artifact_command,
  [sym_save_image_command] = sym_save_image_command,
  [sym_set_command] = sym_set_command,
  [sym_with_docker_command] = sym_with_docker_command,
  [aux_sym__target_block] = aux_sym__target_block,
  [sym__conditional_block] = sym__conditional_block,
  [sym_else_if_block] = sym_else_if_block,
  [sym_else_block] = sym_else_block,
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
  [sym_sep] = sym_sep,
  [sym_service] = sym_service,
  [sym__string] = sym__string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym__eol] = sym__eol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_command_repeat1] = aux_sym_arg_command_repeat1,
  [aux_sym_build_command_repeat2] = aux_sym_build_command_repeat2,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_copy_command_repeat1] = aux_sym_copy_command_repeat1,
  [aux_sym_copy_command_repeat2] = aux_sym_copy_command_repeat2,
  [aux_sym_for_command_repeat1] = aux_sym_for_command_repeat1,
  [aux_sym_for_command_repeat2] = aux_sym_for_command_repeat2,
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_save_artifact_command_repeat1] = aux_sym_save_artifact_command_repeat1,
  [aux_sym_save_image_command_repeat1] = aux_sym_save_image_command_repeat1,
  [aux_sym_save_image_command_repeat2] = aux_sym_save_image_command_repeat2,
  [aux_sym_with_docker_command_repeat1] = aux_sym_with_docker_command_repeat1,
  [aux_sym__conditional_block_repeat1] = aux_sym__conditional_block_repeat1,
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
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROMDOCKERFILE] = {
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSEIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
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
  [anon_sym_SAVEARTIFACT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASLOCAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SAVEIMAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITHDOCKER] = {
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
  [anon_sym_DASH_DASHsep] = {
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
  [sym_for_command] = {
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
  [sym_if_command] = {
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
  [aux_sym__target_block] = {
    .visible = false,
    .named = false,
  },
  [sym__conditional_block] = {
    .visible = false,
    .named = true,
  },
  [sym_else_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
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
  [sym_sep] = {
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
  [aux_sym_for_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_command_repeat2] = {
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
  [aux_sym_if_command_repeat1] = {
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
  [aux_sym__conditional_block_repeat1] = {
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
  field_condition = 2,
  field_context = 3,
  field_default_value = 4,
  field_default_value_expr = 5,
  field_dest = 6,
  field_digest = 7,
  field_else = 8,
  field_else_if = 9,
  field_image = 10,
  field_key = 11,
  field_local_dest = 12,
  field_name = 13,
  field_option = 14,
  field_org_name = 15,
  field_project_name = 16,
  field_src = 17,
  field_tag = 18,
  field_target = 19,
  field_url = 20,
  field_value = 21,
  field_version = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_condition] = "condition",
  [field_context] = "context",
  [field_default_value] = "default_value",
  [field_default_value_expr] = "default_value_expr",
  [field_dest] = "dest",
  [field_digest] = "digest",
  [field_else] = "else",
  [field_else_if] = "else_if",
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
  [20] = {.index = 38, .length = 1},
  [21] = {.index = 39, .length = 1},
  [22] = {.index = 40, .length = 2},
  [23] = {.index = 42, .length = 1},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 2},
  [27] = {.index = 47, .length = 2},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 1},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 2},
  [32] = {.index = 56, .length = 2},
  [33] = {.index = 58, .length = 2},
  [34] = {.index = 60, .length = 2},
  [35] = {.index = 62, .length = 2},
  [36] = {.index = 64, .length = 1},
  [37] = {.index = 65, .length = 2},
  [38] = {.index = 67, .length = 2},
  [39] = {.index = 69, .length = 3},
  [40] = {.index = 72, .length = 3},
  [41] = {.index = 75, .length = 2},
  [42] = {.index = 77, .length = 2},
  [43] = {.index = 79, .length = 3},
  [44] = {.index = 82, .length = 2},
  [45] = {.index = 84, .length = 3},
  [46] = {.index = 87, .length = 3},
  [47] = {.index = 90, .length = 2},
  [48] = {.index = 92, .length = 3},
  [49] = {.index = 95, .length = 4},
  [50] = {.index = 99, .length = 4},
  [51] = {.index = 103, .length = 2},
  [52] = {.index = 105, .length = 2},
  [53] = {.index = 107, .length = 5},
  [54] = {.index = 112, .length = 3},
  [55] = {.index = 115, .length = 5},
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
    {field_src, 1},
  [39] =
    {field_option, 1},
  [40] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [42] =
    {field_context, 1},
  [43] =
    {field_condition, 0},
  [44] =
    {field_command, 1},
  [45] =
    {field_dest, 2},
    {field_src, 1},
  [47] =
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [49] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [51] =
    {field_value, 0},
  [52] =
    {field_context, 2},
    {field_option, 1, .inherited = true},
  [54] =
    {field_condition, 1, .inherited = true},
    {field_option, 1, .inherited = true},
  [56] =
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [58] =
    {field_else_if, 0},
    {field_else_if, 1},
  [60] =
    {field_else_if, 0, .inherited = true},
    {field_else_if, 1, .inherited = true},
  [62] =
    {field_condition, 1},
    {field_option, 0, .inherited = true},
  [64] =
    {field_command, 2},
  [65] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [67] =
    {field_local_dest, 3},
    {field_src, 1},
  [69] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [72] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [75] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [77] =
    {field_dest, 3},
    {field_url, 2},
  [79] =
    {field_condition, 1, .inherited = true},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [82] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [84] =
    {field_dest, 2},
    {field_local_dest, 4},
    {field_src, 1},
  [87] =
    {field_local_dest, 4},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [90] =
    {field_key, 2},
    {field_value, 4},
  [92] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [95] =
    {field_condition, 1, .inherited = true},
    {field_else, 2},
    {field_else, 3},
    {field_option, 1, .inherited = true},
  [99] =
    {field_dest, 3},
    {field_local_dest, 5},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [103] =
    {field_image, 2},
    {field_target, 4},
  [105] =
    {field_name, 1},
    {field_value, 3, .inherited = true},
  [107] =
    {field_condition, 1, .inherited = true},
    {field_else, 3},
    {field_else, 4},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [112] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
    {field_value, 4, .inherited = true},
  [115] =
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 16,
  [17] = 3,
  [18] = 7,
  [19] = 13,
  [20] = 8,
  [21] = 16,
  [22] = 22,
  [23] = 10,
  [24] = 3,
  [25] = 25,
  [26] = 14,
  [27] = 27,
  [28] = 25,
  [29] = 27,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 32,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 41,
  [44] = 35,
  [45] = 35,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 33,
  [59] = 59,
  [60] = 46,
  [61] = 61,
  [62] = 34,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 47,
  [67] = 59,
  [68] = 54,
  [69] = 48,
  [70] = 59,
  [71] = 71,
  [72] = 57,
  [73] = 73,
  [74] = 71,
  [75] = 37,
  [76] = 61,
  [77] = 48,
  [78] = 78,
  [79] = 33,
  [80] = 80,
  [81] = 59,
  [82] = 48,
  [83] = 53,
  [84] = 84,
  [85] = 51,
  [86] = 50,
  [87] = 55,
  [88] = 56,
  [89] = 49,
  [90] = 50,
  [91] = 33,
  [92] = 92,
  [93] = 51,
  [94] = 38,
  [95] = 95,
  [96] = 80,
  [97] = 49,
  [98] = 55,
  [99] = 56,
  [100] = 65,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 63,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 65,
  [116] = 116,
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
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 34,
  [134] = 134,
  [135] = 135,
  [136] = 33,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 34,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 64,
  [145] = 63,
  [146] = 95,
  [147] = 147,
  [148] = 38,
  [149] = 34,
  [150] = 73,
  [151] = 37,
  [152] = 48,
  [153] = 59,
  [154] = 78,
  [155] = 37,
  [156] = 38,
  [157] = 92,
  [158] = 126,
  [159] = 125,
  [160] = 104,
  [161] = 113,
  [162] = 121,
  [163] = 119,
  [164] = 103,
  [165] = 109,
  [166] = 132,
  [167] = 107,
  [168] = 118,
  [169] = 120,
  [170] = 170,
  [171] = 105,
  [172] = 122,
  [173] = 137,
  [174] = 174,
  [175] = 138,
  [176] = 170,
  [177] = 123,
  [178] = 111,
  [179] = 124,
  [180] = 38,
  [181] = 108,
  [182] = 114,
  [183] = 127,
  [184] = 102,
  [185] = 128,
  [186] = 101,
  [187] = 116,
  [188] = 130,
  [189] = 139,
  [190] = 117,
  [191] = 37,
  [192] = 112,
  [193] = 141,
  [194] = 134,
  [195] = 106,
  [196] = 142,
  [197] = 174,
  [198] = 143,
  [199] = 129,
  [200] = 131,
  [201] = 135,
  [202] = 59,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 203,
  [209] = 48,
  [210] = 210,
  [211] = 203,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 213,
  [219] = 219,
  [220] = 48,
  [221] = 214,
  [222] = 59,
  [223] = 223,
  [224] = 216,
  [225] = 219,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 228,
  [232] = 230,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 54,
  [237] = 237,
  [238] = 238,
  [239] = 235,
  [240] = 238,
  [241] = 234,
  [242] = 242,
  [243] = 33,
  [244] = 61,
  [245] = 47,
  [246] = 57,
  [247] = 64,
  [248] = 53,
  [249] = 249,
  [250] = 48,
  [251] = 78,
  [252] = 34,
  [253] = 73,
  [254] = 59,
  [255] = 78,
  [256] = 256,
  [257] = 48,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 48,
  [266] = 266,
  [267] = 267,
  [268] = 263,
  [269] = 269,
  [270] = 266,
  [271] = 266,
  [272] = 272,
  [273] = 263,
  [274] = 274,
  [275] = 275,
  [276] = 204,
  [277] = 48,
  [278] = 59,
  [279] = 258,
  [280] = 258,
  [281] = 37,
  [282] = 38,
  [283] = 59,
  [284] = 284,
  [285] = 261,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 288,
  [290] = 256,
  [291] = 291,
  [292] = 261,
  [293] = 293,
  [294] = 294,
  [295] = 217,
  [296] = 59,
  [297] = 267,
  [298] = 288,
  [299] = 299,
  [300] = 293,
  [301] = 215,
  [302] = 262,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 305,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 116,
  [319] = 308,
  [320] = 117,
  [321] = 321,
  [322] = 311,
  [323] = 114,
  [324] = 143,
  [325] = 108,
  [326] = 326,
  [327] = 307,
  [328] = 305,
  [329] = 134,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 316,
  [334] = 304,
  [335] = 142,
  [336] = 336,
  [337] = 337,
  [338] = 309,
  [339] = 307,
  [340] = 309,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 204,
  [345] = 343,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 349,
  [351] = 349,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 59,
  [357] = 343,
  [358] = 346,
  [359] = 352,
  [360] = 48,
  [361] = 341,
  [362] = 354,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 365,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 366,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 367,
  [396] = 375,
  [397] = 376,
  [398] = 398,
  [399] = 382,
  [400] = 400,
  [401] = 368,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 383,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 368,
  [410] = 363,
  [411] = 411,
  [412] = 385,
  [413] = 367,
  [414] = 404,
  [415] = 402,
  [416] = 407,
  [417] = 417,
  [418] = 418,
  [419] = 408,
  [420] = 420,
  [421] = 418,
  [422] = 366,
  [423] = 411,
  [424] = 365,
  [425] = 425,
  [426] = 404,
  [427] = 425,
  [428] = 370,
  [429] = 429,
  [430] = 384,
  [431] = 393,
  [432] = 385,
  [433] = 391,
  [434] = 389,
  [435] = 387,
  [436] = 386,
  [437] = 429,
  [438] = 380,
  [439] = 379,
  [440] = 378,
  [441] = 377,
  [442] = 374,
  [443] = 373,
  [444] = 372,
  [445] = 445,
  [446] = 446,
  [447] = 59,
  [448] = 48,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 465,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 470,
  [492] = 471,
  [493] = 493,
  [494] = 473,
  [495] = 495,
  [496] = 475,
  [497] = 476,
  [498] = 477,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 465,
  [504] = 470,
  [505] = 471,
  [506] = 475,
  [507] = 476,
  [508] = 477,
  [509] = 470,
  [510] = 471,
  [511] = 475,
  [512] = 476,
  [513] = 477,
  [514] = 470,
  [515] = 471,
  [516] = 475,
  [517] = 476,
  [518] = 477,
  [519] = 475,
  [520] = 476,
  [521] = 475,
  [522] = 476,
  [523] = 475,
  [524] = 476,
  [525] = 475,
  [526] = 476,
  [527] = 475,
  [528] = 476,
  [529] = 475,
  [530] = 476,
  [531] = 475,
  [532] = 476,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 488,
  [541] = 501,
  [542] = 477,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 478,
  [547] = 500,
  [548] = 476,
  [549] = 549,
  [550] = 549,
  [551] = 475,
  [552] = 552,
  [553] = 481,
  [554] = 554,
  [555] = 536,
  [556] = 556,
  [557] = 557,
  [558] = 535,
  [559] = 559,
  [560] = 554,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 473,
  [565] = 471,
  [566] = 566,
  [567] = 534,
  [568] = 535,
  [569] = 536,
  [570] = 478,
  [571] = 535,
  [572] = 536,
  [573] = 535,
  [574] = 536,
  [575] = 535,
  [576] = 536,
  [577] = 535,
  [578] = 536,
  [579] = 535,
  [580] = 536,
  [581] = 535,
  [582] = 536,
  [583] = 535,
  [584] = 536,
  [585] = 535,
  [586] = 536,
  [587] = 535,
  [588] = 536,
  [589] = 535,
  [590] = 536,
  [591] = 470,
  [592] = 592,
  [593] = 556,
  [594] = 557,
  [595] = 484,
  [596] = 479,
  [597] = 474,
  [598] = 598,
  [599] = 534,
  [600] = 485,
  [601] = 465,
  [602] = 602,
  [603] = 561,
  [604] = 604,
  [605] = 605,
  [606] = 539,
  [607] = 466,
  [608] = 537,
  [609] = 489,
  [610] = 533,
  [611] = 486,
  [612] = 612,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(273);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == ',') ADVANCE(578);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '#') ADVANCE(583);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(582);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\f') ADVANCE(642);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '\f') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(649);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '\f') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\f') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(650);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(635);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\f') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(635);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '\f') ADVANCE(655);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(651);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '\f') ADVANCE(655);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(629);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '#') ADVANCE(631);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(633);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(652);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(581);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(581);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\f') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\f') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(648);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\f') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(318);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(592);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '=') ADVANCE(591);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(35)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(593);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(591);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(50)
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(581);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(581);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(635);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(366);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(366);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(366);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(366);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == 'C') ADVANCE(370);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'L') ADVANCE(360);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'S') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(581);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '-') ADVANCE(446);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '-') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '-') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == 'A') ADVANCE(474);
      if (lookahead == 'C') ADVANCE(470);
      if (lookahead == 'E') ADVANCE(466);
      if (lookahead == 'F') ADVANCE(471);
      if (lookahead == 'G') ADVANCE(464);
      if (lookahead == 'I') ADVANCE(461);
      if (lookahead == 'L') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(481);
      if (lookahead == 'S') ADVANCE(456);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == 'A') ADVANCE(474);
      if (lookahead == 'C') ADVANCE(470);
      if (lookahead == 'E') ADVANCE(468);
      if (lookahead == 'F') ADVANCE(471);
      if (lookahead == 'G') ADVANCE(464);
      if (lookahead == 'I') ADVANCE(461);
      if (lookahead == 'L') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(481);
      if (lookahead == 'S') ADVANCE(456);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == 'A') ADVANCE(474);
      if (lookahead == 'C') ADVANCE(470);
      if (lookahead == 'F') ADVANCE(471);
      if (lookahead == 'G') ADVANCE(464);
      if (lookahead == 'I') ADVANCE(461);
      if (lookahead == 'L') ADVANCE(460);
      if (lookahead == 'R') ADVANCE(481);
      if (lookahead == 'S') ADVANCE(456);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(577);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(435);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(437);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '(') ADVANCE(268);
      END_STATE();
    case 64:
      if (lookahead == ')') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(195);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(162);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(156);
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(151);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(297);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(279);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(309);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(304);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(305);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(305);
      if (lookahead == 'N') ADVANCE(296);
      END_STATE();
    case 100:
      if (lookahead == 'F') ADVANCE(308);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'F') ADVANCE(111);
      END_STATE();
    case 103:
      if (lookahead == 'G') ADVANCE(274);
      END_STATE();
    case 104:
      if (lookahead == 'G') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'H') ADVANCE(28);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 113:
      if (lookahead == 'J') ADVANCE(94);
      END_STATE();
    case 114:
      if (lookahead == 'K') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 'K') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == 'N') ADVANCE(84);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(320);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'M') ADVANCE(280);
      END_STATE();
    case 123:
      if (lookahead == 'M') ADVANCE(75);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(315);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(288);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 136:
      if (lookahead == 'P') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(325);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(153);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(301);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(312);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(322);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(284);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(319);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 154:
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 155:
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 156:
      if (lookahead == 'V') ADVANCE(92);
      END_STATE();
    case 157:
      if (lookahead == 'Y') ADVANCE(290);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(622);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(617);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(589);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 191:
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(624);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(619);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 206:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(616);
      END_STATE();
    case 216:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 236:
      if (lookahead == 'q') ADVANCE(258);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 260:
      if (lookahead == 'v') ADVANCE(200);
      END_STATE();
    case 261:
      if (lookahead == 'v') ADVANCE(201);
      END_STATE();
    case 262:
      if (lookahead == 'v') ADVANCE(204);
      END_STATE();
    case 263:
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(233);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 267:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 268:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 269:
      if (eof) ADVANCE(273);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(586);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(578);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 270:
      if (eof) ADVANCE(273);
      if (lookahead == ' ') ADVANCE(592);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '=') ADVANCE(591);
      if (lookahead == 'A') ADVANCE(338);
      if (lookahead == 'F') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(341);
      if (lookahead == 'V') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(272)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 271:
      if (eof) ADVANCE(273);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '@') ADVANCE(346);
      if (lookahead == 'A') ADVANCE(338);
      if (lookahead == 'F') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(341);
      if (lookahead == 'V') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(272)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 272:
      if (eof) ADVANCE(273);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(587);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(338);
      if (lookahead == 'F') ADVANCE(339);
      if (lookahead == 'P') ADVANCE(341);
      if (lookahead == 'V') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(272)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(86);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(107);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(77);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(390);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(399);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(400);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(385);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(419);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(387);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(393);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(382);
      if (lookahead == 'E') ADVANCE(379);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(310);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(378);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(306);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(276);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(348);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(377);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(380);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(376);
      if (lookahead == 'N') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(281);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(316);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(373);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(367);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(375);
      if (lookahead == 'R') ADVANCE(371);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(383);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(362);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(294);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(358);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(302);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(313);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(323);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(363);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(369);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(359);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(291);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(391);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(386);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == 'l') ADVANCE(388);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(392);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(405);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(406);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(589);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(394);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(350);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(351);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(420);
      if (lookahead == 'h') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(395);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(619);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(396);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(398);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(410);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(397);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(595);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(616);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(432);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(408);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(615);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(354);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(596);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(401);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(353);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(636);
      if (lookahead == '#') ADVANCE(436);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(437);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\f') ADVANCE(642);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead == 'f') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(482);
      if (lookahead == 'E') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(476);
      if (lookahead == 'N') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(475);
      if (lookahead == 'R') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(462);
      if (lookahead == 'S') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(517);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == 'k') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(569);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(557);
      if (lookahead == 'k') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == 'k') ADVANCE(501);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(573);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\f') ADVANCE(642);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(639);
      if (lookahead == '\r') ADVANCE(627);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(627);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(631);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(631);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(638);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(639);
      if (lookahead == '\r') ADVANCE(627);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(627);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(637);
      if (lookahead == '\f') ADVANCE(640);
      if (lookahead == '\r') ADVANCE(631);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(631);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(641);
      if (lookahead == '\f') ADVANCE(642);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '\f') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\f') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '\f') ADVANCE(655);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\f') ADVANCE(657);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(635);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(577);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(581);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(643);
      if (lookahead == '\f') ADVANCE(653);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(644);
      if (lookahead == '\f') ADVANCE(654);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '\f') ADVANCE(655);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '+') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(656);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(647);
      if (lookahead == '\f') ADVANCE(657);
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
  [1] = {.lex_state = 271},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 34, .external_lex_state = 2},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 52},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 41, .external_lex_state = 2},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 42},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 42},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 41, .external_lex_state = 2},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 42},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 35, .external_lex_state = 2},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 35, .external_lex_state = 2},
  [69] = {.lex_state = 41, .external_lex_state = 2},
  [70] = {.lex_state = 41, .external_lex_state = 2},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 35, .external_lex_state = 2},
  [73] = {.lex_state = 35},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 35, .external_lex_state = 2},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 44, .external_lex_state = 2},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35, .external_lex_state = 2},
  [84] = {.lex_state = 52},
  [85] = {.lex_state = 44, .external_lex_state = 2},
  [86] = {.lex_state = 44, .external_lex_state = 2},
  [87] = {.lex_state = 44, .external_lex_state = 2},
  [88] = {.lex_state = 41, .external_lex_state = 2},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 43},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 41, .external_lex_state = 2},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 40},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 58},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 59, .external_lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 44, .external_lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 30, .external_lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 43},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 24, .external_lex_state = 2},
  [145] = {.lex_state = 59, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 26},
  [148] = {.lex_state = 43},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 35, .external_lex_state = 2},
  [151] = {.lex_state = 43},
  [152] = {.lex_state = 35, .external_lex_state = 2},
  [153] = {.lex_state = 35, .external_lex_state = 2},
  [154] = {.lex_state = 35, .external_lex_state = 2},
  [155] = {.lex_state = 44, .external_lex_state = 2},
  [156] = {.lex_state = 44, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 30},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 30},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 30},
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
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 30},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 52},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 52},
  [205] = {.lex_state = 52},
  [206] = {.lex_state = 52},
  [207] = {.lex_state = 30},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 52},
  [210] = {.lex_state = 52},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 271},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 26},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 26},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 26},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 26},
  [223] = {.lex_state = 26},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 271},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 36},
  [229] = {.lex_state = 36},
  [230] = {.lex_state = 36},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 36},
  [234] = {.lex_state = 54},
  [235] = {.lex_state = 36},
  [236] = {.lex_state = 271},
  [237] = {.lex_state = 54},
  [238] = {.lex_state = 54},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 54},
  [241] = {.lex_state = 54},
  [242] = {.lex_state = 36},
  [243] = {.lex_state = 271},
  [244] = {.lex_state = 271},
  [245] = {.lex_state = 271},
  [246] = {.lex_state = 271},
  [247] = {.lex_state = 270},
  [248] = {.lex_state = 271},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 271},
  [251] = {.lex_state = 271},
  [252] = {.lex_state = 271},
  [253] = {.lex_state = 271},
  [254] = {.lex_state = 271},
  [255] = {.lex_state = 30},
  [256] = {.lex_state = 53},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 29},
  [259] = {.lex_state = 14},
  [260] = {.lex_state = 55},
  [261] = {.lex_state = 55},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 30},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 30},
  [266] = {.lex_state = 29},
  [267] = {.lex_state = 53},
  [268] = {.lex_state = 30},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 29},
  [271] = {.lex_state = 29},
  [272] = {.lex_state = 30},
  [273] = {.lex_state = 30},
  [274] = {.lex_state = 271, .external_lex_state = 3},
  [275] = {.lex_state = 30},
  [276] = {.lex_state = 30},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 30},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 29},
  [281] = {.lex_state = 271},
  [282] = {.lex_state = 271},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 30},
  [285] = {.lex_state = 55},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 30},
  [288] = {.lex_state = 55},
  [289] = {.lex_state = 55},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 30},
  [292] = {.lex_state = 55},
  [293] = {.lex_state = 10},
  [294] = {.lex_state = 36},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 36},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 55},
  [299] = {.lex_state = 30},
  [300] = {.lex_state = 10},
  [301] = {.lex_state = 36},
  [302] = {.lex_state = 10},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 29},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 271},
  [307] = {.lex_state = 29},
  [308] = {.lex_state = 29},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 29},
  [311] = {.lex_state = 29},
  [312] = {.lex_state = 29},
  [313] = {.lex_state = 29},
  [314] = {.lex_state = 271},
  [315] = {.lex_state = 29},
  [316] = {.lex_state = 29},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 271},
  [319] = {.lex_state = 29},
  [320] = {.lex_state = 271},
  [321] = {.lex_state = 271},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 271},
  [324] = {.lex_state = 271},
  [325] = {.lex_state = 271},
  [326] = {.lex_state = 29},
  [327] = {.lex_state = 29},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 271},
  [330] = {.lex_state = 29},
  [331] = {.lex_state = 55},
  [332] = {.lex_state = 271},
  [333] = {.lex_state = 29},
  [334] = {.lex_state = 29},
  [335] = {.lex_state = 271},
  [336] = {.lex_state = 271},
  [337] = {.lex_state = 30},
  [338] = {.lex_state = 29},
  [339] = {.lex_state = 29},
  [340] = {.lex_state = 29},
  [341] = {.lex_state = 56},
  [342] = {.lex_state = 56},
  [343] = {.lex_state = 15},
  [344] = {.lex_state = 54},
  [345] = {.lex_state = 15},
  [346] = {.lex_state = 48},
  [347] = {.lex_state = 54},
  [348] = {.lex_state = 54},
  [349] = {.lex_state = 15},
  [350] = {.lex_state = 15},
  [351] = {.lex_state = 15},
  [352] = {.lex_state = 48},
  [353] = {.lex_state = 54},
  [354] = {.lex_state = 56},
  [355] = {.lex_state = 54},
  [356] = {.lex_state = 54},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 48},
  [359] = {.lex_state = 48},
  [360] = {.lex_state = 54},
  [361] = {.lex_state = 56},
  [362] = {.lex_state = 56},
  [363] = {.lex_state = 15},
  [364] = {.lex_state = 15},
  [365] = {.lex_state = 15},
  [366] = {.lex_state = 15},
  [367] = {.lex_state = 15},
  [368] = {.lex_state = 15},
  [369] = {.lex_state = 271},
  [370] = {.lex_state = 15},
  [371] = {.lex_state = 15},
  [372] = {.lex_state = 15},
  [373] = {.lex_state = 15},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 15},
  [376] = {.lex_state = 15},
  [377] = {.lex_state = 15},
  [378] = {.lex_state = 15},
  [379] = {.lex_state = 15},
  [380] = {.lex_state = 15},
  [381] = {.lex_state = 271},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 15},
  [385] = {.lex_state = 36},
  [386] = {.lex_state = 15},
  [387] = {.lex_state = 15},
  [388] = {.lex_state = 15},
  [389] = {.lex_state = 15},
  [390] = {.lex_state = 271},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 30},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 15},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 15},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 15},
  [403] = {.lex_state = 36},
  [404] = {.lex_state = 36},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 15},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 15},
  [409] = {.lex_state = 15},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 15},
  [412] = {.lex_state = 36},
  [413] = {.lex_state = 15},
  [414] = {.lex_state = 36},
  [415] = {.lex_state = 15},
  [416] = {.lex_state = 15},
  [417] = {.lex_state = 15},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 15},
  [420] = {.lex_state = 15},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 15},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 36},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 15},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 15},
  [432] = {.lex_state = 36},
  [433] = {.lex_state = 15},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 15},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 53},
  [446] = {.lex_state = 53},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 56},
  [450] = {.lex_state = 38},
  [451] = {.lex_state = 53},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 38},
  [455] = {.lex_state = 56},
  [456] = {.lex_state = 36},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 38},
  [459] = {.lex_state = 53},
  [460] = {.lex_state = 271},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 49},
  [463] = {.lex_state = 49},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 38},
  [466] = {.lex_state = 36},
  [467] = {.lex_state = 38},
  [468] = {.lex_state = 25},
  [469] = {.lex_state = 25},
  [470] = {.lex_state = 61},
  [471] = {.lex_state = 51},
  [472] = {.lex_state = 25},
  [473] = {.lex_state = 38},
  [474] = {.lex_state = 271},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 51},
  [478] = {.lex_state = 25},
  [479] = {.lex_state = 271},
  [480] = {.lex_state = 25},
  [481] = {.lex_state = 60},
  [482] = {.lex_state = 25},
  [483] = {.lex_state = 25},
  [484] = {.lex_state = 60},
  [485] = {.lex_state = 60},
  [486] = {.lex_state = 60},
  [487] = {.lex_state = 25},
  [488] = {.lex_state = 25},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 61},
  [492] = {.lex_state = 51},
  [493] = {.lex_state = 25},
  [494] = {.lex_state = 38},
  [495] = {.lex_state = 25},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 51},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 25},
  [502] = {.lex_state = 60},
  [503] = {.lex_state = 38},
  [504] = {.lex_state = 61},
  [505] = {.lex_state = 51},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 51},
  [509] = {.lex_state = 61},
  [510] = {.lex_state = 51},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 51},
  [514] = {.lex_state = 61},
  [515] = {.lex_state = 51},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 51},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 25},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 12},
  [537] = {.lex_state = 36},
  [538] = {.lex_state = 25},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 25},
  [541] = {.lex_state = 25},
  [542] = {.lex_state = 51},
  [543] = {.lex_state = 36},
  [544] = {.lex_state = 60},
  [545] = {.lex_state = 36},
  [546] = {.lex_state = 25},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 60},
  [550] = {.lex_state = 60},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 25},
  [553] = {.lex_state = 60},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 12},
  [556] = {.lex_state = 60},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 11},
  [559] = {.lex_state = 60},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 60},
  [563] = {.lex_state = 36},
  [564] = {.lex_state = 38},
  [565] = {.lex_state = 51},
  [566] = {.lex_state = 25},
  [567] = {.lex_state = 25},
  [568] = {.lex_state = 11},
  [569] = {.lex_state = 12},
  [570] = {.lex_state = 25},
  [571] = {.lex_state = 11},
  [572] = {.lex_state = 12},
  [573] = {.lex_state = 11},
  [574] = {.lex_state = 12},
  [575] = {.lex_state = 11},
  [576] = {.lex_state = 12},
  [577] = {.lex_state = 11},
  [578] = {.lex_state = 12},
  [579] = {.lex_state = 11},
  [580] = {.lex_state = 12},
  [581] = {.lex_state = 11},
  [582] = {.lex_state = 12},
  [583] = {.lex_state = 11},
  [584] = {.lex_state = 12},
  [585] = {.lex_state = 11},
  [586] = {.lex_state = 12},
  [587] = {.lex_state = 11},
  [588] = {.lex_state = 12},
  [589] = {.lex_state = 11},
  [590] = {.lex_state = 12},
  [591] = {.lex_state = 61},
  [592] = {.lex_state = 60},
  [593] = {.lex_state = 60},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 60},
  [596] = {.lex_state = 271},
  [597] = {.lex_state = 271},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 25},
  [600] = {.lex_state = 60},
  [601] = {.lex_state = 38},
  [602] = {.lex_state = 271},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 32},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 36},
  [608] = {.lex_state = 36},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 60},
  [612] = {.lex_state = 36},
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
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_FROMDOCKERFILE] = ACTIONS(1),
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_CLONE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVEARTIFACT] = ACTIONS(1),
    [anon_sym_ASLOCAL] = ACTIONS(1),
    [anon_sym_SAVEIMAGE] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_WITHDOCKER] = ACTIONS(1),
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
    [sym_source_file] = STATE(604),
    [sym_arg_command] = STATE(226),
    [sym_from_command] = STATE(226),
    [sym_project_command] = STATE(226),
    [sym_target] = STATE(226),
    [sym_version_command] = STATE(226),
    [aux_sym_source_file_repeat1] = STATE(226),
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
  [0] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(35), 1,
      anon_sym_ELSE,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(27), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(4), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [70] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      anon_sym_ARG,
    ACTIONS(52), 1,
      anon_sym_FROM,
    ACTIONS(55), 1,
      anon_sym_COPY,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(63), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(66), 1,
      anon_sym_GIT,
    ACTIONS(69), 1,
      anon_sym_IF,
    ACTIONS(72), 1,
      anon_sym_ELSE,
    ACTIONS(74), 1,
      anon_sym_LET,
    ACTIONS(77), 1,
      anon_sym_RUN,
    ACTIONS(80), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(83), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(86), 1,
      anon_sym_SET,
    ACTIONS(89), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(61), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [140] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(94), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(92), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [210] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(98), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(96), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [280] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(102), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(100), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [350] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(104), 1,
      anon_sym_END,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [416] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(110), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [482] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(112), 1,
      anon_sym_ARG,
    ACTIONS(114), 1,
      anon_sym_FROM,
    ACTIONS(116), 1,
      anon_sym_COPY,
    ACTIONS(118), 1,
      anon_sym_FOR,
    ACTIONS(120), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(122), 1,
      anon_sym_GIT,
    ACTIONS(124), 1,
      anon_sym_IF,
    ACTIONS(126), 1,
      anon_sym_LET,
    ACTIONS(128), 1,
      anon_sym_RUN,
    ACTIONS(130), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(132), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(134), 1,
      anon_sym_SET,
    ACTIONS(136), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(138), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [548] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(140), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [614] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(142), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [680] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    STATE(557), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [746] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(144), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [812] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    STATE(603), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [878] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    STATE(594), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [944] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(146), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1010] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(49), 1,
      anon_sym_ARG,
    ACTIONS(52), 1,
      anon_sym_FROM,
    ACTIONS(55), 1,
      anon_sym_COPY,
    ACTIONS(58), 1,
      anon_sym_FOR,
    ACTIONS(61), 1,
      anon_sym_END,
    ACTIONS(63), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(66), 1,
      anon_sym_GIT,
    ACTIONS(69), 1,
      anon_sym_IF,
    ACTIONS(74), 1,
      anon_sym_LET,
    ACTIONS(77), 1,
      anon_sym_RUN,
    ACTIONS(86), 1,
      anon_sym_SET,
    ACTIONS(89), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(148), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(151), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1076] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(154), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1142] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(156), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1208] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(158), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1274] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(160), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1340] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(112), 1,
      anon_sym_ARG,
    ACTIONS(114), 1,
      anon_sym_FROM,
    ACTIONS(116), 1,
      anon_sym_COPY,
    ACTIONS(118), 1,
      anon_sym_FOR,
    ACTIONS(120), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(122), 1,
      anon_sym_GIT,
    ACTIONS(124), 1,
      anon_sym_IF,
    ACTIONS(126), 1,
      anon_sym_LET,
    ACTIONS(128), 1,
      anon_sym_RUN,
    ACTIONS(130), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(132), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(134), 1,
      anon_sym_SET,
    ACTIONS(136), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(162), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1406] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(164), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1472] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      sym__dedent,
    ACTIONS(166), 1,
      anon_sym_ARG,
    ACTIONS(169), 1,
      anon_sym_FROM,
    ACTIONS(172), 1,
      anon_sym_COPY,
    ACTIONS(175), 1,
      anon_sym_FOR,
    ACTIONS(178), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(181), 1,
      anon_sym_GIT,
    ACTIONS(184), 1,
      anon_sym_IF,
    ACTIONS(187), 1,
      anon_sym_LET,
    ACTIONS(190), 1,
      anon_sym_RUN,
    ACTIONS(193), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(196), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(199), 1,
      anon_sym_SET,
    ACTIONS(202), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1538] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(205), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1604] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    STATE(561), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1670] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(207), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(25), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1736] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(209), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1802] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(211), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1868] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(213), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1934] = 17,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_COPY,
    ACTIONS(25), 1,
      anon_sym_FOR,
    ACTIONS(29), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(31), 1,
      anon_sym_GIT,
    ACTIONS(33), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_LET,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(106), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(108), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(215), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 14,
      sym_arg_command,
      sym_from_command,
      sym_copy_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2000] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(221), 1,
      sym_image_name,
    ACTIONS(223), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(225), 1,
      sym_cache_hint,
    ACTIONS(227), 1,
      sym_push,
    STATE(35), 1,
      aux_sym_save_image_command_repeat1,
    STATE(56), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(219), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(217), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2050] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_COLON2,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(231), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(229), 20,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2090] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(239), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(237), 20,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2127] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(221), 1,
      sym_image_name,
    ACTIONS(223), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(227), 1,
      sym_push,
    STATE(46), 1,
      aux_sym_save_image_command_repeat1,
    STATE(56), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(51), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(245), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2174] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(225), 1,
      sym_cache_hint,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(249), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(251), 1,
      sym_push,
    STATE(44), 1,
      aux_sym_save_image_command_repeat1,
    STATE(99), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(219), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(217), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2222] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(255), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(253), 20,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2256] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(259), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(257), 20,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2290] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(261), 1,
      sym_image_name,
    ACTIONS(263), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(265), 1,
      sym_cache_hint,
    ACTIONS(267), 1,
      sym_push,
    STATE(45), 1,
      aux_sym_save_image_command_repeat1,
    STATE(88), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(87), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(219), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(217), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2338] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_path,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(279), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(281), 1,
      anon_sym_DASH_DASHplatform,
    STATE(84), 1,
      aux_sym_copy_command_repeat1,
    STATE(256), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(210), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(275), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [2391] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_path,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(279), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(281), 1,
      anon_sym_DASH_DASHplatform,
    STATE(42), 1,
      aux_sym_copy_command_repeat1,
    STATE(297), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(210), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(275), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [2444] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_path,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(279), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(281), 1,
      anon_sym_DASH_DASHplatform,
    STATE(84), 1,
      aux_sym_copy_command_repeat1,
    STATE(290), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(210), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(275), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [2497] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_path,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(279), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(281), 1,
      anon_sym_DASH_DASHplatform,
    STATE(40), 1,
      aux_sym_copy_command_repeat1,
    STATE(267), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(210), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(275), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [2550] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(249), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(251), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(99), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(245), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2595] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(261), 1,
      sym_image_name,
    ACTIONS(263), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(267), 1,
      sym_push,
    STATE(60), 1,
      aux_sym_save_image_command_repeat1,
    STATE(88), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(85), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(245), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2640] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(287), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(290), 1,
      sym_push,
    STATE(46), 1,
      aux_sym_save_image_command_repeat1,
    STATE(56), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(283), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2681] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(54), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(293), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(299), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2747] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(303), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2778] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(50), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(309), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(307), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2813] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(221), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(50), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(316), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(314), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2848] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(318), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(321), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(99), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(283), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [2887] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(326), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(54), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(324), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2922] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(332), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(330), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(54), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(328), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [2957] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(221), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(50), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(337), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(335), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [2992] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(341), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(339), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3023] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(345), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(53), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(343), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3058] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      anon_sym_COLON2,
    ACTIONS(349), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(231), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3093] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(351), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3124] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(358), 1,
      sym_push,
    STATE(60), 1,
      aux_sym_save_image_command_repeat1,
    STATE(88), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(285), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(283), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3163] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(47), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(361), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3198] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(237), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(239), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3230] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(371), 1,
      anon_sym_ASLOCAL,
    ACTIONS(373), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(369), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(367), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [3264] = 3,
    ACTIONS(377), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3292] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_ASLOCAL,
    ACTIONS(385), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(381), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(379), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [3326] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_FROM,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(68), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(293), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3359] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(351), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(353), 15,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3388] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(330), 1,
      anon_sym_FROM,
    ACTIONS(389), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(68), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(328), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3421] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(299), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3450] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(351), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3479] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(392), 1,
      anon_sym_DASH_DASH,
    ACTIONS(396), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(400), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(402), 1,
      anon_sym_DASH_DASHsecret,
    STATE(80), 1,
      aux_sym_run_command_repeat1,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(429), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(223), 2,
      sym_mount,
      sym_secret,
    ACTIONS(398), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [3524] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(345), 1,
      anon_sym_FROM,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(83), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(343), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3557] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(406), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(404), 15,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3586] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(396), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(400), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(402), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(408), 1,
      anon_sym_DASH_DASH,
    STATE(96), 1,
      aux_sym_run_command_repeat1,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(437), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(223), 2,
      sym_mount,
      sym_secret,
    ACTIONS(398), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [3631] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(253), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(255), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3660] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_FROM,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(66), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(361), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3693] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(299), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3722] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(412), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(410), 15,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3751] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(414), 1,
      anon_sym_COLON2,
    ACTIONS(416), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(231), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3784] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(396), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(400), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(402), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(418), 1,
      anon_sym_DASH_DASH,
    STATE(147), 1,
      aux_sym_run_command_repeat1,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(402), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(223), 2,
      sym_mount,
      sym_secret,
    ACTIONS(398), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [3829] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(351), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [3858] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(299), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(301), 15,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3887] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(326), 1,
      anon_sym_FROM,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(68), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(324), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [3920] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(420), 1,
      sym_path,
    ACTIONS(427), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(430), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(433), 1,
      anon_sym_DASH_DASHplatform,
    STATE(84), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(422), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(210), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(424), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [3961] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(261), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(86), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(316), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(314), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [3994] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(436), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(86), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(309), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(307), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4027] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(261), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(86), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(337), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(335), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4060] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(341), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(339), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4089] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(303), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4118] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(439), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(90), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(309), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(307), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4151] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(442), 1,
      anon_sym_COLON2,
    ACTIONS(444), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(231), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4184] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(450), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(448), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(446), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4215] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(90), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(316), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(314), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4248] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(257), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(259), 12,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4277] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(456), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(454), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(452), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4308] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(396), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(400), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(402), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(458), 1,
      anon_sym_DASH_DASH,
    STATE(147), 1,
      aux_sym_run_command_repeat1,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(415), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(394), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(223), 2,
      sym_mount,
      sym_secret,
    ACTIONS(398), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [4353] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(303), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4382] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(90), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(337), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(335), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4415] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(341), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(339), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [4444] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_ASLOCAL,
    ACTIONS(385), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(381), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(379), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4476] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(462), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(460), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4504] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(466), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(464), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4532] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(470), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(468), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4560] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(474), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(472), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4588] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(478), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(476), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4616] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(482), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(480), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(486), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(484), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4672] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(490), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(488), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4700] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(494), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(492), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4728] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(371), 1,
      anon_sym_ASLOCAL,
    ACTIONS(373), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(369), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(367), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4760] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(498), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(496), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4788] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(502), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(500), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4816] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(506), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(504), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4844] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(508), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4872] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      anon_sym_ASLOCAL,
    ACTIONS(514), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(381), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(379), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [4904] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(518), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(516), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(522), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(520), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4960] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(526), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(524), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [4988] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(530), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(528), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5016] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(534), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(532), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5044] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(538), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(536), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5072] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(542), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(540), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5100] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(546), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(544), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5128] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(548), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5156] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(554), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(552), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5184] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(558), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(556), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5212] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(562), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(560), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5240] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(566), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(564), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5268] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(568), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5296] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(574), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(572), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5324] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(578), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(576), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5352] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(582), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(580), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5380] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(237), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(239), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [5410] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(588), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(586), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5438] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(592), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(590), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5466] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_FROM,
    ACTIONS(594), 1,
      anon_sym_COLON2,
    ACTIONS(596), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5498] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(600), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(598), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5526] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(604), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(602), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5554] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(606), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5582] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(237), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(239), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [5612] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(614), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(612), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5640] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(616), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5668] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(361), 14,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5696] = 4,
    ACTIONS(620), 1,
      aux_sym_branch_token1,
    ACTIONS(622), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5724] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_ASLOCAL,
    ACTIONS(626), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(369), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(367), 9,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
  [5756] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(454), 1,
      anon_sym_FROM,
    ACTIONS(628), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(452), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5785] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(640), 1,
      anon_sym_DASH_DASHsecret,
    STATE(147), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(630), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(632), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(223), 2,
      sym_mount,
      sym_secret,
    ACTIONS(634), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [5822] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(257), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(259), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [5849] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_FROM,
    ACTIONS(643), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(237), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [5878] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(406), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(404), 14,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5905] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(253), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(255), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [5932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 14,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5959] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 14,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5986] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(412), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(410), 14,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [6013] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(253), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(255), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [6040] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(257), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(259), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      sym_image_name,
  [6067] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(448), 1,
      anon_sym_FROM,
    ACTIONS(645), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(446), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6096] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6122] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6148] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(474), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(472), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6174] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(504), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6200] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(538), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(536), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6226] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(528), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6252] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(470), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(468), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6278] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(494), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(492), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6304] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(580), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6330] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(486), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(484), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6356] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(524), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6382] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(534), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6408] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(647), 1,
      sym_allow_privileged,
    ACTIONS(649), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(651), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(653), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(655), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(657), 1,
      anon_sym_DASH_DASHservice,
    STATE(207), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(554), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(299), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [6450] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(478), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(476), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6476] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(540), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6502] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(598), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6528] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(647), 1,
      sym_allow_privileged,
    ACTIONS(649), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(651), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(653), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(655), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(657), 1,
      anon_sym_DASH_DASHservice,
    STATE(170), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(547), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(299), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [6570] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(602), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6596] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(647), 1,
      sym_allow_privileged,
    ACTIONS(649), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(651), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(653), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(655), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(657), 1,
      anon_sym_DASH_DASHservice,
    STATE(207), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(560), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(299), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [6638] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(544), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6664] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(498), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(496), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6690] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(550), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(548), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(259), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(257), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6742] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(490), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(488), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(510), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(508), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6794] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6820] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(466), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(464), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6846] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(564), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6872] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(460), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6898] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(518), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(516), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6924] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6950] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(606), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [6976] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(522), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(520), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7002] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(253), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7028] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(502), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(500), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7054] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(614), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7080] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(588), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(586), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7106] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(482), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(480), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7132] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7158] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(647), 1,
      sym_allow_privileged,
    ACTIONS(649), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(651), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(653), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(655), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(657), 1,
      anon_sym_DASH_DASHservice,
    STATE(176), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(500), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(299), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [7200] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(361), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7226] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(568), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7252] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(576), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7278] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 13,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_WITHDOCKER,
  [7304] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 12,
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
  [7329] = 10,
    ACTIONS(659), 1,
      sym_image_name,
    ACTIONS(661), 1,
      anon_sym_PLUS,
    ACTIONS(665), 1,
      anon_sym_DASH_DASHplatform,
    STATE(244), 1,
      sym_target_ref,
    STATE(263), 1,
      aux_sym_from_command_repeat1,
    STATE(392), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(663), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(324), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(667), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7366] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(671), 12,
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
  [7391] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(673), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(675), 12,
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
  [7416] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(679), 12,
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
  [7441] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_RUN,
    ACTIONS(683), 1,
      sym_allow_privileged,
    ACTIONS(686), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(689), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(692), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(695), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(698), 1,
      anon_sym_DASH_DASHservice,
    STATE(207), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(299), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [7480] = 10,
    ACTIONS(665), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(701), 1,
      sym_image_name,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    STATE(61), 1,
      sym_target_ref,
    STATE(268), 1,
      aux_sym_from_command_repeat1,
    STATE(392), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(663), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(143), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(705), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7517] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 12,
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
  [7542] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(707), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(709), 12,
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
  [7567] = 10,
    ACTIONS(665), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(711), 1,
      sym_image_name,
    ACTIONS(713), 1,
      anon_sym_PLUS,
    STATE(76), 1,
      sym_target_ref,
    STATE(273), 1,
      aux_sym_from_command_repeat1,
    STATE(392), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(663), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(198), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(715), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7604] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
    ACTIONS(719), 1,
      anon_sym_ARG,
    ACTIONS(722), 1,
      anon_sym_FROM,
    ACTIONS(725), 1,
      anon_sym_PROJECT,
    ACTIONS(728), 1,
      anon_sym_VERSION,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(212), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [7638] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(18), 1,
      sym__eol,
    STATE(219), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(740), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7670] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__eol,
    STATE(216), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(742), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7702] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(746), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(744), 10,
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
  [7726] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym__eol,
    STATE(227), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(748), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7758] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(752), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(750), 10,
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
  [7782] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym__eol,
    STATE(225), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(754), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7814] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__eol,
    STATE(227), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(756), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7846] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(299), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(301), 10,
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
  [7870] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym__eol,
    STATE(224), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(758), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7902] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(351), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(353), 10,
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
  [7926] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(762), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(760), 10,
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
  [7950] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym__eol,
    STATE(227), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(764), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [7982] = 8,
    ACTIONS(736), 1,
      anon_sym_DQUOTE,
    ACTIONS(738), 1,
      anon_sym_SQUOTE,
    STATE(27), 1,
      sym__eol,
    STATE(227), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(734), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(766), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8014] = 9,
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
    ACTIONS(768), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(212), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [8048] = 7,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    ACTIONS(776), 1,
      anon_sym_SQUOTE,
    STATE(227), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(770), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(303), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(779), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8077] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(781), 1,
      sym_identifier,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHsep,
    STATE(230), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(264), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8110] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(791), 1,
      sym_identifier,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(799), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(802), 1,
      anon_sym_DASH_DASHsep,
    STATE(229), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(796), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(264), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8143] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(805), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(264), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8176] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(807), 1,
      sym_identifier,
    STATE(232), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(264), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8209] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(789), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(809), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(264), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8242] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(811), 1,
      sym_identifier,
    STATE(249), 1,
      aux_sym__conditional_block_repeat1,
    STATE(452), 1,
      sym__conditional_block,
    STATE(453), 1,
      sym_else_if_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(317), 2,
      sym_mount,
      sym_secret,
    ACTIONS(813), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [8277] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(815), 1,
      sym_path,
    ACTIONS(817), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(819), 1,
      anon_sym_DASHf,
    ACTIONS(821), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(823), 1,
      anon_sym_DASH_DASHplatform,
    STATE(237), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(355), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [8309] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(811), 1,
      sym_identifier,
    STATE(249), 1,
      aux_sym__conditional_block_repeat1,
    STATE(425), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(317), 2,
      sym_mount,
      sym_secret,
    ACTIONS(813), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [8341] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(825), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(236), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(330), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8367] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(828), 1,
      sym_path,
    ACTIONS(830), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(833), 1,
      anon_sym_DASHf,
    ACTIONS(836), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(839), 1,
      anon_sym_DASH_DASHplatform,
    STATE(237), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(355), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [8399] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(817), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(819), 1,
      anon_sym_DASHf,
    ACTIONS(821), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(823), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(842), 1,
      sym_path,
    STATE(241), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(355), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [8431] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(811), 1,
      sym_identifier,
    STATE(249), 1,
      aux_sym__conditional_block_repeat1,
    STATE(427), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(317), 2,
      sym_mount,
      sym_secret,
    ACTIONS(813), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [8463] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(817), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(819), 1,
      anon_sym_DASHf,
    ACTIONS(821), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(823), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(844), 1,
      sym_path,
    STATE(234), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(355), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [8495] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(817), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(819), 1,
      anon_sym_DASHf,
    ACTIONS(821), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(823), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(846), 1,
      sym_path,
    STATE(237), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(355), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [8527] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(848), 1,
      sym_identifier,
    ACTIONS(850), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(856), 1,
      anon_sym_DASH_DASHsecret,
    STATE(242), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(317), 2,
      sym_mount,
      sym_secret,
    ACTIONS(853), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [8556] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(859), 1,
      anon_sym_COLON2,
    ACTIONS(861), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(231), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8581] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(245), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(363), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8606] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(236), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(295), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8631] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(248), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(345), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8656] = 4,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    ACTIONS(865), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(375), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [8677] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(236), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(326), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8702] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(787), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(867), 1,
      sym_identifier,
    STATE(242), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(317), 2,
      sym_mount,
      sym_secret,
    ACTIONS(813), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [8731] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(299), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8751] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(410), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(412), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8771] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(869), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(239), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8793] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(404), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(406), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8813] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(351), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [8833] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(410), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [8850] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(871), 1,
      sym_path,
    STATE(286), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [8877] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [8894] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(873), 1,
      sym_expr,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(879), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(365), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [8919] = 4,
    STATE(259), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(881), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(884), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8938] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(886), 1,
      sym_path,
    STATE(260), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(888), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [8959] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(891), 1,
      sym_path,
    STATE(260), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(893), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [8980] = 4,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(895), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(897), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8999] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(281), 1,
      anon_sym_DASH_DASHplatform,
    STATE(246), 1,
      sym_target_ref,
    STATE(337), 1,
      aux_sym_from_command_repeat1,
    STATE(392), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(899), 2,
      sym_allow_privileged,
      sym_pass_args,
  [9026] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(901), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9043] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9060] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(903), 1,
      sym_expr,
    ACTIONS(905), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(413), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9085] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_path,
    STATE(286), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [9112] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(909), 1,
      anon_sym_PLUS,
    STATE(57), 1,
      sym_target_ref,
    STATE(337), 1,
      aux_sym_from_command_repeat1,
    STATE(392), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(899), 2,
      sym_allow_privileged,
      sym_pass_args,
  [9139] = 4,
    STATE(259), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(911), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(913), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9158] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      sym_expr,
    ACTIONS(917), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(367), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9183] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(919), 1,
      sym_expr,
    ACTIONS(921), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(395), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9208] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(923), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9225] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(925), 1,
      anon_sym_PLUS,
    STATE(72), 1,
      sym_target_ref,
    STATE(337), 1,
      aux_sym_from_command_repeat1,
    STATE(392), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(899), 2,
      sym_allow_privileged,
      sym_pass_args,
  [9252] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(927), 1,
      ts_builtin_sym_end,
    ACTIONS(931), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(929), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9273] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(933), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9290] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(671), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9307] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(299), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9322] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9339] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(935), 1,
      sym_expr,
    ACTIONS(937), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(371), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9364] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(939), 1,
      sym_expr,
    ACTIONS(941), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(424), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9389] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(255), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9408] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(259), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9427] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(351), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9442] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(943), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9459] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(945), 1,
      sym_path,
    STATE(260), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(893), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [9480] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(947), 1,
      sym_path,
    ACTIONS(950), 1,
      anon_sym_PLUS,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [9507] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(956), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9524] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(958), 1,
      sym_path,
    STATE(285), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(893), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [9545] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(960), 1,
      sym_path,
    STATE(292), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(893), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [9566] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      sym_path,
    STATE(286), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [9593] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(964), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9610] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(966), 1,
      sym_path,
    STATE(260), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(893), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [9631] = 4,
    STATE(192), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(895), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(968), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9650] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(970), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9667] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(750), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9684] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9701] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(972), 1,
      sym_path,
    STATE(286), 1,
      aux_sym_copy_command_repeat2,
    STATE(490), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(446), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [9728] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(974), 1,
      sym_path,
    STATE(261), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(893), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [9749] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(976), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9766] = 4,
    STATE(112), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(895), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(978), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9785] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(744), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9802] = 4,
    STATE(178), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(895), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(980), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9821] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(982), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9836] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(984), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(393), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9858] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    ACTIONS(988), 1,
      anon_sym_SQUOTE,
    ACTIONS(990), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(97), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9880] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(992), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(994), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9898] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    ACTIONS(998), 1,
      anon_sym_SQUOTE,
    ACTIONS(1000), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(253), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9920] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
    ACTIONS(1006), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(295), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9942] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_SQUOTE,
    ACTIONS(1012), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(344), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9964] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      anon_sym_SQUOTE,
    ACTIONS(1018), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(89), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9986] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(1020), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(397), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10008] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
    ACTIONS(1022), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(294), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10030] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    ACTIONS(1010), 1,
      anon_sym_SQUOTE,
    ACTIONS(1024), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(353), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10052] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1026), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1028), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10070] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1030), 1,
      anon_sym_DQUOTE,
    ACTIONS(1032), 1,
      anon_sym_SQUOTE,
    ACTIONS(1034), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(287), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10092] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1036), 1,
      anon_sym_DQUOTE,
    ACTIONS(1038), 1,
      anon_sym_SQUOTE,
    ACTIONS(1040), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(215), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10114] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1042), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [10130] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(518), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10148] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1036), 1,
      anon_sym_DQUOTE,
    ACTIONS(1038), 1,
      anon_sym_SQUOTE,
    ACTIONS(1044), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(217), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10170] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(520), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(522), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10188] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1046), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10206] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(1050), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(376), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10228] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10246] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10264] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(490), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10282] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      anon_sym_SQUOTE,
    ACTIONS(1056), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(205), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10304] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1058), 1,
      anon_sym_DQUOTE,
    ACTIONS(1060), 1,
      anon_sym_SQUOTE,
    ACTIONS(1062), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(73), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10326] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
    ACTIONS(1066), 1,
      anon_sym_SQUOTE,
    ACTIONS(1068), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10348] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(588), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10366] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      anon_sym_SQUOTE,
    ACTIONS(1070), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(206), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10388] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1072), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1074), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [10406] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1076), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1078), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10424] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_SQUOTE,
    ACTIONS(1080), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(301), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10446] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(875), 1,
      anon_sym_DQUOTE,
    ACTIONS(877), 1,
      anon_sym_SQUOTE,
    ACTIONS(1082), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(431), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10468] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10486] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1086), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10504] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1088), 1,
      anon_sym_PLUS,
    ACTIONS(1093), 1,
      anon_sym_DASH_DASHplatform,
    STATE(337), 1,
      aux_sym_from_command_repeat1,
    STATE(392), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1090), 2,
      sym_allow_privileged,
      sym_pass_args,
  [10528] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1030), 1,
      anon_sym_DQUOTE,
    ACTIONS(1032), 1,
      anon_sym_SQUOTE,
    ACTIONS(1096), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(276), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10550] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1098), 1,
      anon_sym_DQUOTE,
    ACTIONS(1100), 1,
      anon_sym_SQUOTE,
    ACTIONS(1102), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(150), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10572] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      anon_sym_SQUOTE,
    ACTIONS(1104), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(204), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10594] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1106), 1,
      sym_path,
    ACTIONS(1108), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1110), 1,
      sym_keep_ts,
    STATE(354), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(449), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10617] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1112), 1,
      sym_path,
    ACTIONS(1114), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1117), 1,
      sym_keep_ts,
    STATE(342), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(449), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10640] = 4,
    ACTIONS(1120), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1122), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10657] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(669), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(671), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [10674] = 4,
    ACTIONS(1124), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1126), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10691] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      aux_sym_shell_fragment_token3,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(375), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [10712] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1128), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1130), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [10729] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1132), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1134), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [10746] = 4,
    ACTIONS(1136), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1138), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10763] = 4,
    ACTIONS(1140), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1142), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10780] = 4,
    ACTIONS(1144), 1,
      anon_sym_EQ,
    STATE(329), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1146), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10797] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      aux_sym_shell_fragment_token3,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(416), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [10818] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1148), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1150), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [10835] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1108), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1110), 1,
      sym_keep_ts,
    ACTIONS(1152), 1,
      sym_path,
    STATE(342), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(449), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10858] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1154), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1156), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [10875] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [10892] = 4,
    ACTIONS(1158), 1,
      anon_sym_EQ,
    STATE(335), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1160), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10909] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      aux_sym_shell_fragment_token3,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(396), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [10930] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(394), 1,
      aux_sym_shell_fragment_token3,
    STATE(269), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(407), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(396), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [10951] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(301), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [10968] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1108), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1110), 1,
      sym_keep_ts,
    ACTIONS(1162), 1,
      sym_path,
    STATE(362), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(449), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [10991] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1108), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1110), 1,
      sym_keep_ts,
    ACTIONS(1164), 1,
      sym_path,
    STATE(342), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(449), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11014] = 3,
    STATE(113), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1166), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11028] = 3,
    STATE(306), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1168), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11042] = 3,
    STATE(181), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1170), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11056] = 3,
    STATE(182), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1172), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11070] = 3,
    STATE(187), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1174), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11084] = 3,
    STATE(190), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1176), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11098] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(236), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [11116] = 3,
    STATE(200), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1180), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11130] = 3,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1182), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11144] = 3,
    STATE(201), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1184), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11158] = 3,
    STATE(199), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1186), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11172] = 3,
    STATE(193), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1188), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11186] = 3,
    STATE(107), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1190), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11200] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1192), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11214] = 3,
    STATE(189), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1194), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11228] = 3,
    STATE(188), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1196), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11242] = 3,
    STATE(186), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1198), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11256] = 3,
    STATE(185), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1200), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11270] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(236), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [11288] = 3,
    STATE(104), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1204), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11302] = 3,
    STATE(103), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1206), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11316] = 3,
    STATE(173), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1208), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11330] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1210), 1,
      sym_identifier,
    STATE(403), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1212), 2,
      sym_global,
      sym_required,
  [11348] = 3,
    STATE(158), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1214), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11362] = 3,
    STATE(159), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1216), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11376] = 3,
    STATE(114), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1218), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11390] = 3,
    STATE(179), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1220), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11404] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(381), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [11422] = 3,
    STATE(177), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1224), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11436] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1226), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [11450] = 3,
    STATE(162), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1228), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11464] = 3,
    STATE(336), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1230), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11478] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1232), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11492] = 3,
    STATE(167), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1234), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11506] = 3,
    STATE(171), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1236), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11520] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1238), 1,
      anon_sym_END,
    ACTIONS(1240), 1,
      anon_sym_ELSEIF,
    ACTIONS(1243), 1,
      anon_sym_ELSE,
    STATE(398), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11540] = 3,
    STATE(160), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1245), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11554] = 3,
    STATE(274), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1247), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11568] = 3,
    STATE(117), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1249), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11582] = 3,
    STATE(120), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1251), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11596] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1253), 1,
      sym_identifier,
    STATE(403), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1255), 2,
      sym_global,
      sym_required,
  [11614] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1258), 1,
      sym_identifier,
    STATE(412), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1212), 2,
      sym_global,
      sym_required,
  [11632] = 3,
    STATE(164), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1260), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11646] = 3,
    STATE(321), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1262), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11660] = 3,
    STATE(122), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1264), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11674] = 3,
    STATE(102), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1266), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11688] = 3,
    STATE(320), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1268), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11702] = 3,
    STATE(161), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1270), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11716] = 3,
    STATE(106), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1272), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11730] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1274), 1,
      sym_identifier,
    STATE(403), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1212), 2,
      sym_global,
      sym_required,
  [11748] = 3,
    STATE(318), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1276), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11762] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1278), 1,
      sym_identifier,
    STATE(385), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1212), 2,
      sym_global,
      sym_required,
  [11780] = 3,
    STATE(169), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1280), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11794] = 3,
    STATE(172), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1282), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11808] = 3,
    STATE(2), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1284), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11822] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1286), 1,
      anon_sym_END,
    ACTIONS(1288), 1,
      anon_sym_ELSEIF,
    ACTIONS(1290), 1,
      anon_sym_ELSE,
    STATE(398), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11842] = 3,
    STATE(184), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1292), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11856] = 3,
    STATE(5), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1294), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11870] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1288), 1,
      anon_sym_ELSEIF,
    ACTIONS(1296), 1,
      anon_sym_END,
    ACTIONS(1298), 1,
      anon_sym_ELSE,
    STATE(398), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11890] = 3,
    STATE(323), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1300), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11904] = 3,
    STATE(195), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1302), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11918] = 3,
    STATE(325), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1304), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11932] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1288), 1,
      anon_sym_ELSEIF,
    ACTIONS(1306), 1,
      anon_sym_END,
    ACTIONS(1308), 1,
      anon_sym_ELSE,
    STATE(421), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11952] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1310), 1,
      sym_identifier,
    STATE(432), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1212), 2,
      sym_global,
      sym_required,
  [11970] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1288), 1,
      anon_sym_ELSEIF,
    ACTIONS(1312), 1,
      anon_sym_END,
    ACTIONS(1314), 1,
      anon_sym_ELSE,
    STATE(418), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11990] = 3,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1316), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12004] = 3,
    STATE(132), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1318), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12018] = 3,
    STATE(137), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1320), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12032] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1322), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12046] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1324), 1,
      sym_identifier,
    STATE(403), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1212), 2,
      sym_global,
      sym_required,
  [12064] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1326), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12078] = 3,
    STATE(124), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1328), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12092] = 3,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1330), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12106] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1332), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12120] = 3,
    STATE(166), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1334), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12134] = 3,
    STATE(128), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1336), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12148] = 3,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1338), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12162] = 3,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1340), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12176] = 3,
    STATE(139), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1342), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12190] = 3,
    STATE(141), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1344), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12204] = 3,
    STATE(129), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1346), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12218] = 3,
    STATE(135), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1348), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12232] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1350), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1352), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [12247] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1354), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [12262] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(351), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12273] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(299), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12284] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1356), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1358), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [12299] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1360), 1,
      sym_version_major_minor,
    ACTIONS(1362), 1,
      sym_feature_flag,
    STATE(450), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12316] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1365), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1367), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [12331] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1371), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1369), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [12346] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1375), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1373), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [12361] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1377), 1,
      sym_version_major_minor,
    ACTIONS(1379), 1,
      sym_feature_flag,
    STATE(450), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12378] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1381), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1383), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [12393] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1385), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [12406] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1387), 1,
      anon_sym_PLUS,
    ACTIONS(1389), 1,
      anon_sym_LPAREN,
    STATE(275), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12423] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1391), 1,
      sym_version_major_minor,
    ACTIONS(1393), 1,
      sym_feature_flag,
    STATE(454), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12440] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1395), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1397), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [12455] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(369), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [12470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    STATE(499), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12484] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1399), 1,
      sym_image_name,
    STATE(602), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12498] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      sym_image_name,
    STATE(284), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12512] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(271), 1,
      anon_sym_PLUS,
    STATE(460), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12526] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1403), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12537] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1405), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12548] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1407), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12559] = 2,
    ACTIONS(1409), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12568] = 2,
    ACTIONS(1411), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12577] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1413), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12588] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1415), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12599] = 2,
    ACTIONS(1417), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12608] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1419), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12619] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1421), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12630] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1423), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12641] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1425), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12652] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1427), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12663] = 2,
    ACTIONS(1429), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12672] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1431), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12683] = 2,
    ACTIONS(1433), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12692] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1435), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12703] = 2,
    ACTIONS(1437), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12712] = 2,
    ACTIONS(1439), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12721] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1441), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12732] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1443), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12743] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1445), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12754] = 2,
    ACTIONS(1447), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12763] = 2,
    ACTIONS(1449), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12772] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1451), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12783] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1453), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12794] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1455), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12805] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1457), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12816] = 2,
    ACTIONS(1459), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12825] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1461), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12836] = 2,
    ACTIONS(1463), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12845] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1465), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12856] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1467), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12867] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1469), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12878] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1471), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12889] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1473), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12900] = 2,
    ACTIONS(1475), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [12909] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1477), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12920] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1479), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12931] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1481), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12942] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1483), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12953] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1485), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12964] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1487), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12975] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1489), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12986] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1491), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12997] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1493), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13008] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13019] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1497), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13030] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1499), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13041] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1501), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13052] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1503), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13063] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1505), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13074] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1507), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13085] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1509), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13096] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1511), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13107] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1513), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13118] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1515), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13129] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1517), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13140] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1519), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13151] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1521), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13162] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1523), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13173] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1525), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13184] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1527), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13195] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1529), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13206] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1531), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13217] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1533), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13228] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1535), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13239] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1537), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13250] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1539), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13261] = 2,
    ACTIONS(1541), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13270] = 2,
    ACTIONS(1543), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13279] = 2,
    ACTIONS(1545), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13288] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1547), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13299] = 2,
    ACTIONS(1549), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13308] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1551), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13319] = 2,
    ACTIONS(1553), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13328] = 2,
    ACTIONS(1555), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13337] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1557), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13348] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1559), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13359] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1561), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13370] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1563), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13381] = 2,
    ACTIONS(1565), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13390] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1567), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13401] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1569), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13412] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1571), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13423] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1573), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13434] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1575), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13445] = 2,
    ACTIONS(1577), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13454] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1579), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13465] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1581), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13476] = 2,
    ACTIONS(1583), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13485] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1585), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13496] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1587), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13507] = 2,
    ACTIONS(1589), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13516] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1591), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13527] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1593), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13538] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1595), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13549] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1597), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13560] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1599), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13571] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1601), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13582] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1603), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13593] = 2,
    ACTIONS(1605), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13602] = 2,
    ACTIONS(1607), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13611] = 2,
    ACTIONS(1609), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13620] = 2,
    ACTIONS(1611), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13629] = 2,
    ACTIONS(1613), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13638] = 2,
    ACTIONS(1615), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13647] = 2,
    ACTIONS(1617), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13656] = 2,
    ACTIONS(1619), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13665] = 2,
    ACTIONS(1621), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13674] = 2,
    ACTIONS(1623), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13683] = 2,
    ACTIONS(1625), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13692] = 2,
    ACTIONS(1627), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13701] = 2,
    ACTIONS(1629), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13710] = 2,
    ACTIONS(1631), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13719] = 2,
    ACTIONS(1633), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13728] = 2,
    ACTIONS(1635), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13737] = 2,
    ACTIONS(1637), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13746] = 2,
    ACTIONS(1639), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13755] = 2,
    ACTIONS(1641), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13764] = 2,
    ACTIONS(1643), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13773] = 2,
    ACTIONS(1645), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13782] = 2,
    ACTIONS(1647), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13791] = 2,
    ACTIONS(1649), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13800] = 2,
    ACTIONS(1651), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13809] = 2,
    ACTIONS(1653), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13818] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1655), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13829] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1657), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13840] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1659), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13851] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1661), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13862] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1663), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13873] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1665), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13884] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1667), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13895] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1669), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13906] = 2,
    ACTIONS(1671), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13915] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1673), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13926] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1675), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13937] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1677), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13948] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1679), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13959] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1681), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13970] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1683), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13981] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1685), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13992] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1687), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14003] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1689), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14014] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1691), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14025] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1693), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14036] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1695), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14047] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1697), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 350,
  [SMALL_STATE(8)] = 416,
  [SMALL_STATE(9)] = 482,
  [SMALL_STATE(10)] = 548,
  [SMALL_STATE(11)] = 614,
  [SMALL_STATE(12)] = 680,
  [SMALL_STATE(13)] = 746,
  [SMALL_STATE(14)] = 812,
  [SMALL_STATE(15)] = 878,
  [SMALL_STATE(16)] = 944,
  [SMALL_STATE(17)] = 1010,
  [SMALL_STATE(18)] = 1076,
  [SMALL_STATE(19)] = 1142,
  [SMALL_STATE(20)] = 1208,
  [SMALL_STATE(21)] = 1274,
  [SMALL_STATE(22)] = 1340,
  [SMALL_STATE(23)] = 1406,
  [SMALL_STATE(24)] = 1472,
  [SMALL_STATE(25)] = 1538,
  [SMALL_STATE(26)] = 1604,
  [SMALL_STATE(27)] = 1670,
  [SMALL_STATE(28)] = 1736,
  [SMALL_STATE(29)] = 1802,
  [SMALL_STATE(30)] = 1868,
  [SMALL_STATE(31)] = 1934,
  [SMALL_STATE(32)] = 2000,
  [SMALL_STATE(33)] = 2050,
  [SMALL_STATE(34)] = 2090,
  [SMALL_STATE(35)] = 2127,
  [SMALL_STATE(36)] = 2174,
  [SMALL_STATE(37)] = 2222,
  [SMALL_STATE(38)] = 2256,
  [SMALL_STATE(39)] = 2290,
  [SMALL_STATE(40)] = 2338,
  [SMALL_STATE(41)] = 2391,
  [SMALL_STATE(42)] = 2444,
  [SMALL_STATE(43)] = 2497,
  [SMALL_STATE(44)] = 2550,
  [SMALL_STATE(45)] = 2595,
  [SMALL_STATE(46)] = 2640,
  [SMALL_STATE(47)] = 2681,
  [SMALL_STATE(48)] = 2716,
  [SMALL_STATE(49)] = 2747,
  [SMALL_STATE(50)] = 2778,
  [SMALL_STATE(51)] = 2813,
  [SMALL_STATE(52)] = 2848,
  [SMALL_STATE(53)] = 2887,
  [SMALL_STATE(54)] = 2922,
  [SMALL_STATE(55)] = 2957,
  [SMALL_STATE(56)] = 2992,
  [SMALL_STATE(57)] = 3023,
  [SMALL_STATE(58)] = 3058,
  [SMALL_STATE(59)] = 3093,
  [SMALL_STATE(60)] = 3124,
  [SMALL_STATE(61)] = 3163,
  [SMALL_STATE(62)] = 3198,
  [SMALL_STATE(63)] = 3230,
  [SMALL_STATE(64)] = 3264,
  [SMALL_STATE(65)] = 3292,
  [SMALL_STATE(66)] = 3326,
  [SMALL_STATE(67)] = 3359,
  [SMALL_STATE(68)] = 3388,
  [SMALL_STATE(69)] = 3421,
  [SMALL_STATE(70)] = 3450,
  [SMALL_STATE(71)] = 3479,
  [SMALL_STATE(72)] = 3524,
  [SMALL_STATE(73)] = 3557,
  [SMALL_STATE(74)] = 3586,
  [SMALL_STATE(75)] = 3631,
  [SMALL_STATE(76)] = 3660,
  [SMALL_STATE(77)] = 3693,
  [SMALL_STATE(78)] = 3722,
  [SMALL_STATE(79)] = 3751,
  [SMALL_STATE(80)] = 3784,
  [SMALL_STATE(81)] = 3829,
  [SMALL_STATE(82)] = 3858,
  [SMALL_STATE(83)] = 3887,
  [SMALL_STATE(84)] = 3920,
  [SMALL_STATE(85)] = 3961,
  [SMALL_STATE(86)] = 3994,
  [SMALL_STATE(87)] = 4027,
  [SMALL_STATE(88)] = 4060,
  [SMALL_STATE(89)] = 4089,
  [SMALL_STATE(90)] = 4118,
  [SMALL_STATE(91)] = 4151,
  [SMALL_STATE(92)] = 4184,
  [SMALL_STATE(93)] = 4215,
  [SMALL_STATE(94)] = 4248,
  [SMALL_STATE(95)] = 4277,
  [SMALL_STATE(96)] = 4308,
  [SMALL_STATE(97)] = 4353,
  [SMALL_STATE(98)] = 4382,
  [SMALL_STATE(99)] = 4415,
  [SMALL_STATE(100)] = 4444,
  [SMALL_STATE(101)] = 4476,
  [SMALL_STATE(102)] = 4504,
  [SMALL_STATE(103)] = 4532,
  [SMALL_STATE(104)] = 4560,
  [SMALL_STATE(105)] = 4588,
  [SMALL_STATE(106)] = 4616,
  [SMALL_STATE(107)] = 4644,
  [SMALL_STATE(108)] = 4672,
  [SMALL_STATE(109)] = 4700,
  [SMALL_STATE(110)] = 4728,
  [SMALL_STATE(111)] = 4760,
  [SMALL_STATE(112)] = 4788,
  [SMALL_STATE(113)] = 4816,
  [SMALL_STATE(114)] = 4844,
  [SMALL_STATE(115)] = 4872,
  [SMALL_STATE(116)] = 4904,
  [SMALL_STATE(117)] = 4932,
  [SMALL_STATE(118)] = 4960,
  [SMALL_STATE(119)] = 4988,
  [SMALL_STATE(120)] = 5016,
  [SMALL_STATE(121)] = 5044,
  [SMALL_STATE(122)] = 5072,
  [SMALL_STATE(123)] = 5100,
  [SMALL_STATE(124)] = 5128,
  [SMALL_STATE(125)] = 5156,
  [SMALL_STATE(126)] = 5184,
  [SMALL_STATE(127)] = 5212,
  [SMALL_STATE(128)] = 5240,
  [SMALL_STATE(129)] = 5268,
  [SMALL_STATE(130)] = 5296,
  [SMALL_STATE(131)] = 5324,
  [SMALL_STATE(132)] = 5352,
  [SMALL_STATE(133)] = 5380,
  [SMALL_STATE(134)] = 5410,
  [SMALL_STATE(135)] = 5438,
  [SMALL_STATE(136)] = 5466,
  [SMALL_STATE(137)] = 5498,
  [SMALL_STATE(138)] = 5526,
  [SMALL_STATE(139)] = 5554,
  [SMALL_STATE(140)] = 5582,
  [SMALL_STATE(141)] = 5612,
  [SMALL_STATE(142)] = 5640,
  [SMALL_STATE(143)] = 5668,
  [SMALL_STATE(144)] = 5696,
  [SMALL_STATE(145)] = 5724,
  [SMALL_STATE(146)] = 5756,
  [SMALL_STATE(147)] = 5785,
  [SMALL_STATE(148)] = 5822,
  [SMALL_STATE(149)] = 5849,
  [SMALL_STATE(150)] = 5878,
  [SMALL_STATE(151)] = 5905,
  [SMALL_STATE(152)] = 5932,
  [SMALL_STATE(153)] = 5959,
  [SMALL_STATE(154)] = 5986,
  [SMALL_STATE(155)] = 6013,
  [SMALL_STATE(156)] = 6040,
  [SMALL_STATE(157)] = 6067,
  [SMALL_STATE(158)] = 6096,
  [SMALL_STATE(159)] = 6122,
  [SMALL_STATE(160)] = 6148,
  [SMALL_STATE(161)] = 6174,
  [SMALL_STATE(162)] = 6200,
  [SMALL_STATE(163)] = 6226,
  [SMALL_STATE(164)] = 6252,
  [SMALL_STATE(165)] = 6278,
  [SMALL_STATE(166)] = 6304,
  [SMALL_STATE(167)] = 6330,
  [SMALL_STATE(168)] = 6356,
  [SMALL_STATE(169)] = 6382,
  [SMALL_STATE(170)] = 6408,
  [SMALL_STATE(171)] = 6450,
  [SMALL_STATE(172)] = 6476,
  [SMALL_STATE(173)] = 6502,
  [SMALL_STATE(174)] = 6528,
  [SMALL_STATE(175)] = 6570,
  [SMALL_STATE(176)] = 6596,
  [SMALL_STATE(177)] = 6638,
  [SMALL_STATE(178)] = 6664,
  [SMALL_STATE(179)] = 6690,
  [SMALL_STATE(180)] = 6716,
  [SMALL_STATE(181)] = 6742,
  [SMALL_STATE(182)] = 6768,
  [SMALL_STATE(183)] = 6794,
  [SMALL_STATE(184)] = 6820,
  [SMALL_STATE(185)] = 6846,
  [SMALL_STATE(186)] = 6872,
  [SMALL_STATE(187)] = 6898,
  [SMALL_STATE(188)] = 6924,
  [SMALL_STATE(189)] = 6950,
  [SMALL_STATE(190)] = 6976,
  [SMALL_STATE(191)] = 7002,
  [SMALL_STATE(192)] = 7028,
  [SMALL_STATE(193)] = 7054,
  [SMALL_STATE(194)] = 7080,
  [SMALL_STATE(195)] = 7106,
  [SMALL_STATE(196)] = 7132,
  [SMALL_STATE(197)] = 7158,
  [SMALL_STATE(198)] = 7200,
  [SMALL_STATE(199)] = 7226,
  [SMALL_STATE(200)] = 7252,
  [SMALL_STATE(201)] = 7278,
  [SMALL_STATE(202)] = 7304,
  [SMALL_STATE(203)] = 7329,
  [SMALL_STATE(204)] = 7366,
  [SMALL_STATE(205)] = 7391,
  [SMALL_STATE(206)] = 7416,
  [SMALL_STATE(207)] = 7441,
  [SMALL_STATE(208)] = 7480,
  [SMALL_STATE(209)] = 7517,
  [SMALL_STATE(210)] = 7542,
  [SMALL_STATE(211)] = 7567,
  [SMALL_STATE(212)] = 7604,
  [SMALL_STATE(213)] = 7638,
  [SMALL_STATE(214)] = 7670,
  [SMALL_STATE(215)] = 7702,
  [SMALL_STATE(216)] = 7726,
  [SMALL_STATE(217)] = 7758,
  [SMALL_STATE(218)] = 7782,
  [SMALL_STATE(219)] = 7814,
  [SMALL_STATE(220)] = 7846,
  [SMALL_STATE(221)] = 7870,
  [SMALL_STATE(222)] = 7902,
  [SMALL_STATE(223)] = 7926,
  [SMALL_STATE(224)] = 7950,
  [SMALL_STATE(225)] = 7982,
  [SMALL_STATE(226)] = 8014,
  [SMALL_STATE(227)] = 8048,
  [SMALL_STATE(228)] = 8077,
  [SMALL_STATE(229)] = 8110,
  [SMALL_STATE(230)] = 8143,
  [SMALL_STATE(231)] = 8176,
  [SMALL_STATE(232)] = 8209,
  [SMALL_STATE(233)] = 8242,
  [SMALL_STATE(234)] = 8277,
  [SMALL_STATE(235)] = 8309,
  [SMALL_STATE(236)] = 8341,
  [SMALL_STATE(237)] = 8367,
  [SMALL_STATE(238)] = 8399,
  [SMALL_STATE(239)] = 8431,
  [SMALL_STATE(240)] = 8463,
  [SMALL_STATE(241)] = 8495,
  [SMALL_STATE(242)] = 8527,
  [SMALL_STATE(243)] = 8556,
  [SMALL_STATE(244)] = 8581,
  [SMALL_STATE(245)] = 8606,
  [SMALL_STATE(246)] = 8631,
  [SMALL_STATE(247)] = 8656,
  [SMALL_STATE(248)] = 8677,
  [SMALL_STATE(249)] = 8702,
  [SMALL_STATE(250)] = 8731,
  [SMALL_STATE(251)] = 8751,
  [SMALL_STATE(252)] = 8771,
  [SMALL_STATE(253)] = 8793,
  [SMALL_STATE(254)] = 8813,
  [SMALL_STATE(255)] = 8833,
  [SMALL_STATE(256)] = 8850,
  [SMALL_STATE(257)] = 8877,
  [SMALL_STATE(258)] = 8894,
  [SMALL_STATE(259)] = 8919,
  [SMALL_STATE(260)] = 8938,
  [SMALL_STATE(261)] = 8959,
  [SMALL_STATE(262)] = 8980,
  [SMALL_STATE(263)] = 8999,
  [SMALL_STATE(264)] = 9026,
  [SMALL_STATE(265)] = 9043,
  [SMALL_STATE(266)] = 9060,
  [SMALL_STATE(267)] = 9085,
  [SMALL_STATE(268)] = 9112,
  [SMALL_STATE(269)] = 9139,
  [SMALL_STATE(270)] = 9158,
  [SMALL_STATE(271)] = 9183,
  [SMALL_STATE(272)] = 9208,
  [SMALL_STATE(273)] = 9225,
  [SMALL_STATE(274)] = 9252,
  [SMALL_STATE(275)] = 9273,
  [SMALL_STATE(276)] = 9290,
  [SMALL_STATE(277)] = 9307,
  [SMALL_STATE(278)] = 9322,
  [SMALL_STATE(279)] = 9339,
  [SMALL_STATE(280)] = 9364,
  [SMALL_STATE(281)] = 9389,
  [SMALL_STATE(282)] = 9408,
  [SMALL_STATE(283)] = 9427,
  [SMALL_STATE(284)] = 9442,
  [SMALL_STATE(285)] = 9459,
  [SMALL_STATE(286)] = 9480,
  [SMALL_STATE(287)] = 9507,
  [SMALL_STATE(288)] = 9524,
  [SMALL_STATE(289)] = 9545,
  [SMALL_STATE(290)] = 9566,
  [SMALL_STATE(291)] = 9593,
  [SMALL_STATE(292)] = 9610,
  [SMALL_STATE(293)] = 9631,
  [SMALL_STATE(294)] = 9650,
  [SMALL_STATE(295)] = 9667,
  [SMALL_STATE(296)] = 9684,
  [SMALL_STATE(297)] = 9701,
  [SMALL_STATE(298)] = 9728,
  [SMALL_STATE(299)] = 9749,
  [SMALL_STATE(300)] = 9766,
  [SMALL_STATE(301)] = 9785,
  [SMALL_STATE(302)] = 9802,
  [SMALL_STATE(303)] = 9821,
  [SMALL_STATE(304)] = 9836,
  [SMALL_STATE(305)] = 9858,
  [SMALL_STATE(306)] = 9880,
  [SMALL_STATE(307)] = 9898,
  [SMALL_STATE(308)] = 9920,
  [SMALL_STATE(309)] = 9942,
  [SMALL_STATE(310)] = 9964,
  [SMALL_STATE(311)] = 9986,
  [SMALL_STATE(312)] = 10008,
  [SMALL_STATE(313)] = 10030,
  [SMALL_STATE(314)] = 10052,
  [SMALL_STATE(315)] = 10070,
  [SMALL_STATE(316)] = 10092,
  [SMALL_STATE(317)] = 10114,
  [SMALL_STATE(318)] = 10130,
  [SMALL_STATE(319)] = 10148,
  [SMALL_STATE(320)] = 10170,
  [SMALL_STATE(321)] = 10188,
  [SMALL_STATE(322)] = 10206,
  [SMALL_STATE(323)] = 10228,
  [SMALL_STATE(324)] = 10246,
  [SMALL_STATE(325)] = 10264,
  [SMALL_STATE(326)] = 10282,
  [SMALL_STATE(327)] = 10304,
  [SMALL_STATE(328)] = 10326,
  [SMALL_STATE(329)] = 10348,
  [SMALL_STATE(330)] = 10366,
  [SMALL_STATE(331)] = 10388,
  [SMALL_STATE(332)] = 10406,
  [SMALL_STATE(333)] = 10424,
  [SMALL_STATE(334)] = 10446,
  [SMALL_STATE(335)] = 10468,
  [SMALL_STATE(336)] = 10486,
  [SMALL_STATE(337)] = 10504,
  [SMALL_STATE(338)] = 10528,
  [SMALL_STATE(339)] = 10550,
  [SMALL_STATE(340)] = 10572,
  [SMALL_STATE(341)] = 10594,
  [SMALL_STATE(342)] = 10617,
  [SMALL_STATE(343)] = 10640,
  [SMALL_STATE(344)] = 10657,
  [SMALL_STATE(345)] = 10674,
  [SMALL_STATE(346)] = 10691,
  [SMALL_STATE(347)] = 10712,
  [SMALL_STATE(348)] = 10729,
  [SMALL_STATE(349)] = 10746,
  [SMALL_STATE(350)] = 10763,
  [SMALL_STATE(351)] = 10780,
  [SMALL_STATE(352)] = 10797,
  [SMALL_STATE(353)] = 10818,
  [SMALL_STATE(354)] = 10835,
  [SMALL_STATE(355)] = 10858,
  [SMALL_STATE(356)] = 10875,
  [SMALL_STATE(357)] = 10892,
  [SMALL_STATE(358)] = 10909,
  [SMALL_STATE(359)] = 10930,
  [SMALL_STATE(360)] = 10951,
  [SMALL_STATE(361)] = 10968,
  [SMALL_STATE(362)] = 10991,
  [SMALL_STATE(363)] = 11014,
  [SMALL_STATE(364)] = 11028,
  [SMALL_STATE(365)] = 11042,
  [SMALL_STATE(366)] = 11056,
  [SMALL_STATE(367)] = 11070,
  [SMALL_STATE(368)] = 11084,
  [SMALL_STATE(369)] = 11098,
  [SMALL_STATE(370)] = 11116,
  [SMALL_STATE(371)] = 11130,
  [SMALL_STATE(372)] = 11144,
  [SMALL_STATE(373)] = 11158,
  [SMALL_STATE(374)] = 11172,
  [SMALL_STATE(375)] = 11186,
  [SMALL_STATE(376)] = 11200,
  [SMALL_STATE(377)] = 11214,
  [SMALL_STATE(378)] = 11228,
  [SMALL_STATE(379)] = 11242,
  [SMALL_STATE(380)] = 11256,
  [SMALL_STATE(381)] = 11270,
  [SMALL_STATE(382)] = 11288,
  [SMALL_STATE(383)] = 11302,
  [SMALL_STATE(384)] = 11316,
  [SMALL_STATE(385)] = 11330,
  [SMALL_STATE(386)] = 11348,
  [SMALL_STATE(387)] = 11362,
  [SMALL_STATE(388)] = 11376,
  [SMALL_STATE(389)] = 11390,
  [SMALL_STATE(390)] = 11404,
  [SMALL_STATE(391)] = 11422,
  [SMALL_STATE(392)] = 11436,
  [SMALL_STATE(393)] = 11450,
  [SMALL_STATE(394)] = 11464,
  [SMALL_STATE(395)] = 11478,
  [SMALL_STATE(396)] = 11492,
  [SMALL_STATE(397)] = 11506,
  [SMALL_STATE(398)] = 11520,
  [SMALL_STATE(399)] = 11540,
  [SMALL_STATE(400)] = 11554,
  [SMALL_STATE(401)] = 11568,
  [SMALL_STATE(402)] = 11582,
  [SMALL_STATE(403)] = 11596,
  [SMALL_STATE(404)] = 11614,
  [SMALL_STATE(405)] = 11632,
  [SMALL_STATE(406)] = 11646,
  [SMALL_STATE(407)] = 11660,
  [SMALL_STATE(408)] = 11674,
  [SMALL_STATE(409)] = 11688,
  [SMALL_STATE(410)] = 11702,
  [SMALL_STATE(411)] = 11716,
  [SMALL_STATE(412)] = 11730,
  [SMALL_STATE(413)] = 11748,
  [SMALL_STATE(414)] = 11762,
  [SMALL_STATE(415)] = 11780,
  [SMALL_STATE(416)] = 11794,
  [SMALL_STATE(417)] = 11808,
  [SMALL_STATE(418)] = 11822,
  [SMALL_STATE(419)] = 11842,
  [SMALL_STATE(420)] = 11856,
  [SMALL_STATE(421)] = 11870,
  [SMALL_STATE(422)] = 11890,
  [SMALL_STATE(423)] = 11904,
  [SMALL_STATE(424)] = 11918,
  [SMALL_STATE(425)] = 11932,
  [SMALL_STATE(426)] = 11952,
  [SMALL_STATE(427)] = 11970,
  [SMALL_STATE(428)] = 11990,
  [SMALL_STATE(429)] = 12004,
  [SMALL_STATE(430)] = 12018,
  [SMALL_STATE(431)] = 12032,
  [SMALL_STATE(432)] = 12046,
  [SMALL_STATE(433)] = 12064,
  [SMALL_STATE(434)] = 12078,
  [SMALL_STATE(435)] = 12092,
  [SMALL_STATE(436)] = 12106,
  [SMALL_STATE(437)] = 12120,
  [SMALL_STATE(438)] = 12134,
  [SMALL_STATE(439)] = 12148,
  [SMALL_STATE(440)] = 12162,
  [SMALL_STATE(441)] = 12176,
  [SMALL_STATE(442)] = 12190,
  [SMALL_STATE(443)] = 12204,
  [SMALL_STATE(444)] = 12218,
  [SMALL_STATE(445)] = 12232,
  [SMALL_STATE(446)] = 12247,
  [SMALL_STATE(447)] = 12262,
  [SMALL_STATE(448)] = 12273,
  [SMALL_STATE(449)] = 12284,
  [SMALL_STATE(450)] = 12299,
  [SMALL_STATE(451)] = 12316,
  [SMALL_STATE(452)] = 12331,
  [SMALL_STATE(453)] = 12346,
  [SMALL_STATE(454)] = 12361,
  [SMALL_STATE(455)] = 12378,
  [SMALL_STATE(456)] = 12393,
  [SMALL_STATE(457)] = 12406,
  [SMALL_STATE(458)] = 12423,
  [SMALL_STATE(459)] = 12440,
  [SMALL_STATE(460)] = 12455,
  [SMALL_STATE(461)] = 12470,
  [SMALL_STATE(462)] = 12484,
  [SMALL_STATE(463)] = 12498,
  [SMALL_STATE(464)] = 12512,
  [SMALL_STATE(465)] = 12526,
  [SMALL_STATE(466)] = 12537,
  [SMALL_STATE(467)] = 12548,
  [SMALL_STATE(468)] = 12559,
  [SMALL_STATE(469)] = 12568,
  [SMALL_STATE(470)] = 12577,
  [SMALL_STATE(471)] = 12588,
  [SMALL_STATE(472)] = 12599,
  [SMALL_STATE(473)] = 12608,
  [SMALL_STATE(474)] = 12619,
  [SMALL_STATE(475)] = 12630,
  [SMALL_STATE(476)] = 12641,
  [SMALL_STATE(477)] = 12652,
  [SMALL_STATE(478)] = 12663,
  [SMALL_STATE(479)] = 12672,
  [SMALL_STATE(480)] = 12683,
  [SMALL_STATE(481)] = 12692,
  [SMALL_STATE(482)] = 12703,
  [SMALL_STATE(483)] = 12712,
  [SMALL_STATE(484)] = 12721,
  [SMALL_STATE(485)] = 12732,
  [SMALL_STATE(486)] = 12743,
  [SMALL_STATE(487)] = 12754,
  [SMALL_STATE(488)] = 12763,
  [SMALL_STATE(489)] = 12772,
  [SMALL_STATE(490)] = 12783,
  [SMALL_STATE(491)] = 12794,
  [SMALL_STATE(492)] = 12805,
  [SMALL_STATE(493)] = 12816,
  [SMALL_STATE(494)] = 12825,
  [SMALL_STATE(495)] = 12836,
  [SMALL_STATE(496)] = 12845,
  [SMALL_STATE(497)] = 12856,
  [SMALL_STATE(498)] = 12867,
  [SMALL_STATE(499)] = 12878,
  [SMALL_STATE(500)] = 12889,
  [SMALL_STATE(501)] = 12900,
  [SMALL_STATE(502)] = 12909,
  [SMALL_STATE(503)] = 12920,
  [SMALL_STATE(504)] = 12931,
  [SMALL_STATE(505)] = 12942,
  [SMALL_STATE(506)] = 12953,
  [SMALL_STATE(507)] = 12964,
  [SMALL_STATE(508)] = 12975,
  [SMALL_STATE(509)] = 12986,
  [SMALL_STATE(510)] = 12997,
  [SMALL_STATE(511)] = 13008,
  [SMALL_STATE(512)] = 13019,
  [SMALL_STATE(513)] = 13030,
  [SMALL_STATE(514)] = 13041,
  [SMALL_STATE(515)] = 13052,
  [SMALL_STATE(516)] = 13063,
  [SMALL_STATE(517)] = 13074,
  [SMALL_STATE(518)] = 13085,
  [SMALL_STATE(519)] = 13096,
  [SMALL_STATE(520)] = 13107,
  [SMALL_STATE(521)] = 13118,
  [SMALL_STATE(522)] = 13129,
  [SMALL_STATE(523)] = 13140,
  [SMALL_STATE(524)] = 13151,
  [SMALL_STATE(525)] = 13162,
  [SMALL_STATE(526)] = 13173,
  [SMALL_STATE(527)] = 13184,
  [SMALL_STATE(528)] = 13195,
  [SMALL_STATE(529)] = 13206,
  [SMALL_STATE(530)] = 13217,
  [SMALL_STATE(531)] = 13228,
  [SMALL_STATE(532)] = 13239,
  [SMALL_STATE(533)] = 13250,
  [SMALL_STATE(534)] = 13261,
  [SMALL_STATE(535)] = 13270,
  [SMALL_STATE(536)] = 13279,
  [SMALL_STATE(537)] = 13288,
  [SMALL_STATE(538)] = 13299,
  [SMALL_STATE(539)] = 13308,
  [SMALL_STATE(540)] = 13319,
  [SMALL_STATE(541)] = 13328,
  [SMALL_STATE(542)] = 13337,
  [SMALL_STATE(543)] = 13348,
  [SMALL_STATE(544)] = 13359,
  [SMALL_STATE(545)] = 13370,
  [SMALL_STATE(546)] = 13381,
  [SMALL_STATE(547)] = 13390,
  [SMALL_STATE(548)] = 13401,
  [SMALL_STATE(549)] = 13412,
  [SMALL_STATE(550)] = 13423,
  [SMALL_STATE(551)] = 13434,
  [SMALL_STATE(552)] = 13445,
  [SMALL_STATE(553)] = 13454,
  [SMALL_STATE(554)] = 13465,
  [SMALL_STATE(555)] = 13476,
  [SMALL_STATE(556)] = 13485,
  [SMALL_STATE(557)] = 13496,
  [SMALL_STATE(558)] = 13507,
  [SMALL_STATE(559)] = 13516,
  [SMALL_STATE(560)] = 13527,
  [SMALL_STATE(561)] = 13538,
  [SMALL_STATE(562)] = 13549,
  [SMALL_STATE(563)] = 13560,
  [SMALL_STATE(564)] = 13571,
  [SMALL_STATE(565)] = 13582,
  [SMALL_STATE(566)] = 13593,
  [SMALL_STATE(567)] = 13602,
  [SMALL_STATE(568)] = 13611,
  [SMALL_STATE(569)] = 13620,
  [SMALL_STATE(570)] = 13629,
  [SMALL_STATE(571)] = 13638,
  [SMALL_STATE(572)] = 13647,
  [SMALL_STATE(573)] = 13656,
  [SMALL_STATE(574)] = 13665,
  [SMALL_STATE(575)] = 13674,
  [SMALL_STATE(576)] = 13683,
  [SMALL_STATE(577)] = 13692,
  [SMALL_STATE(578)] = 13701,
  [SMALL_STATE(579)] = 13710,
  [SMALL_STATE(580)] = 13719,
  [SMALL_STATE(581)] = 13728,
  [SMALL_STATE(582)] = 13737,
  [SMALL_STATE(583)] = 13746,
  [SMALL_STATE(584)] = 13755,
  [SMALL_STATE(585)] = 13764,
  [SMALL_STATE(586)] = 13773,
  [SMALL_STATE(587)] = 13782,
  [SMALL_STATE(588)] = 13791,
  [SMALL_STATE(589)] = 13800,
  [SMALL_STATE(590)] = 13809,
  [SMALL_STATE(591)] = 13818,
  [SMALL_STATE(592)] = 13829,
  [SMALL_STATE(593)] = 13840,
  [SMALL_STATE(594)] = 13851,
  [SMALL_STATE(595)] = 13862,
  [SMALL_STATE(596)] = 13873,
  [SMALL_STATE(597)] = 13884,
  [SMALL_STATE(598)] = 13895,
  [SMALL_STATE(599)] = 13906,
  [SMALL_STATE(600)] = 13915,
  [SMALL_STATE(601)] = 13926,
  [SMALL_STATE(602)] = 13937,
  [SMALL_STATE(603)] = 13948,
  [SMALL_STATE(604)] = 13959,
  [SMALL_STATE(605)] = 13970,
  [SMALL_STATE(606)] = 13981,
  [SMALL_STATE(607)] = 13992,
  [SMALL_STATE(608)] = 14003,
  [SMALL_STATE(609)] = 14014,
  [SMALL_STATE(610)] = 14025,
  [SMALL_STATE(611)] = 14036,
  [SMALL_STATE(612)] = 14047,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 35),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(404),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(208),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(231),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(240),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(606),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(235),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(607),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(71),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(288),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(32),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(608),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(174),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 35),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 35),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(289),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(426),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(211),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(43),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(228),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(238),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(539),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(239),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(466),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(74),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(298),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(39),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(537),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(197),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(546),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(56),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(58),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(570),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(99),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(494),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(478),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(88),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(473),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(210),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(495),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(493),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(599),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(79),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(91),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 39),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 39),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 52),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 52),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 31),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 31),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 42),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 42),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 43),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 43),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 30),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 30),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 44),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 44),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 45),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 45),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 40),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 40),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 37),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 37),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 48),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 48),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 49),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 49),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 50),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 50),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 54),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 54),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 54),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 54),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 53),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 53),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 52),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 52),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(223),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(540),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(541),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(299),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(472),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(469),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(567),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(468),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(538),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(414),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [725] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(612),
  [728] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(458),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(605),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [770] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(303),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(571),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(572),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(488),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(264),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(501),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(487),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(564),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(483),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(482),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(480),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(534),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(488),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(317),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(501),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(259),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(331),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 51),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(446),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(601),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(461),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 55),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 29),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(392),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(599),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(552),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(449),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 47),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 47),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [1154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34), SHIFT_REPEAT(233),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(456),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [1300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(450),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 32),
  [1371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 32),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1681] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
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
