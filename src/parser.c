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
#define STATE_COUNT 625
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
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
  anon_sym_WAIT = 26,
  anon_sym_WITHDOCKER = 27,
  sym_expr = 28,
  sym_identifier = 29,
  anon_sym_COLON2 = 30,
  anon_sym_AT = 31,
  sym_image_name = 32,
  sym_image_tag = 33,
  sym_image_digest = 34,
  sym_immediate_identifier = 35,
  sym_path = 36,
  aux_sym_shell_fragment_token1 = 37,
  aux_sym_shell_fragment_token2 = 38,
  aux_sym_shell_fragment_token3 = 39,
  anon_sym_PLUS = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  sym_version_major_minor = 43,
  sym_allow_privileged = 44,
  anon_sym_DASH_DASHbranch = 45,
  aux_sym_branch_token1 = 46,
  anon_sym_DASH_DASH2 = 47,
  anon_sym_DASH_DASHcache_DASHfrom = 48,
  sym_cache_hint = 49,
  anon_sym_DASH_DASHchmod = 50,
  anon_sym_DASH_DASHchown = 51,
  anon_sym_DASH_DASHcompose = 52,
  sym_dir = 53,
  anon_sym_DASH_DASHbuild_DASHarg = 54,
  anon_sym_DASHf = 55,
  anon_sym_DASH_DASHtarget = 56,
  sym_entrypoint = 57,
  sym_feature_flag = 58,
  sym_force = 59,
  sym_global = 60,
  sym_if_exists = 61,
  sym_keep_own = 62,
  sym_keep_ts = 63,
  anon_sym_DASH_DASHload = 64,
  anon_sym_DASH_DASHmount = 65,
  sym_network_none = 66,
  sym_no_cache = 67,
  sym_pass_args = 68,
  anon_sym_DASH_DASHplatform = 69,
  sym_privileged = 70,
  anon_sym_DASH_DASHpull = 71,
  sym_push = 72,
  sym_required = 73,
  anon_sym_DASH_DASHsecret = 74,
  anon_sym_DASH_DASHsep = 75,
  anon_sym_DASH_DASHservice = 76,
  sym_ssh = 77,
  sym_symlink_no_follow = 78,
  anon_sym_DQUOTE = 79,
  aux_sym_double_quoted_string_token1 = 80,
  anon_sym_SQUOTE = 81,
  aux_sym_single_quoted_string_token1 = 82,
  sym_unquoted_string = 83,
  sym_line_continuation = 84,
  sym_comment = 85,
  sym_line_continuation_comment = 86,
  anon_sym_LF = 87,
  anon_sym_CRn = 88,
  anon_sym_FF = 89,
  sym__indent = 90,
  sym__dedent = 91,
  sym_source_file = 92,
  sym_arg_command = 93,
  sym_from_command = 94,
  sym_project_command = 95,
  sym_target = 96,
  sym_version_command = 97,
  sym_copy_command = 98,
  sym_for_command = 99,
  sym_from_dockerfile_command = 100,
  sym_git_clone_command = 101,
  sym_if_command = 102,
  sym_let_command = 103,
  sym_run_command = 104,
  sym_save_artifact_command = 105,
  sym_save_image_command = 106,
  sym_set_command = 107,
  sym_wait_command = 108,
  sym_with_docker_command = 109,
  aux_sym__target_block = 110,
  sym__conditional_block = 111,
  sym_else_if_block = 112,
  sym_else_block = 113,
  sym_image_spec = 114,
  sym_shell_fragment = 115,
  sym_target_ref = 116,
  sym_target_artifact = 117,
  sym_target_artifact_build_args = 118,
  sym_branch = 119,
  sym_build_arg = 120,
  sym_cache_from = 121,
  sym_chmod = 122,
  sym_chown = 123,
  sym_compose = 124,
  sym_docker_build_arg = 125,
  sym_docker_file = 126,
  sym_docker_target = 127,
  sym_load = 128,
  sym_mount = 129,
  sym_platform = 130,
  sym_pull = 131,
  sym_secret = 132,
  sym_sep = 133,
  sym_service = 134,
  sym__string = 135,
  sym_double_quoted_string = 136,
  sym_single_quoted_string = 137,
  sym__eol = 138,
  aux_sym_source_file_repeat1 = 139,
  aux_sym_arg_command_repeat1 = 140,
  aux_sym_build_command_repeat2 = 141,
  aux_sym_from_command_repeat1 = 142,
  aux_sym_version_command_repeat1 = 143,
  aux_sym_copy_command_repeat1 = 144,
  aux_sym_copy_command_repeat2 = 145,
  aux_sym_for_command_repeat1 = 146,
  aux_sym_for_command_repeat2 = 147,
  aux_sym_from_dockerfile_command_repeat1 = 148,
  aux_sym_git_clone_command_repeat1 = 149,
  aux_sym_if_command_repeat1 = 150,
  aux_sym_run_command_repeat1 = 151,
  aux_sym_save_artifact_command_repeat1 = 152,
  aux_sym_save_image_command_repeat1 = 153,
  aux_sym_save_image_command_repeat2 = 154,
  aux_sym_with_docker_command_repeat1 = 155,
  aux_sym__conditional_block_repeat1 = 156,
  aux_sym_shell_fragment_repeat1 = 157,
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
  [anon_sym_WAIT] = "WAIT",
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
  [sym_wait_command] = "wait_command",
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
  [anon_sym_WAIT] = anon_sym_WAIT,
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
  [sym_wait_command] = sym_wait_command,
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
  [anon_sym_WAIT] = {
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
  [sym_wait_command] = {
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
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 3,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 10,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 9,
  [27] = 27,
  [28] = 11,
  [29] = 16,
  [30] = 30,
  [31] = 31,
  [32] = 20,
  [33] = 30,
  [34] = 25,
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 37,
  [42] = 42,
  [43] = 37,
  [44] = 44,
  [45] = 39,
  [46] = 39,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 44,
  [60] = 60,
  [61] = 44,
  [62] = 62,
  [63] = 36,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 38,
  [68] = 68,
  [69] = 69,
  [70] = 51,
  [71] = 53,
  [72] = 52,
  [73] = 56,
  [74] = 36,
  [75] = 40,
  [76] = 57,
  [77] = 64,
  [78] = 42,
  [79] = 60,
  [80] = 62,
  [81] = 58,
  [82] = 55,
  [83] = 83,
  [84] = 58,
  [85] = 36,
  [86] = 55,
  [87] = 58,
  [88] = 55,
  [89] = 65,
  [90] = 54,
  [91] = 53,
  [92] = 92,
  [93] = 57,
  [94] = 54,
  [95] = 65,
  [96] = 96,
  [97] = 64,
  [98] = 98,
  [99] = 99,
  [100] = 38,
  [101] = 69,
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
  [116] = 68,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 68,
  [121] = 114,
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
  [136] = 136,
  [137] = 66,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 36,
  [143] = 38,
  [144] = 144,
  [145] = 145,
  [146] = 69,
  [147] = 147,
  [148] = 148,
  [149] = 144,
  [150] = 150,
  [151] = 151,
  [152] = 38,
  [153] = 42,
  [154] = 40,
  [155] = 98,
  [156] = 83,
  [157] = 58,
  [158] = 55,
  [159] = 96,
  [160] = 40,
  [161] = 92,
  [162] = 42,
  [163] = 151,
  [164] = 123,
  [165] = 135,
  [166] = 140,
  [167] = 134,
  [168] = 132,
  [169] = 103,
  [170] = 130,
  [171] = 128,
  [172] = 172,
  [173] = 127,
  [174] = 147,
  [175] = 126,
  [176] = 150,
  [177] = 145,
  [178] = 104,
  [179] = 125,
  [180] = 110,
  [181] = 136,
  [182] = 131,
  [183] = 108,
  [184] = 124,
  [185] = 106,
  [186] = 102,
  [187] = 138,
  [188] = 119,
  [189] = 42,
  [190] = 105,
  [191] = 122,
  [192] = 141,
  [193] = 117,
  [194] = 107,
  [195] = 118,
  [196] = 115,
  [197] = 109,
  [198] = 113,
  [199] = 148,
  [200] = 112,
  [201] = 139,
  [202] = 133,
  [203] = 40,
  [204] = 129,
  [205] = 111,
  [206] = 206,
  [207] = 207,
  [208] = 206,
  [209] = 207,
  [210] = 210,
  [211] = 211,
  [212] = 58,
  [213] = 210,
  [214] = 210,
  [215] = 55,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 58,
  [222] = 222,
  [223] = 223,
  [224] = 222,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 55,
  [229] = 227,
  [230] = 230,
  [231] = 231,
  [232] = 225,
  [233] = 223,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 236,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 244,
  [246] = 56,
  [247] = 243,
  [248] = 242,
  [249] = 249,
  [250] = 60,
  [251] = 52,
  [252] = 36,
  [253] = 62,
  [254] = 66,
  [255] = 255,
  [256] = 51,
  [257] = 257,
  [258] = 38,
  [259] = 58,
  [260] = 96,
  [261] = 83,
  [262] = 55,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 55,
  [271] = 271,
  [272] = 272,
  [273] = 58,
  [274] = 274,
  [275] = 271,
  [276] = 274,
  [277] = 263,
  [278] = 278,
  [279] = 279,
  [280] = 218,
  [281] = 281,
  [282] = 269,
  [283] = 283,
  [284] = 284,
  [285] = 283,
  [286] = 230,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 40,
  [292] = 292,
  [293] = 284,
  [294] = 284,
  [295] = 289,
  [296] = 296,
  [297] = 42,
  [298] = 231,
  [299] = 299,
  [300] = 283,
  [301] = 271,
  [302] = 267,
  [303] = 55,
  [304] = 304,
  [305] = 55,
  [306] = 289,
  [307] = 274,
  [308] = 58,
  [309] = 58,
  [310] = 83,
  [311] = 278,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 312,
  [321] = 321,
  [322] = 322,
  [323] = 319,
  [324] = 324,
  [325] = 319,
  [326] = 139,
  [327] = 102,
  [328] = 129,
  [329] = 329,
  [330] = 315,
  [331] = 331,
  [332] = 118,
  [333] = 104,
  [334] = 318,
  [335] = 335,
  [336] = 318,
  [337] = 133,
  [338] = 321,
  [339] = 324,
  [340] = 313,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 148,
  [348] = 321,
  [349] = 349,
  [350] = 350,
  [351] = 58,
  [352] = 218,
  [353] = 349,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 350,
  [358] = 358,
  [359] = 356,
  [360] = 360,
  [361] = 55,
  [362] = 362,
  [363] = 356,
  [364] = 364,
  [365] = 350,
  [366] = 366,
  [367] = 362,
  [368] = 360,
  [369] = 369,
  [370] = 358,
  [371] = 371,
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
  [386] = 373,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 374,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 384,
  [402] = 402,
  [403] = 403,
  [404] = 390,
  [405] = 391,
  [406] = 406,
  [407] = 392,
  [408] = 408,
  [409] = 375,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 393,
  [414] = 414,
  [415] = 376,
  [416] = 416,
  [417] = 372,
  [418] = 408,
  [419] = 419,
  [420] = 420,
  [421] = 376,
  [422] = 371,
  [423] = 375,
  [424] = 399,
  [425] = 419,
  [426] = 426,
  [427] = 427,
  [428] = 420,
  [429] = 429,
  [430] = 430,
  [431] = 427,
  [432] = 429,
  [433] = 374,
  [434] = 373,
  [435] = 435,
  [436] = 435,
  [437] = 400,
  [438] = 414,
  [439] = 439,
  [440] = 400,
  [441] = 441,
  [442] = 397,
  [443] = 395,
  [444] = 394,
  [445] = 414,
  [446] = 388,
  [447] = 387,
  [448] = 383,
  [449] = 382,
  [450] = 381,
  [451] = 380,
  [452] = 441,
  [453] = 379,
  [454] = 385,
  [455] = 439,
  [456] = 378,
  [457] = 457,
  [458] = 55,
  [459] = 58,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
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
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 480,
  [502] = 481,
  [503] = 503,
  [504] = 483,
  [505] = 505,
  [506] = 485,
  [507] = 486,
  [508] = 487,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 499,
  [513] = 499,
  [514] = 480,
  [515] = 481,
  [516] = 485,
  [517] = 486,
  [518] = 487,
  [519] = 480,
  [520] = 481,
  [521] = 485,
  [522] = 486,
  [523] = 487,
  [524] = 480,
  [525] = 481,
  [526] = 485,
  [527] = 486,
  [528] = 487,
  [529] = 485,
  [530] = 486,
  [531] = 485,
  [532] = 486,
  [533] = 485,
  [534] = 486,
  [535] = 485,
  [536] = 486,
  [537] = 485,
  [538] = 486,
  [539] = 485,
  [540] = 486,
  [541] = 485,
  [542] = 486,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 500,
  [552] = 479,
  [553] = 553,
  [554] = 554,
  [555] = 487,
  [556] = 496,
  [557] = 489,
  [558] = 558,
  [559] = 543,
  [560] = 486,
  [561] = 561,
  [562] = 562,
  [563] = 485,
  [564] = 561,
  [565] = 565,
  [566] = 566,
  [567] = 546,
  [568] = 568,
  [569] = 569,
  [570] = 545,
  [571] = 491,
  [572] = 572,
  [573] = 573,
  [574] = 566,
  [575] = 575,
  [576] = 483,
  [577] = 481,
  [578] = 578,
  [579] = 544,
  [580] = 545,
  [581] = 546,
  [582] = 489,
  [583] = 545,
  [584] = 546,
  [585] = 545,
  [586] = 546,
  [587] = 545,
  [588] = 546,
  [589] = 545,
  [590] = 546,
  [591] = 545,
  [592] = 546,
  [593] = 545,
  [594] = 546,
  [595] = 545,
  [596] = 546,
  [597] = 545,
  [598] = 546,
  [599] = 545,
  [600] = 546,
  [601] = 545,
  [602] = 546,
  [603] = 480,
  [604] = 604,
  [605] = 605,
  [606] = 568,
  [607] = 569,
  [608] = 490,
  [609] = 488,
  [610] = 610,
  [611] = 544,
  [612] = 494,
  [613] = 499,
  [614] = 495,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 553,
  [619] = 478,
  [620] = 549,
  [621] = 503,
  [622] = 554,
  [623] = 573,
  [624] = 624,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(275);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == ',') ADVANCE(587);
      if (lookahead == '-') ADVANCE(588);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(96);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(271)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '#') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(591);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(650);
      if (lookahead == '\f') ADVANCE(651);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\f') ADVANCE(662);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(658);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\f') ADVANCE(662);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\f') ADVANCE(663);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(659);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(644);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\f') ADVANCE(663);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(644);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\f') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(660);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\f') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(638);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '#') ADVANCE(640);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(642);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '\f') ADVANCE(665);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(661);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(590);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '\f') ADVANCE(665);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(590);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\f') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\f') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(657);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\f') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(588);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(96);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(657);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(588);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(96);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(589);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(96);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(601);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(35)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(602);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(50)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(588);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(590);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(589);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(590);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(644);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(374);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(78);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(374);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(374);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(374);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'G') ADVANCE(370);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'R') ADVANCE(388);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == 'W') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(590);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '-') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == 'A') ADVANCE(482);
      if (lookahead == 'C') ADVANCE(478);
      if (lookahead == 'E') ADVANCE(474);
      if (lookahead == 'F') ADVANCE(479);
      if (lookahead == 'G') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(469);
      if (lookahead == 'L') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(490);
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead == 'W') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == 'A') ADVANCE(482);
      if (lookahead == 'C') ADVANCE(478);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead == 'F') ADVANCE(479);
      if (lookahead == 'G') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(469);
      if (lookahead == 'L') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(490);
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead == 'W') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == 'A') ADVANCE(482);
      if (lookahead == 'C') ADVANCE(478);
      if (lookahead == 'F') ADVANCE(479);
      if (lookahead == 'G') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(469);
      if (lookahead == 'L') ADVANCE(468);
      if (lookahead == 'R') ADVANCE(490);
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead == 'W') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(586);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(442);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(444);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '(') ADVANCE(270);
      END_STATE();
    case 64:
      if (lookahead == ')') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(269);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(168);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(151);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(153);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(299);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(281);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'D') ADVANCE(136);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(311);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(302);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(307);
      END_STATE();
    case 100:
      if (lookahead == 'F') ADVANCE(307);
      if (lookahead == 'N') ADVANCE(298);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(310);
      END_STATE();
    case 102:
      if (lookahead == 'F') ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 'F') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'G') ADVANCE(276);
      END_STATE();
    case 105:
      if (lookahead == 'G') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'H') ADVANCE(28);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'J') ADVANCE(95);
      END_STATE();
    case 115:
      if (lookahead == 'K') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'K') ADVANCE(98);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(322);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(131);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'M') ADVANCE(282);
      END_STATE();
    case 124:
      if (lookahead == 'M') ADVANCE(75);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(317);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(290);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 137:
      if (lookahead == 'P') ADVANCE(159);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(104);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(295);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(330);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(155);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(303);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(314);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(324);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(106);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 156:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'U') ADVANCE(109);
      END_STATE();
    case 158:
      if (lookahead == 'V') ADVANCE(93);
      END_STATE();
    case 159:
      if (lookahead == 'Y') ADVANCE(292);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(160);
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(620);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(598);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 193:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(633);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(628);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 208:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 210:
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 212:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 213:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 216:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 217:
      if (lookahead == 'm') ADVANCE(625);
      END_STATE();
    case 218:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 238:
      if (lookahead == 'q') ADVANCE(260);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 261:
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 262:
      if (lookahead == 'v') ADVANCE(202);
      END_STATE();
    case 263:
      if (lookahead == 'v') ADVANCE(203);
      END_STATE();
    case 264:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 265:
      if (lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 266:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 269:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 271:
      if (eof) ADVANCE(275);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(639);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(588);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'V') ADVANCE(96);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(587);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(271)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 272:
      if (eof) ADVANCE(275);
      if (lookahead == ' ') ADVANCE(601);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '=') ADVANCE(600);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'F') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(274)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 273:
      if (eof) ADVANCE(275);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == ':') ADVANCE(350);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '@') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'F') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(274)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 274:
      if (eof) ADVANCE(275);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'F') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(346);
      if (lookahead == 'V') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(274)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(77);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(88);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(397);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(406);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(407);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(392);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(426);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(394);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(400);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(389);
      if (lookahead == 'E') ADVANCE(385);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(386);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(300);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(312);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(384);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(308);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(278);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(353);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(383);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(382);
      if (lookahead == 'N') ADVANCE(363);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(283);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(363);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(318);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(379);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(373);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(381);
      if (lookahead == 'R') ADVANCE(377);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(368);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(364);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(304);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(325);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(369);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(328);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(375);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(365);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(293);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(398);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'p') ADVANCE(393);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(395);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(399);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'p') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'p') ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(598);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(401);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(355);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(356);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(427);
      if (lookahead == 'h') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(628);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(405);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(438);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(625);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(604);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(410);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(624);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(359);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(605);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(408);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(432);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(358);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(645);
      if (lookahead == '#') ADVANCE(443);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(650);
      if (lookahead == '\f') ADVANCE(651);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == 'f') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(491);
      if (lookahead == 'E') ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(473);
      if (lookahead == 'I') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(484);
      if (lookahead == 'N') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(483);
      if (lookahead == 'R') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(470);
      if (lookahead == 'S') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'k') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(578);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(566);
      if (lookahead == 'k') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'k') ADVANCE(510);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(549);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(177);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(650);
      if (lookahead == '\f') ADVANCE(651);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(636);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(638);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(640);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(640);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(647);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(636);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(646);
      if (lookahead == '\f') ADVANCE(649);
      if (lookahead == '\r') ADVANCE(640);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(640);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(650);
      if (lookahead == '\f') ADVANCE(651);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\f') ADVANCE(662);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\f') ADVANCE(663);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\f') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '\f') ADVANCE(665);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\f') ADVANCE(666);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(644);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(586);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(590);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(652);
      if (lookahead == '\f') ADVANCE(662);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(653);
      if (lookahead == '\f') ADVANCE(663);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(643);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(654);
      if (lookahead == '\f') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '+') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '\f') ADVANCE(665);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(656);
      if (lookahead == '\f') ADVANCE(666);
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
  [1] = {.lex_state = 273},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 34, .external_lex_state = 2},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 41, .external_lex_state = 2},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 42},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 41, .external_lex_state = 2},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 42},
  [64] = {.lex_state = 42},
  [65] = {.lex_state = 42},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 35, .external_lex_state = 2},
  [71] = {.lex_state = 41, .external_lex_state = 2},
  [72] = {.lex_state = 35, .external_lex_state = 2},
  [73] = {.lex_state = 35, .external_lex_state = 2},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 44, .external_lex_state = 2},
  [77] = {.lex_state = 44, .external_lex_state = 2},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 35, .external_lex_state = 2},
  [80] = {.lex_state = 35, .external_lex_state = 2},
  [81] = {.lex_state = 41, .external_lex_state = 2},
  [82] = {.lex_state = 41, .external_lex_state = 2},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 44, .external_lex_state = 2},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 44, .external_lex_state = 2},
  [90] = {.lex_state = 41, .external_lex_state = 2},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 35},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 44, .external_lex_state = 2},
  [101] = {.lex_state = 58},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 59, .external_lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 58},
  [121] = {.lex_state = 26},
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
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 23, .external_lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 30, .external_lex_state = 2},
  [143] = {.lex_state = 43},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 59, .external_lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 43},
  [154] = {.lex_state = 43},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 35, .external_lex_state = 2},
  [157] = {.lex_state = 35, .external_lex_state = 2},
  [158] = {.lex_state = 35, .external_lex_state = 2},
  [159] = {.lex_state = 35, .external_lex_state = 2},
  [160] = {.lex_state = 44, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 44, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 26},
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
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 30},
  [207] = {.lex_state = 30},
  [208] = {.lex_state = 30},
  [209] = {.lex_state = 30},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 52},
  [212] = {.lex_state = 52},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 30},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 273},
  [221] = {.lex_state = 26},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 273},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 26},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 26},
  [231] = {.lex_state = 26},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 8},
  [234] = {.lex_state = 26},
  [235] = {.lex_state = 36},
  [236] = {.lex_state = 36},
  [237] = {.lex_state = 36},
  [238] = {.lex_state = 36},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 36},
  [242] = {.lex_state = 54},
  [243] = {.lex_state = 54},
  [244] = {.lex_state = 36},
  [245] = {.lex_state = 36},
  [246] = {.lex_state = 273},
  [247] = {.lex_state = 54},
  [248] = {.lex_state = 54},
  [249] = {.lex_state = 54},
  [250] = {.lex_state = 273},
  [251] = {.lex_state = 273},
  [252] = {.lex_state = 273},
  [253] = {.lex_state = 273},
  [254] = {.lex_state = 272},
  [255] = {.lex_state = 36},
  [256] = {.lex_state = 273},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 273},
  [259] = {.lex_state = 273},
  [260] = {.lex_state = 273},
  [261] = {.lex_state = 273},
  [262] = {.lex_state = 273},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 273, .external_lex_state = 3},
  [265] = {.lex_state = 53},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 53},
  [268] = {.lex_state = 55},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 36},
  [271] = {.lex_state = 30},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 29},
  [275] = {.lex_state = 30},
  [276] = {.lex_state = 29},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 30},
  [280] = {.lex_state = 30},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 29},
  [284] = {.lex_state = 55},
  [285] = {.lex_state = 29},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 30},
  [289] = {.lex_state = 55},
  [290] = {.lex_state = 30},
  [291] = {.lex_state = 273},
  [292] = {.lex_state = 30},
  [293] = {.lex_state = 55},
  [294] = {.lex_state = 55},
  [295] = {.lex_state = 55},
  [296] = {.lex_state = 30},
  [297] = {.lex_state = 273},
  [298] = {.lex_state = 36},
  [299] = {.lex_state = 36},
  [300] = {.lex_state = 29},
  [301] = {.lex_state = 30},
  [302] = {.lex_state = 53},
  [303] = {.lex_state = 30},
  [304] = {.lex_state = 30},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 55},
  [307] = {.lex_state = 29},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 30},
  [310] = {.lex_state = 30},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 29},
  [313] = {.lex_state = 29},
  [314] = {.lex_state = 29},
  [315] = {.lex_state = 29},
  [316] = {.lex_state = 273},
  [317] = {.lex_state = 273},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 29},
  [320] = {.lex_state = 29},
  [321] = {.lex_state = 29},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 29},
  [324] = {.lex_state = 29},
  [325] = {.lex_state = 29},
  [326] = {.lex_state = 273},
  [327] = {.lex_state = 273},
  [328] = {.lex_state = 273},
  [329] = {.lex_state = 273},
  [330] = {.lex_state = 29},
  [331] = {.lex_state = 29},
  [332] = {.lex_state = 273},
  [333] = {.lex_state = 273},
  [334] = {.lex_state = 29},
  [335] = {.lex_state = 55},
  [336] = {.lex_state = 29},
  [337] = {.lex_state = 273},
  [338] = {.lex_state = 29},
  [339] = {.lex_state = 29},
  [340] = {.lex_state = 29},
  [341] = {.lex_state = 36},
  [342] = {.lex_state = 29},
  [343] = {.lex_state = 29},
  [344] = {.lex_state = 273},
  [345] = {.lex_state = 30},
  [346] = {.lex_state = 273},
  [347] = {.lex_state = 273},
  [348] = {.lex_state = 29},
  [349] = {.lex_state = 56},
  [350] = {.lex_state = 15},
  [351] = {.lex_state = 54},
  [352] = {.lex_state = 54},
  [353] = {.lex_state = 56},
  [354] = {.lex_state = 54},
  [355] = {.lex_state = 54},
  [356] = {.lex_state = 15},
  [357] = {.lex_state = 15},
  [358] = {.lex_state = 48},
  [359] = {.lex_state = 15},
  [360] = {.lex_state = 48},
  [361] = {.lex_state = 54},
  [362] = {.lex_state = 56},
  [363] = {.lex_state = 15},
  [364] = {.lex_state = 54},
  [365] = {.lex_state = 15},
  [366] = {.lex_state = 56},
  [367] = {.lex_state = 56},
  [368] = {.lex_state = 48},
  [369] = {.lex_state = 54},
  [370] = {.lex_state = 48},
  [371] = {.lex_state = 15},
  [372] = {.lex_state = 15},
  [373] = {.lex_state = 15},
  [374] = {.lex_state = 15},
  [375] = {.lex_state = 15},
  [376] = {.lex_state = 15},
  [377] = {.lex_state = 273},
  [378] = {.lex_state = 15},
  [379] = {.lex_state = 15},
  [380] = {.lex_state = 15},
  [381] = {.lex_state = 15},
  [382] = {.lex_state = 15},
  [383] = {.lex_state = 15},
  [384] = {.lex_state = 15},
  [385] = {.lex_state = 15},
  [386] = {.lex_state = 15},
  [387] = {.lex_state = 15},
  [388] = {.lex_state = 15},
  [389] = {.lex_state = 273},
  [390] = {.lex_state = 15},
  [391] = {.lex_state = 15},
  [392] = {.lex_state = 15},
  [393] = {.lex_state = 15},
  [394] = {.lex_state = 15},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 15},
  [397] = {.lex_state = 15},
  [398] = {.lex_state = 273},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 36},
  [401] = {.lex_state = 15},
  [402] = {.lex_state = 30},
  [403] = {.lex_state = 15},
  [404] = {.lex_state = 15},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 0},
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
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 15},
  [420] = {.lex_state = 15},
  [421] = {.lex_state = 15},
  [422] = {.lex_state = 15},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 15},
  [425] = {.lex_state = 15},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 15},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 15},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 36},
  [438] = {.lex_state = 36},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 36},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 36},
  [446] = {.lex_state = 15},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 15},
  [451] = {.lex_state = 15},
  [452] = {.lex_state = 15},
  [453] = {.lex_state = 15},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 15},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 53},
  [458] = {.lex_state = 15},
  [459] = {.lex_state = 15},
  [460] = {.lex_state = 56},
  [461] = {.lex_state = 38},
  [462] = {.lex_state = 53},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 38},
  [466] = {.lex_state = 56},
  [467] = {.lex_state = 36},
  [468] = {.lex_state = 38},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 53},
  [471] = {.lex_state = 53},
  [472] = {.lex_state = 273},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 49},
  [475] = {.lex_state = 49},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 36},
  [478] = {.lex_state = 36},
  [479] = {.lex_state = 24},
  [480] = {.lex_state = 61},
  [481] = {.lex_state = 51},
  [482] = {.lex_state = 24},
  [483] = {.lex_state = 38},
  [484] = {.lex_state = 24},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 51},
  [488] = {.lex_state = 273},
  [489] = {.lex_state = 24},
  [490] = {.lex_state = 273},
  [491] = {.lex_state = 60},
  [492] = {.lex_state = 24},
  [493] = {.lex_state = 24},
  [494] = {.lex_state = 60},
  [495] = {.lex_state = 60},
  [496] = {.lex_state = 60},
  [497] = {.lex_state = 24},
  [498] = {.lex_state = 24},
  [499] = {.lex_state = 38},
  [500] = {.lex_state = 24},
  [501] = {.lex_state = 61},
  [502] = {.lex_state = 51},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 38},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 51},
  [509] = {.lex_state = 24},
  [510] = {.lex_state = 24},
  [511] = {.lex_state = 24},
  [512] = {.lex_state = 38},
  [513] = {.lex_state = 38},
  [514] = {.lex_state = 61},
  [515] = {.lex_state = 51},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 51},
  [519] = {.lex_state = 61},
  [520] = {.lex_state = 51},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 51},
  [524] = {.lex_state = 61},
  [525] = {.lex_state = 51},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 51},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 24},
  [545] = {.lex_state = 11},
  [546] = {.lex_state = 12},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 60},
  [549] = {.lex_state = 36},
  [550] = {.lex_state = 24},
  [551] = {.lex_state = 24},
  [552] = {.lex_state = 24},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 51},
  [556] = {.lex_state = 60},
  [557] = {.lex_state = 24},
  [558] = {.lex_state = 60},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 60},
  [562] = {.lex_state = 36},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 60},
  [565] = {.lex_state = 24},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 12},
  [568] = {.lex_state = 60},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 11},
  [571] = {.lex_state = 60},
  [572] = {.lex_state = 60},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 36},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 51},
  [578] = {.lex_state = 60},
  [579] = {.lex_state = 24},
  [580] = {.lex_state = 11},
  [581] = {.lex_state = 12},
  [582] = {.lex_state = 24},
  [583] = {.lex_state = 11},
  [584] = {.lex_state = 12},
  [585] = {.lex_state = 11},
  [586] = {.lex_state = 12},
  [587] = {.lex_state = 11},
  [588] = {.lex_state = 12},
  [589] = {.lex_state = 11},
  [590] = {.lex_state = 12},
  [591] = {.lex_state = 11},
  [592] = {.lex_state = 12},
  [593] = {.lex_state = 11},
  [594] = {.lex_state = 12},
  [595] = {.lex_state = 11},
  [596] = {.lex_state = 12},
  [597] = {.lex_state = 11},
  [598] = {.lex_state = 12},
  [599] = {.lex_state = 11},
  [600] = {.lex_state = 12},
  [601] = {.lex_state = 11},
  [602] = {.lex_state = 12},
  [603] = {.lex_state = 61},
  [604] = {.lex_state = 24},
  [605] = {.lex_state = 60},
  [606] = {.lex_state = 60},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 273},
  [609] = {.lex_state = 273},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 24},
  [612] = {.lex_state = 60},
  [613] = {.lex_state = 38},
  [614] = {.lex_state = 60},
  [615] = {.lex_state = 273},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 32},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 36},
  [620] = {.lex_state = 36},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 36},
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
    [anon_sym_WAIT] = ACTIONS(1),
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
    [sym_source_file] = STATE(616),
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
  [0] = 19,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(27), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [74] = 19,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      anon_sym_ARG,
    ACTIONS(54), 1,
      anon_sym_FROM,
    ACTIONS(57), 1,
      anon_sym_COPY,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(65), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(68), 1,
      anon_sym_GIT,
    ACTIONS(71), 1,
      anon_sym_IF,
    ACTIONS(74), 1,
      anon_sym_ELSE,
    ACTIONS(76), 1,
      anon_sym_LET,
    ACTIONS(79), 1,
      anon_sym_RUN,
    ACTIONS(82), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(85), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(88), 1,
      anon_sym_SET,
    ACTIONS(91), 1,
      anon_sym_WAIT,
    ACTIONS(94), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(63), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [148] = 19,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(99), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(97), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [222] = 19,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(103), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(101), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [296] = 19,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(107), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(105), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(4), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [370] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(51), 1,
      anon_sym_ARG,
    ACTIONS(54), 1,
      anon_sym_FROM,
    ACTIONS(57), 1,
      anon_sym_COPY,
    ACTIONS(60), 1,
      anon_sym_FOR,
    ACTIONS(63), 1,
      anon_sym_END,
    ACTIONS(65), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(68), 1,
      anon_sym_GIT,
    ACTIONS(71), 1,
      anon_sym_IF,
    ACTIONS(76), 1,
      anon_sym_LET,
    ACTIONS(79), 1,
      anon_sym_RUN,
    ACTIONS(88), 1,
      anon_sym_SET,
    ACTIONS(91), 1,
      anon_sym_WAIT,
    ACTIONS(94), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(109), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(112), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [440] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(115), 1,
      anon_sym_END,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [510] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(121), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [580] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(123), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [650] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(125), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [720] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    STATE(569), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [790] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(127), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [860] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    STATE(607), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [930] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(129), 1,
      anon_sym_ARG,
    ACTIONS(131), 1,
      anon_sym_FROM,
    ACTIONS(133), 1,
      anon_sym_COPY,
    ACTIONS(135), 1,
      anon_sym_FOR,
    ACTIONS(137), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(139), 1,
      anon_sym_GIT,
    ACTIONS(141), 1,
      anon_sym_IF,
    ACTIONS(143), 1,
      anon_sym_LET,
    ACTIONS(145), 1,
      anon_sym_RUN,
    ACTIONS(147), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(149), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(151), 1,
      anon_sym_SET,
    ACTIONS(153), 1,
      anon_sym_WAIT,
    ACTIONS(155), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(157), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1000] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(159), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(11), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1070] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(63), 1,
      sym__dedent,
    ACTIONS(161), 1,
      anon_sym_ARG,
    ACTIONS(164), 1,
      anon_sym_FROM,
    ACTIONS(167), 1,
      anon_sym_COPY,
    ACTIONS(170), 1,
      anon_sym_FOR,
    ACTIONS(173), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(176), 1,
      anon_sym_GIT,
    ACTIONS(179), 1,
      anon_sym_IF,
    ACTIONS(182), 1,
      anon_sym_LET,
    ACTIONS(185), 1,
      anon_sym_RUN,
    ACTIONS(188), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(191), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(194), 1,
      anon_sym_SET,
    ACTIONS(197), 1,
      anon_sym_WAIT,
    ACTIONS(200), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1140] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(203), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1210] = 18,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(129), 1,
      anon_sym_ARG,
    ACTIONS(131), 1,
      anon_sym_FROM,
    ACTIONS(133), 1,
      anon_sym_COPY,
    ACTIONS(135), 1,
      anon_sym_FOR,
    ACTIONS(137), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(139), 1,
      anon_sym_GIT,
    ACTIONS(141), 1,
      anon_sym_IF,
    ACTIONS(143), 1,
      anon_sym_LET,
    ACTIONS(145), 1,
      anon_sym_RUN,
    ACTIONS(147), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(149), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(151), 1,
      anon_sym_SET,
    ACTIONS(153), 1,
      anon_sym_WAIT,
    ACTIONS(155), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(205), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(17), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1280] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(207), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1350] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(209), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1420] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(211), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1490] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    STATE(573), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1560] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    STATE(623), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1630] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(213), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1700] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(215), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1770] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(217), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1840] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(219), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1910] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(221), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(28), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1980] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(223), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2050] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(225), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2120] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(227), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2190] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(229), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2260] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(231), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2330] = 18,
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
      anon_sym_WAIT,
    ACTIONS(49), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(117), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(119), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(233), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(7), 15,
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
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2400] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_COLON2,
    ACTIONS(241), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(237), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(235), 21,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2441] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(249), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(251), 1,
      sym_cache_hint,
    ACTIONS(253), 1,
      sym_push,
    STATE(39), 1,
      aux_sym_save_image_command_repeat1,
    STATE(54), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(65), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(245), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 12,
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
      anon_sym_WAIT,
  [2492] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(259), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(257), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(255), 21,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2530] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(249), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(253), 1,
      sym_push,
    STATE(44), 1,
      aux_sym_save_image_command_repeat1,
    STATE(54), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(263), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(261), 12,
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
      anon_sym_WAIT,
  [2578] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(267), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(265), 21,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2613] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_image_name,
    ACTIONS(271), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(273), 1,
      sym_cache_hint,
    ACTIONS(275), 1,
      sym_push,
    STATE(45), 1,
      aux_sym_save_image_command_repeat1,
    STATE(90), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(89), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(245), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [2662] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(279), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(277), 21,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [2697] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      sym_cache_hint,
    ACTIONS(281), 1,
      sym_image_name,
    ACTIONS(283), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(285), 1,
      sym_push,
    STATE(46), 1,
      aux_sym_save_image_command_repeat1,
    STATE(94), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(245), 4,
      anon_sym_FROMDOCKERFILE,
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
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [2746] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(291), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(294), 1,
      sym_push,
    STATE(44), 1,
      aux_sym_save_image_command_repeat1,
    STATE(54), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(287), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [2788] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_image_name,
    ACTIONS(271), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(275), 1,
      sym_push,
    STATE(59), 1,
      aux_sym_save_image_command_repeat1,
    STATE(90), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(77), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(263), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(261), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [2834] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      sym_image_name,
    ACTIONS(283), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(285), 1,
      sym_push,
    STATE(61), 1,
      aux_sym_save_image_command_repeat1,
    STATE(94), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(97), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(263), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(261), 11,
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
      anon_sym_WAIT,
  [2880] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      sym_path,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    STATE(50), 1,
      aux_sym_copy_command_repeat1,
    STATE(311), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(216), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(303), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [2933] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      sym_path,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    STATE(49), 1,
      aux_sym_copy_command_repeat1,
    STATE(278), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(216), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(303), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [2986] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      sym_path,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    STATE(99), 1,
      aux_sym_copy_command_repeat1,
    STATE(267), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(216), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(303), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [3039] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      sym_path,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    STATE(99), 1,
      aux_sym_copy_command_repeat1,
    STATE(302), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(216), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(303), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [3092] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(62), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(311), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3128] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(319), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(317), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3164] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(321), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [3196] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(325), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [3228] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(329), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [3260] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(333), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3296] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(344), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(57), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(342), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(340), 12,
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
      anon_sym_WAIT,
  [3332] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(347), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [3364] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(351), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(354), 1,
      sym_push,
    STATE(59), 1,
      aux_sym_save_image_command_repeat1,
    STATE(90), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(287), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [3404] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(359), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(52), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(357), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3440] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(364), 1,
      sym_push,
    STATE(61), 1,
      aux_sym_save_image_command_repeat1,
    STATE(94), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(289), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(287), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [3480] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(369), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(367), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3516] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(371), 1,
      anon_sym_COLON2,
    ACTIONS(373), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(237), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [3552] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(57), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(377), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(375), 12,
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
      anon_sym_WAIT,
  [3588] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(57), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(381), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(379), 12,
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
      anon_sym_WAIT,
  [3624] = 3,
    ACTIONS(385), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(383), 18,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [3653] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(255), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(257), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [3686] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_ASLOCAL,
    ACTIONS(395), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(391), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(389), 12,
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
      anon_sym_WAIT,
  [3721] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(401), 1,
      anon_sym_ASLOCAL,
    ACTIONS(403), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(397), 12,
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
      anon_sym_WAIT,
  [3756] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      anon_sym_FROM,
    ACTIONS(405), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(80), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(311), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3790] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(321), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [3820] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      anon_sym_FROM,
    ACTIONS(405), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(73), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(317), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3854] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_FROM,
    ACTIONS(407), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(73), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(333), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [3888] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(410), 1,
      anon_sym_COLON2,
    ACTIONS(412), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(237), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(267), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [3952] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(414), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(76), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(342), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(340), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [3986] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(76), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(377), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(375), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [4020] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(277), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(279), 13,
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
      anon_sym_WAIT,
      sym_image_name,
  [4050] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(359), 1,
      anon_sym_FROM,
    ACTIONS(405), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(72), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(357), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4084] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(369), 1,
      anon_sym_FROM,
    ACTIONS(405), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(73), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(367), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4118] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(347), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [4148] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(329), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [4178] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(419), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(417), 16,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4208] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(347), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [4238] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(421), 1,
      anon_sym_COLON2,
    ACTIONS(423), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(237), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [4272] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(329), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [4302] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(347), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(349), 16,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4332] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(331), 16,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4362] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(269), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(76), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(381), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(379), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [4396] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(325), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [4426] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(321), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [4456] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(429), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(427), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(425), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4488] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(342), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(340), 11,
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
      anon_sym_WAIT,
  [4522] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(325), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [4552] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(381), 4,
      anon_sym_FROMDOCKERFILE,
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
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [4586] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(436), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(434), 16,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [4616] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(281), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(377), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(375), 11,
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
      anon_sym_WAIT,
  [4650] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(442), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(440), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(438), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4682] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(444), 1,
      sym_path,
    ACTIONS(451), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(454), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(457), 1,
      anon_sym_DASH_DASHplatform,
    STATE(99), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(446), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(216), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(448), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [4723] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(460), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(255), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(257), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [4754] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(401), 1,
      anon_sym_ASLOCAL,
    ACTIONS(403), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(397), 11,
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
      anon_sym_WAIT,
  [4787] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(464), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(462), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4816] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(468), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(466), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4845] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(472), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(470), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4874] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(476), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(474), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4903] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(480), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(478), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4932] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(484), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(482), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4961] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(488), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(486), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4990] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(492), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(490), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5019] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(496), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(494), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5048] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(500), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(498), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5077] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(504), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(502), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5106] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(508), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(506), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5135] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(510), 1,
      anon_sym_DASH_DASH,
    ACTIONS(514), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(518), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(520), 1,
      anon_sym_DASH_DASHsecret,
    STATE(172), 1,
      aux_sym_run_command_repeat1,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(372), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(234), 2,
      sym_mount,
      sym_secret,
    ACTIONS(516), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [5180] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(524), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(522), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5209] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      anon_sym_ASLOCAL,
    ACTIONS(528), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(391), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(389), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [5242] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(530), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5271] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(311), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5300] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(536), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(534), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5329] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_ASLOCAL,
    ACTIONS(395), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(391), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(389), 11,
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
      anon_sym_WAIT,
  [5362] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(518), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(520), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(538), 1,
      anon_sym_DASH_DASH,
    STATE(172), 1,
      aux_sym_run_command_repeat1,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(417), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(234), 2,
      sym_mount,
      sym_secret,
    ACTIONS(516), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [5407] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(542), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(540), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5436] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(546), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(544), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5465] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(548), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5494] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(554), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(552), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5523] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(558), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(556), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5552] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(562), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(560), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5581] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(566), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(564), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5610] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(568), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5639] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(574), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(572), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5668] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(578), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(576), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5697] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(582), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(580), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5726] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(586), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(584), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5755] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(588), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5784] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(594), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(592), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5813] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(598), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(596), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5842] = 4,
    ACTIONS(600), 1,
      aux_sym_branch_token1,
    ACTIONS(602), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(383), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5871] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(606), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(604), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5900] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(608), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5929] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(614), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(612), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5958] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(616), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5987] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(237), 1,
      anon_sym_FROM,
    ACTIONS(620), 1,
      anon_sym_COLON2,
    ACTIONS(622), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6020] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(255), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(257), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [6051] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(518), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(520), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(626), 1,
      anon_sym_DASH_DASH,
    STATE(121), 1,
      aux_sym_run_command_repeat1,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(455), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(234), 2,
      sym_mount,
      sym_secret,
    ACTIONS(516), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [6096] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(630), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(628), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6125] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_ASLOCAL,
    ACTIONS(634), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(397), 10,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
  [6158] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(638), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(636), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6187] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(642), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(640), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6216] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(518), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(520), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(644), 1,
      anon_sym_DASH_DASH,
    STATE(114), 1,
      aux_sym_run_command_repeat1,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(439), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(234), 2,
      sym_mount,
      sym_secret,
    ACTIONS(516), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [6261] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(648), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(646), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6290] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(652), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(650), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6319] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(257), 1,
      anon_sym_FROM,
    ACTIONS(654), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(255), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6349] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(277), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(279), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [6377] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(267), 12,
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
      anon_sym_WAIT,
      sym_image_name,
  [6405] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(440), 1,
      anon_sym_FROM,
    ACTIONS(656), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(438), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6435] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(419), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(417), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [6463] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [6491] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [6519] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(436), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(434), 15,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [6547] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(267), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [6575] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_FROM,
    ACTIONS(658), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(425), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6605] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(277), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(279), 11,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_COPY,
      anon_sym_FOR,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_WAIT,
      sym_image_name,
  [6633] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(652), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(650), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6660] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(544), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6687] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(594), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(592), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6714] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(614), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6741] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(588), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(580), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6795] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(468), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(466), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6822] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6849] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(564), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6876] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(670), 1,
      anon_sym_DASH_DASHsecret,
    STATE(172), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(660), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(662), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(234), 2,
      sym_mount,
      sym_secret,
    ACTIONS(664), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [6913] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6940] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(638), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(636), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6967] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6994] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(646), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7021] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(630), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(628), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7048] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(472), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(470), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7075] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7102] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(496), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(494), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7129] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(598), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(596), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7156] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(576), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7183] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(488), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(486), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7210] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(550), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(548), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7237] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(480), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(478), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7264] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(464), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(462), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7291] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(606), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(604), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7318] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(536), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(534), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7345] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(279), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(277), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7372] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(476), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(474), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7399] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(540), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7426] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7453] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(532), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(530), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7480] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(484), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(482), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7507] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(313), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(311), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7534] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(524), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(522), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7561] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(490), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7588] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(508), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(506), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7615] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(642), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(640), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7642] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(504), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(502), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7696] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(586), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(584), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7723] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(267), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7750] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(568), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7777] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(500), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(498), 14,
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
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7804] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(673), 1,
      sym_allow_privileged,
    ACTIONS(675), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(677), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(679), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(681), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(683), 1,
      anon_sym_DASH_DASHservice,
    STATE(207), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(543), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(304), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [7846] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(673), 1,
      sym_allow_privileged,
    ACTIONS(675), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(677), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(679), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(681), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(683), 1,
      anon_sym_DASH_DASHservice,
    STATE(217), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(574), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(304), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [7888] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(673), 1,
      sym_allow_privileged,
    ACTIONS(675), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(677), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(679), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(681), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(683), 1,
      anon_sym_DASH_DASHservice,
    STATE(209), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(559), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(304), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [7930] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(673), 1,
      sym_allow_privileged,
    ACTIONS(675), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(677), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(679), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(681), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(683), 1,
      anon_sym_DASH_DASHservice,
    STATE(217), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(566), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(304), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [7972] = 10,
    ACTIONS(685), 1,
      sym_image_name,
    ACTIONS(687), 1,
      anon_sym_PLUS,
    ACTIONS(691), 1,
      anon_sym_DASH_DASHplatform,
    STATE(70), 1,
      sym_target_ref,
    STATE(301), 1,
      aux_sym_from_command_repeat1,
    STATE(402), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(689), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(195), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(693), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8009] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(695), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(697), 12,
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
  [8034] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 12,
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
  [8059] = 10,
    ACTIONS(691), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(699), 1,
      sym_image_name,
    ACTIONS(701), 1,
      anon_sym_PLUS,
    STATE(256), 1,
      sym_target_ref,
    STATE(271), 1,
      aux_sym_from_command_repeat1,
    STATE(402), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(689), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(332), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(703), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8096] = 10,
    ACTIONS(691), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(705), 1,
      sym_image_name,
    ACTIONS(707), 1,
      anon_sym_PLUS,
    STATE(51), 1,
      sym_target_ref,
    STATE(275), 1,
      aux_sym_from_command_repeat1,
    STATE(402), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(689), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(118), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(709), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8133] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 12,
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
  [8158] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(711), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(713), 12,
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
  [8183] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_RUN,
    ACTIONS(717), 1,
      sym_allow_privileged,
    ACTIONS(720), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(723), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(726), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(729), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(732), 1,
      anon_sym_DASH_DASHservice,
    STATE(217), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(304), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [8222] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(737), 12,
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
  [8247] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(741), 12,
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
  [8272] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    ACTIONS(745), 1,
      anon_sym_ARG,
    ACTIONS(748), 1,
      anon_sym_FROM,
    ACTIONS(751), 1,
      anon_sym_PROJECT,
    ACTIONS(754), 1,
      anon_sym_VERSION,
    ACTIONS(757), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(220), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [8306] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(347), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(349), 10,
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
  [8330] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__eol,
    STATE(233), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(766), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8362] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__eol,
    STATE(240), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(768), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8394] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym__eol,
    STATE(223), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(770), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8426] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__eol,
    STATE(227), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(772), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8458] = 9,
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
    ACTIONS(774), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(220), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [8492] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym__eol,
    STATE(240), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(776), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8524] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(331), 10,
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
  [8548] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym__eol,
    STATE(240), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(778), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8580] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(782), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(780), 10,
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
  [8604] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(786), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(784), 10,
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
  [8628] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym__eol,
    STATE(229), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(788), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8660] = 8,
    ACTIONS(762), 1,
      anon_sym_DQUOTE,
    ACTIONS(764), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym__eol,
    STATE(240), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(760), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(790), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8692] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(794), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(792), 10,
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
  [8716] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(796), 1,
      sym_identifier,
    ACTIONS(798), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(804), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(807), 1,
      anon_sym_DASH_DASHsep,
    STATE(235), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(801), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(272), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8749] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(810), 1,
      sym_identifier,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHsep,
    STATE(239), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(814), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(272), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8782] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(820), 1,
      sym_identifier,
    STATE(241), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(814), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(272), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8815] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(822), 1,
      sym_identifier,
    STATE(255), 1,
      aux_sym__conditional_block_repeat1,
    STATE(463), 1,
      sym__conditional_block,
    STATE(464), 1,
      sym_else_if_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(341), 2,
      sym_mount,
      sym_secret,
    ACTIONS(824), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [8850] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(826), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(814), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(272), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8883] = 7,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
    ACTIONS(834), 1,
      anon_sym_SQUOTE,
    STATE(240), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(828), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(281), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(837), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [8912] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(839), 1,
      sym_identifier,
    STATE(235), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(814), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(272), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [8945] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(841), 1,
      sym_path,
    ACTIONS(843), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(845), 1,
      anon_sym_DASHf,
    ACTIONS(847), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(849), 1,
      anon_sym_DASH_DASHplatform,
    STATE(249), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(369), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [8977] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(843), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(845), 1,
      anon_sym_DASHf,
    ACTIONS(847), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(849), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(851), 1,
      sym_path,
    STATE(242), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(369), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [9009] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(822), 1,
      sym_identifier,
    STATE(255), 1,
      aux_sym__conditional_block_repeat1,
    STATE(435), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(341), 2,
      sym_mount,
      sym_secret,
    ACTIONS(824), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [9041] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(822), 1,
      sym_identifier,
    STATE(255), 1,
      aux_sym__conditional_block_repeat1,
    STATE(436), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(341), 2,
      sym_mount,
      sym_secret,
    ACTIONS(824), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [9073] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(853), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(246), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(335), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9099] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(843), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(845), 1,
      anon_sym_DASHf,
    ACTIONS(847), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(849), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(856), 1,
      sym_path,
    STATE(248), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(369), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [9131] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(843), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(845), 1,
      anon_sym_DASHf,
    ACTIONS(847), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(849), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(858), 1,
      sym_path,
    STATE(249), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(369), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [9163] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(860), 1,
      sym_path,
    ACTIONS(862), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(865), 1,
      anon_sym_DASHf,
    ACTIONS(868), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(871), 1,
      anon_sym_DASH_DASHplatform,
    STATE(249), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(369), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [9195] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(251), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(359), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9220] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(246), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(319), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9245] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(876), 1,
      anon_sym_COLON2,
    ACTIONS(878), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(237), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9270] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(246), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(369), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9295] = 4,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(880), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(383), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [9316] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(812), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(882), 1,
      sym_identifier,
    STATE(257), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(341), 2,
      sym_mount,
      sym_secret,
    ACTIONS(824), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [9345] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(253), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(313), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9370] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(884), 1,
      sym_identifier,
    ACTIONS(886), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(892), 1,
      anon_sym_DASH_DASHsecret,
    STATE(257), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(341), 2,
      sym_mount,
      sym_secret,
    ACTIONS(889), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [9399] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(895), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(257), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9421] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(347), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9441] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(434), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(436), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9461] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(419), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9481] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(329), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9501] = 4,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(899), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9520] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
    ACTIONS(905), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(903), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [9541] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(907), 1,
      sym_path,
    ACTIONS(910), 1,
      anon_sym_PLUS,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [9568] = 4,
    STATE(266), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(916), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(919), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9587] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      sym_path,
    STATE(265), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [9614] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(923), 1,
      sym_path,
    STATE(268), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(925), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [9635] = 4,
    STATE(197), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(928), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9654] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9671] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    STATE(250), 1,
      sym_target_ref,
    STATE(345), 1,
      aux_sym_from_command_repeat1,
    STATE(402), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(930), 2,
      sym_allow_privileged,
      sym_pass_args,
  [9698] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(932), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9715] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [9732] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(934), 1,
      sym_expr,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(940), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(423), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9757] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(942), 1,
      anon_sym_PLUS,
    STATE(60), 1,
      sym_target_ref,
    STATE(345), 1,
      aux_sym_from_command_repeat1,
    STATE(402), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(930), 2,
      sym_allow_privileged,
      sym_pass_args,
  [9784] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(944), 1,
      sym_expr,
    ACTIONS(946), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(409), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9809] = 4,
    STATE(179), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(948), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9828] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      sym_path,
    STATE(265), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [9855] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(952), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9872] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(737), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [9889] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(954), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9904] = 4,
    STATE(109), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(897), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(956), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [9923] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(958), 1,
      sym_expr,
    ACTIONS(960), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(434), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9948] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(962), 1,
      sym_path,
    STATE(268), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(964), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [9969] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(966), 1,
      sym_expr,
    ACTIONS(968), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(386), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [9994] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(780), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [10011] = 4,
    STATE(266), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(970), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(972), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10030] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(974), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10047] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(976), 1,
      sym_path,
    STATE(293), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(964), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [10068] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(978), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10085] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(267), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10104] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(980), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10121] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(982), 1,
      sym_path,
    STATE(268), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(964), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [10142] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(984), 1,
      sym_path,
    STATE(268), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(964), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [10163] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(986), 1,
      sym_path,
    STATE(284), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(964), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [10184] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(988), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10201] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(279), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10220] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(784), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [10237] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(990), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [10254] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(992), 1,
      sym_expr,
    ACTIONS(994), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(373), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10279] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(309), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(996), 1,
      anon_sym_PLUS,
    STATE(79), 1,
      sym_target_ref,
    STATE(345), 1,
      aux_sym_from_command_repeat1,
    STATE(402), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(930), 2,
      sym_allow_privileged,
      sym_pass_args,
  [10306] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(998), 1,
      sym_path,
    STATE(265), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [10333] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10350] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1000), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10367] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(329), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10382] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1002), 1,
      sym_path,
    STATE(294), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(964), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [10403] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(1004), 1,
      sym_expr,
    ACTIONS(1006), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(375), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10428] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(347), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10443] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10460] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(417), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [10477] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    ACTIONS(1008), 1,
      sym_path,
    STATE(265), 1,
      aux_sym_copy_command_repeat2,
    STATE(505), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [10504] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1012), 1,
      anon_sym_SQUOTE,
    ACTIONS(1014), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(230), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10526] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(1016), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(401), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10548] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1018), 1,
      anon_sym_DQUOTE,
    ACTIONS(1020), 1,
      anon_sym_SQUOTE,
    ACTIONS(1022), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(211), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10570] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(1024), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(405), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10592] = 4,
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
  [10610] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1030), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1032), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10628] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1034), 1,
      anon_sym_DQUOTE,
    ACTIONS(1036), 1,
      anon_sym_SQUOTE,
    ACTIONS(1038), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(260), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10650] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1044), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(91), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10672] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1046), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      anon_sym_SQUOTE,
    ACTIONS(1050), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(286), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10694] = 6,
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
    STATE(352), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10716] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1018), 1,
      anon_sym_DQUOTE,
    ACTIONS(1020), 1,
      anon_sym_SQUOTE,
    ACTIONS(1058), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(219), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10738] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1060), 1,
      anon_sym_DQUOTE,
    ACTIONS(1062), 1,
      anon_sym_SQUOTE,
    ACTIONS(1064), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(53), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10760] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1046), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      anon_sym_SQUOTE,
    ACTIONS(1066), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(298), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10782] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    ACTIONS(1070), 1,
      anon_sym_SQUOTE,
    ACTIONS(1072), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(71), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10804] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10822] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(464), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10840] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10858] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1074), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10876] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(1078), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(391), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10898] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1046), 1,
      anon_sym_DQUOTE,
    ACTIONS(1048), 1,
      anon_sym_SQUOTE,
    ACTIONS(1080), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(299), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10920] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10938] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(472), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [10956] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1086), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(159), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [10978] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1088), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1090), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [10996] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1092), 1,
      anon_sym_DQUOTE,
    ACTIONS(1094), 1,
      anon_sym_SQUOTE,
    ACTIONS(1096), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(96), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11018] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(586), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11036] = 6,
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
    STATE(280), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11058] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    ACTIONS(1012), 1,
      anon_sym_SQUOTE,
    ACTIONS(1104), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(231), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11080] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(936), 1,
      anon_sym_DQUOTE,
    ACTIONS(938), 1,
      anon_sym_SQUOTE,
    ACTIONS(1106), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(384), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11102] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1108), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [11118] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    ACTIONS(1054), 1,
      anon_sym_SQUOTE,
    ACTIONS(1110), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(354), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11140] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1098), 1,
      anon_sym_DQUOTE,
    ACTIONS(1100), 1,
      anon_sym_SQUOTE,
    ACTIONS(1112), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(288), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11162] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1114), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1116), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11180] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1118), 1,
      anon_sym_PLUS,
    ACTIONS(1123), 1,
      anon_sym_DASH_DASHplatform,
    STATE(345), 1,
      aux_sym_from_command_repeat1,
    STATE(402), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1120), 2,
      sym_allow_privileged,
      sym_pass_args,
  [11204] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1126), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1128), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11222] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(642), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11240] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1018), 1,
      anon_sym_DQUOTE,
    ACTIONS(1020), 1,
      anon_sym_SQUOTE,
    ACTIONS(1130), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(218), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [11262] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1132), 1,
      sym_path,
    ACTIONS(1134), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1136), 1,
      sym_keep_ts,
    STATE(362), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(460), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11285] = 4,
    ACTIONS(1138), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1140), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11302] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(347), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(349), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [11319] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(735), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(737), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [11336] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1134), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1136), 1,
      sym_keep_ts,
    ACTIONS(1142), 1,
      sym_path,
    STATE(367), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(460), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11359] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1146), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [11376] = 4,
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
  [11393] = 4,
    ACTIONS(1152), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1154), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11410] = 4,
    ACTIONS(1156), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1158), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11427] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      aux_sym_shell_fragment_token3,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(419), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [11448] = 4,
    ACTIONS(1160), 1,
      anon_sym_EQ,
    STATE(337), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1162), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11465] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      aux_sym_shell_fragment_token3,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(390), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [11486] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [11503] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1134), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1136), 1,
      sym_keep_ts,
    ACTIONS(1164), 1,
      sym_path,
    STATE(366), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(460), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11526] = 4,
    ACTIONS(1166), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1168), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11543] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1170), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1172), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [11560] = 4,
    ACTIONS(1174), 1,
      anon_sym_EQ,
    STATE(347), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1176), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11577] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1178), 1,
      sym_path,
    ACTIONS(1180), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1183), 1,
      sym_keep_ts,
    STATE(366), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(460), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11600] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1134), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1136), 1,
      sym_keep_ts,
    ACTIONS(1186), 1,
      sym_path,
    STATE(366), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(460), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [11623] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      aux_sym_shell_fragment_token3,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(404), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [11644] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1188), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1190), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [11661] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(512), 1,
      aux_sym_shell_fragment_token3,
    STATE(287), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(425), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [11682] = 3,
    STATE(122), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1192), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11696] = 3,
    STATE(198), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1194), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11710] = 3,
    STATE(178), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1196), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11724] = 3,
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
  [11738] = 3,
    STATE(201), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1200), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11752] = 3,
    STATE(204), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1202), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11766] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(246), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [11784] = 3,
    STATE(194), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1206), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11798] = 3,
    STATE(192), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1208), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11812] = 3,
    STATE(190), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1210), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11826] = 3,
    STATE(188), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1212), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11840] = 3,
    STATE(164), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1214), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11854] = 3,
    STATE(182), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1216), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11868] = 3,
    STATE(135), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1218), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11882] = 3,
    STATE(185), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1220), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11896] = 3,
    STATE(104), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1222), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11910] = 3,
    STATE(181), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1224), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11924] = 3,
    STATE(177), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1226), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11938] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(246), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [11956] = 3,
    STATE(130), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1230), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11970] = 3,
    STATE(128), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1232), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11984] = 3,
    STATE(127), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1234), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11998] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1236), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12012] = 3,
    STATE(163), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1238), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12026] = 3,
    STATE(174), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1240), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12040] = 3,
    STATE(102), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1242), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12054] = 3,
    STATE(166), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1244), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12068] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(389), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [12086] = 3,
    STATE(187), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1248), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12100] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1250), 1,
      sym_identifier,
    STATE(412), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1252), 2,
      sym_global,
      sym_required,
  [12118] = 3,
    STATE(165), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1254), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12132] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1256), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [12146] = 3,
    STATE(344), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1258), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12160] = 3,
    STATE(170), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1260), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12174] = 3,
    STATE(171), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1262), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12188] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1264), 1,
      anon_sym_END,
    ACTIONS(1266), 1,
      anon_sym_ELSEIF,
    ACTIONS(1269), 1,
      anon_sym_ELSE,
    STATE(406), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12208] = 3,
    STATE(173), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1271), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12222] = 3,
    STATE(124), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1273), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12236] = 3,
    STATE(139), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1275), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12250] = 3,
    STATE(2), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1277), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12264] = 3,
    STATE(264), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1279), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12278] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1281), 1,
      sym_identifier,
    STATE(412), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1283), 2,
      sym_global,
      sym_required,
  [12296] = 3,
    STATE(175), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1286), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12310] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1288), 1,
      sym_identifier,
    STATE(437), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1252), 2,
      sym_global,
      sym_required,
  [12328] = 3,
    STATE(129), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1290), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12342] = 3,
    STATE(329), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1292), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12356] = 3,
    STATE(113), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1294), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12370] = 3,
    STATE(184), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1296), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12384] = 3,
    STATE(112), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1298), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12398] = 3,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1300), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12412] = 3,
    STATE(328), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1302), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12426] = 3,
    STATE(191), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1304), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12440] = 3,
    STATE(326), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1306), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12454] = 3,
    STATE(138), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1308), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12468] = 3,
    STATE(200), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1310), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12482] = 3,
    STATE(6), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1312), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12496] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1314), 1,
      anon_sym_END,
    ACTIONS(1316), 1,
      anon_sym_ELSEIF,
    ACTIONS(1318), 1,
      anon_sym_ELSE,
    STATE(406), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12516] = 3,
    STATE(205), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1320), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12530] = 3,
    STATE(110), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1322), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12544] = 3,
    STATE(317), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12558] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1316), 1,
      anon_sym_ELSEIF,
    ACTIONS(1326), 1,
      anon_sym_END,
    ACTIONS(1328), 1,
      anon_sym_ELSE,
    STATE(406), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12578] = 3,
    STATE(180), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1330), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12592] = 3,
    STATE(327), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1332), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12606] = 3,
    STATE(333), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1334), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12620] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1316), 1,
      anon_sym_ELSEIF,
    ACTIONS(1336), 1,
      anon_sym_END,
    ACTIONS(1338), 1,
      anon_sym_ELSE,
    STATE(431), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12640] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1316), 1,
      anon_sym_ELSEIF,
    ACTIONS(1340), 1,
      anon_sym_END,
    ACTIONS(1342), 1,
      anon_sym_ELSE,
    STATE(427), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [12660] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1344), 1,
      sym_identifier,
    STATE(412), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1252), 2,
      sym_global,
      sym_required,
  [12678] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1346), 1,
      sym_identifier,
    STATE(440), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1252), 2,
      sym_global,
      sym_required,
  [12696] = 3,
    STATE(169), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1348), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12710] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1350), 1,
      sym_identifier,
    STATE(412), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1252), 2,
      sym_global,
      sym_required,
  [12728] = 3,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1352), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12742] = 3,
    STATE(140), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1354), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12756] = 3,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1356), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12770] = 3,
    STATE(151), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1358), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12784] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1360), 1,
      sym_identifier,
    STATE(400), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1252), 2,
      sym_global,
      sym_required,
  [12802] = 3,
    STATE(145), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1362), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12816] = 3,
    STATE(136), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1364), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12830] = 3,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1366), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12844] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1368), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12858] = 3,
    STATE(119), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1370), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12872] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1372), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12886] = 3,
    STATE(183), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1374), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12900] = 3,
    STATE(141), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1376), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12914] = 3,
    STATE(106), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1378), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12928] = 3,
    STATE(103), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1380), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12942] = 3,
    STATE(107), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1382), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12956] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(897), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1384), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [12971] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(329), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12982] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(347), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12993] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1386), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1388), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [13008] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1390), 1,
      sym_version_major_minor,
    ACTIONS(1392), 1,
      sym_feature_flag,
    STATE(461), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13025] = 4,
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
  [13040] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1399), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [13055] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1405), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1403), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [13070] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1407), 1,
      sym_version_major_minor,
    ACTIONS(1409), 1,
      sym_feature_flag,
    STATE(461), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13087] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1411), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1413), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [13102] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1415), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [13115] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1417), 1,
      sym_version_major_minor,
    ACTIONS(1419), 1,
      sym_feature_flag,
    STATE(465), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13132] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1421), 1,
      anon_sym_PLUS,
    ACTIONS(1423), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13149] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1425), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1427), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [13164] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1429), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1431), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [13179] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(874), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(377), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [13194] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    STATE(547), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13208] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1433), 1,
      sym_image_name,
    STATE(615), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13222] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1435), 1,
      sym_image_name,
    STATE(290), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13236] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    STATE(472), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13250] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1437), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13261] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1439), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13272] = 2,
    ACTIONS(1441), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13281] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1443), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13292] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1445), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13303] = 2,
    ACTIONS(1447), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13312] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1449), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13323] = 2,
    ACTIONS(1451), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13332] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1453), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13343] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1455), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13354] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1457), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13365] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1459), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13376] = 2,
    ACTIONS(1461), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13385] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1463), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13396] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1465), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13407] = 2,
    ACTIONS(1467), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13416] = 2,
    ACTIONS(1469), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13425] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1471), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13436] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1473), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13447] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1475), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13458] = 2,
    ACTIONS(1477), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13467] = 2,
    ACTIONS(1479), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13476] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1481), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13487] = 2,
    ACTIONS(1483), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13496] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1485), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13507] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1487), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13518] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1489), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13529] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1491), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13540] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1493), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13551] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13562] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1497), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13573] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1499), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13584] = 2,
    ACTIONS(1501), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13593] = 2,
    ACTIONS(1503), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13602] = 2,
    ACTIONS(1505), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13611] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1507), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13622] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1509), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13633] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1511), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13644] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1513), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13655] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1515), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13666] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1517), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13677] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1519), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13688] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1521), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13699] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1523), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13710] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1525), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13721] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1527), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13732] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1529), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13743] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1531), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13754] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1533), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13765] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1535), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13776] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1537), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13787] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1539), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13798] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1541), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13809] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1543), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13820] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1545), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13831] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1547), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13842] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1549), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13853] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1551), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13864] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1553), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13875] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1555), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13886] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1557), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13897] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1559), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13908] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1561), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13919] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1563), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13930] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1565), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13941] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1567), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13952] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1569), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [13963] = 2,
    ACTIONS(1571), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13972] = 2,
    ACTIONS(1573), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13981] = 2,
    ACTIONS(1575), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [13990] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1577), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14001] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1579), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14012] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1581), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14023] = 2,
    ACTIONS(1583), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14032] = 2,
    ACTIONS(1585), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14041] = 2,
    ACTIONS(1587), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14050] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1589), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14061] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1591), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14072] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1593), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14083] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1595), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14094] = 2,
    ACTIONS(1597), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14103] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1599), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14114] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1601), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14125] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1603), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14136] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1605), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14147] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1607), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14158] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1609), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14169] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1611), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14180] = 2,
    ACTIONS(1613), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14189] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1615), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14200] = 2,
    ACTIONS(1617), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14209] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1619), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14220] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1621), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14231] = 2,
    ACTIONS(1623), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14240] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1625), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14251] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1627), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14262] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1629), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14273] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1631), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14284] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1633), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14295] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1635), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14306] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1637), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14317] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1639), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14328] = 2,
    ACTIONS(1641), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14337] = 2,
    ACTIONS(1643), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14346] = 2,
    ACTIONS(1645), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14355] = 2,
    ACTIONS(1647), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14364] = 2,
    ACTIONS(1649), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14373] = 2,
    ACTIONS(1651), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14382] = 2,
    ACTIONS(1653), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14391] = 2,
    ACTIONS(1655), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14400] = 2,
    ACTIONS(1657), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14409] = 2,
    ACTIONS(1659), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14418] = 2,
    ACTIONS(1661), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14427] = 2,
    ACTIONS(1663), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14436] = 2,
    ACTIONS(1665), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14445] = 2,
    ACTIONS(1667), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14454] = 2,
    ACTIONS(1669), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14463] = 2,
    ACTIONS(1671), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14472] = 2,
    ACTIONS(1673), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14481] = 2,
    ACTIONS(1675), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14490] = 2,
    ACTIONS(1677), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14499] = 2,
    ACTIONS(1679), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14508] = 2,
    ACTIONS(1681), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14517] = 2,
    ACTIONS(1683), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14526] = 2,
    ACTIONS(1685), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14535] = 2,
    ACTIONS(1687), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14544] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1689), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14555] = 2,
    ACTIONS(1691), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14564] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1693), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14575] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1695), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14586] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1697), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14597] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1699), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14608] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1701), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14619] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1703), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14630] = 2,
    ACTIONS(1705), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [14639] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1707), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14650] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1709), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14661] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1711), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14672] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1713), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14683] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1715), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14694] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1717), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14705] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1719), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14716] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1721), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14727] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1723), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14738] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1725), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14749] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1727), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14760] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1729), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14771] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1731), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 296,
  [SMALL_STATE(7)] = 370,
  [SMALL_STATE(8)] = 440,
  [SMALL_STATE(9)] = 510,
  [SMALL_STATE(10)] = 580,
  [SMALL_STATE(11)] = 650,
  [SMALL_STATE(12)] = 720,
  [SMALL_STATE(13)] = 790,
  [SMALL_STATE(14)] = 860,
  [SMALL_STATE(15)] = 930,
  [SMALL_STATE(16)] = 1000,
  [SMALL_STATE(17)] = 1070,
  [SMALL_STATE(18)] = 1140,
  [SMALL_STATE(19)] = 1210,
  [SMALL_STATE(20)] = 1280,
  [SMALL_STATE(21)] = 1350,
  [SMALL_STATE(22)] = 1420,
  [SMALL_STATE(23)] = 1490,
  [SMALL_STATE(24)] = 1560,
  [SMALL_STATE(25)] = 1630,
  [SMALL_STATE(26)] = 1700,
  [SMALL_STATE(27)] = 1770,
  [SMALL_STATE(28)] = 1840,
  [SMALL_STATE(29)] = 1910,
  [SMALL_STATE(30)] = 1980,
  [SMALL_STATE(31)] = 2050,
  [SMALL_STATE(32)] = 2120,
  [SMALL_STATE(33)] = 2190,
  [SMALL_STATE(34)] = 2260,
  [SMALL_STATE(35)] = 2330,
  [SMALL_STATE(36)] = 2400,
  [SMALL_STATE(37)] = 2441,
  [SMALL_STATE(38)] = 2492,
  [SMALL_STATE(39)] = 2530,
  [SMALL_STATE(40)] = 2578,
  [SMALL_STATE(41)] = 2613,
  [SMALL_STATE(42)] = 2662,
  [SMALL_STATE(43)] = 2697,
  [SMALL_STATE(44)] = 2746,
  [SMALL_STATE(45)] = 2788,
  [SMALL_STATE(46)] = 2834,
  [SMALL_STATE(47)] = 2880,
  [SMALL_STATE(48)] = 2933,
  [SMALL_STATE(49)] = 2986,
  [SMALL_STATE(50)] = 3039,
  [SMALL_STATE(51)] = 3092,
  [SMALL_STATE(52)] = 3128,
  [SMALL_STATE(53)] = 3164,
  [SMALL_STATE(54)] = 3196,
  [SMALL_STATE(55)] = 3228,
  [SMALL_STATE(56)] = 3260,
  [SMALL_STATE(57)] = 3296,
  [SMALL_STATE(58)] = 3332,
  [SMALL_STATE(59)] = 3364,
  [SMALL_STATE(60)] = 3404,
  [SMALL_STATE(61)] = 3440,
  [SMALL_STATE(62)] = 3480,
  [SMALL_STATE(63)] = 3516,
  [SMALL_STATE(64)] = 3552,
  [SMALL_STATE(65)] = 3588,
  [SMALL_STATE(66)] = 3624,
  [SMALL_STATE(67)] = 3653,
  [SMALL_STATE(68)] = 3686,
  [SMALL_STATE(69)] = 3721,
  [SMALL_STATE(70)] = 3756,
  [SMALL_STATE(71)] = 3790,
  [SMALL_STATE(72)] = 3820,
  [SMALL_STATE(73)] = 3854,
  [SMALL_STATE(74)] = 3888,
  [SMALL_STATE(75)] = 3922,
  [SMALL_STATE(76)] = 3952,
  [SMALL_STATE(77)] = 3986,
  [SMALL_STATE(78)] = 4020,
  [SMALL_STATE(79)] = 4050,
  [SMALL_STATE(80)] = 4084,
  [SMALL_STATE(81)] = 4118,
  [SMALL_STATE(82)] = 4148,
  [SMALL_STATE(83)] = 4178,
  [SMALL_STATE(84)] = 4208,
  [SMALL_STATE(85)] = 4238,
  [SMALL_STATE(86)] = 4272,
  [SMALL_STATE(87)] = 4302,
  [SMALL_STATE(88)] = 4332,
  [SMALL_STATE(89)] = 4362,
  [SMALL_STATE(90)] = 4396,
  [SMALL_STATE(91)] = 4426,
  [SMALL_STATE(92)] = 4456,
  [SMALL_STATE(93)] = 4488,
  [SMALL_STATE(94)] = 4522,
  [SMALL_STATE(95)] = 4552,
  [SMALL_STATE(96)] = 4586,
  [SMALL_STATE(97)] = 4616,
  [SMALL_STATE(98)] = 4650,
  [SMALL_STATE(99)] = 4682,
  [SMALL_STATE(100)] = 4723,
  [SMALL_STATE(101)] = 4754,
  [SMALL_STATE(102)] = 4787,
  [SMALL_STATE(103)] = 4816,
  [SMALL_STATE(104)] = 4845,
  [SMALL_STATE(105)] = 4874,
  [SMALL_STATE(106)] = 4903,
  [SMALL_STATE(107)] = 4932,
  [SMALL_STATE(108)] = 4961,
  [SMALL_STATE(109)] = 4990,
  [SMALL_STATE(110)] = 5019,
  [SMALL_STATE(111)] = 5048,
  [SMALL_STATE(112)] = 5077,
  [SMALL_STATE(113)] = 5106,
  [SMALL_STATE(114)] = 5135,
  [SMALL_STATE(115)] = 5180,
  [SMALL_STATE(116)] = 5209,
  [SMALL_STATE(117)] = 5242,
  [SMALL_STATE(118)] = 5271,
  [SMALL_STATE(119)] = 5300,
  [SMALL_STATE(120)] = 5329,
  [SMALL_STATE(121)] = 5362,
  [SMALL_STATE(122)] = 5407,
  [SMALL_STATE(123)] = 5436,
  [SMALL_STATE(124)] = 5465,
  [SMALL_STATE(125)] = 5494,
  [SMALL_STATE(126)] = 5523,
  [SMALL_STATE(127)] = 5552,
  [SMALL_STATE(128)] = 5581,
  [SMALL_STATE(129)] = 5610,
  [SMALL_STATE(130)] = 5639,
  [SMALL_STATE(131)] = 5668,
  [SMALL_STATE(132)] = 5697,
  [SMALL_STATE(133)] = 5726,
  [SMALL_STATE(134)] = 5755,
  [SMALL_STATE(135)] = 5784,
  [SMALL_STATE(136)] = 5813,
  [SMALL_STATE(137)] = 5842,
  [SMALL_STATE(138)] = 5871,
  [SMALL_STATE(139)] = 5900,
  [SMALL_STATE(140)] = 5929,
  [SMALL_STATE(141)] = 5958,
  [SMALL_STATE(142)] = 5987,
  [SMALL_STATE(143)] = 6020,
  [SMALL_STATE(144)] = 6051,
  [SMALL_STATE(145)] = 6096,
  [SMALL_STATE(146)] = 6125,
  [SMALL_STATE(147)] = 6158,
  [SMALL_STATE(148)] = 6187,
  [SMALL_STATE(149)] = 6216,
  [SMALL_STATE(150)] = 6261,
  [SMALL_STATE(151)] = 6290,
  [SMALL_STATE(152)] = 6319,
  [SMALL_STATE(153)] = 6349,
  [SMALL_STATE(154)] = 6377,
  [SMALL_STATE(155)] = 6405,
  [SMALL_STATE(156)] = 6435,
  [SMALL_STATE(157)] = 6463,
  [SMALL_STATE(158)] = 6491,
  [SMALL_STATE(159)] = 6519,
  [SMALL_STATE(160)] = 6547,
  [SMALL_STATE(161)] = 6575,
  [SMALL_STATE(162)] = 6605,
  [SMALL_STATE(163)] = 6633,
  [SMALL_STATE(164)] = 6660,
  [SMALL_STATE(165)] = 6687,
  [SMALL_STATE(166)] = 6714,
  [SMALL_STATE(167)] = 6741,
  [SMALL_STATE(168)] = 6768,
  [SMALL_STATE(169)] = 6795,
  [SMALL_STATE(170)] = 6822,
  [SMALL_STATE(171)] = 6849,
  [SMALL_STATE(172)] = 6876,
  [SMALL_STATE(173)] = 6913,
  [SMALL_STATE(174)] = 6940,
  [SMALL_STATE(175)] = 6967,
  [SMALL_STATE(176)] = 6994,
  [SMALL_STATE(177)] = 7021,
  [SMALL_STATE(178)] = 7048,
  [SMALL_STATE(179)] = 7075,
  [SMALL_STATE(180)] = 7102,
  [SMALL_STATE(181)] = 7129,
  [SMALL_STATE(182)] = 7156,
  [SMALL_STATE(183)] = 7183,
  [SMALL_STATE(184)] = 7210,
  [SMALL_STATE(185)] = 7237,
  [SMALL_STATE(186)] = 7264,
  [SMALL_STATE(187)] = 7291,
  [SMALL_STATE(188)] = 7318,
  [SMALL_STATE(189)] = 7345,
  [SMALL_STATE(190)] = 7372,
  [SMALL_STATE(191)] = 7399,
  [SMALL_STATE(192)] = 7426,
  [SMALL_STATE(193)] = 7453,
  [SMALL_STATE(194)] = 7480,
  [SMALL_STATE(195)] = 7507,
  [SMALL_STATE(196)] = 7534,
  [SMALL_STATE(197)] = 7561,
  [SMALL_STATE(198)] = 7588,
  [SMALL_STATE(199)] = 7615,
  [SMALL_STATE(200)] = 7642,
  [SMALL_STATE(201)] = 7669,
  [SMALL_STATE(202)] = 7696,
  [SMALL_STATE(203)] = 7723,
  [SMALL_STATE(204)] = 7750,
  [SMALL_STATE(205)] = 7777,
  [SMALL_STATE(206)] = 7804,
  [SMALL_STATE(207)] = 7846,
  [SMALL_STATE(208)] = 7888,
  [SMALL_STATE(209)] = 7930,
  [SMALL_STATE(210)] = 7972,
  [SMALL_STATE(211)] = 8009,
  [SMALL_STATE(212)] = 8034,
  [SMALL_STATE(213)] = 8059,
  [SMALL_STATE(214)] = 8096,
  [SMALL_STATE(215)] = 8133,
  [SMALL_STATE(216)] = 8158,
  [SMALL_STATE(217)] = 8183,
  [SMALL_STATE(218)] = 8222,
  [SMALL_STATE(219)] = 8247,
  [SMALL_STATE(220)] = 8272,
  [SMALL_STATE(221)] = 8306,
  [SMALL_STATE(222)] = 8330,
  [SMALL_STATE(223)] = 8362,
  [SMALL_STATE(224)] = 8394,
  [SMALL_STATE(225)] = 8426,
  [SMALL_STATE(226)] = 8458,
  [SMALL_STATE(227)] = 8492,
  [SMALL_STATE(228)] = 8524,
  [SMALL_STATE(229)] = 8548,
  [SMALL_STATE(230)] = 8580,
  [SMALL_STATE(231)] = 8604,
  [SMALL_STATE(232)] = 8628,
  [SMALL_STATE(233)] = 8660,
  [SMALL_STATE(234)] = 8692,
  [SMALL_STATE(235)] = 8716,
  [SMALL_STATE(236)] = 8749,
  [SMALL_STATE(237)] = 8782,
  [SMALL_STATE(238)] = 8815,
  [SMALL_STATE(239)] = 8850,
  [SMALL_STATE(240)] = 8883,
  [SMALL_STATE(241)] = 8912,
  [SMALL_STATE(242)] = 8945,
  [SMALL_STATE(243)] = 8977,
  [SMALL_STATE(244)] = 9009,
  [SMALL_STATE(245)] = 9041,
  [SMALL_STATE(246)] = 9073,
  [SMALL_STATE(247)] = 9099,
  [SMALL_STATE(248)] = 9131,
  [SMALL_STATE(249)] = 9163,
  [SMALL_STATE(250)] = 9195,
  [SMALL_STATE(251)] = 9220,
  [SMALL_STATE(252)] = 9245,
  [SMALL_STATE(253)] = 9270,
  [SMALL_STATE(254)] = 9295,
  [SMALL_STATE(255)] = 9316,
  [SMALL_STATE(256)] = 9345,
  [SMALL_STATE(257)] = 9370,
  [SMALL_STATE(258)] = 9399,
  [SMALL_STATE(259)] = 9421,
  [SMALL_STATE(260)] = 9441,
  [SMALL_STATE(261)] = 9461,
  [SMALL_STATE(262)] = 9481,
  [SMALL_STATE(263)] = 9501,
  [SMALL_STATE(264)] = 9520,
  [SMALL_STATE(265)] = 9541,
  [SMALL_STATE(266)] = 9568,
  [SMALL_STATE(267)] = 9587,
  [SMALL_STATE(268)] = 9614,
  [SMALL_STATE(269)] = 9635,
  [SMALL_STATE(270)] = 9654,
  [SMALL_STATE(271)] = 9671,
  [SMALL_STATE(272)] = 9698,
  [SMALL_STATE(273)] = 9715,
  [SMALL_STATE(274)] = 9732,
  [SMALL_STATE(275)] = 9757,
  [SMALL_STATE(276)] = 9784,
  [SMALL_STATE(277)] = 9809,
  [SMALL_STATE(278)] = 9828,
  [SMALL_STATE(279)] = 9855,
  [SMALL_STATE(280)] = 9872,
  [SMALL_STATE(281)] = 9889,
  [SMALL_STATE(282)] = 9904,
  [SMALL_STATE(283)] = 9923,
  [SMALL_STATE(284)] = 9948,
  [SMALL_STATE(285)] = 9969,
  [SMALL_STATE(286)] = 9994,
  [SMALL_STATE(287)] = 10011,
  [SMALL_STATE(288)] = 10030,
  [SMALL_STATE(289)] = 10047,
  [SMALL_STATE(290)] = 10068,
  [SMALL_STATE(291)] = 10085,
  [SMALL_STATE(292)] = 10104,
  [SMALL_STATE(293)] = 10121,
  [SMALL_STATE(294)] = 10142,
  [SMALL_STATE(295)] = 10163,
  [SMALL_STATE(296)] = 10184,
  [SMALL_STATE(297)] = 10201,
  [SMALL_STATE(298)] = 10220,
  [SMALL_STATE(299)] = 10237,
  [SMALL_STATE(300)] = 10254,
  [SMALL_STATE(301)] = 10279,
  [SMALL_STATE(302)] = 10306,
  [SMALL_STATE(303)] = 10333,
  [SMALL_STATE(304)] = 10350,
  [SMALL_STATE(305)] = 10367,
  [SMALL_STATE(306)] = 10382,
  [SMALL_STATE(307)] = 10403,
  [SMALL_STATE(308)] = 10428,
  [SMALL_STATE(309)] = 10443,
  [SMALL_STATE(310)] = 10460,
  [SMALL_STATE(311)] = 10477,
  [SMALL_STATE(312)] = 10504,
  [SMALL_STATE(313)] = 10526,
  [SMALL_STATE(314)] = 10548,
  [SMALL_STATE(315)] = 10570,
  [SMALL_STATE(316)] = 10592,
  [SMALL_STATE(317)] = 10610,
  [SMALL_STATE(318)] = 10628,
  [SMALL_STATE(319)] = 10650,
  [SMALL_STATE(320)] = 10672,
  [SMALL_STATE(321)] = 10694,
  [SMALL_STATE(322)] = 10716,
  [SMALL_STATE(323)] = 10738,
  [SMALL_STATE(324)] = 10760,
  [SMALL_STATE(325)] = 10782,
  [SMALL_STATE(326)] = 10804,
  [SMALL_STATE(327)] = 10822,
  [SMALL_STATE(328)] = 10840,
  [SMALL_STATE(329)] = 10858,
  [SMALL_STATE(330)] = 10876,
  [SMALL_STATE(331)] = 10898,
  [SMALL_STATE(332)] = 10920,
  [SMALL_STATE(333)] = 10938,
  [SMALL_STATE(334)] = 10956,
  [SMALL_STATE(335)] = 10978,
  [SMALL_STATE(336)] = 10996,
  [SMALL_STATE(337)] = 11018,
  [SMALL_STATE(338)] = 11036,
  [SMALL_STATE(339)] = 11058,
  [SMALL_STATE(340)] = 11080,
  [SMALL_STATE(341)] = 11102,
  [SMALL_STATE(342)] = 11118,
  [SMALL_STATE(343)] = 11140,
  [SMALL_STATE(344)] = 11162,
  [SMALL_STATE(345)] = 11180,
  [SMALL_STATE(346)] = 11204,
  [SMALL_STATE(347)] = 11222,
  [SMALL_STATE(348)] = 11240,
  [SMALL_STATE(349)] = 11262,
  [SMALL_STATE(350)] = 11285,
  [SMALL_STATE(351)] = 11302,
  [SMALL_STATE(352)] = 11319,
  [SMALL_STATE(353)] = 11336,
  [SMALL_STATE(354)] = 11359,
  [SMALL_STATE(355)] = 11376,
  [SMALL_STATE(356)] = 11393,
  [SMALL_STATE(357)] = 11410,
  [SMALL_STATE(358)] = 11427,
  [SMALL_STATE(359)] = 11448,
  [SMALL_STATE(360)] = 11465,
  [SMALL_STATE(361)] = 11486,
  [SMALL_STATE(362)] = 11503,
  [SMALL_STATE(363)] = 11526,
  [SMALL_STATE(364)] = 11543,
  [SMALL_STATE(365)] = 11560,
  [SMALL_STATE(366)] = 11577,
  [SMALL_STATE(367)] = 11600,
  [SMALL_STATE(368)] = 11623,
  [SMALL_STATE(369)] = 11644,
  [SMALL_STATE(370)] = 11661,
  [SMALL_STATE(371)] = 11682,
  [SMALL_STATE(372)] = 11696,
  [SMALL_STATE(373)] = 11710,
  [SMALL_STATE(374)] = 11724,
  [SMALL_STATE(375)] = 11738,
  [SMALL_STATE(376)] = 11752,
  [SMALL_STATE(377)] = 11766,
  [SMALL_STATE(378)] = 11784,
  [SMALL_STATE(379)] = 11798,
  [SMALL_STATE(380)] = 11812,
  [SMALL_STATE(381)] = 11826,
  [SMALL_STATE(382)] = 11840,
  [SMALL_STATE(383)] = 11854,
  [SMALL_STATE(384)] = 11868,
  [SMALL_STATE(385)] = 11882,
  [SMALL_STATE(386)] = 11896,
  [SMALL_STATE(387)] = 11910,
  [SMALL_STATE(388)] = 11924,
  [SMALL_STATE(389)] = 11938,
  [SMALL_STATE(390)] = 11956,
  [SMALL_STATE(391)] = 11970,
  [SMALL_STATE(392)] = 11984,
  [SMALL_STATE(393)] = 11998,
  [SMALL_STATE(394)] = 12012,
  [SMALL_STATE(395)] = 12026,
  [SMALL_STATE(396)] = 12040,
  [SMALL_STATE(397)] = 12054,
  [SMALL_STATE(398)] = 12068,
  [SMALL_STATE(399)] = 12086,
  [SMALL_STATE(400)] = 12100,
  [SMALL_STATE(401)] = 12118,
  [SMALL_STATE(402)] = 12132,
  [SMALL_STATE(403)] = 12146,
  [SMALL_STATE(404)] = 12160,
  [SMALL_STATE(405)] = 12174,
  [SMALL_STATE(406)] = 12188,
  [SMALL_STATE(407)] = 12208,
  [SMALL_STATE(408)] = 12222,
  [SMALL_STATE(409)] = 12236,
  [SMALL_STATE(410)] = 12250,
  [SMALL_STATE(411)] = 12264,
  [SMALL_STATE(412)] = 12278,
  [SMALL_STATE(413)] = 12296,
  [SMALL_STATE(414)] = 12310,
  [SMALL_STATE(415)] = 12328,
  [SMALL_STATE(416)] = 12342,
  [SMALL_STATE(417)] = 12356,
  [SMALL_STATE(418)] = 12370,
  [SMALL_STATE(419)] = 12384,
  [SMALL_STATE(420)] = 12398,
  [SMALL_STATE(421)] = 12412,
  [SMALL_STATE(422)] = 12426,
  [SMALL_STATE(423)] = 12440,
  [SMALL_STATE(424)] = 12454,
  [SMALL_STATE(425)] = 12468,
  [SMALL_STATE(426)] = 12482,
  [SMALL_STATE(427)] = 12496,
  [SMALL_STATE(428)] = 12516,
  [SMALL_STATE(429)] = 12530,
  [SMALL_STATE(430)] = 12544,
  [SMALL_STATE(431)] = 12558,
  [SMALL_STATE(432)] = 12578,
  [SMALL_STATE(433)] = 12592,
  [SMALL_STATE(434)] = 12606,
  [SMALL_STATE(435)] = 12620,
  [SMALL_STATE(436)] = 12640,
  [SMALL_STATE(437)] = 12660,
  [SMALL_STATE(438)] = 12678,
  [SMALL_STATE(439)] = 12696,
  [SMALL_STATE(440)] = 12710,
  [SMALL_STATE(441)] = 12728,
  [SMALL_STATE(442)] = 12742,
  [SMALL_STATE(443)] = 12756,
  [SMALL_STATE(444)] = 12770,
  [SMALL_STATE(445)] = 12784,
  [SMALL_STATE(446)] = 12802,
  [SMALL_STATE(447)] = 12816,
  [SMALL_STATE(448)] = 12830,
  [SMALL_STATE(449)] = 12844,
  [SMALL_STATE(450)] = 12858,
  [SMALL_STATE(451)] = 12872,
  [SMALL_STATE(452)] = 12886,
  [SMALL_STATE(453)] = 12900,
  [SMALL_STATE(454)] = 12914,
  [SMALL_STATE(455)] = 12928,
  [SMALL_STATE(456)] = 12942,
  [SMALL_STATE(457)] = 12956,
  [SMALL_STATE(458)] = 12971,
  [SMALL_STATE(459)] = 12982,
  [SMALL_STATE(460)] = 12993,
  [SMALL_STATE(461)] = 13008,
  [SMALL_STATE(462)] = 13025,
  [SMALL_STATE(463)] = 13040,
  [SMALL_STATE(464)] = 13055,
  [SMALL_STATE(465)] = 13070,
  [SMALL_STATE(466)] = 13087,
  [SMALL_STATE(467)] = 13102,
  [SMALL_STATE(468)] = 13115,
  [SMALL_STATE(469)] = 13132,
  [SMALL_STATE(470)] = 13149,
  [SMALL_STATE(471)] = 13164,
  [SMALL_STATE(472)] = 13179,
  [SMALL_STATE(473)] = 13194,
  [SMALL_STATE(474)] = 13208,
  [SMALL_STATE(475)] = 13222,
  [SMALL_STATE(476)] = 13236,
  [SMALL_STATE(477)] = 13250,
  [SMALL_STATE(478)] = 13261,
  [SMALL_STATE(479)] = 13272,
  [SMALL_STATE(480)] = 13281,
  [SMALL_STATE(481)] = 13292,
  [SMALL_STATE(482)] = 13303,
  [SMALL_STATE(483)] = 13312,
  [SMALL_STATE(484)] = 13323,
  [SMALL_STATE(485)] = 13332,
  [SMALL_STATE(486)] = 13343,
  [SMALL_STATE(487)] = 13354,
  [SMALL_STATE(488)] = 13365,
  [SMALL_STATE(489)] = 13376,
  [SMALL_STATE(490)] = 13385,
  [SMALL_STATE(491)] = 13396,
  [SMALL_STATE(492)] = 13407,
  [SMALL_STATE(493)] = 13416,
  [SMALL_STATE(494)] = 13425,
  [SMALL_STATE(495)] = 13436,
  [SMALL_STATE(496)] = 13447,
  [SMALL_STATE(497)] = 13458,
  [SMALL_STATE(498)] = 13467,
  [SMALL_STATE(499)] = 13476,
  [SMALL_STATE(500)] = 13487,
  [SMALL_STATE(501)] = 13496,
  [SMALL_STATE(502)] = 13507,
  [SMALL_STATE(503)] = 13518,
  [SMALL_STATE(504)] = 13529,
  [SMALL_STATE(505)] = 13540,
  [SMALL_STATE(506)] = 13551,
  [SMALL_STATE(507)] = 13562,
  [SMALL_STATE(508)] = 13573,
  [SMALL_STATE(509)] = 13584,
  [SMALL_STATE(510)] = 13593,
  [SMALL_STATE(511)] = 13602,
  [SMALL_STATE(512)] = 13611,
  [SMALL_STATE(513)] = 13622,
  [SMALL_STATE(514)] = 13633,
  [SMALL_STATE(515)] = 13644,
  [SMALL_STATE(516)] = 13655,
  [SMALL_STATE(517)] = 13666,
  [SMALL_STATE(518)] = 13677,
  [SMALL_STATE(519)] = 13688,
  [SMALL_STATE(520)] = 13699,
  [SMALL_STATE(521)] = 13710,
  [SMALL_STATE(522)] = 13721,
  [SMALL_STATE(523)] = 13732,
  [SMALL_STATE(524)] = 13743,
  [SMALL_STATE(525)] = 13754,
  [SMALL_STATE(526)] = 13765,
  [SMALL_STATE(527)] = 13776,
  [SMALL_STATE(528)] = 13787,
  [SMALL_STATE(529)] = 13798,
  [SMALL_STATE(530)] = 13809,
  [SMALL_STATE(531)] = 13820,
  [SMALL_STATE(532)] = 13831,
  [SMALL_STATE(533)] = 13842,
  [SMALL_STATE(534)] = 13853,
  [SMALL_STATE(535)] = 13864,
  [SMALL_STATE(536)] = 13875,
  [SMALL_STATE(537)] = 13886,
  [SMALL_STATE(538)] = 13897,
  [SMALL_STATE(539)] = 13908,
  [SMALL_STATE(540)] = 13919,
  [SMALL_STATE(541)] = 13930,
  [SMALL_STATE(542)] = 13941,
  [SMALL_STATE(543)] = 13952,
  [SMALL_STATE(544)] = 13963,
  [SMALL_STATE(545)] = 13972,
  [SMALL_STATE(546)] = 13981,
  [SMALL_STATE(547)] = 13990,
  [SMALL_STATE(548)] = 14001,
  [SMALL_STATE(549)] = 14012,
  [SMALL_STATE(550)] = 14023,
  [SMALL_STATE(551)] = 14032,
  [SMALL_STATE(552)] = 14041,
  [SMALL_STATE(553)] = 14050,
  [SMALL_STATE(554)] = 14061,
  [SMALL_STATE(555)] = 14072,
  [SMALL_STATE(556)] = 14083,
  [SMALL_STATE(557)] = 14094,
  [SMALL_STATE(558)] = 14103,
  [SMALL_STATE(559)] = 14114,
  [SMALL_STATE(560)] = 14125,
  [SMALL_STATE(561)] = 14136,
  [SMALL_STATE(562)] = 14147,
  [SMALL_STATE(563)] = 14158,
  [SMALL_STATE(564)] = 14169,
  [SMALL_STATE(565)] = 14180,
  [SMALL_STATE(566)] = 14189,
  [SMALL_STATE(567)] = 14200,
  [SMALL_STATE(568)] = 14209,
  [SMALL_STATE(569)] = 14220,
  [SMALL_STATE(570)] = 14231,
  [SMALL_STATE(571)] = 14240,
  [SMALL_STATE(572)] = 14251,
  [SMALL_STATE(573)] = 14262,
  [SMALL_STATE(574)] = 14273,
  [SMALL_STATE(575)] = 14284,
  [SMALL_STATE(576)] = 14295,
  [SMALL_STATE(577)] = 14306,
  [SMALL_STATE(578)] = 14317,
  [SMALL_STATE(579)] = 14328,
  [SMALL_STATE(580)] = 14337,
  [SMALL_STATE(581)] = 14346,
  [SMALL_STATE(582)] = 14355,
  [SMALL_STATE(583)] = 14364,
  [SMALL_STATE(584)] = 14373,
  [SMALL_STATE(585)] = 14382,
  [SMALL_STATE(586)] = 14391,
  [SMALL_STATE(587)] = 14400,
  [SMALL_STATE(588)] = 14409,
  [SMALL_STATE(589)] = 14418,
  [SMALL_STATE(590)] = 14427,
  [SMALL_STATE(591)] = 14436,
  [SMALL_STATE(592)] = 14445,
  [SMALL_STATE(593)] = 14454,
  [SMALL_STATE(594)] = 14463,
  [SMALL_STATE(595)] = 14472,
  [SMALL_STATE(596)] = 14481,
  [SMALL_STATE(597)] = 14490,
  [SMALL_STATE(598)] = 14499,
  [SMALL_STATE(599)] = 14508,
  [SMALL_STATE(600)] = 14517,
  [SMALL_STATE(601)] = 14526,
  [SMALL_STATE(602)] = 14535,
  [SMALL_STATE(603)] = 14544,
  [SMALL_STATE(604)] = 14555,
  [SMALL_STATE(605)] = 14564,
  [SMALL_STATE(606)] = 14575,
  [SMALL_STATE(607)] = 14586,
  [SMALL_STATE(608)] = 14597,
  [SMALL_STATE(609)] = 14608,
  [SMALL_STATE(610)] = 14619,
  [SMALL_STATE(611)] = 14630,
  [SMALL_STATE(612)] = 14639,
  [SMALL_STATE(613)] = 14650,
  [SMALL_STATE(614)] = 14661,
  [SMALL_STATE(615)] = 14672,
  [SMALL_STATE(616)] = 14683,
  [SMALL_STATE(617)] = 14694,
  [SMALL_STATE(618)] = 14705,
  [SMALL_STATE(619)] = 14716,
  [SMALL_STATE(620)] = 14727,
  [SMALL_STATE(621)] = 14738,
  [SMALL_STATE(622)] = 14749,
  [SMALL_STATE(623)] = 14760,
  [SMALL_STATE(624)] = 14771,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(414),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(214),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(47),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(236),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(247),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(618),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(244),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(619),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(144),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(289),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(37),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(620),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(10),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(208),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 35),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 35),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 24),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 35),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 35),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(295),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(43),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(438),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(210),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(48),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(237),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(243),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(553),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(245),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(478),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(149),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(306),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(41),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(549),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(22),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(206),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(582),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(54),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(504),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(63),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(489),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(90),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(557),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(94),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(483),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(85),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 39),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 39),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(74),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 26),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(216),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(510),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(509),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(611),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 25),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 23),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 54),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 54),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 28),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 30),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 30),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 31),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 31),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 36),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 37),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 37),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 38),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 52),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 52),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 53),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 53),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 40),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 40),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 42),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 42),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 43),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 43),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 44),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 44),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 45),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 45),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 52),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 52),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 54),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 54),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 48),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 48),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 50),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 50),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 49),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 49),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(234),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(551),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(552),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(304),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(484),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(482),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(579),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(511),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(550),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(445),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(624),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(468),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(617),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(500),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(272),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(479),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(498),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [828] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(281),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(583),
  [834] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41), SHIFT_REPEAT(584),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 41),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(576),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(497),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(493),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(492),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(544),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(500),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(341),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(479),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [907] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(457),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(613),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 22), SHIFT_REPEAT(473),
  [916] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(266),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(335),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 51),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 29),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 55),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(402),
  [1123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(611),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 47),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 47),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(565),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(460),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34),
  [1266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34), SHIFT_REPEAT(238),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 34),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(467),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(461),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 32),
  [1401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 32),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 33),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [1473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [1677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1715] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
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
