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
#define STATE_COUNT 748
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 0
#define TOKEN_COUNT 101
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 62

enum ts_symbol_identifiers {
  anon_sym_ARG = 1,
  anon_sym_EQ = 2,
  anon_sym_BUILD = 3,
  anon_sym_FROM = 4,
  anon_sym_PROJECT = 5,
  anon_sym_SLASH = 6,
  anon_sym_COLON = 7,
  anon_sym_VERSION = 8,
  anon_sym_CACHE = 9,
  anon_sym_COPY = 10,
  anon_sym_DO = 11,
  anon_sym_FOR = 12,
  anon_sym_IN = 13,
  anon_sym_END = 14,
  anon_sym_FROMDOCKERFILE = 15,
  anon_sym_FUNCTION = 16,
  anon_sym_GIT = 17,
  anon_sym_CLONE = 18,
  anon_sym_IF = 19,
  anon_sym_ELSEIF = 20,
  anon_sym_ELSE = 21,
  anon_sym_LET = 22,
  anon_sym_LOCALLY = 23,
  anon_sym_RUN = 24,
  anon_sym_DASH_DASH = 25,
  anon_sym_SAVEARTIFACT = 26,
  anon_sym_ASLOCAL = 27,
  anon_sym_SAVEIMAGE = 28,
  anon_sym_SET = 29,
  anon_sym_TRY = 30,
  anon_sym_FINALLY = 31,
  anon_sym_WAIT = 32,
  anon_sym_WITHDOCKER = 33,
  sym_expr = 34,
  anon_sym_PLUS = 35,
  sym_identifier = 36,
  anon_sym_COLON2 = 37,
  anon_sym_AT = 38,
  sym_image_name = 39,
  sym_image_tag = 40,
  sym_image_digest = 41,
  sym_immediate_identifier = 42,
  sym_path = 43,
  aux_sym_shell_fragment_token1 = 44,
  aux_sym_shell_fragment_token2 = 45,
  aux_sym_shell_fragment_token3 = 46,
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  sym_version_major_minor = 49,
  sym_allow_privileged = 50,
  anon_sym_DASH_DASHbranch = 51,
  aux_sym_branch_token1 = 52,
  anon_sym_DASH_DASH2 = 53,
  anon_sym_DASH_DASHcache_DASHfrom = 54,
  sym_cache_hint = 55,
  anon_sym_DASH_DASHchmod = 56,
  anon_sym_DASH_DASHchown = 57,
  anon_sym_DASH_DASHcompose = 58,
  sym_dir = 59,
  anon_sym_DASH_DASHbuild_DASHarg = 60,
  anon_sym_DASHf = 61,
  anon_sym_DASH_DASHtarget = 62,
  sym_entrypoint = 63,
  sym_feature_flag = 64,
  sym_force = 65,
  sym_global = 66,
  anon_sym_DASH_DASHid = 67,
  sym_if_exists = 68,
  sym_keep_own = 69,
  sym_keep_ts = 70,
  anon_sym_DASH_DASHload = 71,
  anon_sym_DASH_DASHmount = 72,
  sym_network_none = 73,
  sym_no_cache = 74,
  sym_pass_args = 75,
  sym_persist = 76,
  anon_sym_DASH_DASHplatform = 77,
  sym_privileged = 78,
  anon_sym_DASH_DASHpull = 79,
  sym_push = 80,
  sym_required = 81,
  anon_sym_DASH_DASHsecret = 82,
  anon_sym_DASH_DASHsep = 83,
  anon_sym_DASH_DASHservice = 84,
  anon_sym_DASH_DASHsharing = 85,
  sym_ssh = 86,
  sym_symlink_no_follow = 87,
  anon_sym_DQUOTE = 88,
  aux_sym_double_quoted_string_token1 = 89,
  anon_sym_SQUOTE = 90,
  aux_sym_single_quoted_string_token1 = 91,
  sym_unquoted_string = 92,
  sym_line_continuation = 93,
  sym_comment = 94,
  sym_line_continuation_comment = 95,
  anon_sym_LF = 96,
  anon_sym_CRn = 97,
  anon_sym_FF = 98,
  sym__indent = 99,
  sym__dedent = 100,
  sym_source_file = 101,
  sym_arg_command = 102,
  sym_from_command = 103,
  sym_project_command = 104,
  sym_target = 105,
  sym_version_command = 106,
  sym_cache_command = 107,
  sym_copy_command = 108,
  sym_do_command = 109,
  sym_for_command = 110,
  sym_from_dockerfile_command = 111,
  sym_function_command = 112,
  sym_git_clone_command = 113,
  sym_if_command = 114,
  sym_let_command = 115,
  sym_locally_command = 116,
  sym_run_command = 117,
  sym_save_artifact_command = 118,
  sym_save_image_command = 119,
  sym_set_command = 120,
  sym_try_command = 121,
  sym_wait_command = 122,
  sym_with_docker_command = 123,
  aux_sym__target_block = 124,
  sym__conditional_block = 125,
  sym_else_if_block = 126,
  sym_else_block = 127,
  sym_function_ref = 128,
  sym_image_spec = 129,
  sym_shell_fragment = 130,
  sym_target_ref = 131,
  sym_target_artifact = 132,
  sym_target_artifact_build_args = 133,
  sym_branch = 134,
  sym_build_arg = 135,
  sym_cache_from = 136,
  sym_chmod = 137,
  sym_chown = 138,
  sym_compose = 139,
  sym_docker_build_arg = 140,
  sym_docker_file = 141,
  sym_docker_target = 142,
  sym_id = 143,
  sym_load = 144,
  sym_mount = 145,
  sym_platform = 146,
  sym_pull = 147,
  sym_secret = 148,
  sym_sep = 149,
  sym_service = 150,
  sym_sharing = 151,
  sym__string = 152,
  sym_double_quoted_string = 153,
  sym_single_quoted_string = 154,
  sym__eol = 155,
  aux_sym_source_file_repeat1 = 156,
  aux_sym_arg_command_repeat1 = 157,
  aux_sym_build_command_repeat2 = 158,
  aux_sym_from_command_repeat1 = 159,
  aux_sym_version_command_repeat1 = 160,
  aux_sym_cache_command_repeat1 = 161,
  aux_sym_copy_command_repeat1 = 162,
  aux_sym_copy_command_repeat2 = 163,
  aux_sym_do_command_repeat1 = 164,
  aux_sym_for_command_repeat1 = 165,
  aux_sym_for_command_repeat2 = 166,
  aux_sym_from_dockerfile_command_repeat1 = 167,
  aux_sym_git_clone_command_repeat1 = 168,
  aux_sym_if_command_repeat1 = 169,
  aux_sym_run_command_repeat1 = 170,
  aux_sym_save_artifact_command_repeat1 = 171,
  aux_sym_save_image_command_repeat1 = 172,
  aux_sym_save_image_command_repeat2 = 173,
  aux_sym_try_command_repeat1 = 174,
  aux_sym_with_docker_command_repeat1 = 175,
  aux_sym__conditional_block_repeat1 = 176,
  aux_sym_shell_fragment_repeat1 = 177,
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
  [anon_sym_CACHE] = "CACHE",
  [anon_sym_COPY] = "COPY",
  [anon_sym_DO] = "DO",
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_END] = "END",
  [anon_sym_FROMDOCKERFILE] = "FROM DOCKERFILE",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_GIT] = "GIT",
  [anon_sym_CLONE] = "CLONE",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_LET] = "LET",
  [anon_sym_LOCALLY] = "LOCALLY",
  [anon_sym_RUN] = "RUN",
  [anon_sym_DASH_DASH] = " -- ",
  [anon_sym_SAVEARTIFACT] = "SAVE ARTIFACT",
  [anon_sym_ASLOCAL] = "AS LOCAL",
  [anon_sym_SAVEIMAGE] = "SAVE IMAGE",
  [anon_sym_SET] = "SET",
  [anon_sym_TRY] = "TRY",
  [anon_sym_FINALLY] = "FINALLY",
  [anon_sym_WAIT] = "WAIT",
  [anon_sym_WITHDOCKER] = "WITH DOCKER",
  [sym_expr] = "expr",
  [anon_sym_PLUS] = "+",
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
  [anon_sym_DASH_DASHid] = "--id",
  [sym_if_exists] = "if_exists",
  [sym_keep_own] = "keep_own",
  [sym_keep_ts] = "keep_ts",
  [anon_sym_DASH_DASHload] = "--load",
  [anon_sym_DASH_DASHmount] = "--mount",
  [sym_network_none] = "network_none",
  [sym_no_cache] = "no_cache",
  [sym_pass_args] = "pass_args",
  [sym_persist] = "persist",
  [anon_sym_DASH_DASHplatform] = "--platform",
  [sym_privileged] = "privileged",
  [anon_sym_DASH_DASHpull] = "--pull",
  [sym_push] = "push",
  [sym_required] = "required",
  [anon_sym_DASH_DASHsecret] = "--secret",
  [anon_sym_DASH_DASHsep] = "--sep",
  [anon_sym_DASH_DASHservice] = "--service",
  [anon_sym_DASH_DASHsharing] = "--sharing",
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
  [sym_cache_command] = "cache_command",
  [sym_copy_command] = "copy_command",
  [sym_do_command] = "do_command",
  [sym_for_command] = "for_command",
  [sym_from_dockerfile_command] = "from_dockerfile_command",
  [sym_function_command] = "function_command",
  [sym_git_clone_command] = "git_clone_command",
  [sym_if_command] = "if_command",
  [sym_let_command] = "let_command",
  [sym_locally_command] = "locally_command",
  [sym_run_command] = "run_command",
  [sym_save_artifact_command] = "save_artifact_command",
  [sym_save_image_command] = "save_image_command",
  [sym_set_command] = "set_command",
  [sym_try_command] = "try_command",
  [sym_wait_command] = "wait_command",
  [sym_with_docker_command] = "with_docker_command",
  [aux_sym__target_block] = "_target_block",
  [sym__conditional_block] = "_conditional_block",
  [sym_else_if_block] = "else_if_block",
  [sym_else_block] = "else_block",
  [sym_function_ref] = "function_ref",
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
  [sym_id] = "id",
  [sym_load] = "load",
  [sym_mount] = "mount",
  [sym_platform] = "platform",
  [sym_pull] = "pull",
  [sym_secret] = "secret",
  [sym_sep] = "sep",
  [sym_service] = "service",
  [sym_sharing] = "sharing",
  [sym__string] = "_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym__eol] = "_eol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arg_command_repeat1] = "arg_command_repeat1",
  [aux_sym_build_command_repeat2] = "build_command_repeat2",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_cache_command_repeat1] = "cache_command_repeat1",
  [aux_sym_copy_command_repeat1] = "copy_command_repeat1",
  [aux_sym_copy_command_repeat2] = "copy_command_repeat2",
  [aux_sym_do_command_repeat1] = "do_command_repeat1",
  [aux_sym_for_command_repeat1] = "for_command_repeat1",
  [aux_sym_for_command_repeat2] = "for_command_repeat2",
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_run_command_repeat1] = "run_command_repeat1",
  [aux_sym_save_artifact_command_repeat1] = "save_artifact_command_repeat1",
  [aux_sym_save_image_command_repeat1] = "save_image_command_repeat1",
  [aux_sym_save_image_command_repeat2] = "save_image_command_repeat2",
  [aux_sym_try_command_repeat1] = "try_command_repeat1",
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
  [anon_sym_CACHE] = anon_sym_CACHE,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_FROMDOCKERFILE] = anon_sym_FROMDOCKERFILE,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_GIT] = anon_sym_GIT,
  [anon_sym_CLONE] = anon_sym_CLONE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_LOCALLY] = anon_sym_LOCALLY,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_SAVEARTIFACT] = anon_sym_SAVEARTIFACT,
  [anon_sym_ASLOCAL] = anon_sym_ASLOCAL,
  [anon_sym_SAVEIMAGE] = anon_sym_SAVEIMAGE,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_TRY] = anon_sym_TRY,
  [anon_sym_FINALLY] = anon_sym_FINALLY,
  [anon_sym_WAIT] = anon_sym_WAIT,
  [anon_sym_WITHDOCKER] = anon_sym_WITHDOCKER,
  [sym_expr] = sym_expr,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [anon_sym_DASH_DASHid] = anon_sym_DASH_DASHid,
  [sym_if_exists] = sym_if_exists,
  [sym_keep_own] = sym_keep_own,
  [sym_keep_ts] = sym_keep_ts,
  [anon_sym_DASH_DASHload] = anon_sym_DASH_DASHload,
  [anon_sym_DASH_DASHmount] = anon_sym_DASH_DASHmount,
  [sym_network_none] = sym_network_none,
  [sym_no_cache] = sym_no_cache,
  [sym_pass_args] = sym_pass_args,
  [sym_persist] = sym_persist,
  [anon_sym_DASH_DASHplatform] = anon_sym_DASH_DASHplatform,
  [sym_privileged] = sym_privileged,
  [anon_sym_DASH_DASHpull] = anon_sym_DASH_DASHpull,
  [sym_push] = sym_push,
  [sym_required] = sym_required,
  [anon_sym_DASH_DASHsecret] = anon_sym_DASH_DASHsecret,
  [anon_sym_DASH_DASHsep] = anon_sym_DASH_DASHsep,
  [anon_sym_DASH_DASHservice] = anon_sym_DASH_DASHservice,
  [anon_sym_DASH_DASHsharing] = anon_sym_DASH_DASHsharing,
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
  [sym_cache_command] = sym_cache_command,
  [sym_copy_command] = sym_copy_command,
  [sym_do_command] = sym_do_command,
  [sym_for_command] = sym_for_command,
  [sym_from_dockerfile_command] = sym_from_dockerfile_command,
  [sym_function_command] = sym_function_command,
  [sym_git_clone_command] = sym_git_clone_command,
  [sym_if_command] = sym_if_command,
  [sym_let_command] = sym_let_command,
  [sym_locally_command] = sym_locally_command,
  [sym_run_command] = sym_run_command,
  [sym_save_artifact_command] = sym_save_artifact_command,
  [sym_save_image_command] = sym_save_image_command,
  [sym_set_command] = sym_set_command,
  [sym_try_command] = sym_try_command,
  [sym_wait_command] = sym_wait_command,
  [sym_with_docker_command] = sym_with_docker_command,
  [aux_sym__target_block] = aux_sym__target_block,
  [sym__conditional_block] = sym__conditional_block,
  [sym_else_if_block] = sym_else_if_block,
  [sym_else_block] = sym_else_block,
  [sym_function_ref] = sym_function_ref,
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
  [sym_id] = sym_id,
  [sym_load] = sym_load,
  [sym_mount] = sym_mount,
  [sym_platform] = sym_platform,
  [sym_pull] = sym_pull,
  [sym_secret] = sym_secret,
  [sym_sep] = sym_sep,
  [sym_service] = sym_service,
  [sym_sharing] = sym_sharing,
  [sym__string] = sym__string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym__eol] = sym__eol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arg_command_repeat1] = aux_sym_arg_command_repeat1,
  [aux_sym_build_command_repeat2] = aux_sym_build_command_repeat2,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_cache_command_repeat1] = aux_sym_cache_command_repeat1,
  [aux_sym_copy_command_repeat1] = aux_sym_copy_command_repeat1,
  [aux_sym_copy_command_repeat2] = aux_sym_copy_command_repeat2,
  [aux_sym_do_command_repeat1] = aux_sym_do_command_repeat1,
  [aux_sym_for_command_repeat1] = aux_sym_for_command_repeat1,
  [aux_sym_for_command_repeat2] = aux_sym_for_command_repeat2,
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_run_command_repeat1] = aux_sym_run_command_repeat1,
  [aux_sym_save_artifact_command_repeat1] = aux_sym_save_artifact_command_repeat1,
  [aux_sym_save_image_command_repeat1] = aux_sym_save_image_command_repeat1,
  [aux_sym_save_image_command_repeat2] = aux_sym_save_image_command_repeat2,
  [aux_sym_try_command_repeat1] = aux_sym_try_command_repeat1,
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
  [anon_sym_CACHE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
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
  [anon_sym_FUNCTION] = {
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
  [anon_sym_LOCALLY] = {
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
  [anon_sym_TRY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FINALLY] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH_DASHid] = {
    .visible = true,
    .named = false,
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
  [sym_persist] = {
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
  [anon_sym_DASH_DASHsharing] = {
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
  [sym_cache_command] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_command] = {
    .visible = true,
    .named = true,
  },
  [sym_do_command] = {
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
  [sym_function_command] = {
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
  [sym_locally_command] = {
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
  [sym_try_command] = {
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
  [sym_function_ref] = {
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
  [sym_id] = {
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
  [sym_sharing] = {
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
  [aux_sym_cache_command_repeat1] = {
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
  [aux_sym_do_command_repeat1] = {
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
  [aux_sym_try_command_repeat1] = {
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
  field_finally = 10,
  field_image = 11,
  field_key = 12,
  field_local_dest = 13,
  field_mount_point = 14,
  field_name = 15,
  field_option = 16,
  field_org_name = 17,
  field_project_name = 18,
  field_src = 19,
  field_tag = 20,
  field_target = 21,
  field_url = 22,
  field_value = 23,
  field_version = 24,
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
  [field_finally] = "finally",
  [field_image] = "image",
  [field_key] = "key",
  [field_local_dest] = "local_dest",
  [field_mount_point] = "mount_point",
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
  [22] = {.index = 40, .length = 1},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 1},
  [26] = {.index = 45, .length = 1},
  [27] = {.index = 46, .length = 2},
  [28] = {.index = 48, .length = 2},
  [29] = {.index = 50, .length = 2},
  [30] = {.index = 52, .length = 2},
  [31] = {.index = 54, .length = 1},
  [32] = {.index = 55, .length = 2},
  [33] = {.index = 57, .length = 2},
  [34] = {.index = 59, .length = 2},
  [35] = {.index = 61, .length = 2},
  [36] = {.index = 63, .length = 2},
  [37] = {.index = 65, .length = 2},
  [38] = {.index = 67, .length = 1},
  [39] = {.index = 68, .length = 2},
  [40] = {.index = 70, .length = 2},
  [41] = {.index = 72, .length = 3},
  [42] = {.index = 75, .length = 3},
  [43] = {.index = 78, .length = 2},
  [44] = {.index = 80, .length = 2},
  [45] = {.index = 82, .length = 3},
  [46] = {.index = 85, .length = 2},
  [47] = {.index = 87, .length = 3},
  [48] = {.index = 90, .length = 3},
  [49] = {.index = 93, .length = 1},
  [50] = {.index = 94, .length = 2},
  [51] = {.index = 96, .length = 3},
  [52] = {.index = 99, .length = 4},
  [53] = {.index = 103, .length = 4},
  [54] = {.index = 107, .length = 2},
  [55] = {.index = 109, .length = 2},
  [56] = {.index = 111, .length = 2},
  [57] = {.index = 113, .length = 5},
  [58] = {.index = 118, .length = 1},
  [59] = {.index = 119, .length = 3},
  [60] = {.index = 122, .length = 1},
  [61] = {.index = 123, .length = 5},
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
    {field_mount_point, 1},
  [41] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [43] =
    {field_context, 1},
  [44] =
    {field_condition, 0},
  [45] =
    {field_command, 1},
  [46] =
    {field_dest, 2},
    {field_src, 1},
  [48] =
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [50] =
    {field_mount_point, 2},
    {field_option, 1, .inherited = true},
  [52] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [54] =
    {field_value, 0},
  [55] =
    {field_context, 2},
    {field_option, 1, .inherited = true},
  [57] =
    {field_condition, 1, .inherited = true},
    {field_option, 1, .inherited = true},
  [59] =
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [61] =
    {field_else_if, 0},
    {field_else_if, 1},
  [63] =
    {field_else_if, 0, .inherited = true},
    {field_else_if, 1, .inherited = true},
  [65] =
    {field_condition, 1},
    {field_option, 0, .inherited = true},
  [67] =
    {field_command, 2},
  [68] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [70] =
    {field_local_dest, 3},
    {field_src, 1},
  [72] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [75] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [78] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [80] =
    {field_dest, 3},
    {field_url, 2},
  [82] =
    {field_condition, 1, .inherited = true},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [85] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [87] =
    {field_dest, 2},
    {field_local_dest, 4},
    {field_src, 1},
  [90] =
    {field_local_dest, 4},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [93] =
    {field_finally, 0},
  [94] =
    {field_key, 2},
    {field_value, 4},
  [96] =
    {field_dest, 4},
    {field_option, 2, .inherited = true},
    {field_url, 3},
  [99] =
    {field_condition, 1, .inherited = true},
    {field_else, 2},
    {field_else, 3},
    {field_option, 1, .inherited = true},
  [103] =
    {field_dest, 3},
    {field_local_dest, 5},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [107] =
    {field_finally, 0, .inherited = true},
    {field_finally, 1, .inherited = true},
  [109] =
    {field_image, 2},
    {field_target, 4},
  [111] =
    {field_name, 1},
    {field_value, 3, .inherited = true},
  [113] =
    {field_condition, 1, .inherited = true},
    {field_else, 3},
    {field_else, 4},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [118] =
    {field_finally, 4, .inherited = true},
  [119] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
    {field_value, 4, .inherited = true},
  [122] =
    {field_finally, 5, .inherited = true},
  [123] =
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
  [8] = 7,
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
  [19] = 9,
  [20] = 10,
  [21] = 12,
  [22] = 13,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 14,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 25,
  [33] = 27,
  [34] = 3,
  [35] = 3,
  [36] = 17,
  [37] = 3,
  [38] = 11,
  [39] = 18,
  [40] = 29,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 42,
  [49] = 42,
  [50] = 50,
  [51] = 46,
  [52] = 46,
  [53] = 46,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 50,
  [69] = 69,
  [70] = 50,
  [71] = 71,
  [72] = 50,
  [73] = 41,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 43,
  [81] = 81,
  [82] = 82,
  [83] = 67,
  [84] = 66,
  [85] = 69,
  [86] = 86,
  [87] = 63,
  [88] = 41,
  [89] = 59,
  [90] = 63,
  [91] = 55,
  [92] = 64,
  [93] = 65,
  [94] = 57,
  [95] = 56,
  [96] = 69,
  [97] = 71,
  [98] = 62,
  [99] = 58,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 66,
  [105] = 64,
  [106] = 65,
  [107] = 67,
  [108] = 108,
  [109] = 61,
  [110] = 110,
  [111] = 111,
  [112] = 41,
  [113] = 113,
  [114] = 114,
  [115] = 115,
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
  [130] = 71,
  [131] = 131,
  [132] = 66,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 67,
  [137] = 71,
  [138] = 69,
  [139] = 66,
  [140] = 140,
  [141] = 67,
  [142] = 142,
  [143] = 41,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 45,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 63,
  [155] = 44,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 65,
  [162] = 64,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 54,
  [167] = 60,
  [168] = 76,
  [169] = 82,
  [170] = 43,
  [171] = 43,
  [172] = 76,
  [173] = 76,
  [174] = 82,
  [175] = 41,
  [176] = 74,
  [177] = 82,
  [178] = 43,
  [179] = 44,
  [180] = 75,
  [181] = 43,
  [182] = 45,
  [183] = 44,
  [184] = 184,
  [185] = 45,
  [186] = 184,
  [187] = 78,
  [188] = 81,
  [189] = 66,
  [190] = 67,
  [191] = 191,
  [192] = 45,
  [193] = 77,
  [194] = 191,
  [195] = 79,
  [196] = 44,
  [197] = 124,
  [198] = 149,
  [199] = 133,
  [200] = 131,
  [201] = 128,
  [202] = 134,
  [203] = 135,
  [204] = 126,
  [205] = 153,
  [206] = 119,
  [207] = 140,
  [208] = 45,
  [209] = 100,
  [210] = 101,
  [211] = 142,
  [212] = 144,
  [213] = 145,
  [214] = 163,
  [215] = 146,
  [216] = 102,
  [217] = 103,
  [218] = 44,
  [219] = 147,
  [220] = 148,
  [221] = 108,
  [222] = 123,
  [223] = 164,
  [224] = 151,
  [225] = 156,
  [226] = 86,
  [227] = 110,
  [228] = 165,
  [229] = 157,
  [230] = 129,
  [231] = 158,
  [232] = 127,
  [233] = 111,
  [234] = 152,
  [235] = 113,
  [236] = 125,
  [237] = 114,
  [238] = 115,
  [239] = 116,
  [240] = 160,
  [241] = 117,
  [242] = 118,
  [243] = 120,
  [244] = 121,
  [245] = 159,
  [246] = 122,
  [247] = 247,
  [248] = 248,
  [249] = 248,
  [250] = 250,
  [251] = 250,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 254,
  [256] = 253,
  [257] = 257,
  [258] = 258,
  [259] = 66,
  [260] = 257,
  [261] = 257,
  [262] = 67,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 67,
  [271] = 267,
  [272] = 269,
  [273] = 273,
  [274] = 274,
  [275] = 66,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 276,
  [281] = 268,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 283,
  [286] = 286,
  [287] = 284,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 62,
  [293] = 293,
  [294] = 290,
  [295] = 291,
  [296] = 293,
  [297] = 297,
  [298] = 297,
  [299] = 299,
  [300] = 59,
  [301] = 299,
  [302] = 302,
  [303] = 303,
  [304] = 41,
  [305] = 58,
  [306] = 56,
  [307] = 74,
  [308] = 308,
  [309] = 57,
  [310] = 75,
  [311] = 67,
  [312] = 66,
  [313] = 78,
  [314] = 43,
  [315] = 315,
  [316] = 316,
  [317] = 316,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 66,
  [322] = 67,
  [323] = 66,
  [324] = 67,
  [325] = 325,
  [326] = 318,
  [327] = 327,
  [328] = 44,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 66,
  [333] = 67,
  [334] = 320,
  [335] = 319,
  [336] = 318,
  [337] = 316,
  [338] = 75,
  [339] = 316,
  [340] = 45,
  [341] = 341,
  [342] = 341,
  [343] = 343,
  [344] = 344,
  [345] = 278,
  [346] = 274,
  [347] = 347,
  [348] = 341,
  [349] = 330,
  [350] = 316,
  [351] = 351,
  [352] = 258,
  [353] = 353,
  [354] = 341,
  [355] = 351,
  [356] = 356,
  [357] = 341,
  [358] = 358,
  [359] = 319,
  [360] = 360,
  [361] = 361,
  [362] = 320,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 329,
  [367] = 356,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 372,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 372,
  [382] = 380,
  [383] = 100,
  [384] = 384,
  [385] = 379,
  [386] = 386,
  [387] = 101,
  [388] = 388,
  [389] = 378,
  [390] = 108,
  [391] = 103,
  [392] = 392,
  [393] = 376,
  [394] = 110,
  [395] = 395,
  [396] = 396,
  [397] = 373,
  [398] = 374,
  [399] = 379,
  [400] = 111,
  [401] = 102,
  [402] = 378,
  [403] = 372,
  [404] = 404,
  [405] = 405,
  [406] = 375,
  [407] = 407,
  [408] = 408,
  [409] = 66,
  [410] = 67,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 67,
  [419] = 66,
  [420] = 407,
  [421] = 421,
  [422] = 422,
  [423] = 258,
  [424] = 417,
  [425] = 407,
  [426] = 422,
  [427] = 416,
  [428] = 265,
  [429] = 429,
  [430] = 408,
  [431] = 431,
  [432] = 414,
  [433] = 431,
  [434] = 434,
  [435] = 435,
  [436] = 421,
  [437] = 437,
  [438] = 414,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 449,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 443,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 452,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 446,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 450,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 481,
  [483] = 483,
  [484] = 484,
  [485] = 483,
  [486] = 447,
  [487] = 487,
  [488] = 448,
  [489] = 449,
  [490] = 76,
  [491] = 82,
  [492] = 492,
  [493] = 493,
  [494] = 467,
  [495] = 495,
  [496] = 475,
  [497] = 487,
  [498] = 498,
  [499] = 440,
  [500] = 463,
  [501] = 501,
  [502] = 447,
  [503] = 448,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 454,
  [508] = 508,
  [509] = 509,
  [510] = 479,
  [511] = 511,
  [512] = 512,
  [513] = 498,
  [514] = 475,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 473,
  [522] = 466,
  [523] = 523,
  [524] = 456,
  [525] = 525,
  [526] = 441,
  [527] = 465,
  [528] = 528,
  [529] = 469,
  [530] = 506,
  [531] = 480,
  [532] = 532,
  [533] = 439,
  [534] = 501,
  [535] = 512,
  [536] = 519,
  [537] = 520,
  [538] = 481,
  [539] = 532,
  [540] = 462,
  [541] = 483,
  [542] = 474,
  [543] = 508,
  [544] = 518,
  [545] = 523,
  [546] = 470,
  [547] = 484,
  [548] = 444,
  [549] = 459,
  [550] = 525,
  [551] = 445,
  [552] = 455,
  [553] = 457,
  [554] = 464,
  [555] = 528,
  [556] = 516,
  [557] = 511,
  [558] = 504,
  [559] = 67,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 66,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 581,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 582,
  [595] = 595,
  [596] = 596,
  [597] = 581,
  [598] = 598,
  [599] = 599,
  [600] = 591,
  [601] = 595,
  [602] = 602,
  [603] = 588,
  [604] = 604,
  [605] = 593,
  [606] = 582,
  [607] = 596,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 591,
  [612] = 591,
  [613] = 595,
  [614] = 593,
  [615] = 582,
  [616] = 596,
  [617] = 617,
  [618] = 618,
  [619] = 591,
  [620] = 595,
  [621] = 621,
  [622] = 582,
  [623] = 596,
  [624] = 591,
  [625] = 595,
  [626] = 593,
  [627] = 582,
  [628] = 596,
  [629] = 591,
  [630] = 595,
  [631] = 593,
  [632] = 582,
  [633] = 596,
  [634] = 593,
  [635] = 635,
  [636] = 593,
  [637] = 582,
  [638] = 593,
  [639] = 582,
  [640] = 593,
  [641] = 582,
  [642] = 593,
  [643] = 582,
  [644] = 593,
  [645] = 582,
  [646] = 593,
  [647] = 582,
  [648] = 593,
  [649] = 582,
  [650] = 650,
  [651] = 585,
  [652] = 584,
  [653] = 595,
  [654] = 596,
  [655] = 655,
  [656] = 656,
  [657] = 610,
  [658] = 582,
  [659] = 589,
  [660] = 635,
  [661] = 661,
  [662] = 593,
  [663] = 593,
  [664] = 664,
  [665] = 621,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 664,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 675,
  [677] = 592,
  [678] = 678,
  [679] = 666,
  [680] = 680,
  [681] = 681,
  [682] = 678,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 668,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 650,
  [693] = 585,
  [694] = 584,
  [695] = 666,
  [696] = 585,
  [697] = 584,
  [698] = 666,
  [699] = 585,
  [700] = 584,
  [701] = 585,
  [702] = 584,
  [703] = 585,
  [704] = 584,
  [705] = 585,
  [706] = 584,
  [707] = 585,
  [708] = 584,
  [709] = 585,
  [710] = 584,
  [711] = 585,
  [712] = 584,
  [713] = 585,
  [714] = 584,
  [715] = 585,
  [716] = 584,
  [717] = 585,
  [718] = 584,
  [719] = 585,
  [720] = 584,
  [721] = 721,
  [722] = 722,
  [723] = 650,
  [724] = 724,
  [725] = 725,
  [726] = 674,
  [727] = 680,
  [728] = 683,
  [729] = 581,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 722,
  [734] = 670,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 602,
  [739] = 604,
  [740] = 608,
  [741] = 661,
  [742] = 599,
  [743] = 725,
  [744] = 744,
  [745] = 588,
  [746] = 586,
  [747] = 747,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(305);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == ',') ADVANCE(704);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(301)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '#') ADVANCE(709);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(708);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(770);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(771);
      if (lookahead == '\f') ADVANCE(781);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(777);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(771);
      if (lookahead == '\f') ADVANCE(781);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(772);
      if (lookahead == '\f') ADVANCE(782);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(778);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(763);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(772);
      if (lookahead == '\f') ADVANCE(782);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(763);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(773);
      if (lookahead == '\f') ADVANCE(783);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(779);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(773);
      if (lookahead == '\f') ADVANCE(783);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(759);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(761);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(756);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(757);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(774);
      if (lookahead == '\f') ADVANCE(784);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(780);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(707);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(774);
      if (lookahead == '\f') ADVANCE(784);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(707);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(775);
      if (lookahead == '\f') ADVANCE(785);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(775);
      if (lookahead == '\f') ADVANCE(785);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(776);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(775);
      if (lookahead == '\f') ADVANCE(785);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(270);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(717);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(36)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(718);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(54)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(707);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(707);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(763);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(437);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(429);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(437);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(429);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(437);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(429);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'E') ADVANCE(437);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(444);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(410);
      if (lookahead == 'D') ADVANCE(442);
      if (lookahead == 'F') ADVANCE(429);
      if (lookahead == 'G') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(411);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == 'W') ADVANCE(413);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(707);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '-') ADVANCE(526);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '-') ADVANCE(527);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '-') ADVANCE(528);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '-') ADVANCE(529);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'C') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(571);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(556);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(550);
      if (lookahead == 'R') ADVANCE(587);
      if (lookahead == 'S') ADVANCE(538);
      if (lookahead == 'T') ADVANCE(577);
      if (lookahead == 'W') ADVANCE(540);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'C') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(571);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(556);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(550);
      if (lookahead == 'R') ADVANCE(587);
      if (lookahead == 'S') ADVANCE(538);
      if (lookahead == 'T') ADVANCE(577);
      if (lookahead == 'W') ADVANCE(540);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'C') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(571);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(556);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(550);
      if (lookahead == 'R') ADVANCE(587);
      if (lookahead == 'S') ADVANCE(538);
      if (lookahead == 'T') ADVANCE(577);
      if (lookahead == 'W') ADVANCE(540);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'C') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(571);
      if (lookahead == 'F') ADVANCE(558);
      if (lookahead == 'G') ADVANCE(556);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(550);
      if (lookahead == 'R') ADVANCE(587);
      if (lookahead == 'S') ADVANCE(538);
      if (lookahead == 'T') ADVANCE(577);
      if (lookahead == 'W') ADVANCE(540);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == 'S') ADVANCE(541);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(703);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(516);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(300);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(719);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(299);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(266);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(162);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(162);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(171);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'I') ADVANCE(180);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(182);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(178);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(179);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(135);
      END_STATE();
    case 100:
      if (lookahead == 'D') ADVANCE(335);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(311);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(156);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(161);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(350);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(322);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(345);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(365);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(338);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 115:
      if (lookahead == 'F') ADVANCE(346);
      END_STATE();
    case 116:
      if (lookahead == 'F') ADVANCE(346);
      if (lookahead == 'N') ADVANCE(334);
      END_STATE();
    case 117:
      if (lookahead == 'F') ADVANCE(349);
      END_STATE();
    case 118:
      if (lookahead == 'F') ADVANCE(91);
      END_STATE();
    case 119:
      if (lookahead == 'F') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'G') ADVANCE(306);
      END_STATE();
    case 121:
      if (lookahead == 'G') ADVANCE(107);
      END_STATE();
    case 122:
      if (lookahead == 'H') ADVANCE(28);
      END_STATE();
    case 123:
      if (lookahead == 'H') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 129:
      if (lookahead == 'I') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'J') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 'K') ADVANCE(112);
      END_STATE();
    case 135:
      if (lookahead == 'K') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(364);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(188);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'L') ADVANCE(139);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 143:
      if (lookahead == 'L') ADVANCE(140);
      END_STATE();
    case 144:
      if (lookahead == 'L') ADVANCE(108);
      END_STATE();
    case 145:
      if (lookahead == 'M') ADVANCE(312);
      END_STATE();
    case 146:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(359);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(320);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(339);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(328);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 162:
      if (lookahead == 'P') ADVANCE(187);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(331);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(378);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(173);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(155);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 172:
      if (lookahead == 'S') ADVANCE(104);
      END_STATE();
    case 173:
      if (lookahead == 'S') ADVANCE(131);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(342);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(353);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(366);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(375);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(316);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(363);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 183:
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 184:
      if (lookahead == 'U') ADVANCE(148);
      END_STATE();
    case 185:
      if (lookahead == 'V') ADVANCE(109);
      END_STATE();
    case 186:
      if (lookahead == 'Y') ADVANCE(369);
      END_STATE();
    case 187:
      if (lookahead == 'Y') ADVANCE(325);
      END_STATE();
    case 188:
      if (lookahead == 'Y') ADVANCE(372);
      END_STATE();
    case 189:
      if (lookahead == 'Y') ADVANCE(356);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(744);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(737);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(714);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(747);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(270);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 223:
      if (lookahead == 'f') ADVANCE(264);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(752);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(746);
      END_STATE();
    case 230:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(745);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(743);
      END_STATE();
    case 248:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(278);
      END_STATE();
    case 267:
      if (lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 268:
      if (lookahead == 'q') ADVANCE(290);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 292:
      if (lookahead == 'v') ADVANCE(232);
      END_STATE();
    case 293:
      if (lookahead == 'v') ADVANCE(233);
      END_STATE();
    case 294:
      if (lookahead == 'v') ADVANCE(236);
      END_STATE();
    case 295:
      if (lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 296:
      if (lookahead == 'w') ADVANCE(77);
      END_STATE();
    case 297:
      if (lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(713);
      END_STATE();
    case 299:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(730);
      END_STATE();
    case 300:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 301:
      if (eof) ADVANCE(305);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(754);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(758);
      if (lookahead == '(') ADVANCE(711);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == ':') ADVANCE(319);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(704);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(301)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 302:
      if (eof) ADVANCE(305);
      if (lookahead == ' ') ADVANCE(717);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(716);
      if (lookahead == 'A') ADVANCE(392);
      if (lookahead == 'F') ADVANCE(393);
      if (lookahead == 'P') ADVANCE(395);
      if (lookahead == 'V') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(304)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 303:
      if (eof) ADVANCE(305);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead == '=') ADVANCE(310);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(392);
      if (lookahead == 'F') ADVANCE(393);
      if (lookahead == 'P') ADVANCE(395);
      if (lookahead == 'V') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(304)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 304:
      if (eof) ADVANCE(305);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(712);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(392);
      if (lookahead == 'F') ADVANCE(393);
      if (lookahead == 'P') ADVANCE(395);
      if (lookahead == 'V') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(304)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DO);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DO);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(126);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(469);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(478);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(479);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(464);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(498);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(466);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(472);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'O') ADVANCE(446);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(458);
      if (lookahead == 'E') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(432);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(430);
      if (lookahead == 'I') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(336);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(351);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(401);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(323);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'O') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(308);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(451);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(441);
      if (lookahead == 'O') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'U') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(450);
      if (lookahead == 'N') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(461);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(462);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(313);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(360);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(340);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(417);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(329);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(449);
      if (lookahead == 'R') ADVANCE(443);
      if (lookahead == 'U') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(460);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(332);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(354);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(367);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(376);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(438);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(370);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(326);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(373);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(470);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == 'p') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'l') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(500);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(508);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead == 'p') ADVANCE(509);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(484);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(485);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead == 'p') ADVANCE(509);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(714);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(473);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(405);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(499);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(497);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(503);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(746);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(494);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(510);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(489);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(496);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(490);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(743);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(720);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(507);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(493);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(511);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(502);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(501);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(495);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(487);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(492);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(741);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(483);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(506);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(408);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(721);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(480);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(504);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(764);
      if (lookahead == '#') ADVANCE(515);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(516);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(770);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == 'f') ADVANCE(727);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(693);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(543);
      if (lookahead == 'O') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(559);
      if (lookahead == 'I') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(582);
      if (lookahead == 'O') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(581);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(570);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == 'U') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(580);
      if (lookahead == 'N') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(578);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead == 'U') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(553);
      if (lookahead == 'S') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'c') ADVANCE(630);
      if (lookahead == 'd') ADVANCE(634);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead == 'k') ADVANCE(614);
      if (lookahead == 'p') ADVANCE(595);
      if (lookahead == 's') ADVANCE(702);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(695);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(678);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == 's') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(714);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(733);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(671);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(666);
      if (lookahead == 'i') ADVANCE(621);
      if (lookahead == 'k') ADVANCE(614);
      if (lookahead == 's') ADVANCE(702);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(726);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(751);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(715);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(672);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(696);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(662);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(743);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(661);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(699);
      if (lookahead == 't') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(725);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(734);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(691);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(728);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(753);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(207);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(770);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_DASH_DASHid);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_persist);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsharing);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(755);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(755);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(755);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(757);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(757);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(767);
      if (lookahead == '\r') ADVANCE(759);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(759);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(759);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(761);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(761);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(762);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(763);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(766);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(767);
      if (lookahead == '\r') ADVANCE(759);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(759);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(755);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(755);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(770);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(771);
      if (lookahead == '\f') ADVANCE(781);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(772);
      if (lookahead == '\f') ADVANCE(782);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(773);
      if (lookahead == '\f') ADVANCE(783);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(774);
      if (lookahead == '\f') ADVANCE(784);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(775);
      if (lookahead == '\f') ADVANCE(785);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(763);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(703);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(707);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(771);
      if (lookahead == '\f') ADVANCE(781);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(772);
      if (lookahead == '\f') ADVANCE(782);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(773);
      if (lookahead == '\f') ADVANCE(783);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(519);
      if (lookahead == '+') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(774);
      if (lookahead == '\f') ADVANCE(784);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(775);
      if (lookahead == '\f') ADVANCE(785);
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
  [1] = {.lex_state = 303},
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 34, .external_lex_state = 2},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 42, .external_lex_state = 2},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 42, .external_lex_state = 2},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 46, .external_lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 42, .external_lex_state = 2},
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 36, .external_lex_state = 2},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 36, .external_lex_state = 2},
  [92] = {.lex_state = 47},
  [93] = {.lex_state = 47},
  [94] = {.lex_state = 36, .external_lex_state = 2},
  [95] = {.lex_state = 36, .external_lex_state = 2},
  [96] = {.lex_state = 47},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 36, .external_lex_state = 2},
  [99] = {.lex_state = 36, .external_lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 43},
  [105] = {.lex_state = 46, .external_lex_state = 2},
  [106] = {.lex_state = 46, .external_lex_state = 2},
  [107] = {.lex_state = 43},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 36, .external_lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 46, .external_lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
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
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 42, .external_lex_state = 2},
  [138] = {.lex_state = 45},
  [139] = {.lex_state = 42, .external_lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 42, .external_lex_state = 2},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 47},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 41},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 45},
  [162] = {.lex_state = 45},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 36, .external_lex_state = 2},
  [167] = {.lex_state = 36, .external_lex_state = 2},
  [168] = {.lex_state = 64, .external_lex_state = 2},
  [169] = {.lex_state = 65},
  [170] = {.lex_state = 46, .external_lex_state = 2},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 65},
  [173] = {.lex_state = 63},
  [174] = {.lex_state = 64, .external_lex_state = 2},
  [175] = {.lex_state = 30, .external_lex_state = 2},
  [176] = {.lex_state = 23, .external_lex_state = 2},
  [177] = {.lex_state = 63},
  [178] = {.lex_state = 47},
  [179] = {.lex_state = 47},
  [180] = {.lex_state = 36, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 47},
  [183] = {.lex_state = 45},
  [184] = {.lex_state = 56},
  [185] = {.lex_state = 45},
  [186] = {.lex_state = 56},
  [187] = {.lex_state = 36, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 36, .external_lex_state = 2},
  [190] = {.lex_state = 36, .external_lex_state = 2},
  [191] = {.lex_state = 56},
  [192] = {.lex_state = 46, .external_lex_state = 2},
  [193] = {.lex_state = 36, .external_lex_state = 2},
  [194] = {.lex_state = 56},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 46, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 0, .external_lex_state = 2},
  [238] = {.lex_state = 0, .external_lex_state = 2},
  [239] = {.lex_state = 0, .external_lex_state = 2},
  [240] = {.lex_state = 0, .external_lex_state = 2},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 0, .external_lex_state = 2},
  [243] = {.lex_state = 0, .external_lex_state = 2},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 56},
  [248] = {.lex_state = 26},
  [249] = {.lex_state = 26},
  [250] = {.lex_state = 26},
  [251] = {.lex_state = 26},
  [252] = {.lex_state = 26},
  [253] = {.lex_state = 30},
  [254] = {.lex_state = 30},
  [255] = {.lex_state = 30},
  [256] = {.lex_state = 30},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 56},
  [259] = {.lex_state = 56},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 56},
  [263] = {.lex_state = 56},
  [264] = {.lex_state = 56},
  [265] = {.lex_state = 56},
  [266] = {.lex_state = 30},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 26},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 303},
  [274] = {.lex_state = 26},
  [275] = {.lex_state = 26},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 26},
  [278] = {.lex_state = 26},
  [279] = {.lex_state = 303},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 37},
  [283] = {.lex_state = 37},
  [284] = {.lex_state = 37},
  [285] = {.lex_state = 37},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 37},
  [288] = {.lex_state = 37},
  [289] = {.lex_state = 58},
  [290] = {.lex_state = 58},
  [291] = {.lex_state = 58},
  [292] = {.lex_state = 303},
  [293] = {.lex_state = 37},
  [294] = {.lex_state = 58},
  [295] = {.lex_state = 58},
  [296] = {.lex_state = 37},
  [297] = {.lex_state = 59},
  [298] = {.lex_state = 59},
  [299] = {.lex_state = 59},
  [300] = {.lex_state = 303},
  [301] = {.lex_state = 59},
  [302] = {.lex_state = 37},
  [303] = {.lex_state = 37},
  [304] = {.lex_state = 303},
  [305] = {.lex_state = 303},
  [306] = {.lex_state = 303},
  [307] = {.lex_state = 302},
  [308] = {.lex_state = 59},
  [309] = {.lex_state = 303},
  [310] = {.lex_state = 303},
  [311] = {.lex_state = 303},
  [312] = {.lex_state = 303},
  [313] = {.lex_state = 303},
  [314] = {.lex_state = 303},
  [315] = {.lex_state = 303, .external_lex_state = 3},
  [316] = {.lex_state = 60},
  [317] = {.lex_state = 60},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 29},
  [320] = {.lex_state = 30},
  [321] = {.lex_state = 30},
  [322] = {.lex_state = 30},
  [323] = {.lex_state = 37},
  [324] = {.lex_state = 37},
  [325] = {.lex_state = 30},
  [326] = {.lex_state = 29},
  [327] = {.lex_state = 30},
  [328] = {.lex_state = 303},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 10},
  [331] = {.lex_state = 30},
  [332] = {.lex_state = 8},
  [333] = {.lex_state = 8},
  [334] = {.lex_state = 30},
  [335] = {.lex_state = 29},
  [336] = {.lex_state = 29},
  [337] = {.lex_state = 60},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 60},
  [340] = {.lex_state = 303},
  [341] = {.lex_state = 60},
  [342] = {.lex_state = 60},
  [343] = {.lex_state = 30},
  [344] = {.lex_state = 37},
  [345] = {.lex_state = 37},
  [346] = {.lex_state = 37},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 60},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 60},
  [351] = {.lex_state = 57},
  [352] = {.lex_state = 30},
  [353] = {.lex_state = 37},
  [354] = {.lex_state = 60},
  [355] = {.lex_state = 57},
  [356] = {.lex_state = 57},
  [357] = {.lex_state = 60},
  [358] = {.lex_state = 30},
  [359] = {.lex_state = 29},
  [360] = {.lex_state = 60},
  [361] = {.lex_state = 14},
  [362] = {.lex_state = 30},
  [363] = {.lex_state = 14},
  [364] = {.lex_state = 30},
  [365] = {.lex_state = 57},
  [366] = {.lex_state = 10},
  [367] = {.lex_state = 57},
  [368] = {.lex_state = 29},
  [369] = {.lex_state = 303},
  [370] = {.lex_state = 29},
  [371] = {.lex_state = 29},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 29},
  [375] = {.lex_state = 29},
  [376] = {.lex_state = 29},
  [377] = {.lex_state = 29},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 29},
  [380] = {.lex_state = 29},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 29},
  [383] = {.lex_state = 303},
  [384] = {.lex_state = 37},
  [385] = {.lex_state = 29},
  [386] = {.lex_state = 30},
  [387] = {.lex_state = 303},
  [388] = {.lex_state = 303},
  [389] = {.lex_state = 29},
  [390] = {.lex_state = 303},
  [391] = {.lex_state = 303},
  [392] = {.lex_state = 60},
  [393] = {.lex_state = 29},
  [394] = {.lex_state = 303},
  [395] = {.lex_state = 303},
  [396] = {.lex_state = 29},
  [397] = {.lex_state = 29},
  [398] = {.lex_state = 29},
  [399] = {.lex_state = 29},
  [400] = {.lex_state = 303},
  [401] = {.lex_state = 303},
  [402] = {.lex_state = 29},
  [403] = {.lex_state = 29},
  [404] = {.lex_state = 303},
  [405] = {.lex_state = 303},
  [406] = {.lex_state = 29},
  [407] = {.lex_state = 15},
  [408] = {.lex_state = 30},
  [409] = {.lex_state = 59},
  [410] = {.lex_state = 59},
  [411] = {.lex_state = 58},
  [412] = {.lex_state = 58},
  [413] = {.lex_state = 61},
  [414] = {.lex_state = 15},
  [415] = {.lex_state = 58},
  [416] = {.lex_state = 61},
  [417] = {.lex_state = 61},
  [418] = {.lex_state = 58},
  [419] = {.lex_state = 58},
  [420] = {.lex_state = 15},
  [421] = {.lex_state = 52},
  [422] = {.lex_state = 52},
  [423] = {.lex_state = 58},
  [424] = {.lex_state = 61},
  [425] = {.lex_state = 15},
  [426] = {.lex_state = 52},
  [427] = {.lex_state = 61},
  [428] = {.lex_state = 59},
  [429] = {.lex_state = 58},
  [430] = {.lex_state = 30},
  [431] = {.lex_state = 30},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 30},
  [434] = {.lex_state = 59},
  [435] = {.lex_state = 59},
  [436] = {.lex_state = 52},
  [437] = {.lex_state = 59},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 15},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 37},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 15},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 15},
  [449] = {.lex_state = 37},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 37},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 303},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 15},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 15},
  [458] = {.lex_state = 303},
  [459] = {.lex_state = 15},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 15},
  [463] = {.lex_state = 15},
  [464] = {.lex_state = 15},
  [465] = {.lex_state = 15},
  [466] = {.lex_state = 15},
  [467] = {.lex_state = 15},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 15},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 37},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 303},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 15},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 15},
  [489] = {.lex_state = 37},
  [490] = {.lex_state = 66},
  [491] = {.lex_state = 66},
  [492] = {.lex_state = 30},
  [493] = {.lex_state = 15},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 30},
  [496] = {.lex_state = 37},
  [497] = {.lex_state = 15},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 15},
  [500] = {.lex_state = 15},
  [501] = {.lex_state = 15},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 15},
  [504] = {.lex_state = 15},
  [505] = {.lex_state = 15},
  [506] = {.lex_state = 15},
  [507] = {.lex_state = 15},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 15},
  [512] = {.lex_state = 15},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 37},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 15},
  [517] = {.lex_state = 15},
  [518] = {.lex_state = 15},
  [519] = {.lex_state = 15},
  [520] = {.lex_state = 15},
  [521] = {.lex_state = 15},
  [522] = {.lex_state = 15},
  [523] = {.lex_state = 15},
  [524] = {.lex_state = 15},
  [525] = {.lex_state = 15},
  [526] = {.lex_state = 15},
  [527] = {.lex_state = 15},
  [528] = {.lex_state = 15},
  [529] = {.lex_state = 15},
  [530] = {.lex_state = 15},
  [531] = {.lex_state = 15},
  [532] = {.lex_state = 15},
  [533] = {.lex_state = 15},
  [534] = {.lex_state = 15},
  [535] = {.lex_state = 15},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 15},
  [538] = {.lex_state = 15},
  [539] = {.lex_state = 15},
  [540] = {.lex_state = 15},
  [541] = {.lex_state = 15},
  [542] = {.lex_state = 15},
  [543] = {.lex_state = 15},
  [544] = {.lex_state = 15},
  [545] = {.lex_state = 15},
  [546] = {.lex_state = 15},
  [547] = {.lex_state = 15},
  [548] = {.lex_state = 15},
  [549] = {.lex_state = 15},
  [550] = {.lex_state = 15},
  [551] = {.lex_state = 15},
  [552] = {.lex_state = 15},
  [553] = {.lex_state = 15},
  [554] = {.lex_state = 15},
  [555] = {.lex_state = 15},
  [556] = {.lex_state = 15},
  [557] = {.lex_state = 15},
  [558] = {.lex_state = 15},
  [559] = {.lex_state = 15},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 61},
  [562] = {.lex_state = 57},
  [563] = {.lex_state = 39},
  [564] = {.lex_state = 37},
  [565] = {.lex_state = 39},
  [566] = {.lex_state = 30},
  [567] = {.lex_state = 57},
  [568] = {.lex_state = 15},
  [569] = {.lex_state = 57},
  [570] = {.lex_state = 61},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 57},
  [574] = {.lex_state = 39},
  [575] = {.lex_state = 303},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 53},
  [578] = {.lex_state = 53},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 39},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 37},
  [584] = {.lex_state = 11},
  [585] = {.lex_state = 12},
  [586] = {.lex_state = 67},
  [587] = {.lex_state = 39},
  [588] = {.lex_state = 39},
  [589] = {.lex_state = 39},
  [590] = {.lex_state = 67},
  [591] = {.lex_state = 68},
  [592] = {.lex_state = 67},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 55},
  [596] = {.lex_state = 55},
  [597] = {.lex_state = 39},
  [598] = {.lex_state = 67},
  [599] = {.lex_state = 67},
  [600] = {.lex_state = 68},
  [601] = {.lex_state = 55},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 39},
  [604] = {.lex_state = 37},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 55},
  [608] = {.lex_state = 37},
  [609] = {.lex_state = 24},
  [610] = {.lex_state = 24},
  [611] = {.lex_state = 68},
  [612] = {.lex_state = 68},
  [613] = {.lex_state = 55},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 55},
  [617] = {.lex_state = 24},
  [618] = {.lex_state = 24},
  [619] = {.lex_state = 68},
  [620] = {.lex_state = 55},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 55},
  [624] = {.lex_state = 68},
  [625] = {.lex_state = 55},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 55},
  [629] = {.lex_state = 68},
  [630] = {.lex_state = 55},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 55},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 24},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 24},
  [651] = {.lex_state = 12},
  [652] = {.lex_state = 11},
  [653] = {.lex_state = 55},
  [654] = {.lex_state = 55},
  [655] = {.lex_state = 24},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 24},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 39},
  [660] = {.lex_state = 24},
  [661] = {.lex_state = 24},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 67},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 24},
  [667] = {.lex_state = 24},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 67},
  [670] = {.lex_state = 67},
  [671] = {.lex_state = 24},
  [672] = {.lex_state = 24},
  [673] = {.lex_state = 24},
  [674] = {.lex_state = 303},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 67},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 24},
  [680] = {.lex_state = 303},
  [681] = {.lex_state = 24},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 24},
  [685] = {.lex_state = 24},
  [686] = {.lex_state = 24},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 37},
  [690] = {.lex_state = 37},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 24},
  [693] = {.lex_state = 12},
  [694] = {.lex_state = 11},
  [695] = {.lex_state = 24},
  [696] = {.lex_state = 12},
  [697] = {.lex_state = 11},
  [698] = {.lex_state = 24},
  [699] = {.lex_state = 12},
  [700] = {.lex_state = 11},
  [701] = {.lex_state = 12},
  [702] = {.lex_state = 11},
  [703] = {.lex_state = 12},
  [704] = {.lex_state = 11},
  [705] = {.lex_state = 12},
  [706] = {.lex_state = 11},
  [707] = {.lex_state = 12},
  [708] = {.lex_state = 11},
  [709] = {.lex_state = 12},
  [710] = {.lex_state = 11},
  [711] = {.lex_state = 12},
  [712] = {.lex_state = 11},
  [713] = {.lex_state = 12},
  [714] = {.lex_state = 11},
  [715] = {.lex_state = 12},
  [716] = {.lex_state = 11},
  [717] = {.lex_state = 12},
  [718] = {.lex_state = 11},
  [719] = {.lex_state = 12},
  [720] = {.lex_state = 11},
  [721] = {.lex_state = 303},
  [722] = {.lex_state = 67},
  [723] = {.lex_state = 24},
  [724] = {.lex_state = 67},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 303},
  [727] = {.lex_state = 303},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 39},
  [730] = {.lex_state = 37},
  [731] = {.lex_state = 67},
  [732] = {.lex_state = 37},
  [733] = {.lex_state = 67},
  [734] = {.lex_state = 67},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 24},
  [737] = {.lex_state = 32},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 37},
  [740] = {.lex_state = 37},
  [741] = {.lex_state = 24},
  [742] = {.lex_state = 67},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 37},
  [745] = {.lex_state = 39},
  [746] = {.lex_state = 67},
  [747] = {.lex_state = 67},
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
    [anon_sym_CACHE] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_FROMDOCKERFILE] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_GIT] = ACTIONS(1),
    [anon_sym_CLONE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_LOCALLY] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVEARTIFACT] = ACTIONS(1),
    [anon_sym_ASLOCAL] = ACTIONS(1),
    [anon_sym_SAVEIMAGE] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_TRY] = ACTIONS(1),
    [anon_sym_FINALLY] = ACTIONS(1),
    [anon_sym_WAIT] = ACTIONS(1),
    [anon_sym_WITHDOCKER] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_shell_fragment_token1] = ACTIONS(1),
    [aux_sym_shell_fragment_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(735),
    [sym_arg_command] = STATE(279),
    [sym_from_command] = STATE(279),
    [sym_project_command] = STATE(279),
    [sym_target] = STATE(279),
    [sym_version_command] = STATE(279),
    [aux_sym_source_file_repeat1] = STATE(279),
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
  [0] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(51), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(31), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [94] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_CACHE,
    ACTIONS(70), 1,
      anon_sym_COPY,
    ACTIONS(73), 1,
      anon_sym_DO,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(81), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(84), 1,
      anon_sym_FUNCTION,
    ACTIONS(87), 1,
      anon_sym_GIT,
    ACTIONS(90), 1,
      anon_sym_IF,
    ACTIONS(93), 1,
      anon_sym_ELSE,
    ACTIONS(95), 1,
      anon_sym_LET,
    ACTIONS(98), 1,
      anon_sym_LOCALLY,
    ACTIONS(101), 1,
      anon_sym_RUN,
    ACTIONS(104), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(107), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(110), 1,
      anon_sym_SET,
    ACTIONS(113), 1,
      anon_sym_TRY,
    ACTIONS(116), 1,
      anon_sym_WAIT,
    ACTIONS(119), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(79), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [188] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(51), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(124), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(122), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(5), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [282] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(51), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(128), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(126), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [376] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(49), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(51), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(132), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(130), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(3), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [470] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(134), 1,
      anon_sym_END,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [560] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(140), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [650] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(142), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [740] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(144), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [830] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    STATE(678), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [920] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(146), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1010] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(148), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1100] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    STATE(728), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1190] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(150), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1280] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(152), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1370] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(154), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(16), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1460] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(156), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1550] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(158), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1640] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(160), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1730] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(162), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1820] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(164), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [1910] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(166), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2000] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      anon_sym_ARG,
    ACTIONS(170), 1,
      anon_sym_FROM,
    ACTIONS(172), 1,
      anon_sym_CACHE,
    ACTIONS(174), 1,
      anon_sym_COPY,
    ACTIONS(176), 1,
      anon_sym_DO,
    ACTIONS(178), 1,
      anon_sym_FOR,
    ACTIONS(180), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(182), 1,
      anon_sym_FUNCTION,
    ACTIONS(184), 1,
      anon_sym_GIT,
    ACTIONS(186), 1,
      anon_sym_IF,
    ACTIONS(188), 1,
      anon_sym_LET,
    ACTIONS(190), 1,
      anon_sym_LOCALLY,
    ACTIONS(192), 1,
      anon_sym_RUN,
    ACTIONS(194), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(196), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(198), 1,
      anon_sym_SET,
    ACTIONS(200), 1,
      anon_sym_TRY,
    ACTIONS(202), 1,
      anon_sym_WAIT,
    ACTIONS(204), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(206), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2090] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(208), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2180] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(210), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(212), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(214), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2270] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(216), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(25), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2360] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    STATE(683), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2450] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(210), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(212), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(218), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2540] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(210), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(212), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(220), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2630] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(168), 1,
      anon_sym_ARG,
    ACTIONS(170), 1,
      anon_sym_FROM,
    ACTIONS(172), 1,
      anon_sym_CACHE,
    ACTIONS(174), 1,
      anon_sym_COPY,
    ACTIONS(176), 1,
      anon_sym_DO,
    ACTIONS(178), 1,
      anon_sym_FOR,
    ACTIONS(180), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(182), 1,
      anon_sym_FUNCTION,
    ACTIONS(184), 1,
      anon_sym_GIT,
    ACTIONS(186), 1,
      anon_sym_IF,
    ACTIONS(188), 1,
      anon_sym_LET,
    ACTIONS(190), 1,
      anon_sym_LOCALLY,
    ACTIONS(192), 1,
      anon_sym_RUN,
    ACTIONS(194), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(196), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(198), 1,
      anon_sym_SET,
    ACTIONS(200), 1,
      anon_sym_TRY,
    ACTIONS(202), 1,
      anon_sym_WAIT,
    ACTIONS(204), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(222), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2720] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(224), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2810] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(226), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2900] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(79), 1,
      sym__dedent,
    ACTIONS(228), 1,
      anon_sym_ARG,
    ACTIONS(231), 1,
      anon_sym_FROM,
    ACTIONS(234), 1,
      anon_sym_CACHE,
    ACTIONS(237), 1,
      anon_sym_COPY,
    ACTIONS(240), 1,
      anon_sym_DO,
    ACTIONS(243), 1,
      anon_sym_FOR,
    ACTIONS(246), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(249), 1,
      anon_sym_FUNCTION,
    ACTIONS(252), 1,
      anon_sym_GIT,
    ACTIONS(255), 1,
      anon_sym_IF,
    ACTIONS(258), 1,
      anon_sym_LET,
    ACTIONS(261), 1,
      anon_sym_LOCALLY,
    ACTIONS(264), 1,
      anon_sym_RUN,
    ACTIONS(267), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(270), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(273), 1,
      anon_sym_SET,
    ACTIONS(276), 1,
      anon_sym_TRY,
    ACTIONS(279), 1,
      anon_sym_WAIT,
    ACTIONS(282), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(34), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [2990] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_CACHE,
    ACTIONS(70), 1,
      anon_sym_COPY,
    ACTIONS(73), 1,
      anon_sym_DO,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(79), 1,
      anon_sym_FINALLY,
    ACTIONS(81), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(84), 1,
      anon_sym_FUNCTION,
    ACTIONS(87), 1,
      anon_sym_GIT,
    ACTIONS(90), 1,
      anon_sym_IF,
    ACTIONS(95), 1,
      anon_sym_LET,
    ACTIONS(98), 1,
      anon_sym_LOCALLY,
    ACTIONS(101), 1,
      anon_sym_RUN,
    ACTIONS(110), 1,
      anon_sym_SET,
    ACTIONS(113), 1,
      anon_sym_TRY,
    ACTIONS(116), 1,
      anon_sym_WAIT,
    ACTIONS(119), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(285), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(288), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3080] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(291), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(23), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3170] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(64), 1,
      anon_sym_FROM,
    ACTIONS(67), 1,
      anon_sym_CACHE,
    ACTIONS(70), 1,
      anon_sym_COPY,
    ACTIONS(73), 1,
      anon_sym_DO,
    ACTIONS(76), 1,
      anon_sym_FOR,
    ACTIONS(79), 1,
      anon_sym_END,
    ACTIONS(81), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(84), 1,
      anon_sym_FUNCTION,
    ACTIONS(87), 1,
      anon_sym_GIT,
    ACTIONS(90), 1,
      anon_sym_IF,
    ACTIONS(95), 1,
      anon_sym_LET,
    ACTIONS(98), 1,
      anon_sym_LOCALLY,
    ACTIONS(101), 1,
      anon_sym_RUN,
    ACTIONS(110), 1,
      anon_sym_SET,
    ACTIONS(113), 1,
      anon_sym_TRY,
    ACTIONS(116), 1,
      anon_sym_WAIT,
    ACTIONS(119), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(293), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(296), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3260] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    STATE(682), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3350] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(136), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(138), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(299), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(37), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3440] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(19), 1,
      anon_sym_ARG,
    ACTIONS(21), 1,
      anon_sym_FROM,
    ACTIONS(23), 1,
      anon_sym_CACHE,
    ACTIONS(25), 1,
      anon_sym_COPY,
    ACTIONS(27), 1,
      anon_sym_DO,
    ACTIONS(29), 1,
      anon_sym_FOR,
    ACTIONS(33), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(35), 1,
      anon_sym_FUNCTION,
    ACTIONS(37), 1,
      anon_sym_GIT,
    ACTIONS(39), 1,
      anon_sym_IF,
    ACTIONS(43), 1,
      anon_sym_LET,
    ACTIONS(45), 1,
      anon_sym_LOCALLY,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(53), 1,
      anon_sym_SET,
    ACTIONS(55), 1,
      anon_sym_TRY,
    ACTIONS(57), 1,
      anon_sym_WAIT,
    ACTIONS(59), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(210), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(212), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(301), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 20,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__target_block,
  [3530] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(307), 1,
      anon_sym_COLON2,
    ACTIONS(309), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(305), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(303), 27,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3577] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(317), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(319), 1,
      sym_cache_hint,
    ACTIONS(321), 1,
      sym_push,
    STATE(46), 1,
      aux_sym_save_image_command_repeat1,
    STATE(71), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(69), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(313), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3633] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(327), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(325), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(323), 27,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3677] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(331), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(329), 27,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3718] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(335), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(333), 27,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [3759] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(317), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(321), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(71), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(65), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(339), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3812] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      sym_image_name,
    ACTIONS(343), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(345), 1,
      sym_cache_hint,
    ACTIONS(347), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(137), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(85), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(313), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3866] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      sym_cache_hint,
    ACTIONS(349), 1,
      sym_image_name,
    ACTIONS(351), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(353), 1,
      sym_push,
    STATE(51), 1,
      aux_sym_save_image_command_repeat1,
    STATE(97), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(96), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(313), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [3920] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(319), 1,
      sym_cache_hint,
    ACTIONS(355), 1,
      sym_image_name,
    ACTIONS(357), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(359), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(130), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(138), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(313), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(311), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [3974] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(368), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(71), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(361), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4021] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(349), 1,
      sym_image_name,
    ACTIONS(351), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(353), 1,
      sym_push,
    STATE(70), 1,
      aux_sym_save_image_command_repeat1,
    STATE(97), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(339), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [4072] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      sym_image_name,
    ACTIONS(357), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(359), 1,
      sym_push,
    STATE(68), 1,
      aux_sym_save_image_command_repeat1,
    STATE(130), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(161), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(339), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4123] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      sym_image_name,
    ACTIONS(343), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(347), 1,
      sym_push,
    STATE(72), 1,
      aux_sym_save_image_command_repeat1,
    STATE(137), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(106), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(339), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(337), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4174] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(373), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(371), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4216] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(379), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(62), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(377), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4258] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(383), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(58), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(381), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4300] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(387), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(62), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(385), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4342] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(391), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(62), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(389), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4384] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(395), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(393), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4426] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(399), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(62), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(397), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4468] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(60), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(401), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4510] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(409), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(62), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(405), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [4552] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(412), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4589] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(420), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(418), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(416), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4630] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4671] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(427), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4708] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(431), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4745] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(435), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(438), 1,
      sym_push,
    STATE(68), 1,
      aux_sym_save_image_command_repeat1,
    STATE(130), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(361), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4790] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(64), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(443), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [4831] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(445), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(448), 1,
      sym_push,
    STATE(70), 1,
      aux_sym_save_image_command_repeat1,
    STATE(97), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(361), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [4876] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(451), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4913] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(458), 1,
      sym_push,
    STATE(72), 1,
      aux_sym_save_image_command_repeat1,
    STATE(137), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(361), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4958] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      anon_sym_COLON2,
    ACTIONS(463), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [4999] = 3,
    ACTIONS(467), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(465), 24,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5034] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(471), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(469), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5070] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_ASLOCAL,
    ACTIONS(479), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(473), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5110] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(483), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(481), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5146] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(487), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(485), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5182] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(493), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(491), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(489), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5220] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(495), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5258] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(501), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(499), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(497), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5296] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_ASLOCAL,
    ACTIONS(509), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(503), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5336] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(431), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(433), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5372] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(427), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(429), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [5408] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(105), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(443), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5447] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(513), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(511), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5482] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(412), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5517] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(515), 1,
      anon_sym_COLON2,
    ACTIONS(517), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [5556] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(94), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(393), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5595] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(412), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [5630] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(379), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(377), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5669] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(521), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(92), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(418), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(416), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [5708] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(349), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(92), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [5747] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(387), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(385), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5786] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(383), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(99), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(381), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5825] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(349), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(92), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(443), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [5864] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(451), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [5899] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      anon_sym_FROM,
    ACTIONS(524), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(405), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5938] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(391), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(389), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [5977] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(529), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(527), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6012] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(531), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6047] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(535), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6082] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(539), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6117] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(427), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6152] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(543), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(105), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(418), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(416), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6191] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(341), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(105), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6230] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(431), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6265] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(548), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(546), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6300] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(167), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(401), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6339] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(550), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6374] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(395), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(393), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6409] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_COLON2,
    ACTIONS(556), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6448] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(558), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6483] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(564), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(562), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6518] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(568), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(566), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6553] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(570), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6588] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(576), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(574), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6623] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(580), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(578), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6658] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(584), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(582), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6693] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(588), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(586), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6728] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(592), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(590), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6763] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(596), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(594), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6798] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(600), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(598), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6833] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(604), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(602), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6868] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(606), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6903] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(610), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6938] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(614), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [6973] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(618), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7008] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(624), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(622), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7043] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(451), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7078] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(628), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(626), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7113] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(427), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7148] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(632), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(630), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7183] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(636), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(634), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7218] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(640), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(638), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7253] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(431), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7288] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(451), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7323] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(162), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(443), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7362] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(427), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7397] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(644), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(642), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7432] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(431), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7467] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(648), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(646), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7502] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(650), 1,
      anon_sym_COLON2,
    ACTIONS(652), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(305), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [7541] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(656), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(654), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7576] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(660), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(658), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7611] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(664), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(662), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7646] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(668), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(666), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7681] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(672), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(670), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7716] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(676), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(674), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7751] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(335), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7786] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(680), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(678), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7821] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(684), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(682), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7856] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(688), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(686), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7891] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(414), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(412), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7926] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 18,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7961] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(692), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(690), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [7996] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(696), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(694), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8031] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(700), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(698), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8066] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(704), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(702), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8101] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(708), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(706), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8136] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(162), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8175] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(710), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(162), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(418), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(416), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8214] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(715), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(713), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8249] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(719), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(717), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8284] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(723), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(721), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8319] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(373), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(91), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(371), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8358] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(399), 1,
      anon_sym_FROM,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(98), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(397), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8397] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      anon_sym_ASLOCAL,
    ACTIONS(727), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(473), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8435] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_ASLOCAL,
    ACTIONS(509), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(503), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [8473] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(729), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8509] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(731), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8545] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_ASLOCAL,
    ACTIONS(479), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(473), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [8583] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_ASLOCAL,
    ACTIONS(479), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(473), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8621] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      anon_sym_ASLOCAL,
    ACTIONS(735), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(503), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8659] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      anon_sym_FROM,
    ACTIONS(737), 1,
      anon_sym_COLON2,
    ACTIONS(739), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8697] = 4,
    ACTIONS(741), 1,
      aux_sym_branch_token1,
    ACTIONS(743), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(465), 20,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [8731] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(507), 1,
      anon_sym_ASLOCAL,
    ACTIONS(509), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(505), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(503), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8769] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8805] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8838] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [8871] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      anon_sym_FROM,
    ACTIONS(747), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8906] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(335), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8939] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8972] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(751), 1,
      sym_path,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(759), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(761), 1,
      anon_sym_DASH_DASHplatform,
    STATE(247), 1,
      aux_sym_copy_command_repeat1,
    STATE(367), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(263), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(755), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [9025] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(335), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9058] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(751), 1,
      sym_path,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(759), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(761), 1,
      anon_sym_DASH_DASHplatform,
    STATE(247), 1,
      aux_sym_copy_command_repeat1,
    STATE(356), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(263), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(755), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [9111] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(487), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(485), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [9144] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(499), 1,
      anon_sym_FROM,
    ACTIONS(763), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(497), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9179] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [9212] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [9245] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(751), 1,
      sym_path,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(759), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(761), 1,
      anon_sym_DASH_DASHplatform,
    STATE(184), 1,
      aux_sym_copy_command_repeat1,
    STATE(351), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(263), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(755), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [9298] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(335), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9331] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(483), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
  [9364] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(751), 1,
      sym_path,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(759), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(761), 1,
      anon_sym_DASH_DASHplatform,
    STATE(186), 1,
      aux_sym_copy_command_repeat1,
    STATE(355), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(263), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(755), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [9417] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      anon_sym_FROM,
    ACTIONS(765), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(489), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9452] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(331), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [9485] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(602), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9517] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(674), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9549] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(632), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(630), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9581] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(628), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9613] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(620), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9645] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(634), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9677] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(640), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(638), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9709] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(612), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9741] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(688), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(686), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9773] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(582), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9805] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(644), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(642), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9837] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(335), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9869] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(527), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9901] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(533), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(531), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9933] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(648), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(646), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9965] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(656), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(654), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9997] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(658), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10029] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(713), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10061] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(662), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10093] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(535), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10125] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(541), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(539), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10157] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10189] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(666), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10221] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(670), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10253] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(548), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(546), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10285] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(600), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(598), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10317] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(717), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10349] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(678), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10381] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(690), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10413] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(513), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(511), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10445] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10477] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(723), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(721), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10509] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(696), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(694), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10541] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(622), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10573] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(700), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(698), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10605] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(616), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(614), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10637] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(395), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(393), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(682), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10701] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(558), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10733] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(608), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(606), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10765] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(564), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(562), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10797] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(566), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10829] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(572), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10861] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(708), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(706), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10893] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(576), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(574), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10925] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(580), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(578), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10957] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(588), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(586), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [10989] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11021] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(704), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(702), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11053] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(596), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(594), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GIT,
      anon_sym_IF,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [11085] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      sym_path,
    ACTIONS(774), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(777), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(780), 1,
      anon_sym_DASH_DASHplatform,
    STATE(247), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(767), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(263), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(771), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [11126] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_DASH_DASH,
    ACTIONS(787), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHsecret,
    STATE(252), 1,
      aux_sym_run_command_repeat1,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(520), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(789), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11171] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(795), 1,
      anon_sym_DASH_DASH,
    STATE(252), 1,
      aux_sym_run_command_repeat1,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(537), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(789), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11216] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(797), 1,
      anon_sym_DASH_DASH,
    STATE(249), 1,
      aux_sym_run_command_repeat1,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(527), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(789), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11261] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(791), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(793), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(799), 1,
      anon_sym_DASH_DASH,
    STATE(248), 1,
      aux_sym_run_command_repeat1,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(465), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(789), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11306] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(808), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(811), 1,
      anon_sym_DASH_DASHsecret,
    STATE(252), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(801), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(803), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(277), 2,
      sym_mount,
      sym_secret,
    ACTIONS(805), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [11343] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(814), 1,
      sym_allow_privileged,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(820), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(822), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(824), 1,
      anon_sym_DASH_DASHservice,
    STATE(266), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(676), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [11385] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(814), 1,
      sym_allow_privileged,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(820), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(822), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(824), 1,
      anon_sym_DASH_DASHservice,
    STATE(256), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(668), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [11427] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(814), 1,
      sym_allow_privileged,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(820), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(822), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(824), 1,
      anon_sym_DASH_DASHservice,
    STATE(253), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(688), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [11469] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(47), 1,
      anon_sym_RUN,
    ACTIONS(814), 1,
      sym_allow_privileged,
    ACTIONS(816), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(818), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(820), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(822), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(824), 1,
      anon_sym_DASH_DASHservice,
    STATE(266), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(675), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [11511] = 10,
    ACTIONS(826), 1,
      anon_sym_PLUS,
    ACTIONS(828), 1,
      sym_image_name,
    ACTIONS(832), 1,
      anon_sym_DASH_DASHplatform,
    STATE(89), 1,
      sym_target_ref,
    STATE(320), 1,
      aux_sym_from_command_repeat1,
    STATE(495), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(830), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(233), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(834), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11548] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(838), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(836), 12,
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
  [11573] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 12,
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
  [11598] = 10,
    ACTIONS(832), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(840), 1,
      anon_sym_PLUS,
    ACTIONS(842), 1,
      sym_image_name,
    STATE(59), 1,
      sym_target_ref,
    STATE(334), 1,
      aux_sym_from_command_repeat1,
    STATE(495), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(830), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(111), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(844), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11635] = 10,
    ACTIONS(832), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(846), 1,
      anon_sym_PLUS,
    ACTIONS(848), 1,
      sym_image_name,
    STATE(300), 1,
      sym_target_ref,
    STATE(362), 1,
      aux_sym_from_command_repeat1,
    STATE(495), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(830), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(400), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(850), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11672] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 12,
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
  [11697] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(854), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(852), 12,
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
  [11722] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(858), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(856), 12,
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
  [11747] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(862), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(860), 12,
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
  [11772] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(864), 1,
      anon_sym_RUN,
    ACTIONS(866), 1,
      sym_allow_privileged,
    ACTIONS(869), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(872), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(875), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(878), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(881), 1,
      anon_sym_DASH_DASHservice,
    STATE(266), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(358), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [11811] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym__eol,
    STATE(286), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(890), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11843] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__eol,
    STATE(286), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(892), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11875] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym__eol,
    STATE(267), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(894), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11907] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(431), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(433), 10,
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
  [11931] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym__eol,
    STATE(286), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(896), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11963] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym__eol,
    STATE(271), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(898), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11995] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
    ACTIONS(902), 1,
      anon_sym_ARG,
    ACTIONS(905), 1,
      anon_sym_FROM,
    ACTIONS(908), 1,
      anon_sym_PROJECT,
    ACTIONS(911), 1,
      anon_sym_VERSION,
    ACTIONS(914), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(273), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [12029] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(919), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(917), 10,
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
  [12053] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(427), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(429), 10,
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
  [12077] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym__eol,
    STATE(268), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(921), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12109] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(925), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(923), 10,
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
  [12133] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(929), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(927), 10,
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
  [12157] = 9,
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
    ACTIONS(931), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(273), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [12191] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym__eol,
    STATE(281), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(933), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12223] = 8,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    ACTIONS(888), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      sym__eol,
    STATE(286), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(884), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(935), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12255] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    STATE(302), 1,
      aux_sym__conditional_block_repeat1,
    STATE(571), 1,
      sym_else_if_block,
    STATE(572), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(384), 2,
      sym_mount,
      sym_secret,
    ACTIONS(941), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12290] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(945), 1,
      sym_identifier,
    ACTIONS(949), 1,
      anon_sym_DASH_DASHsep,
    STATE(288), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(947), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(353), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [12323] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(949), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(951), 1,
      sym_identifier,
    STATE(285), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(947), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(353), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [12356] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(949), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(953), 1,
      sym_identifier,
    STATE(288), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(947), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(353), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [12389] = 7,
    ACTIONS(958), 1,
      anon_sym_DQUOTE,
    ACTIONS(961), 1,
      anon_sym_SQUOTE,
    STATE(286), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(955), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(347), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(964), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12418] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(949), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(966), 1,
      sym_identifier,
    STATE(283), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(947), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(353), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [12451] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(968), 1,
      sym_identifier,
    ACTIONS(970), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(976), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(979), 1,
      anon_sym_DASH_DASHsep,
    STATE(288), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(973), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(353), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [12484] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(982), 1,
      sym_path,
    ACTIONS(984), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(987), 1,
      anon_sym_DASHf,
    ACTIONS(990), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(993), 1,
      anon_sym_DASH_DASHplatform,
    STATE(289), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(429), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [12516] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(996), 1,
      sym_path,
    ACTIONS(998), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1000), 1,
      anon_sym_DASHf,
    ACTIONS(1002), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1004), 1,
      anon_sym_DASH_DASHplatform,
    STATE(291), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(429), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [12548] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1000), 1,
      anon_sym_DASHf,
    ACTIONS(1002), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1004), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1006), 1,
      sym_path,
    STATE(289), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(429), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [12580] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1008), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(292), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(407), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12606] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    STATE(302), 1,
      aux_sym__conditional_block_repeat1,
    STATE(443), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(384), 2,
      sym_mount,
      sym_secret,
    ACTIONS(941), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12638] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1000), 1,
      anon_sym_DASHf,
    ACTIONS(1002), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1004), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1011), 1,
      sym_path,
    STATE(295), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(429), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [12670] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(998), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1000), 1,
      anon_sym_DASHf,
    ACTIONS(1002), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1004), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1013), 1,
      sym_path,
    STATE(289), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(429), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [12702] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(937), 1,
      sym_identifier,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    STATE(302), 1,
      aux_sym__conditional_block_repeat1,
    STATE(461), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(384), 2,
      sym_mount,
      sym_secret,
    ACTIONS(941), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12734] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1015), 1,
      sym_path,
    ACTIONS(1017), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1019), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1021), 1,
      sym_persist,
    ACTIONS(1023), 1,
      anon_sym_DASH_DASHsharing,
    STATE(299), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12765] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1017), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1019), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1021), 1,
      sym_persist,
    ACTIONS(1023), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1025), 1,
      sym_path,
    STATE(301), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12796] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1017), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1019), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1021), 1,
      sym_persist,
    ACTIONS(1023), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1027), 1,
      sym_path,
    STATE(308), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12827] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(309), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(395), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12852] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1017), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1019), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1021), 1,
      sym_persist,
    ACTIONS(1023), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1031), 1,
      sym_path,
    STATE(308), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12883] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(943), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1033), 1,
      sym_identifier,
    STATE(303), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(384), 2,
      sym_mount,
      sym_secret,
    ACTIONS(941), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12912] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(1037), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1043), 1,
      anon_sym_DASH_DASHsecret,
    STATE(303), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(384), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1040), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12941] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1046), 1,
      anon_sym_COLON2,
    ACTIONS(1048), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(305), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12966] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(292), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(391), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12991] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(305), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(383), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13016] = 4,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    ACTIONS(1050), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(465), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [13037] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1052), 1,
      sym_path,
    ACTIONS(1054), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1057), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1060), 1,
      sym_persist,
    ACTIONS(1063), 1,
      anon_sym_DASH_DASHsharing,
    STATE(308), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(435), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [13068] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(292), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(387), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13093] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(471), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13113] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(431), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13133] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(427), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13153] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(485), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(487), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13173] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1066), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(325), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13195] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1068), 1,
      ts_builtin_sym_end,
    ACTIONS(1072), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1070), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13216] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1074), 1,
      sym_path,
    STATE(348), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13237] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1078), 1,
      sym_path,
    STATE(342), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13258] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1080), 1,
      sym_expr,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1086), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(538), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13283] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1088), 1,
      sym_expr,
    ACTIONS(1090), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(447), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13308] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1092), 1,
      anon_sym_PLUS,
    STATE(95), 1,
      sym_target_ref,
    STATE(386), 1,
      aux_sym_from_command_repeat1,
    STATE(495), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1094), 2,
      sym_allow_privileged,
      sym_pass_args,
  [13335] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13352] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13369] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13386] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13403] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1096), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13420] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1098), 1,
      sym_expr,
    ACTIONS(1100), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(482), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13445] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1102), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13462] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(331), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13481] = 4,
    STATE(165), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1104), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1106), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13500] = 4,
    STATE(148), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1104), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1108), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13519] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1110), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13536] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(427), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13551] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(431), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13566] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1112), 1,
      anon_sym_PLUS,
    STATE(56), 1,
      sym_target_ref,
    STATE(386), 1,
      aux_sym_from_command_repeat1,
    STATE(495), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1094), 2,
      sym_allow_privileged,
      sym_pass_args,
  [13593] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1114), 1,
      sym_expr,
    ACTIONS(1116), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(486), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13618] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1118), 1,
      sym_expr,
    ACTIONS(1120), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(481), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13643] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1122), 1,
      sym_path,
    STATE(341), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13664] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13681] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1124), 1,
      sym_path,
    STATE(357), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13702] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(335), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13721] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1126), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13742] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1128), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13763] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1130), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13780] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1132), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13797] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(927), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13814] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(917), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13831] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1134), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13846] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1136), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13867] = 4,
    STATE(220), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1104), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1138), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13886] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1140), 1,
      sym_path,
    STATE(354), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13907] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(1142), 1,
      sym_path,
    STATE(365), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [13934] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(836), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13951] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1144), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13968] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1146), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13989] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(1148), 1,
      sym_path,
    STATE(365), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14016] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(1150), 1,
      sym_path,
    STATE(365), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14043] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1152), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1076), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14064] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1154), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14081] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1156), 1,
      sym_expr,
    ACTIONS(1158), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(502), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14106] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1160), 1,
      sym_path,
    STATE(360), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1162), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14127] = 4,
    STATE(363), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1165), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1167), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14146] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(761), 1,
      anon_sym_DASH_DASHplatform,
    STATE(306), 1,
      sym_target_ref,
    STATE(386), 1,
      aux_sym_from_command_repeat1,
    STATE(495), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1094), 2,
      sym_allow_privileged,
      sym_pass_args,
  [14173] = 4,
    STATE(363), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1169), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1172), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14192] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1174), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [14209] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1179), 1,
      sym_path,
    ACTIONS(1182), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14236] = 4,
    STATE(228), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1104), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1185), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14255] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    ACTIONS(1187), 1,
      sym_path,
    STATE(365), 1,
      aux_sym_copy_command_repeat2,
    STATE(656), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(567), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [14282] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE,
    ACTIONS(1191), 1,
      anon_sym_SQUOTE,
    ACTIONS(1193), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(264), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14304] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1195), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1197), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14322] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      anon_sym_SQUOTE,
    ACTIONS(1203), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(364), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14344] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
    ACTIONS(1207), 1,
      anon_sym_SQUOTE,
    ACTIONS(1209), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(411), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14366] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE,
    ACTIONS(1213), 1,
      anon_sym_SQUOTE,
    ACTIONS(1215), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(154), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14388] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1217), 1,
      anon_sym_DQUOTE,
    ACTIONS(1219), 1,
      anon_sym_SQUOTE,
    ACTIONS(1221), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(278), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14410] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1217), 1,
      anon_sym_DQUOTE,
    ACTIONS(1219), 1,
      anon_sym_SQUOTE,
    ACTIONS(1223), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(274), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14432] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE,
    ACTIONS(1191), 1,
      anon_sym_SQUOTE,
    ACTIONS(1225), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(265), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14454] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1227), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(470), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14476] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1231), 1,
      anon_sym_SQUOTE,
    ACTIONS(1233), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(87), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14498] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1235), 1,
      anon_sym_DQUOTE,
    ACTIONS(1237), 1,
      anon_sym_SQUOTE,
    ACTIONS(1239), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(187), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14520] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
    ACTIONS(1207), 1,
      anon_sym_SQUOTE,
    ACTIONS(1241), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(423), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14542] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1243), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(518), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14564] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1245), 1,
      anon_sym_DQUOTE,
    ACTIONS(1247), 1,
      anon_sym_SQUOTE,
    ACTIONS(1249), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(63), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14586] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1251), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(544), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14608] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(529), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14626] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1253), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [14642] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE,
    ACTIONS(1191), 1,
      anon_sym_SQUOTE,
    ACTIONS(1255), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(258), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14664] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1257), 1,
      anon_sym_PLUS,
    ACTIONS(1262), 1,
      anon_sym_DASH_DASHplatform,
    STATE(386), 1,
      aux_sym_from_command_repeat1,
    STATE(495), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1259), 2,
      sym_allow_privileged,
      sym_pass_args,
  [14688] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(533), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14706] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1265), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1267), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14724] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1269), 1,
      anon_sym_DQUOTE,
    ACTIONS(1271), 1,
      anon_sym_SQUOTE,
    ACTIONS(1273), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(78), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14746] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(548), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14764] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14782] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1275), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1277), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [14800] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1082), 1,
      anon_sym_DQUOTE,
    ACTIONS(1084), 1,
      anon_sym_SQUOTE,
    ACTIONS(1279), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14822] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14840] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1281), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1283), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14858] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
    ACTIONS(1287), 1,
      anon_sym_SQUOTE,
    ACTIONS(1289), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(344), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14880] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
    ACTIONS(1287), 1,
      anon_sym_SQUOTE,
    ACTIONS(1291), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(345), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14902] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      anon_sym_DQUOTE,
    ACTIONS(1287), 1,
      anon_sym_SQUOTE,
    ACTIONS(1293), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(346), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14924] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      anon_sym_SQUOTE,
    ACTIONS(1295), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(352), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14946] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(395), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14964] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14982] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1297), 1,
      anon_sym_DQUOTE,
    ACTIONS(1299), 1,
      anon_sym_SQUOTE,
    ACTIONS(1301), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(313), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15004] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1303), 1,
      anon_sym_DQUOTE,
    ACTIONS(1305), 1,
      anon_sym_SQUOTE,
    ACTIONS(1307), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(90), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15026] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1309), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1311), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [15044] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1313), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1315), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [15062] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1317), 1,
      anon_sym_DQUOTE,
    ACTIONS(1319), 1,
      anon_sym_SQUOTE,
    ACTIONS(1321), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(428), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [15084] = 4,
    ACTIONS(1323), 1,
      anon_sym_EQ,
    STATE(110), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1325), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15101] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1327), 1,
      anon_sym_PLUS,
    STATE(109), 1,
      sym_function_ref,
    STATE(431), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1329), 2,
      sym_allow_privileged,
      sym_pass_args,
  [15122] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [15139] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [15156] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1331), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1333), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [15173] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1335), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1337), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [15190] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1339), 1,
      sym_path,
    ACTIONS(1341), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1344), 1,
      sym_keep_ts,
    STATE(413), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(561), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15213] = 4,
    ACTIONS(1347), 1,
      anon_sym_EQ,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1349), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15230] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1351), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1353), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [15247] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1355), 1,
      sym_path,
    ACTIONS(1357), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1359), 1,
      sym_keep_ts,
    STATE(417), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(561), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15270] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1357), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1359), 1,
      sym_keep_ts,
    ACTIONS(1361), 1,
      sym_path,
    STATE(413), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(561), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15293] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(433), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [15310] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(427), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(429), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [15327] = 4,
    ACTIONS(1363), 1,
      anon_sym_EQ,
    STATE(394), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1365), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15344] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(785), 1,
      aux_sym_shell_fragment_token3,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(519), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(787), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [15365] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(785), 1,
      aux_sym_shell_fragment_token3,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(545), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(787), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [15386] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(838), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(836), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [15403] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1357), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1359), 1,
      sym_keep_ts,
    ACTIONS(1367), 1,
      sym_path,
    STATE(413), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(561), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15426] = 4,
    ACTIONS(1369), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1371), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15443] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(785), 1,
      aux_sym_shell_fragment_token3,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(523), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(787), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [15464] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1357), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1359), 1,
      sym_keep_ts,
    ACTIONS(1373), 1,
      sym_path,
    STATE(424), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(561), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15487] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(862), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(860), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [15504] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1375), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1377), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [15521] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1379), 1,
      anon_sym_PLUS,
    STATE(61), 1,
      sym_function_ref,
    STATE(433), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1329), 2,
      sym_allow_privileged,
      sym_pass_args,
  [15542] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1327), 1,
      anon_sym_PLUS,
    STATE(166), 1,
      sym_function_ref,
    STATE(492), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1329), 2,
      sym_allow_privileged,
      sym_pass_args,
  [15563] = 4,
    ACTIONS(1381), 1,
      anon_sym_EQ,
    STATE(390), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1383), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15580] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1379), 1,
      anon_sym_PLUS,
    STATE(54), 1,
      sym_function_ref,
    STATE(492), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1329), 2,
      sym_allow_privileged,
      sym_pass_args,
  [15601] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1385), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1387), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [15618] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1389), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1391), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [15635] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(785), 1,
      aux_sym_shell_fragment_token3,
    STATE(361), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(536), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(787), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [15656] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1393), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1395), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [15673] = 4,
    ACTIONS(1397), 1,
      anon_sym_EQ,
    STATE(221), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1399), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15690] = 3,
    STATE(29), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1401), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15704] = 3,
    STATE(115), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1403), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15718] = 3,
    STATE(234), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1405), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15732] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1407), 1,
      sym_identifier,
    STATE(442), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1409), 2,
      sym_global,
      sym_required,
  [15750] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1412), 1,
      anon_sym_END,
    ACTIONS(1414), 1,
      anon_sym_ELSEIF,
    ACTIONS(1416), 1,
      anon_sym_ELSE,
    STATE(498), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15770] = 3,
    STATE(199), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1418), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15784] = 3,
    STATE(236), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1420), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15798] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1422), 1,
      anon_sym_END,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    STATE(515), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15818] = 3,
    STATE(216), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1426), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15832] = 3,
    STATE(217), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1428), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15846] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1430), 1,
      sym_identifier,
    STATE(496), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1432), 2,
      sym_global,
      sym_required,
  [15864] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1434), 1,
      anon_sym_END,
    STATE(510), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15884] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1436), 1,
      sym_identifier,
    STATE(514), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1432), 2,
      sym_global,
      sym_required,
  [15902] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1438), 1,
      anon_sym_END,
    STATE(446), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15922] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1440), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(292), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15940] = 3,
    STATE(450), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1442), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15954] = 3,
    STATE(197), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1444), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15968] = 3,
    STATE(226), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1446), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15982] = 3,
    STATE(222), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1448), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15996] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(292), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [16014] = 3,
    STATE(200), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1452), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16028] = 3,
    STATE(4), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1454), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16042] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1414), 1,
      anon_sym_ELSEIF,
    ACTIONS(1456), 1,
      anon_sym_END,
    ACTIONS(1458), 1,
      anon_sym_ELSE,
    STATE(513), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16062] = 3,
    STATE(198), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1460), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16076] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1462), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16090] = 3,
    STATE(246), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1464), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16104] = 3,
    STATE(205), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1466), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16118] = 3,
    STATE(204), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1468), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16132] = 3,
    STATE(235), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1470), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16146] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1472), 1,
      anon_sym_END,
    STATE(472), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16166] = 3,
    STATE(214), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1474), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16180] = 3,
    STATE(203), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1476), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16194] = 3,
    STATE(315), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1478), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16208] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1480), 1,
      anon_sym_END,
    STATE(515), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16228] = 3,
    STATE(206), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1482), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16242] = 3,
    STATE(219), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1484), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16256] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1486), 1,
      sym_identifier,
    STATE(442), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1432), 2,
      sym_global,
      sym_required,
  [16274] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1488), 1,
      anon_sym_END,
    STATE(479), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16294] = 3,
    STATE(388), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1490), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16308] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1492), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(453), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [16326] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1494), 1,
      anon_sym_END,
    STATE(515), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16346] = 3,
    STATE(223), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1496), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16360] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1498), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16374] = 3,
    STATE(383), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1500), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16388] = 3,
    STATE(387), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1502), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16402] = 3,
    STATE(202), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1504), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16416] = 3,
    STATE(101), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1506), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16430] = 3,
    STATE(102), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1508), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16444] = 3,
    STATE(237), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1510), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16458] = 3,
    STATE(103), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1512), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16472] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1514), 1,
      sym_identifier,
    STATE(475), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1432), 2,
      sym_global,
      sym_required,
  [16490] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      anon_sym_END,
    ACTIONS(475), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(477), 1,
      anon_sym_ASLOCAL,
    ACTIONS(479), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16510] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(503), 1,
      anon_sym_END,
    ACTIONS(505), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(507), 1,
      anon_sym_ASLOCAL,
    ACTIONS(509), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16530] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1516), 1,
      anon_sym_PLUS,
    STATE(492), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1518), 2,
      sym_allow_privileged,
      sym_pass_args,
  [16548] = 3,
    STATE(369), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1521), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16562] = 3,
    STATE(113), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1523), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16576] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1525), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [16590] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1527), 1,
      sym_identifier,
    STATE(442), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1432), 2,
      sym_global,
      sym_required,
  [16608] = 3,
    STATE(114), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1529), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16622] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1414), 1,
      anon_sym_ELSEIF,
    ACTIONS(1531), 1,
      anon_sym_END,
    ACTIONS(1533), 1,
      anon_sym_ELSE,
    STATE(509), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16642] = 3,
    STATE(238), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1535), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16656] = 3,
    STATE(239), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1537), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16670] = 3,
    STATE(240), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1539), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16684] = 3,
    STATE(401), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1541), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16698] = 3,
    STATE(391), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1543), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16712] = 3,
    STATE(241), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1545), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16726] = 3,
    STATE(395), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1547), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16740] = 3,
    STATE(468), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1549), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16754] = 3,
    STATE(476), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1551), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16768] = 3,
    STATE(215), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1553), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16782] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1555), 1,
      anon_sym_END,
    ACTIONS(1557), 1,
      anon_sym_ELSEIF,
    ACTIONS(1560), 1,
      anon_sym_ELSE,
    STATE(509), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16802] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1424), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1562), 1,
      anon_sym_END,
    STATE(515), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16822] = 3,
    STATE(242), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1564), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16836] = 3,
    STATE(245), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1566), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16850] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1414), 1,
      anon_sym_ELSEIF,
    ACTIONS(1568), 1,
      anon_sym_END,
    ACTIONS(1570), 1,
      anon_sym_ELSE,
    STATE(509), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16870] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1572), 1,
      sym_identifier,
    STATE(442), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1432), 2,
      sym_global,
      sym_required,
  [16888] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1574), 1,
      anon_sym_END,
    ACTIONS(1576), 1,
      anon_sym_SAVEARTIFACT,
    STATE(515), 1,
      aux_sym_try_command_repeat1,
    STATE(579), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16908] = 3,
    STATE(243), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1579), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16922] = 3,
    STATE(2), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1581), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16936] = 3,
    STATE(213), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1583), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16950] = 3,
    STATE(231), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1585), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16964] = 3,
    STATE(229), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1587), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16978] = 3,
    STATE(119), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1589), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16992] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1591), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17006] = 3,
    STATE(212), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1593), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17020] = 3,
    STATE(86), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1595), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17034] = 3,
    STATE(230), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1597), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17048] = 3,
    STATE(152), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1599), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17062] = 3,
    STATE(153), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1601), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17076] = 3,
    STATE(244), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1603), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17090] = 3,
    STATE(163), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1605), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17104] = 3,
    STATE(452), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1607), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17118] = 3,
    STATE(164), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1609), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17132] = 3,
    STATE(224), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1611), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17146] = 3,
    STATE(40), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1613), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17160] = 3,
    STATE(160), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1615), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17174] = 3,
    STATE(159), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1617), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17188] = 3,
    STATE(158), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1619), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17202] = 3,
    STATE(157), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1621), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17216] = 3,
    STATE(209), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1623), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17230] = 3,
    STATE(151), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1625), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17244] = 3,
    STATE(149), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1627), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17258] = 3,
    STATE(210), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1629), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17272] = 3,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1631), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17286] = 3,
    STATE(146), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1633), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17300] = 3,
    STATE(145), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1635), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17314] = 3,
    STATE(144), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1637), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17328] = 3,
    STATE(135), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1639), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17342] = 3,
    STATE(134), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1641), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17356] = 3,
    STATE(133), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1643), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17370] = 3,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1645), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17384] = 3,
    STATE(129), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1647), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17398] = 3,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1649), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17412] = 3,
    STATE(124), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1651), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17426] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1653), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17440] = 3,
    STATE(122), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1655), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17454] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1657), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17468] = 3,
    STATE(120), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1659), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17482] = 3,
    STATE(118), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1661), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17496] = 3,
    STATE(117), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1663), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17510] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(431), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17521] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1665), 1,
      anon_sym_PLUS,
    ACTIONS(1667), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17538] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1669), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1671), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [17553] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1675), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1673), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [17568] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1677), 1,
      sym_version_major_minor,
    ACTIONS(1679), 1,
      sym_feature_flag,
    STATE(565), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17585] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1681), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [17598] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1683), 1,
      sym_version_major_minor,
    ACTIONS(1685), 1,
      sym_feature_flag,
    STATE(574), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17615] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1687), 3,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
  [17628] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1104), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1689), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [17643] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(427), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17654] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1693), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1691), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [17669] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1695), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1697), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [17684] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1701), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1699), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [17699] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1705), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1703), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [17714] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1709), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1707), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [17729] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1711), 1,
      sym_version_major_minor,
    ACTIONS(1713), 1,
      sym_feature_flag,
    STATE(574), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17746] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1029), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(458), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [17761] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    STATE(691), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17775] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1716), 1,
      sym_image_name,
    STATE(721), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17789] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1718), 1,
      sym_image_name,
    STATE(327), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17803] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1720), 2,
      anon_sym_END,
      anon_sym_SAVEARTIFACT,
  [17815] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_PLUS,
    STATE(575), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17829] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1722), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17840] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1724), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17851] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1726), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17862] = 2,
    ACTIONS(1728), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17871] = 2,
    ACTIONS(1730), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17880] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1732), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17891] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1734), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17902] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1736), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17913] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1738), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17924] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1740), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17935] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1742), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17946] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1744), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17957] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1746), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17968] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1748), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17979] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1750), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17990] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1752), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18001] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1754), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18012] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1756), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18023] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1758), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18034] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1760), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18045] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1762), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18056] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1764), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18067] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1766), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18078] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1768), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18089] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1770), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18100] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1772), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18111] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1774), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18122] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1776), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18133] = 2,
    ACTIONS(1778), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18142] = 2,
    ACTIONS(1780), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18151] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1782), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18162] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1784), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18173] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1786), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18184] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1788), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18195] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1790), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18206] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1792), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18217] = 2,
    ACTIONS(1794), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18226] = 2,
    ACTIONS(1796), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18235] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1798), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18246] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1800), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18257] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1802), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18268] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1804), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18279] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1806), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18290] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1808), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18301] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1810), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18312] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1812), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18323] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1814), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18334] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1816), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18345] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1818), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18356] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1820), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18367] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1822), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18378] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1824), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18389] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1826), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18400] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1828), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18411] = 2,
    ACTIONS(1830), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18420] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1832), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18431] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1834), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18442] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1836), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18453] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1838), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18464] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1840), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18475] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1842), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18486] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1844), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18497] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1846), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18508] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1848), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18519] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1850), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18530] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1852), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18541] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1854), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18552] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1856), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18563] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1858), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18574] = 2,
    ACTIONS(1860), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18583] = 2,
    ACTIONS(1862), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18592] = 2,
    ACTIONS(1864), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18601] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1866), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18612] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1868), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18623] = 2,
    ACTIONS(1870), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18632] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1872), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18643] = 2,
    ACTIONS(1874), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18652] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1876), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18663] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1878), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18674] = 2,
    ACTIONS(1880), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18683] = 2,
    ACTIONS(1882), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18692] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1884), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18703] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1886), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18714] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1888), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18725] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1890), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18736] = 2,
    ACTIONS(1892), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18745] = 2,
    ACTIONS(1894), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18754] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1896), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18765] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1898), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18776] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1900), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18787] = 2,
    ACTIONS(1902), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18796] = 2,
    ACTIONS(1904), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18805] = 2,
    ACTIONS(1906), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18814] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1908), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18825] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1910), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18836] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1912), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18847] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1914), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18858] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1916), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18869] = 2,
    ACTIONS(1918), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18878] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1920), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18889] = 2,
    ACTIONS(1922), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18898] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1924), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18909] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1926), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18920] = 2,
    ACTIONS(1928), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18929] = 2,
    ACTIONS(1930), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18938] = 2,
    ACTIONS(1932), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18947] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1934), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18958] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1936), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18969] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1938), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18980] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1940), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18991] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1942), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19002] = 2,
    ACTIONS(1944), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19011] = 2,
    ACTIONS(1946), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19020] = 2,
    ACTIONS(1948), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19029] = 2,
    ACTIONS(1950), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19038] = 2,
    ACTIONS(1952), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19047] = 2,
    ACTIONS(1954), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19056] = 2,
    ACTIONS(1956), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19065] = 2,
    ACTIONS(1958), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19074] = 2,
    ACTIONS(1960), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19083] = 2,
    ACTIONS(1962), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19092] = 2,
    ACTIONS(1964), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19101] = 2,
    ACTIONS(1966), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19110] = 2,
    ACTIONS(1968), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19119] = 2,
    ACTIONS(1970), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19128] = 2,
    ACTIONS(1972), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19137] = 2,
    ACTIONS(1974), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19146] = 2,
    ACTIONS(1976), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19155] = 2,
    ACTIONS(1978), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19164] = 2,
    ACTIONS(1980), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19173] = 2,
    ACTIONS(1982), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19182] = 2,
    ACTIONS(1984), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19191] = 2,
    ACTIONS(1986), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19200] = 2,
    ACTIONS(1988), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19209] = 2,
    ACTIONS(1990), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19218] = 2,
    ACTIONS(1992), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19227] = 2,
    ACTIONS(1994), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19236] = 2,
    ACTIONS(1996), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19245] = 2,
    ACTIONS(1998), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19254] = 2,
    ACTIONS(2000), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19263] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2002), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19274] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2004), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19285] = 2,
    ACTIONS(2006), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19294] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2008), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19305] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2010), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19316] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2012), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19327] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2014), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19338] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2016), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19349] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2018), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19360] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2020), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19371] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2022), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19382] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2024), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19393] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2026), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19404] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2028), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19415] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2030), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19426] = 2,
    ACTIONS(2032), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19435] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2034), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19446] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2036), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19457] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2038), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19468] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2040), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19479] = 2,
    ACTIONS(2042), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [19488] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2044), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19499] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2046), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19510] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2048), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19521] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2050), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19532] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2052), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [19543] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2054), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 376,
  [SMALL_STATE(7)] = 470,
  [SMALL_STATE(8)] = 560,
  [SMALL_STATE(9)] = 650,
  [SMALL_STATE(10)] = 740,
  [SMALL_STATE(11)] = 830,
  [SMALL_STATE(12)] = 920,
  [SMALL_STATE(13)] = 1010,
  [SMALL_STATE(14)] = 1100,
  [SMALL_STATE(15)] = 1190,
  [SMALL_STATE(16)] = 1280,
  [SMALL_STATE(17)] = 1370,
  [SMALL_STATE(18)] = 1460,
  [SMALL_STATE(19)] = 1550,
  [SMALL_STATE(20)] = 1640,
  [SMALL_STATE(21)] = 1730,
  [SMALL_STATE(22)] = 1820,
  [SMALL_STATE(23)] = 1910,
  [SMALL_STATE(24)] = 2000,
  [SMALL_STATE(25)] = 2090,
  [SMALL_STATE(26)] = 2180,
  [SMALL_STATE(27)] = 2270,
  [SMALL_STATE(28)] = 2360,
  [SMALL_STATE(29)] = 2450,
  [SMALL_STATE(30)] = 2540,
  [SMALL_STATE(31)] = 2630,
  [SMALL_STATE(32)] = 2720,
  [SMALL_STATE(33)] = 2810,
  [SMALL_STATE(34)] = 2900,
  [SMALL_STATE(35)] = 2990,
  [SMALL_STATE(36)] = 3080,
  [SMALL_STATE(37)] = 3170,
  [SMALL_STATE(38)] = 3260,
  [SMALL_STATE(39)] = 3350,
  [SMALL_STATE(40)] = 3440,
  [SMALL_STATE(41)] = 3530,
  [SMALL_STATE(42)] = 3577,
  [SMALL_STATE(43)] = 3633,
  [SMALL_STATE(44)] = 3677,
  [SMALL_STATE(45)] = 3718,
  [SMALL_STATE(46)] = 3759,
  [SMALL_STATE(47)] = 3812,
  [SMALL_STATE(48)] = 3866,
  [SMALL_STATE(49)] = 3920,
  [SMALL_STATE(50)] = 3974,
  [SMALL_STATE(51)] = 4021,
  [SMALL_STATE(52)] = 4072,
  [SMALL_STATE(53)] = 4123,
  [SMALL_STATE(54)] = 4174,
  [SMALL_STATE(55)] = 4216,
  [SMALL_STATE(56)] = 4258,
  [SMALL_STATE(57)] = 4300,
  [SMALL_STATE(58)] = 4342,
  [SMALL_STATE(59)] = 4384,
  [SMALL_STATE(60)] = 4426,
  [SMALL_STATE(61)] = 4468,
  [SMALL_STATE(62)] = 4510,
  [SMALL_STATE(63)] = 4552,
  [SMALL_STATE(64)] = 4589,
  [SMALL_STATE(65)] = 4630,
  [SMALL_STATE(66)] = 4671,
  [SMALL_STATE(67)] = 4708,
  [SMALL_STATE(68)] = 4745,
  [SMALL_STATE(69)] = 4790,
  [SMALL_STATE(70)] = 4831,
  [SMALL_STATE(71)] = 4876,
  [SMALL_STATE(72)] = 4913,
  [SMALL_STATE(73)] = 4958,
  [SMALL_STATE(74)] = 4999,
  [SMALL_STATE(75)] = 5034,
  [SMALL_STATE(76)] = 5070,
  [SMALL_STATE(77)] = 5110,
  [SMALL_STATE(78)] = 5146,
  [SMALL_STATE(79)] = 5182,
  [SMALL_STATE(80)] = 5220,
  [SMALL_STATE(81)] = 5258,
  [SMALL_STATE(82)] = 5296,
  [SMALL_STATE(83)] = 5336,
  [SMALL_STATE(84)] = 5372,
  [SMALL_STATE(85)] = 5408,
  [SMALL_STATE(86)] = 5447,
  [SMALL_STATE(87)] = 5482,
  [SMALL_STATE(88)] = 5517,
  [SMALL_STATE(89)] = 5556,
  [SMALL_STATE(90)] = 5595,
  [SMALL_STATE(91)] = 5630,
  [SMALL_STATE(92)] = 5669,
  [SMALL_STATE(93)] = 5708,
  [SMALL_STATE(94)] = 5747,
  [SMALL_STATE(95)] = 5786,
  [SMALL_STATE(96)] = 5825,
  [SMALL_STATE(97)] = 5864,
  [SMALL_STATE(98)] = 5899,
  [SMALL_STATE(99)] = 5938,
  [SMALL_STATE(100)] = 5977,
  [SMALL_STATE(101)] = 6012,
  [SMALL_STATE(102)] = 6047,
  [SMALL_STATE(103)] = 6082,
  [SMALL_STATE(104)] = 6117,
  [SMALL_STATE(105)] = 6152,
  [SMALL_STATE(106)] = 6191,
  [SMALL_STATE(107)] = 6230,
  [SMALL_STATE(108)] = 6265,
  [SMALL_STATE(109)] = 6300,
  [SMALL_STATE(110)] = 6339,
  [SMALL_STATE(111)] = 6374,
  [SMALL_STATE(112)] = 6409,
  [SMALL_STATE(113)] = 6448,
  [SMALL_STATE(114)] = 6483,
  [SMALL_STATE(115)] = 6518,
  [SMALL_STATE(116)] = 6553,
  [SMALL_STATE(117)] = 6588,
  [SMALL_STATE(118)] = 6623,
  [SMALL_STATE(119)] = 6658,
  [SMALL_STATE(120)] = 6693,
  [SMALL_STATE(121)] = 6728,
  [SMALL_STATE(122)] = 6763,
  [SMALL_STATE(123)] = 6798,
  [SMALL_STATE(124)] = 6833,
  [SMALL_STATE(125)] = 6868,
  [SMALL_STATE(126)] = 6903,
  [SMALL_STATE(127)] = 6938,
  [SMALL_STATE(128)] = 6973,
  [SMALL_STATE(129)] = 7008,
  [SMALL_STATE(130)] = 7043,
  [SMALL_STATE(131)] = 7078,
  [SMALL_STATE(132)] = 7113,
  [SMALL_STATE(133)] = 7148,
  [SMALL_STATE(134)] = 7183,
  [SMALL_STATE(135)] = 7218,
  [SMALL_STATE(136)] = 7253,
  [SMALL_STATE(137)] = 7288,
  [SMALL_STATE(138)] = 7323,
  [SMALL_STATE(139)] = 7362,
  [SMALL_STATE(140)] = 7397,
  [SMALL_STATE(141)] = 7432,
  [SMALL_STATE(142)] = 7467,
  [SMALL_STATE(143)] = 7502,
  [SMALL_STATE(144)] = 7541,
  [SMALL_STATE(145)] = 7576,
  [SMALL_STATE(146)] = 7611,
  [SMALL_STATE(147)] = 7646,
  [SMALL_STATE(148)] = 7681,
  [SMALL_STATE(149)] = 7716,
  [SMALL_STATE(150)] = 7751,
  [SMALL_STATE(151)] = 7786,
  [SMALL_STATE(152)] = 7821,
  [SMALL_STATE(153)] = 7856,
  [SMALL_STATE(154)] = 7891,
  [SMALL_STATE(155)] = 7926,
  [SMALL_STATE(156)] = 7961,
  [SMALL_STATE(157)] = 7996,
  [SMALL_STATE(158)] = 8031,
  [SMALL_STATE(159)] = 8066,
  [SMALL_STATE(160)] = 8101,
  [SMALL_STATE(161)] = 8136,
  [SMALL_STATE(162)] = 8175,
  [SMALL_STATE(163)] = 8214,
  [SMALL_STATE(164)] = 8249,
  [SMALL_STATE(165)] = 8284,
  [SMALL_STATE(166)] = 8319,
  [SMALL_STATE(167)] = 8358,
  [SMALL_STATE(168)] = 8397,
  [SMALL_STATE(169)] = 8435,
  [SMALL_STATE(170)] = 8473,
  [SMALL_STATE(171)] = 8509,
  [SMALL_STATE(172)] = 8545,
  [SMALL_STATE(173)] = 8583,
  [SMALL_STATE(174)] = 8621,
  [SMALL_STATE(175)] = 8659,
  [SMALL_STATE(176)] = 8697,
  [SMALL_STATE(177)] = 8731,
  [SMALL_STATE(178)] = 8769,
  [SMALL_STATE(179)] = 8805,
  [SMALL_STATE(180)] = 8838,
  [SMALL_STATE(181)] = 8871,
  [SMALL_STATE(182)] = 8906,
  [SMALL_STATE(183)] = 8939,
  [SMALL_STATE(184)] = 8972,
  [SMALL_STATE(185)] = 9025,
  [SMALL_STATE(186)] = 9058,
  [SMALL_STATE(187)] = 9111,
  [SMALL_STATE(188)] = 9144,
  [SMALL_STATE(189)] = 9179,
  [SMALL_STATE(190)] = 9212,
  [SMALL_STATE(191)] = 9245,
  [SMALL_STATE(192)] = 9298,
  [SMALL_STATE(193)] = 9331,
  [SMALL_STATE(194)] = 9364,
  [SMALL_STATE(195)] = 9417,
  [SMALL_STATE(196)] = 9452,
  [SMALL_STATE(197)] = 9485,
  [SMALL_STATE(198)] = 9517,
  [SMALL_STATE(199)] = 9549,
  [SMALL_STATE(200)] = 9581,
  [SMALL_STATE(201)] = 9613,
  [SMALL_STATE(202)] = 9645,
  [SMALL_STATE(203)] = 9677,
  [SMALL_STATE(204)] = 9709,
  [SMALL_STATE(205)] = 9741,
  [SMALL_STATE(206)] = 9773,
  [SMALL_STATE(207)] = 9805,
  [SMALL_STATE(208)] = 9837,
  [SMALL_STATE(209)] = 9869,
  [SMALL_STATE(210)] = 9901,
  [SMALL_STATE(211)] = 9933,
  [SMALL_STATE(212)] = 9965,
  [SMALL_STATE(213)] = 9997,
  [SMALL_STATE(214)] = 10029,
  [SMALL_STATE(215)] = 10061,
  [SMALL_STATE(216)] = 10093,
  [SMALL_STATE(217)] = 10125,
  [SMALL_STATE(218)] = 10157,
  [SMALL_STATE(219)] = 10189,
  [SMALL_STATE(220)] = 10221,
  [SMALL_STATE(221)] = 10253,
  [SMALL_STATE(222)] = 10285,
  [SMALL_STATE(223)] = 10317,
  [SMALL_STATE(224)] = 10349,
  [SMALL_STATE(225)] = 10381,
  [SMALL_STATE(226)] = 10413,
  [SMALL_STATE(227)] = 10445,
  [SMALL_STATE(228)] = 10477,
  [SMALL_STATE(229)] = 10509,
  [SMALL_STATE(230)] = 10541,
  [SMALL_STATE(231)] = 10573,
  [SMALL_STATE(232)] = 10605,
  [SMALL_STATE(233)] = 10637,
  [SMALL_STATE(234)] = 10669,
  [SMALL_STATE(235)] = 10701,
  [SMALL_STATE(236)] = 10733,
  [SMALL_STATE(237)] = 10765,
  [SMALL_STATE(238)] = 10797,
  [SMALL_STATE(239)] = 10829,
  [SMALL_STATE(240)] = 10861,
  [SMALL_STATE(241)] = 10893,
  [SMALL_STATE(242)] = 10925,
  [SMALL_STATE(243)] = 10957,
  [SMALL_STATE(244)] = 10989,
  [SMALL_STATE(245)] = 11021,
  [SMALL_STATE(246)] = 11053,
  [SMALL_STATE(247)] = 11085,
  [SMALL_STATE(248)] = 11126,
  [SMALL_STATE(249)] = 11171,
  [SMALL_STATE(250)] = 11216,
  [SMALL_STATE(251)] = 11261,
  [SMALL_STATE(252)] = 11306,
  [SMALL_STATE(253)] = 11343,
  [SMALL_STATE(254)] = 11385,
  [SMALL_STATE(255)] = 11427,
  [SMALL_STATE(256)] = 11469,
  [SMALL_STATE(257)] = 11511,
  [SMALL_STATE(258)] = 11548,
  [SMALL_STATE(259)] = 11573,
  [SMALL_STATE(260)] = 11598,
  [SMALL_STATE(261)] = 11635,
  [SMALL_STATE(262)] = 11672,
  [SMALL_STATE(263)] = 11697,
  [SMALL_STATE(264)] = 11722,
  [SMALL_STATE(265)] = 11747,
  [SMALL_STATE(266)] = 11772,
  [SMALL_STATE(267)] = 11811,
  [SMALL_STATE(268)] = 11843,
  [SMALL_STATE(269)] = 11875,
  [SMALL_STATE(270)] = 11907,
  [SMALL_STATE(271)] = 11931,
  [SMALL_STATE(272)] = 11963,
  [SMALL_STATE(273)] = 11995,
  [SMALL_STATE(274)] = 12029,
  [SMALL_STATE(275)] = 12053,
  [SMALL_STATE(276)] = 12077,
  [SMALL_STATE(277)] = 12109,
  [SMALL_STATE(278)] = 12133,
  [SMALL_STATE(279)] = 12157,
  [SMALL_STATE(280)] = 12191,
  [SMALL_STATE(281)] = 12223,
  [SMALL_STATE(282)] = 12255,
  [SMALL_STATE(283)] = 12290,
  [SMALL_STATE(284)] = 12323,
  [SMALL_STATE(285)] = 12356,
  [SMALL_STATE(286)] = 12389,
  [SMALL_STATE(287)] = 12418,
  [SMALL_STATE(288)] = 12451,
  [SMALL_STATE(289)] = 12484,
  [SMALL_STATE(290)] = 12516,
  [SMALL_STATE(291)] = 12548,
  [SMALL_STATE(292)] = 12580,
  [SMALL_STATE(293)] = 12606,
  [SMALL_STATE(294)] = 12638,
  [SMALL_STATE(295)] = 12670,
  [SMALL_STATE(296)] = 12702,
  [SMALL_STATE(297)] = 12734,
  [SMALL_STATE(298)] = 12765,
  [SMALL_STATE(299)] = 12796,
  [SMALL_STATE(300)] = 12827,
  [SMALL_STATE(301)] = 12852,
  [SMALL_STATE(302)] = 12883,
  [SMALL_STATE(303)] = 12912,
  [SMALL_STATE(304)] = 12941,
  [SMALL_STATE(305)] = 12966,
  [SMALL_STATE(306)] = 12991,
  [SMALL_STATE(307)] = 13016,
  [SMALL_STATE(308)] = 13037,
  [SMALL_STATE(309)] = 13068,
  [SMALL_STATE(310)] = 13093,
  [SMALL_STATE(311)] = 13113,
  [SMALL_STATE(312)] = 13133,
  [SMALL_STATE(313)] = 13153,
  [SMALL_STATE(314)] = 13173,
  [SMALL_STATE(315)] = 13195,
  [SMALL_STATE(316)] = 13216,
  [SMALL_STATE(317)] = 13237,
  [SMALL_STATE(318)] = 13258,
  [SMALL_STATE(319)] = 13283,
  [SMALL_STATE(320)] = 13308,
  [SMALL_STATE(321)] = 13335,
  [SMALL_STATE(322)] = 13352,
  [SMALL_STATE(323)] = 13369,
  [SMALL_STATE(324)] = 13386,
  [SMALL_STATE(325)] = 13403,
  [SMALL_STATE(326)] = 13420,
  [SMALL_STATE(327)] = 13445,
  [SMALL_STATE(328)] = 13462,
  [SMALL_STATE(329)] = 13481,
  [SMALL_STATE(330)] = 13500,
  [SMALL_STATE(331)] = 13519,
  [SMALL_STATE(332)] = 13536,
  [SMALL_STATE(333)] = 13551,
  [SMALL_STATE(334)] = 13566,
  [SMALL_STATE(335)] = 13593,
  [SMALL_STATE(336)] = 13618,
  [SMALL_STATE(337)] = 13643,
  [SMALL_STATE(338)] = 13664,
  [SMALL_STATE(339)] = 13681,
  [SMALL_STATE(340)] = 13702,
  [SMALL_STATE(341)] = 13721,
  [SMALL_STATE(342)] = 13742,
  [SMALL_STATE(343)] = 13763,
  [SMALL_STATE(344)] = 13780,
  [SMALL_STATE(345)] = 13797,
  [SMALL_STATE(346)] = 13814,
  [SMALL_STATE(347)] = 13831,
  [SMALL_STATE(348)] = 13846,
  [SMALL_STATE(349)] = 13867,
  [SMALL_STATE(350)] = 13886,
  [SMALL_STATE(351)] = 13907,
  [SMALL_STATE(352)] = 13934,
  [SMALL_STATE(353)] = 13951,
  [SMALL_STATE(354)] = 13968,
  [SMALL_STATE(355)] = 13989,
  [SMALL_STATE(356)] = 14016,
  [SMALL_STATE(357)] = 14043,
  [SMALL_STATE(358)] = 14064,
  [SMALL_STATE(359)] = 14081,
  [SMALL_STATE(360)] = 14106,
  [SMALL_STATE(361)] = 14127,
  [SMALL_STATE(362)] = 14146,
  [SMALL_STATE(363)] = 14173,
  [SMALL_STATE(364)] = 14192,
  [SMALL_STATE(365)] = 14209,
  [SMALL_STATE(366)] = 14236,
  [SMALL_STATE(367)] = 14255,
  [SMALL_STATE(368)] = 14282,
  [SMALL_STATE(369)] = 14304,
  [SMALL_STATE(370)] = 14322,
  [SMALL_STATE(371)] = 14344,
  [SMALL_STATE(372)] = 14366,
  [SMALL_STATE(373)] = 14388,
  [SMALL_STATE(374)] = 14410,
  [SMALL_STATE(375)] = 14432,
  [SMALL_STATE(376)] = 14454,
  [SMALL_STATE(377)] = 14476,
  [SMALL_STATE(378)] = 14498,
  [SMALL_STATE(379)] = 14520,
  [SMALL_STATE(380)] = 14542,
  [SMALL_STATE(381)] = 14564,
  [SMALL_STATE(382)] = 14586,
  [SMALL_STATE(383)] = 14608,
  [SMALL_STATE(384)] = 14626,
  [SMALL_STATE(385)] = 14642,
  [SMALL_STATE(386)] = 14664,
  [SMALL_STATE(387)] = 14688,
  [SMALL_STATE(388)] = 14706,
  [SMALL_STATE(389)] = 14724,
  [SMALL_STATE(390)] = 14746,
  [SMALL_STATE(391)] = 14764,
  [SMALL_STATE(392)] = 14782,
  [SMALL_STATE(393)] = 14800,
  [SMALL_STATE(394)] = 14822,
  [SMALL_STATE(395)] = 14840,
  [SMALL_STATE(396)] = 14858,
  [SMALL_STATE(397)] = 14880,
  [SMALL_STATE(398)] = 14902,
  [SMALL_STATE(399)] = 14924,
  [SMALL_STATE(400)] = 14946,
  [SMALL_STATE(401)] = 14964,
  [SMALL_STATE(402)] = 14982,
  [SMALL_STATE(403)] = 15004,
  [SMALL_STATE(404)] = 15026,
  [SMALL_STATE(405)] = 15044,
  [SMALL_STATE(406)] = 15062,
  [SMALL_STATE(407)] = 15084,
  [SMALL_STATE(408)] = 15101,
  [SMALL_STATE(409)] = 15122,
  [SMALL_STATE(410)] = 15139,
  [SMALL_STATE(411)] = 15156,
  [SMALL_STATE(412)] = 15173,
  [SMALL_STATE(413)] = 15190,
  [SMALL_STATE(414)] = 15213,
  [SMALL_STATE(415)] = 15230,
  [SMALL_STATE(416)] = 15247,
  [SMALL_STATE(417)] = 15270,
  [SMALL_STATE(418)] = 15293,
  [SMALL_STATE(419)] = 15310,
  [SMALL_STATE(420)] = 15327,
  [SMALL_STATE(421)] = 15344,
  [SMALL_STATE(422)] = 15365,
  [SMALL_STATE(423)] = 15386,
  [SMALL_STATE(424)] = 15403,
  [SMALL_STATE(425)] = 15426,
  [SMALL_STATE(426)] = 15443,
  [SMALL_STATE(427)] = 15464,
  [SMALL_STATE(428)] = 15487,
  [SMALL_STATE(429)] = 15504,
  [SMALL_STATE(430)] = 15521,
  [SMALL_STATE(431)] = 15542,
  [SMALL_STATE(432)] = 15563,
  [SMALL_STATE(433)] = 15580,
  [SMALL_STATE(434)] = 15601,
  [SMALL_STATE(435)] = 15618,
  [SMALL_STATE(436)] = 15635,
  [SMALL_STATE(437)] = 15656,
  [SMALL_STATE(438)] = 15673,
  [SMALL_STATE(439)] = 15690,
  [SMALL_STATE(440)] = 15704,
  [SMALL_STATE(441)] = 15718,
  [SMALL_STATE(442)] = 15732,
  [SMALL_STATE(443)] = 15750,
  [SMALL_STATE(444)] = 15770,
  [SMALL_STATE(445)] = 15784,
  [SMALL_STATE(446)] = 15798,
  [SMALL_STATE(447)] = 15818,
  [SMALL_STATE(448)] = 15832,
  [SMALL_STATE(449)] = 15846,
  [SMALL_STATE(450)] = 15864,
  [SMALL_STATE(451)] = 15884,
  [SMALL_STATE(452)] = 15902,
  [SMALL_STATE(453)] = 15922,
  [SMALL_STATE(454)] = 15940,
  [SMALL_STATE(455)] = 15954,
  [SMALL_STATE(456)] = 15968,
  [SMALL_STATE(457)] = 15982,
  [SMALL_STATE(458)] = 15996,
  [SMALL_STATE(459)] = 16014,
  [SMALL_STATE(460)] = 16028,
  [SMALL_STATE(461)] = 16042,
  [SMALL_STATE(462)] = 16062,
  [SMALL_STATE(463)] = 16076,
  [SMALL_STATE(464)] = 16090,
  [SMALL_STATE(465)] = 16104,
  [SMALL_STATE(466)] = 16118,
  [SMALL_STATE(467)] = 16132,
  [SMALL_STATE(468)] = 16146,
  [SMALL_STATE(469)] = 16166,
  [SMALL_STATE(470)] = 16180,
  [SMALL_STATE(471)] = 16194,
  [SMALL_STATE(472)] = 16208,
  [SMALL_STATE(473)] = 16228,
  [SMALL_STATE(474)] = 16242,
  [SMALL_STATE(475)] = 16256,
  [SMALL_STATE(476)] = 16274,
  [SMALL_STATE(477)] = 16294,
  [SMALL_STATE(478)] = 16308,
  [SMALL_STATE(479)] = 16326,
  [SMALL_STATE(480)] = 16346,
  [SMALL_STATE(481)] = 16360,
  [SMALL_STATE(482)] = 16374,
  [SMALL_STATE(483)] = 16388,
  [SMALL_STATE(484)] = 16402,
  [SMALL_STATE(485)] = 16416,
  [SMALL_STATE(486)] = 16430,
  [SMALL_STATE(487)] = 16444,
  [SMALL_STATE(488)] = 16458,
  [SMALL_STATE(489)] = 16472,
  [SMALL_STATE(490)] = 16490,
  [SMALL_STATE(491)] = 16510,
  [SMALL_STATE(492)] = 16530,
  [SMALL_STATE(493)] = 16548,
  [SMALL_STATE(494)] = 16562,
  [SMALL_STATE(495)] = 16576,
  [SMALL_STATE(496)] = 16590,
  [SMALL_STATE(497)] = 16608,
  [SMALL_STATE(498)] = 16622,
  [SMALL_STATE(499)] = 16642,
  [SMALL_STATE(500)] = 16656,
  [SMALL_STATE(501)] = 16670,
  [SMALL_STATE(502)] = 16684,
  [SMALL_STATE(503)] = 16698,
  [SMALL_STATE(504)] = 16712,
  [SMALL_STATE(505)] = 16726,
  [SMALL_STATE(506)] = 16740,
  [SMALL_STATE(507)] = 16754,
  [SMALL_STATE(508)] = 16768,
  [SMALL_STATE(509)] = 16782,
  [SMALL_STATE(510)] = 16802,
  [SMALL_STATE(511)] = 16822,
  [SMALL_STATE(512)] = 16836,
  [SMALL_STATE(513)] = 16850,
  [SMALL_STATE(514)] = 16870,
  [SMALL_STATE(515)] = 16888,
  [SMALL_STATE(516)] = 16908,
  [SMALL_STATE(517)] = 16922,
  [SMALL_STATE(518)] = 16936,
  [SMALL_STATE(519)] = 16950,
  [SMALL_STATE(520)] = 16964,
  [SMALL_STATE(521)] = 16978,
  [SMALL_STATE(522)] = 16992,
  [SMALL_STATE(523)] = 17006,
  [SMALL_STATE(524)] = 17020,
  [SMALL_STATE(525)] = 17034,
  [SMALL_STATE(526)] = 17048,
  [SMALL_STATE(527)] = 17062,
  [SMALL_STATE(528)] = 17076,
  [SMALL_STATE(529)] = 17090,
  [SMALL_STATE(530)] = 17104,
  [SMALL_STATE(531)] = 17118,
  [SMALL_STATE(532)] = 17132,
  [SMALL_STATE(533)] = 17146,
  [SMALL_STATE(534)] = 17160,
  [SMALL_STATE(535)] = 17174,
  [SMALL_STATE(536)] = 17188,
  [SMALL_STATE(537)] = 17202,
  [SMALL_STATE(538)] = 17216,
  [SMALL_STATE(539)] = 17230,
  [SMALL_STATE(540)] = 17244,
  [SMALL_STATE(541)] = 17258,
  [SMALL_STATE(542)] = 17272,
  [SMALL_STATE(543)] = 17286,
  [SMALL_STATE(544)] = 17300,
  [SMALL_STATE(545)] = 17314,
  [SMALL_STATE(546)] = 17328,
  [SMALL_STATE(547)] = 17342,
  [SMALL_STATE(548)] = 17356,
  [SMALL_STATE(549)] = 17370,
  [SMALL_STATE(550)] = 17384,
  [SMALL_STATE(551)] = 17398,
  [SMALL_STATE(552)] = 17412,
  [SMALL_STATE(553)] = 17426,
  [SMALL_STATE(554)] = 17440,
  [SMALL_STATE(555)] = 17454,
  [SMALL_STATE(556)] = 17468,
  [SMALL_STATE(557)] = 17482,
  [SMALL_STATE(558)] = 17496,
  [SMALL_STATE(559)] = 17510,
  [SMALL_STATE(560)] = 17521,
  [SMALL_STATE(561)] = 17538,
  [SMALL_STATE(562)] = 17553,
  [SMALL_STATE(563)] = 17568,
  [SMALL_STATE(564)] = 17585,
  [SMALL_STATE(565)] = 17598,
  [SMALL_STATE(566)] = 17615,
  [SMALL_STATE(567)] = 17628,
  [SMALL_STATE(568)] = 17643,
  [SMALL_STATE(569)] = 17654,
  [SMALL_STATE(570)] = 17669,
  [SMALL_STATE(571)] = 17684,
  [SMALL_STATE(572)] = 17699,
  [SMALL_STATE(573)] = 17714,
  [SMALL_STATE(574)] = 17729,
  [SMALL_STATE(575)] = 17746,
  [SMALL_STATE(576)] = 17761,
  [SMALL_STATE(577)] = 17775,
  [SMALL_STATE(578)] = 17789,
  [SMALL_STATE(579)] = 17803,
  [SMALL_STATE(580)] = 17815,
  [SMALL_STATE(581)] = 17829,
  [SMALL_STATE(582)] = 17840,
  [SMALL_STATE(583)] = 17851,
  [SMALL_STATE(584)] = 17862,
  [SMALL_STATE(585)] = 17871,
  [SMALL_STATE(586)] = 17880,
  [SMALL_STATE(587)] = 17891,
  [SMALL_STATE(588)] = 17902,
  [SMALL_STATE(589)] = 17913,
  [SMALL_STATE(590)] = 17924,
  [SMALL_STATE(591)] = 17935,
  [SMALL_STATE(592)] = 17946,
  [SMALL_STATE(593)] = 17957,
  [SMALL_STATE(594)] = 17968,
  [SMALL_STATE(595)] = 17979,
  [SMALL_STATE(596)] = 17990,
  [SMALL_STATE(597)] = 18001,
  [SMALL_STATE(598)] = 18012,
  [SMALL_STATE(599)] = 18023,
  [SMALL_STATE(600)] = 18034,
  [SMALL_STATE(601)] = 18045,
  [SMALL_STATE(602)] = 18056,
  [SMALL_STATE(603)] = 18067,
  [SMALL_STATE(604)] = 18078,
  [SMALL_STATE(605)] = 18089,
  [SMALL_STATE(606)] = 18100,
  [SMALL_STATE(607)] = 18111,
  [SMALL_STATE(608)] = 18122,
  [SMALL_STATE(609)] = 18133,
  [SMALL_STATE(610)] = 18142,
  [SMALL_STATE(611)] = 18151,
  [SMALL_STATE(612)] = 18162,
  [SMALL_STATE(613)] = 18173,
  [SMALL_STATE(614)] = 18184,
  [SMALL_STATE(615)] = 18195,
  [SMALL_STATE(616)] = 18206,
  [SMALL_STATE(617)] = 18217,
  [SMALL_STATE(618)] = 18226,
  [SMALL_STATE(619)] = 18235,
  [SMALL_STATE(620)] = 18246,
  [SMALL_STATE(621)] = 18257,
  [SMALL_STATE(622)] = 18268,
  [SMALL_STATE(623)] = 18279,
  [SMALL_STATE(624)] = 18290,
  [SMALL_STATE(625)] = 18301,
  [SMALL_STATE(626)] = 18312,
  [SMALL_STATE(627)] = 18323,
  [SMALL_STATE(628)] = 18334,
  [SMALL_STATE(629)] = 18345,
  [SMALL_STATE(630)] = 18356,
  [SMALL_STATE(631)] = 18367,
  [SMALL_STATE(632)] = 18378,
  [SMALL_STATE(633)] = 18389,
  [SMALL_STATE(634)] = 18400,
  [SMALL_STATE(635)] = 18411,
  [SMALL_STATE(636)] = 18420,
  [SMALL_STATE(637)] = 18431,
  [SMALL_STATE(638)] = 18442,
  [SMALL_STATE(639)] = 18453,
  [SMALL_STATE(640)] = 18464,
  [SMALL_STATE(641)] = 18475,
  [SMALL_STATE(642)] = 18486,
  [SMALL_STATE(643)] = 18497,
  [SMALL_STATE(644)] = 18508,
  [SMALL_STATE(645)] = 18519,
  [SMALL_STATE(646)] = 18530,
  [SMALL_STATE(647)] = 18541,
  [SMALL_STATE(648)] = 18552,
  [SMALL_STATE(649)] = 18563,
  [SMALL_STATE(650)] = 18574,
  [SMALL_STATE(651)] = 18583,
  [SMALL_STATE(652)] = 18592,
  [SMALL_STATE(653)] = 18601,
  [SMALL_STATE(654)] = 18612,
  [SMALL_STATE(655)] = 18623,
  [SMALL_STATE(656)] = 18632,
  [SMALL_STATE(657)] = 18643,
  [SMALL_STATE(658)] = 18652,
  [SMALL_STATE(659)] = 18663,
  [SMALL_STATE(660)] = 18674,
  [SMALL_STATE(661)] = 18683,
  [SMALL_STATE(662)] = 18692,
  [SMALL_STATE(663)] = 18703,
  [SMALL_STATE(664)] = 18714,
  [SMALL_STATE(665)] = 18725,
  [SMALL_STATE(666)] = 18736,
  [SMALL_STATE(667)] = 18745,
  [SMALL_STATE(668)] = 18754,
  [SMALL_STATE(669)] = 18765,
  [SMALL_STATE(670)] = 18776,
  [SMALL_STATE(671)] = 18787,
  [SMALL_STATE(672)] = 18796,
  [SMALL_STATE(673)] = 18805,
  [SMALL_STATE(674)] = 18814,
  [SMALL_STATE(675)] = 18825,
  [SMALL_STATE(676)] = 18836,
  [SMALL_STATE(677)] = 18847,
  [SMALL_STATE(678)] = 18858,
  [SMALL_STATE(679)] = 18869,
  [SMALL_STATE(680)] = 18878,
  [SMALL_STATE(681)] = 18889,
  [SMALL_STATE(682)] = 18898,
  [SMALL_STATE(683)] = 18909,
  [SMALL_STATE(684)] = 18920,
  [SMALL_STATE(685)] = 18929,
  [SMALL_STATE(686)] = 18938,
  [SMALL_STATE(687)] = 18947,
  [SMALL_STATE(688)] = 18958,
  [SMALL_STATE(689)] = 18969,
  [SMALL_STATE(690)] = 18980,
  [SMALL_STATE(691)] = 18991,
  [SMALL_STATE(692)] = 19002,
  [SMALL_STATE(693)] = 19011,
  [SMALL_STATE(694)] = 19020,
  [SMALL_STATE(695)] = 19029,
  [SMALL_STATE(696)] = 19038,
  [SMALL_STATE(697)] = 19047,
  [SMALL_STATE(698)] = 19056,
  [SMALL_STATE(699)] = 19065,
  [SMALL_STATE(700)] = 19074,
  [SMALL_STATE(701)] = 19083,
  [SMALL_STATE(702)] = 19092,
  [SMALL_STATE(703)] = 19101,
  [SMALL_STATE(704)] = 19110,
  [SMALL_STATE(705)] = 19119,
  [SMALL_STATE(706)] = 19128,
  [SMALL_STATE(707)] = 19137,
  [SMALL_STATE(708)] = 19146,
  [SMALL_STATE(709)] = 19155,
  [SMALL_STATE(710)] = 19164,
  [SMALL_STATE(711)] = 19173,
  [SMALL_STATE(712)] = 19182,
  [SMALL_STATE(713)] = 19191,
  [SMALL_STATE(714)] = 19200,
  [SMALL_STATE(715)] = 19209,
  [SMALL_STATE(716)] = 19218,
  [SMALL_STATE(717)] = 19227,
  [SMALL_STATE(718)] = 19236,
  [SMALL_STATE(719)] = 19245,
  [SMALL_STATE(720)] = 19254,
  [SMALL_STATE(721)] = 19263,
  [SMALL_STATE(722)] = 19274,
  [SMALL_STATE(723)] = 19285,
  [SMALL_STATE(724)] = 19294,
  [SMALL_STATE(725)] = 19305,
  [SMALL_STATE(726)] = 19316,
  [SMALL_STATE(727)] = 19327,
  [SMALL_STATE(728)] = 19338,
  [SMALL_STATE(729)] = 19349,
  [SMALL_STATE(730)] = 19360,
  [SMALL_STATE(731)] = 19371,
  [SMALL_STATE(732)] = 19382,
  [SMALL_STATE(733)] = 19393,
  [SMALL_STATE(734)] = 19404,
  [SMALL_STATE(735)] = 19415,
  [SMALL_STATE(736)] = 19426,
  [SMALL_STATE(737)] = 19435,
  [SMALL_STATE(738)] = 19446,
  [SMALL_STATE(739)] = 19457,
  [SMALL_STATE(740)] = 19468,
  [SMALL_STATE(741)] = 19479,
  [SMALL_STATE(742)] = 19488,
  [SMALL_STATE(743)] = 19499,
  [SMALL_STATE(744)] = 19510,
  [SMALL_STATE(745)] = 19521,
  [SMALL_STATE(746)] = 19532,
  [SMALL_STATE(747)] = 19543,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(489),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(260),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(298),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(194),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(430),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(284),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(290),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(521),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(738),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(293),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(739),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(522),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(250),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(316),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(42),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(740),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(533),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(27),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(254),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(451),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(257),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(297),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(191),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(408),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(287),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(294),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(473),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(602),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(296),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(604),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(466),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(251),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(339),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(47),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(608),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(439),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(33),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(255),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(337),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(48),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(317),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(49),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(698),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(71),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 3, .production_id = 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 3, .production_id = 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 4, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 4, .production_id = 5),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(603),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(73),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(666),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(130),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(695),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(97),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(679),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(137),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_ref, 2, .production_id = 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_ref, 2, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(143),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(745),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(112),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_command, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_command, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 6),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 6),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locally_command, 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locally_command, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(88),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(263),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(657),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(655),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(723),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(277),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(660),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(661),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(358),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(681),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(684),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(692),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(685),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(686),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(449),
  [905] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [908] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(744),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(563),
  [914] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(737),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [955] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(347),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(699),
  [961] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(700),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(635),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(353),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(741),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(667),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(671),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(672),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(673),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(650),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(588),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(635),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(384),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(741),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1052] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(610),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(617),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(435),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(618),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 55),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 61),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 31),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [1162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(392),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [1169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(363),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(729),
  [1179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(567),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(576),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(495),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(723),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(736),
  [1344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(561),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [1389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sharing, 3),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing, 3),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(564),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 2, .production_id = 4),
  [1518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(566),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36), SHIFT_REPEAT(282),
  [1560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54),
  [1576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54), SHIFT_REPEAT(350),
  [1579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 1, .production_id = 1),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(574),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 1, .production_id = 49),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [1864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [1954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [1960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [1980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [1988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [1998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [2000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [2006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [2008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [2026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [2028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [2030] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [2044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [2052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [2054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
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
