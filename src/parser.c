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
#define STATE_COUNT 730
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
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
  anon_sym_FOR = 11,
  anon_sym_IN = 12,
  anon_sym_END = 13,
  anon_sym_FROMDOCKERFILE = 14,
  anon_sym_FUNCTION = 15,
  anon_sym_GIT = 16,
  anon_sym_CLONE = 17,
  anon_sym_IF = 18,
  anon_sym_ELSEIF = 19,
  anon_sym_ELSE = 20,
  anon_sym_LET = 21,
  anon_sym_LOCALLY = 22,
  anon_sym_RUN = 23,
  anon_sym_DASH_DASH = 24,
  anon_sym_SAVEARTIFACT = 25,
  anon_sym_ASLOCAL = 26,
  anon_sym_SAVEIMAGE = 27,
  anon_sym_SET = 28,
  anon_sym_TRY = 29,
  anon_sym_FINALLY = 30,
  anon_sym_WAIT = 31,
  anon_sym_WITHDOCKER = 32,
  sym_expr = 33,
  sym_identifier = 34,
  anon_sym_COLON2 = 35,
  anon_sym_AT = 36,
  sym_image_name = 37,
  sym_image_tag = 38,
  sym_image_digest = 39,
  sym_immediate_identifier = 40,
  sym_path = 41,
  aux_sym_shell_fragment_token1 = 42,
  aux_sym_shell_fragment_token2 = 43,
  aux_sym_shell_fragment_token3 = 44,
  anon_sym_PLUS = 45,
  anon_sym_LPAREN = 46,
  anon_sym_RPAREN = 47,
  sym_version_major_minor = 48,
  sym_allow_privileged = 49,
  anon_sym_DASH_DASHbranch = 50,
  aux_sym_branch_token1 = 51,
  anon_sym_DASH_DASH2 = 52,
  anon_sym_DASH_DASHcache_DASHfrom = 53,
  sym_cache_hint = 54,
  anon_sym_DASH_DASHchmod = 55,
  anon_sym_DASH_DASHchown = 56,
  anon_sym_DASH_DASHcompose = 57,
  sym_dir = 58,
  anon_sym_DASH_DASHbuild_DASHarg = 59,
  anon_sym_DASHf = 60,
  anon_sym_DASH_DASHtarget = 61,
  sym_entrypoint = 62,
  sym_feature_flag = 63,
  sym_force = 64,
  sym_global = 65,
  anon_sym_DASH_DASHid = 66,
  sym_if_exists = 67,
  sym_keep_own = 68,
  sym_keep_ts = 69,
  anon_sym_DASH_DASHload = 70,
  anon_sym_DASH_DASHmount = 71,
  sym_network_none = 72,
  sym_no_cache = 73,
  sym_pass_args = 74,
  sym_persist = 75,
  anon_sym_DASH_DASHplatform = 76,
  sym_privileged = 77,
  anon_sym_DASH_DASHpull = 78,
  sym_push = 79,
  sym_required = 80,
  anon_sym_DASH_DASHsecret = 81,
  anon_sym_DASH_DASHsep = 82,
  anon_sym_DASH_DASHservice = 83,
  anon_sym_DASH_DASHsharing = 84,
  sym_ssh = 85,
  sym_symlink_no_follow = 86,
  anon_sym_DQUOTE = 87,
  aux_sym_double_quoted_string_token1 = 88,
  anon_sym_SQUOTE = 89,
  aux_sym_single_quoted_string_token1 = 90,
  sym_unquoted_string = 91,
  sym_line_continuation = 92,
  sym_comment = 93,
  sym_line_continuation_comment = 94,
  anon_sym_LF = 95,
  anon_sym_CRn = 96,
  anon_sym_FF = 97,
  sym__indent = 98,
  sym__dedent = 99,
  sym_source_file = 100,
  sym_arg_command = 101,
  sym_from_command = 102,
  sym_project_command = 103,
  sym_target = 104,
  sym_version_command = 105,
  sym_cache_command = 106,
  sym_copy_command = 107,
  sym_for_command = 108,
  sym_from_dockerfile_command = 109,
  sym_function_command = 110,
  sym_git_clone_command = 111,
  sym_if_command = 112,
  sym_let_command = 113,
  sym_locally_command = 114,
  sym_run_command = 115,
  sym_save_artifact_command = 116,
  sym_save_image_command = 117,
  sym_set_command = 118,
  sym_try_command = 119,
  sym_wait_command = 120,
  sym_with_docker_command = 121,
  aux_sym__target_block = 122,
  sym__conditional_block = 123,
  sym_else_if_block = 124,
  sym_else_block = 125,
  sym_image_spec = 126,
  sym_shell_fragment = 127,
  sym_target_ref = 128,
  sym_target_artifact = 129,
  sym_target_artifact_build_args = 130,
  sym_branch = 131,
  sym_build_arg = 132,
  sym_cache_from = 133,
  sym_chmod = 134,
  sym_chown = 135,
  sym_compose = 136,
  sym_docker_build_arg = 137,
  sym_docker_file = 138,
  sym_docker_target = 139,
  sym_id = 140,
  sym_load = 141,
  sym_mount = 142,
  sym_platform = 143,
  sym_pull = 144,
  sym_secret = 145,
  sym_sep = 146,
  sym_service = 147,
  sym_sharing = 148,
  sym__string = 149,
  sym_double_quoted_string = 150,
  sym_single_quoted_string = 151,
  sym__eol = 152,
  aux_sym_source_file_repeat1 = 153,
  aux_sym_arg_command_repeat1 = 154,
  aux_sym_build_command_repeat2 = 155,
  aux_sym_from_command_repeat1 = 156,
  aux_sym_version_command_repeat1 = 157,
  aux_sym_cache_command_repeat1 = 158,
  aux_sym_copy_command_repeat1 = 159,
  aux_sym_copy_command_repeat2 = 160,
  aux_sym_for_command_repeat1 = 161,
  aux_sym_for_command_repeat2 = 162,
  aux_sym_from_dockerfile_command_repeat1 = 163,
  aux_sym_git_clone_command_repeat1 = 164,
  aux_sym_if_command_repeat1 = 165,
  aux_sym_run_command_repeat1 = 166,
  aux_sym_save_artifact_command_repeat1 = 167,
  aux_sym_save_image_command_repeat1 = 168,
  aux_sym_save_image_command_repeat2 = 169,
  aux_sym_try_command_repeat1 = 170,
  aux_sym_with_docker_command_repeat1 = 171,
  aux_sym__conditional_block_repeat1 = 172,
  aux_sym_shell_fragment_repeat1 = 173,
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
  [8] = 8,
  [9] = 9,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 6,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 7,
  [28] = 28,
  [29] = 17,
  [30] = 11,
  [31] = 6,
  [32] = 18,
  [33] = 28,
  [34] = 24,
  [35] = 8,
  [36] = 36,
  [37] = 36,
  [38] = 13,
  [39] = 9,
  [40] = 23,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 42,
  [49] = 42,
  [50] = 44,
  [51] = 51,
  [52] = 44,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 51,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 41,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 51,
  [70] = 51,
  [71] = 62,
  [72] = 63,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 43,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 67,
  [83] = 66,
  [84] = 59,
  [85] = 61,
  [86] = 68,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 61,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 41,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 61,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 41,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 59,
  [119] = 66,
  [120] = 41,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 46,
  [129] = 67,
  [130] = 45,
  [131] = 131,
  [132] = 68,
  [133] = 62,
  [134] = 67,
  [135] = 68,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 59,
  [140] = 140,
  [141] = 141,
  [142] = 66,
  [143] = 143,
  [144] = 144,
  [145] = 63,
  [146] = 146,
  [147] = 147,
  [148] = 63,
  [149] = 62,
  [150] = 150,
  [151] = 57,
  [152] = 63,
  [153] = 62,
  [154] = 58,
  [155] = 54,
  [156] = 55,
  [157] = 157,
  [158] = 56,
  [159] = 41,
  [160] = 73,
  [161] = 43,
  [162] = 73,
  [163] = 74,
  [164] = 164,
  [165] = 74,
  [166] = 166,
  [167] = 164,
  [168] = 74,
  [169] = 43,
  [170] = 43,
  [171] = 64,
  [172] = 73,
  [173] = 166,
  [174] = 46,
  [175] = 43,
  [176] = 45,
  [177] = 45,
  [178] = 46,
  [179] = 76,
  [180] = 46,
  [181] = 75,
  [182] = 77,
  [183] = 63,
  [184] = 45,
  [185] = 62,
  [186] = 79,
  [187] = 98,
  [188] = 80,
  [189] = 146,
  [190] = 147,
  [191] = 81,
  [192] = 104,
  [193] = 88,
  [194] = 123,
  [195] = 101,
  [196] = 92,
  [197] = 127,
  [198] = 46,
  [199] = 108,
  [200] = 100,
  [201] = 45,
  [202] = 157,
  [203] = 150,
  [204] = 115,
  [205] = 137,
  [206] = 138,
  [207] = 141,
  [208] = 122,
  [209] = 109,
  [210] = 136,
  [211] = 97,
  [212] = 144,
  [213] = 110,
  [214] = 114,
  [215] = 112,
  [216] = 102,
  [217] = 116,
  [218] = 89,
  [219] = 111,
  [220] = 140,
  [221] = 90,
  [222] = 91,
  [223] = 117,
  [224] = 124,
  [225] = 126,
  [226] = 93,
  [227] = 143,
  [228] = 94,
  [229] = 87,
  [230] = 106,
  [231] = 95,
  [232] = 125,
  [233] = 96,
  [234] = 131,
  [235] = 121,
  [236] = 105,
  [237] = 237,
  [238] = 237,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 243,
  [246] = 244,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 63,
  [251] = 249,
  [252] = 252,
  [253] = 253,
  [254] = 62,
  [255] = 255,
  [256] = 249,
  [257] = 62,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 260,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 264,
  [266] = 258,
  [267] = 267,
  [268] = 262,
  [269] = 63,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 273,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 56,
  [283] = 280,
  [284] = 279,
  [285] = 281,
  [286] = 286,
  [287] = 287,
  [288] = 41,
  [289] = 55,
  [290] = 58,
  [291] = 287,
  [292] = 54,
  [293] = 293,
  [294] = 57,
  [295] = 293,
  [296] = 64,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 62,
  [301] = 76,
  [302] = 43,
  [303] = 63,
  [304] = 75,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 75,
  [309] = 305,
  [310] = 310,
  [311] = 306,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 62,
  [317] = 63,
  [318] = 318,
  [319] = 46,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 259,
  [324] = 270,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 45,
  [329] = 327,
  [330] = 306,
  [331] = 327,
  [332] = 306,
  [333] = 333,
  [334] = 327,
  [335] = 335,
  [336] = 336,
  [337] = 321,
  [338] = 318,
  [339] = 339,
  [340] = 307,
  [341] = 62,
  [342] = 63,
  [343] = 248,
  [344] = 326,
  [345] = 345,
  [346] = 306,
  [347] = 347,
  [348] = 348,
  [349] = 347,
  [350] = 320,
  [351] = 62,
  [352] = 352,
  [353] = 63,
  [354] = 327,
  [355] = 307,
  [356] = 318,
  [357] = 305,
  [358] = 358,
  [359] = 122,
  [360] = 360,
  [361] = 361,
  [362] = 92,
  [363] = 363,
  [364] = 364,
  [365] = 360,
  [366] = 88,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 367,
  [371] = 371,
  [372] = 369,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 87,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 371,
  [382] = 358,
  [383] = 121,
  [384] = 361,
  [385] = 361,
  [386] = 373,
  [387] = 378,
  [388] = 373,
  [389] = 389,
  [390] = 371,
  [391] = 373,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 100,
  [396] = 98,
  [397] = 397,
  [398] = 62,
  [399] = 62,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 403,
  [408] = 247,
  [409] = 63,
  [410] = 410,
  [411] = 411,
  [412] = 405,
  [413] = 413,
  [414] = 63,
  [415] = 415,
  [416] = 416,
  [417] = 400,
  [418] = 405,
  [419] = 248,
  [420] = 420,
  [421] = 397,
  [422] = 410,
  [423] = 410,
  [424] = 406,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 433,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 435,
  [439] = 436,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 437,
  [450] = 441,
  [451] = 451,
  [452] = 452,
  [453] = 443,
  [454] = 454,
  [455] = 444,
  [456] = 445,
  [457] = 457,
  [458] = 458,
  [459] = 446,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 447,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 464,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 74,
  [476] = 73,
  [477] = 454,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 457,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 458,
  [487] = 460,
  [488] = 440,
  [489] = 489,
  [490] = 474,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 432,
  [495] = 495,
  [496] = 462,
  [497] = 466,
  [498] = 430,
  [499] = 499,
  [500] = 451,
  [501] = 452,
  [502] = 502,
  [503] = 429,
  [504] = 465,
  [505] = 505,
  [506] = 506,
  [507] = 468,
  [508] = 427,
  [509] = 425,
  [510] = 502,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 428,
  [515] = 430,
  [516] = 429,
  [517] = 517,
  [518] = 484,
  [519] = 484,
  [520] = 511,
  [521] = 513,
  [522] = 469,
  [523] = 517,
  [524] = 524,
  [525] = 525,
  [526] = 470,
  [527] = 527,
  [528] = 527,
  [529] = 506,
  [530] = 524,
  [531] = 468,
  [532] = 525,
  [533] = 499,
  [534] = 495,
  [535] = 493,
  [536] = 492,
  [537] = 502,
  [538] = 427,
  [539] = 489,
  [540] = 485,
  [541] = 512,
  [542] = 480,
  [543] = 472,
  [544] = 544,
  [545] = 545,
  [546] = 63,
  [547] = 62,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
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
  [587] = 587,
  [588] = 588,
  [589] = 574,
  [590] = 577,
  [591] = 578,
  [592] = 582,
  [593] = 583,
  [594] = 584,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 577,
  [599] = 578,
  [600] = 582,
  [601] = 583,
  [602] = 584,
  [603] = 603,
  [604] = 604,
  [605] = 577,
  [606] = 578,
  [607] = 582,
  [608] = 583,
  [609] = 584,
  [610] = 577,
  [611] = 578,
  [612] = 582,
  [613] = 583,
  [614] = 584,
  [615] = 582,
  [616] = 583,
  [617] = 582,
  [618] = 583,
  [619] = 582,
  [620] = 583,
  [621] = 582,
  [622] = 583,
  [623] = 582,
  [624] = 583,
  [625] = 582,
  [626] = 583,
  [627] = 582,
  [628] = 583,
  [629] = 582,
  [630] = 583,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 584,
  [636] = 583,
  [637] = 582,
  [638] = 638,
  [639] = 604,
  [640] = 640,
  [641] = 580,
  [642] = 585,
  [643] = 581,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 578,
  [648] = 648,
  [649] = 584,
  [650] = 645,
  [651] = 577,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 583,
  [656] = 582,
  [657] = 657,
  [658] = 574,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 634,
  [664] = 633,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 652,
  [670] = 670,
  [671] = 573,
  [672] = 672,
  [673] = 673,
  [674] = 632,
  [675] = 633,
  [676] = 634,
  [677] = 566,
  [678] = 633,
  [679] = 634,
  [680] = 566,
  [681] = 633,
  [682] = 634,
  [683] = 633,
  [684] = 634,
  [685] = 633,
  [686] = 634,
  [687] = 633,
  [688] = 634,
  [689] = 633,
  [690] = 634,
  [691] = 633,
  [692] = 634,
  [693] = 633,
  [694] = 634,
  [695] = 633,
  [696] = 634,
  [697] = 633,
  [698] = 634,
  [699] = 633,
  [700] = 634,
  [701] = 633,
  [702] = 634,
  [703] = 580,
  [704] = 578,
  [705] = 577,
  [706] = 657,
  [707] = 707,
  [708] = 570,
  [709] = 595,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 632,
  [714] = 659,
  [715] = 566,
  [716] = 574,
  [717] = 660,
  [718] = 569,
  [719] = 568,
  [720] = 646,
  [721] = 644,
  [722] = 640,
  [723] = 586,
  [724] = 724,
  [725] = 666,
  [726] = 726,
  [727] = 665,
  [728] = 567,
  [729] = 729,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(304);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == ',') ADVANCE(697);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead == '@') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'B') ADVANCE(182);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(300)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '#') ADVANCE(702);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(701);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\f') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(775);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(771);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(775);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\f') ADVANCE(776);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(772);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(757);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\f') ADVANCE(776);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(757);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(767);
      if (lookahead == '\f') ADVANCE(777);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(773);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(767);
      if (lookahead == '\f') ADVANCE(777);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(751);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(755);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\f') ADVANCE(778);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(774);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(700);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\f') ADVANCE(778);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(700);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(779);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(779);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(770);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(779);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'B') ADVANCE(182);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'B') ADVANCE(182);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'B') ADVANCE(182);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(358);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(711);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(710);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(36)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(712);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(710);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(54)
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(700);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(699);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(26)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(700);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(757);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '@') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(398);
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(404);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '@') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '@') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '@') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '@') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'E') ADVANCE(432);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'C') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead == 'G') ADVANCE(422);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'L') ADVANCE(417);
      if (lookahead == 'R') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(442);
      if (lookahead == 'W') ADVANCE(408);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(700);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(518);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '-') ADVANCE(521);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 'A') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(531);
      if (lookahead == 'E') ADVANCE(554);
      if (lookahead == 'F') ADVANCE(566);
      if (lookahead == 'G') ADVANCE(550);
      if (lookahead == 'I') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(532);
      if (lookahead == 'T') ADVANCE(570);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 'A') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(531);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead == 'F') ADVANCE(566);
      if (lookahead == 'G') ADVANCE(550);
      if (lookahead == 'I') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(532);
      if (lookahead == 'T') ADVANCE(570);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 'A') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(566);
      if (lookahead == 'G') ADVANCE(550);
      if (lookahead == 'I') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(532);
      if (lookahead == 'T') ADVANCE(570);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 'A') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(552);
      if (lookahead == 'G') ADVANCE(550);
      if (lookahead == 'I') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(580);
      if (lookahead == 'S') ADVANCE(532);
      if (lookahead == 'T') ADVANCE(570);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == 'A') ADVANCE(572);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead == 'S') ADVANCE(535);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(696);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '\\') ADVANCE(508);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(510);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(299);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(713);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(298);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(193);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(161);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(184);
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'I') ADVANCE(179);
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
      if (lookahead == 'C') ADVANCE(181);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(177);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(178);
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
      if (lookahead == 'D') ADVANCE(331);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(310);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(160);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(346);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(361);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 115:
      if (lookahead == 'F') ADVANCE(342);
      END_STATE();
    case 116:
      if (lookahead == 'F') ADVANCE(342);
      if (lookahead == 'N') ADVANCE(330);
      END_STATE();
    case 117:
      if (lookahead == 'F') ADVANCE(345);
      END_STATE();
    case 118:
      if (lookahead == 'F') ADVANCE(91);
      END_STATE();
    case 119:
      if (lookahead == 'F') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'G') ADVANCE(305);
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
      if (lookahead == 'O') ADVANCE(165);
      if (lookahead == 'R') ADVANCE(153);
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(173);
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
      if (lookahead == 'I') ADVANCE(176);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(158);
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
      if (lookahead == 'L') ADVANCE(171);
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(360);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(187);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(159);
      END_STATE();
    case 141:
      if (lookahead == 'L') ADVANCE(188);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'L') ADVANCE(141);
      END_STATE();
    case 144:
      if (lookahead == 'L') ADVANCE(108);
      END_STATE();
    case 145:
      if (lookahead == 'M') ADVANCE(311);
      END_STATE();
    case 146:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(355);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(319);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(335);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 161:
      if (lookahead == 'P') ADVANCE(186);
      END_STATE();
    case 162:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(327);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(374);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(172);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(154);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 171:
      if (lookahead == 'S') ADVANCE(104);
      END_STATE();
    case 172:
      if (lookahead == 'S') ADVANCE(131);
      END_STATE();
    case 173:
      if (lookahead == 'T') ADVANCE(338);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(362);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(371);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 179:
      if (lookahead == 'T') ADVANCE(122);
      END_STATE();
    case 180:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 182:
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 183:
      if (lookahead == 'U') ADVANCE(148);
      END_STATE();
    case 184:
      if (lookahead == 'V') ADVANCE(109);
      END_STATE();
    case 185:
      if (lookahead == 'Y') ADVANCE(365);
      END_STATE();
    case 186:
      if (lookahead == 'Y') ADVANCE(324);
      END_STATE();
    case 187:
      if (lookahead == 'Y') ADVANCE(368);
      END_STATE();
    case 188:
      if (lookahead == 'Y') ADVANCE(352);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(194);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(743);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(738);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(269);
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 222:
      if (lookahead == 'f') ADVANCE(263);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 224:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 225:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 227:
      if (lookahead == 'h') ADVANCE(746);
      END_STATE();
    case 228:
      if (lookahead == 'h') ADVANCE(740);
      END_STATE();
    case 229:
      if (lookahead == 'h') ADVANCE(209);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 237:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 246:
      if (lookahead == 'm') ADVANCE(737);
      END_STATE();
    case 247:
      if (lookahead == 'm') ADVANCE(266);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 256:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 257:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 259:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 260:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 261:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 262:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 264:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 265:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 266:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 267:
      if (lookahead == 'q') ADVANCE(289);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(735);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(732);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 291:
      if (lookahead == 'v') ADVANCE(231);
      END_STATE();
    case 292:
      if (lookahead == 'v') ADVANCE(232);
      END_STATE();
    case 293:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 294:
      if (lookahead == 'w') ADVANCE(261);
      END_STATE();
    case 295:
      if (lookahead == 'w') ADVANCE(77);
      END_STATE();
    case 296:
      if (lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      END_STATE();
    case 298:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      END_STATE();
    case 299:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 300:
      if (eof) ADVANCE(304);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(748);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(752);
      if (lookahead == '(') ADVANCE(705);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(698);
      if (lookahead == ':') ADVANCE(318);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'B') ADVANCE(182);
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'V') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(697);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(300)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 301:
      if (eof) ADVANCE(304);
      if (lookahead == ' ') ADVANCE(711);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(710);
      if (lookahead == 'A') ADVANCE(387);
      if (lookahead == 'F') ADVANCE(388);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(303)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 302:
      if (eof) ADVANCE(304);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead == '=') ADVANCE(309);
      if (lookahead == '@') ADVANCE(395);
      if (lookahead == 'A') ADVANCE(387);
      if (lookahead == 'F') ADVANCE(388);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(303)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(706);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(387);
      if (lookahead == 'F') ADVANCE(388);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'V') ADVANCE(378);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(303)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_GIT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_GIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_CLONE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(126);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(463);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(472);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(473);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(458);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(492);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(460);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(466);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(410);
      if (lookahead == 'O') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(452);
      if (lookahead == 'E') ADVANCE(447);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(427);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == 'I') ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(430);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(449);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(332);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(347);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(396);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(411);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(343);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(307);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(397);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(439);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'O') ADVANCE(443);
      if (lookahead == 'R') ADVANCE(437);
      if (lookahead == 'U') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == 'N') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(428);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(455);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(456);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(429);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(312);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(413);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(356);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(336);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(412);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(443);
      if (lookahead == 'R') ADVANCE(437);
      if (lookahead == 'U') ADVANCE(435);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(454);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(419);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(453);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(328);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(339);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(350);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(363);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(372);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(420);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(366);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(325);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(353);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(369);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(464);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'p') ADVANCE(459);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(461);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(494);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(502);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(465);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(503);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(478);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(479);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(462);
      if (lookahead == 'p') ADVANCE(503);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(708);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(467);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(399);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(475);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(400);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(480);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(493);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(491);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(497);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(740);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(469);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(471);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(488);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(504);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(483);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(470);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(490);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(484);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(737);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(714);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(501);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(487);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(505);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(496);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(495);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(489);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(481);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(500);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(715);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(474);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(498);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '#') ADVANCE(509);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(510);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\f') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(721);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(605);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(592);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'O') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(576);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(553);
      if (lookahead == 'I') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(575);
      if (lookahead == 'O') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(564);
      if (lookahead == 'O') ADVANCE(571);
      if (lookahead == 'R') ADVANCE(565);
      if (lookahead == 'U') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(571);
      if (lookahead == 'R') ADVANCE(565);
      if (lookahead == 'U') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'S') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'c') ADVANCE(623);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == 'k') ADVANCE(607);
      if (lookahead == 'p') ADVANCE(588);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(685);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(671);
      if (lookahead == 'k') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(602);
      if (lookahead == 'p') ADVANCE(611);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(727);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(659);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead == 'k') ADVANCE(607);
      if (lookahead == 's') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(720);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(745);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(709);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(737);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(690);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(635);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(729);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(658);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(668);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(692);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(593);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(735);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(680);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(684);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(722);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(747);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(206);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(700);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\f') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(707);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(724);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DASH_DASHid);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_persist);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsharing);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(761);
      if (lookahead == '\r') ADVANCE(749);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(749);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(749);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(751);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(751);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(753);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(753);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(753);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(755);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(755);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(756);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(757);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(760);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(761);
      if (lookahead == '\r') ADVANCE(749);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(749);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(759);
      if (lookahead == '\f') ADVANCE(762);
      if (lookahead == '\r') ADVANCE(753);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(753);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(763);
      if (lookahead == '\f') ADVANCE(764);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(775);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\f') ADVANCE(776);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(767);
      if (lookahead == '\f') ADVANCE(777);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\f') ADVANCE(778);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(779);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(506);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(757);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(696);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(700);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(765);
      if (lookahead == '\f') ADVANCE(775);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(766);
      if (lookahead == '\f') ADVANCE(776);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(767);
      if (lookahead == '\f') ADVANCE(777);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(513);
      if (lookahead == '+') ADVANCE(704);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\f') ADVANCE(778);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\f') ADVANCE(779);
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
  [1] = {.lex_state = 302},
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
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 30},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 34, .external_lex_state = 2},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 42, .external_lex_state = 2},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 44},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 42, .external_lex_state = 2},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 47},
  [83] = {.lex_state = 47},
  [84] = {.lex_state = 47},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 46, .external_lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 42, .external_lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 45},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 45},
  [119] = {.lex_state = 45},
  [120] = {.lex_state = 47},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 44},
  [129] = {.lex_state = 45},
  [130] = {.lex_state = 44},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 42, .external_lex_state = 2},
  [133] = {.lex_state = 42, .external_lex_state = 2},
  [134] = {.lex_state = 46, .external_lex_state = 2},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 46, .external_lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 46, .external_lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 42, .external_lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 43},
  [149] = {.lex_state = 43},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 36, .external_lex_state = 2},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 41},
  [154] = {.lex_state = 36, .external_lex_state = 2},
  [155] = {.lex_state = 36, .external_lex_state = 2},
  [156] = {.lex_state = 36, .external_lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 36, .external_lex_state = 2},
  [159] = {.lex_state = 30, .external_lex_state = 2},
  [160] = {.lex_state = 63},
  [161] = {.lex_state = 46, .external_lex_state = 2},
  [162] = {.lex_state = 65},
  [163] = {.lex_state = 65},
  [164] = {.lex_state = 56},
  [165] = {.lex_state = 64, .external_lex_state = 2},
  [166] = {.lex_state = 56},
  [167] = {.lex_state = 56},
  [168] = {.lex_state = 63},
  [169] = {.lex_state = 47},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 23, .external_lex_state = 2},
  [172] = {.lex_state = 64, .external_lex_state = 2},
  [173] = {.lex_state = 56},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 46, .external_lex_state = 2},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 47},
  [179] = {.lex_state = 36, .external_lex_state = 2},
  [180] = {.lex_state = 46, .external_lex_state = 2},
  [181] = {.lex_state = 36, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 36, .external_lex_state = 2},
  [184] = {.lex_state = 47},
  [185] = {.lex_state = 36, .external_lex_state = 2},
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
  [237] = {.lex_state = 26},
  [238] = {.lex_state = 26},
  [239] = {.lex_state = 26},
  [240] = {.lex_state = 56},
  [241] = {.lex_state = 26},
  [242] = {.lex_state = 26},
  [243] = {.lex_state = 30},
  [244] = {.lex_state = 30},
  [245] = {.lex_state = 30},
  [246] = {.lex_state = 30},
  [247] = {.lex_state = 56},
  [248] = {.lex_state = 56},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 56},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 30},
  [253] = {.lex_state = 56},
  [254] = {.lex_state = 56},
  [255] = {.lex_state = 56},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 26},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 26},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 26},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 302},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 26},
  [270] = {.lex_state = 26},
  [271] = {.lex_state = 302},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 37},
  [274] = {.lex_state = 37},
  [275] = {.lex_state = 37},
  [276] = {.lex_state = 37},
  [277] = {.lex_state = 37},
  [278] = {.lex_state = 37},
  [279] = {.lex_state = 58},
  [280] = {.lex_state = 58},
  [281] = {.lex_state = 37},
  [282] = {.lex_state = 302},
  [283] = {.lex_state = 58},
  [284] = {.lex_state = 58},
  [285] = {.lex_state = 37},
  [286] = {.lex_state = 58},
  [287] = {.lex_state = 59},
  [288] = {.lex_state = 302},
  [289] = {.lex_state = 302},
  [290] = {.lex_state = 302},
  [291] = {.lex_state = 59},
  [292] = {.lex_state = 302},
  [293] = {.lex_state = 59},
  [294] = {.lex_state = 302},
  [295] = {.lex_state = 59},
  [296] = {.lex_state = 301},
  [297] = {.lex_state = 37},
  [298] = {.lex_state = 37},
  [299] = {.lex_state = 59},
  [300] = {.lex_state = 302},
  [301] = {.lex_state = 302},
  [302] = {.lex_state = 302},
  [303] = {.lex_state = 302},
  [304] = {.lex_state = 302},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 60},
  [307] = {.lex_state = 30},
  [308] = {.lex_state = 30},
  [309] = {.lex_state = 29},
  [310] = {.lex_state = 302, .external_lex_state = 3},
  [311] = {.lex_state = 60},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 30},
  [315] = {.lex_state = 30},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 302},
  [320] = {.lex_state = 57},
  [321] = {.lex_state = 57},
  [322] = {.lex_state = 37},
  [323] = {.lex_state = 37},
  [324] = {.lex_state = 37},
  [325] = {.lex_state = 8},
  [326] = {.lex_state = 10},
  [327] = {.lex_state = 60},
  [328] = {.lex_state = 302},
  [329] = {.lex_state = 60},
  [330] = {.lex_state = 60},
  [331] = {.lex_state = 60},
  [332] = {.lex_state = 60},
  [333] = {.lex_state = 30},
  [334] = {.lex_state = 60},
  [335] = {.lex_state = 60},
  [336] = {.lex_state = 14},
  [337] = {.lex_state = 57},
  [338] = {.lex_state = 29},
  [339] = {.lex_state = 37},
  [340] = {.lex_state = 30},
  [341] = {.lex_state = 37},
  [342] = {.lex_state = 37},
  [343] = {.lex_state = 30},
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 14},
  [346] = {.lex_state = 60},
  [347] = {.lex_state = 10},
  [348] = {.lex_state = 57},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 57},
  [351] = {.lex_state = 30},
  [352] = {.lex_state = 30},
  [353] = {.lex_state = 30},
  [354] = {.lex_state = 60},
  [355] = {.lex_state = 30},
  [356] = {.lex_state = 29},
  [357] = {.lex_state = 29},
  [358] = {.lex_state = 29},
  [359] = {.lex_state = 302},
  [360] = {.lex_state = 29},
  [361] = {.lex_state = 29},
  [362] = {.lex_state = 302},
  [363] = {.lex_state = 29},
  [364] = {.lex_state = 29},
  [365] = {.lex_state = 29},
  [366] = {.lex_state = 302},
  [367] = {.lex_state = 29},
  [368] = {.lex_state = 60},
  [369] = {.lex_state = 29},
  [370] = {.lex_state = 29},
  [371] = {.lex_state = 29},
  [372] = {.lex_state = 29},
  [373] = {.lex_state = 29},
  [374] = {.lex_state = 37},
  [375] = {.lex_state = 30},
  [376] = {.lex_state = 302},
  [377] = {.lex_state = 302},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 302},
  [380] = {.lex_state = 302},
  [381] = {.lex_state = 29},
  [382] = {.lex_state = 29},
  [383] = {.lex_state = 302},
  [384] = {.lex_state = 29},
  [385] = {.lex_state = 29},
  [386] = {.lex_state = 29},
  [387] = {.lex_state = 29},
  [388] = {.lex_state = 29},
  [389] = {.lex_state = 29},
  [390] = {.lex_state = 29},
  [391] = {.lex_state = 29},
  [392] = {.lex_state = 29},
  [393] = {.lex_state = 302},
  [394] = {.lex_state = 302},
  [395] = {.lex_state = 302},
  [396] = {.lex_state = 302},
  [397] = {.lex_state = 61},
  [398] = {.lex_state = 59},
  [399] = {.lex_state = 58},
  [400] = {.lex_state = 52},
  [401] = {.lex_state = 58},
  [402] = {.lex_state = 59},
  [403] = {.lex_state = 52},
  [404] = {.lex_state = 58},
  [405] = {.lex_state = 15},
  [406] = {.lex_state = 61},
  [407] = {.lex_state = 52},
  [408] = {.lex_state = 59},
  [409] = {.lex_state = 58},
  [410] = {.lex_state = 15},
  [411] = {.lex_state = 58},
  [412] = {.lex_state = 15},
  [413] = {.lex_state = 61},
  [414] = {.lex_state = 59},
  [415] = {.lex_state = 58},
  [416] = {.lex_state = 59},
  [417] = {.lex_state = 52},
  [418] = {.lex_state = 15},
  [419] = {.lex_state = 58},
  [420] = {.lex_state = 59},
  [421] = {.lex_state = 61},
  [422] = {.lex_state = 15},
  [423] = {.lex_state = 15},
  [424] = {.lex_state = 61},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 15},
  [427] = {.lex_state = 15},
  [428] = {.lex_state = 15},
  [429] = {.lex_state = 15},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 302},
  [432] = {.lex_state = 15},
  [433] = {.lex_state = 15},
  [434] = {.lex_state = 15},
  [435] = {.lex_state = 15},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 15},
  [438] = {.lex_state = 15},
  [439] = {.lex_state = 15},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 15},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 15},
  [444] = {.lex_state = 15},
  [445] = {.lex_state = 15},
  [446] = {.lex_state = 15},
  [447] = {.lex_state = 15},
  [448] = {.lex_state = 302},
  [449] = {.lex_state = 15},
  [450] = {.lex_state = 15},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 15},
  [454] = {.lex_state = 15},
  [455] = {.lex_state = 15},
  [456] = {.lex_state = 15},
  [457] = {.lex_state = 15},
  [458] = {.lex_state = 15},
  [459] = {.lex_state = 15},
  [460] = {.lex_state = 15},
  [461] = {.lex_state = 302},
  [462] = {.lex_state = 15},
  [463] = {.lex_state = 15},
  [464] = {.lex_state = 15},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 15},
  [467] = {.lex_state = 15},
  [468] = {.lex_state = 37},
  [469] = {.lex_state = 15},
  [470] = {.lex_state = 15},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 15},
  [473] = {.lex_state = 30},
  [474] = {.lex_state = 15},
  [475] = {.lex_state = 66},
  [476] = {.lex_state = 66},
  [477] = {.lex_state = 15},
  [478] = {.lex_state = 15},
  [479] = {.lex_state = 15},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 15},
  [483] = {.lex_state = 37},
  [484] = {.lex_state = 37},
  [485] = {.lex_state = 15},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 15},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 15},
  [493] = {.lex_state = 15},
  [494] = {.lex_state = 15},
  [495] = {.lex_state = 15},
  [496] = {.lex_state = 15},
  [497] = {.lex_state = 15},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 15},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 15},
  [503] = {.lex_state = 15},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 15},
  [506] = {.lex_state = 15},
  [507] = {.lex_state = 37},
  [508] = {.lex_state = 15},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 15},
  [511] = {.lex_state = 15},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 15},
  [514] = {.lex_state = 15},
  [515] = {.lex_state = 15},
  [516] = {.lex_state = 15},
  [517] = {.lex_state = 15},
  [518] = {.lex_state = 37},
  [519] = {.lex_state = 37},
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
  [531] = {.lex_state = 37},
  [532] = {.lex_state = 15},
  [533] = {.lex_state = 15},
  [534] = {.lex_state = 15},
  [535] = {.lex_state = 15},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 15},
  [538] = {.lex_state = 15},
  [539] = {.lex_state = 15},
  [540] = {.lex_state = 15},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 15},
  [543] = {.lex_state = 15},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 57},
  [546] = {.lex_state = 15},
  [547] = {.lex_state = 15},
  [548] = {.lex_state = 39},
  [549] = {.lex_state = 61},
  [550] = {.lex_state = 57},
  [551] = {.lex_state = 39},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 61},
  [554] = {.lex_state = 37},
  [555] = {.lex_state = 39},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 57},
  [558] = {.lex_state = 57},
  [559] = {.lex_state = 302},
  [560] = {.lex_state = 53},
  [561] = {.lex_state = 53},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 37},
  [566] = {.lex_state = 24},
  [567] = {.lex_state = 67},
  [568] = {.lex_state = 67},
  [569] = {.lex_state = 67},
  [570] = {.lex_state = 302},
  [571] = {.lex_state = 24},
  [572] = {.lex_state = 24},
  [573] = {.lex_state = 67},
  [574] = {.lex_state = 39},
  [575] = {.lex_state = 24},
  [576] = {.lex_state = 24},
  [577] = {.lex_state = 68},
  [578] = {.lex_state = 55},
  [579] = {.lex_state = 24},
  [580] = {.lex_state = 39},
  [581] = {.lex_state = 24},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 55},
  [585] = {.lex_state = 24},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 24},
  [589] = {.lex_state = 39},
  [590] = {.lex_state = 68},
  [591] = {.lex_state = 55},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 55},
  [595] = {.lex_state = 302},
  [596] = {.lex_state = 24},
  [597] = {.lex_state = 24},
  [598] = {.lex_state = 68},
  [599] = {.lex_state = 55},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 55},
  [603] = {.lex_state = 302},
  [604] = {.lex_state = 24},
  [605] = {.lex_state = 68},
  [606] = {.lex_state = 55},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 55},
  [610] = {.lex_state = 68},
  [611] = {.lex_state = 55},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 55},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 24},
  [632] = {.lex_state = 24},
  [633] = {.lex_state = 11},
  [634] = {.lex_state = 12},
  [635] = {.lex_state = 55},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 24},
  [639] = {.lex_state = 24},
  [640] = {.lex_state = 37},
  [641] = {.lex_state = 39},
  [642] = {.lex_state = 24},
  [643] = {.lex_state = 24},
  [644] = {.lex_state = 37},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 55},
  [648] = {.lex_state = 24},
  [649] = {.lex_state = 55},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 68},
  [652] = {.lex_state = 67},
  [653] = {.lex_state = 37},
  [654] = {.lex_state = 37},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 39},
  [659] = {.lex_state = 67},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 67},
  [663] = {.lex_state = 12},
  [664] = {.lex_state = 11},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 67},
  [668] = {.lex_state = 37},
  [669] = {.lex_state = 67},
  [670] = {.lex_state = 24},
  [671] = {.lex_state = 67},
  [672] = {.lex_state = 37},
  [673] = {.lex_state = 67},
  [674] = {.lex_state = 24},
  [675] = {.lex_state = 11},
  [676] = {.lex_state = 12},
  [677] = {.lex_state = 24},
  [678] = {.lex_state = 11},
  [679] = {.lex_state = 12},
  [680] = {.lex_state = 24},
  [681] = {.lex_state = 11},
  [682] = {.lex_state = 12},
  [683] = {.lex_state = 11},
  [684] = {.lex_state = 12},
  [685] = {.lex_state = 11},
  [686] = {.lex_state = 12},
  [687] = {.lex_state = 11},
  [688] = {.lex_state = 12},
  [689] = {.lex_state = 11},
  [690] = {.lex_state = 12},
  [691] = {.lex_state = 11},
  [692] = {.lex_state = 12},
  [693] = {.lex_state = 11},
  [694] = {.lex_state = 12},
  [695] = {.lex_state = 11},
  [696] = {.lex_state = 12},
  [697] = {.lex_state = 11},
  [698] = {.lex_state = 12},
  [699] = {.lex_state = 11},
  [700] = {.lex_state = 12},
  [701] = {.lex_state = 11},
  [702] = {.lex_state = 12},
  [703] = {.lex_state = 39},
  [704] = {.lex_state = 55},
  [705] = {.lex_state = 68},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 67},
  [708] = {.lex_state = 302},
  [709] = {.lex_state = 302},
  [710] = {.lex_state = 24},
  [711] = {.lex_state = 67},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 24},
  [714] = {.lex_state = 67},
  [715] = {.lex_state = 24},
  [716] = {.lex_state = 39},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 67},
  [719] = {.lex_state = 67},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 37},
  [722] = {.lex_state = 37},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 32},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 67},
  [729] = {.lex_state = 37},
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
    [sym_source_file] = STATE(724),
    [sym_arg_command] = STATE(267),
    [sym_from_command] = STATE(267),
    [sym_project_command] = STATE(267),
    [sym_target] = STATE(267),
    [sym_version_command] = STATE(267),
    [aux_sym_source_file_repeat1] = STATE(267),
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
  [0] = 23,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(39), 1,
      anon_sym_ELSE,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(49), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(29), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [90] = 23,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(49), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(61), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(59), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(4), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [180] = 23,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(49), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(65), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(63), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [270] = 23,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(47), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(49), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(69), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(67), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(2), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [360] = 23,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(71), 1,
      anon_sym_ARG,
    ACTIONS(74), 1,
      anon_sym_FROM,
    ACTIONS(77), 1,
      anon_sym_CACHE,
    ACTIONS(80), 1,
      anon_sym_COPY,
    ACTIONS(83), 1,
      anon_sym_FOR,
    ACTIONS(88), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(91), 1,
      anon_sym_FUNCTION,
    ACTIONS(94), 1,
      anon_sym_GIT,
    ACTIONS(97), 1,
      anon_sym_IF,
    ACTIONS(100), 1,
      anon_sym_ELSE,
    ACTIONS(102), 1,
      anon_sym_LET,
    ACTIONS(105), 1,
      anon_sym_LOCALLY,
    ACTIONS(108), 1,
      anon_sym_RUN,
    ACTIONS(111), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(114), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(117), 1,
      anon_sym_SET,
    ACTIONS(120), 1,
      anon_sym_TRY,
    ACTIONS(123), 1,
      anon_sym_WAIT,
    ACTIONS(126), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(86), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(6), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [450] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    STATE(717), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [536] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(133), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [622] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(135), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [708] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(71), 1,
      anon_sym_ARG,
    ACTIONS(74), 1,
      anon_sym_FROM,
    ACTIONS(77), 1,
      anon_sym_CACHE,
    ACTIONS(80), 1,
      anon_sym_COPY,
    ACTIONS(83), 1,
      anon_sym_FOR,
    ACTIONS(86), 1,
      anon_sym_FINALLY,
    ACTIONS(88), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(91), 1,
      anon_sym_FUNCTION,
    ACTIONS(94), 1,
      anon_sym_GIT,
    ACTIONS(97), 1,
      anon_sym_IF,
    ACTIONS(102), 1,
      anon_sym_LET,
    ACTIONS(105), 1,
      anon_sym_LOCALLY,
    ACTIONS(108), 1,
      anon_sym_RUN,
    ACTIONS(117), 1,
      anon_sym_SET,
    ACTIONS(120), 1,
      anon_sym_TRY,
    ACTIONS(123), 1,
      anon_sym_WAIT,
    ACTIONS(126), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(137), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(140), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [794] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(143), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [880] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    STATE(665), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [966] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(145), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1052] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      anon_sym_ARG,
    ACTIONS(149), 1,
      anon_sym_FROM,
    ACTIONS(151), 1,
      anon_sym_CACHE,
    ACTIONS(153), 1,
      anon_sym_COPY,
    ACTIONS(155), 1,
      anon_sym_FOR,
    ACTIONS(157), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(159), 1,
      anon_sym_FUNCTION,
    ACTIONS(161), 1,
      anon_sym_GIT,
    ACTIONS(163), 1,
      anon_sym_IF,
    ACTIONS(165), 1,
      anon_sym_LET,
    ACTIONS(167), 1,
      anon_sym_LOCALLY,
    ACTIONS(169), 1,
      anon_sym_RUN,
    ACTIONS(171), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(173), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(175), 1,
      anon_sym_SET,
    ACTIONS(177), 1,
      anon_sym_TRY,
    ACTIONS(179), 1,
      anon_sym_WAIT,
    ACTIONS(181), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(183), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(19), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1138] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(185), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(187), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(189), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1224] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    STATE(727), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1310] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(191), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(25), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1396] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(193), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1482] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(147), 1,
      anon_sym_ARG,
    ACTIONS(149), 1,
      anon_sym_FROM,
    ACTIONS(151), 1,
      anon_sym_CACHE,
    ACTIONS(153), 1,
      anon_sym_COPY,
    ACTIONS(155), 1,
      anon_sym_FOR,
    ACTIONS(157), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(159), 1,
      anon_sym_FUNCTION,
    ACTIONS(161), 1,
      anon_sym_GIT,
    ACTIONS(163), 1,
      anon_sym_IF,
    ACTIONS(165), 1,
      anon_sym_LET,
    ACTIONS(167), 1,
      anon_sym_LOCALLY,
    ACTIONS(169), 1,
      anon_sym_RUN,
    ACTIONS(171), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(173), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(175), 1,
      anon_sym_SET,
    ACTIONS(177), 1,
      anon_sym_TRY,
    ACTIONS(179), 1,
      anon_sym_WAIT,
    ACTIONS(181), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(195), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1568] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(71), 1,
      anon_sym_ARG,
    ACTIONS(74), 1,
      anon_sym_FROM,
    ACTIONS(77), 1,
      anon_sym_CACHE,
    ACTIONS(80), 1,
      anon_sym_COPY,
    ACTIONS(83), 1,
      anon_sym_FOR,
    ACTIONS(86), 1,
      anon_sym_END,
    ACTIONS(88), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(91), 1,
      anon_sym_FUNCTION,
    ACTIONS(94), 1,
      anon_sym_GIT,
    ACTIONS(97), 1,
      anon_sym_IF,
    ACTIONS(102), 1,
      anon_sym_LET,
    ACTIONS(105), 1,
      anon_sym_LOCALLY,
    ACTIONS(108), 1,
      anon_sym_RUN,
    ACTIONS(117), 1,
      anon_sym_SET,
    ACTIONS(120), 1,
      anon_sym_TRY,
    ACTIONS(123), 1,
      anon_sym_WAIT,
    ACTIONS(126), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(197), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(200), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1654] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(185), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(187), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(203), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(10), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1740] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(205), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1826] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(207), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1912] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(209), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(9), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [1998] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(211), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2084] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(213), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2170] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    STATE(660), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(22), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2256] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(185), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(187), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(215), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(15), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2342] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(217), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(26), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2428] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(219), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(8), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2514] = 22,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(86), 1,
      sym__dedent,
    ACTIONS(221), 1,
      anon_sym_ARG,
    ACTIONS(224), 1,
      anon_sym_FROM,
    ACTIONS(227), 1,
      anon_sym_CACHE,
    ACTIONS(230), 1,
      anon_sym_COPY,
    ACTIONS(233), 1,
      anon_sym_FOR,
    ACTIONS(236), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(239), 1,
      anon_sym_FUNCTION,
    ACTIONS(242), 1,
      anon_sym_GIT,
    ACTIONS(245), 1,
      anon_sym_IF,
    ACTIONS(248), 1,
      anon_sym_LET,
    ACTIONS(251), 1,
      anon_sym_LOCALLY,
    ACTIONS(254), 1,
      anon_sym_RUN,
    ACTIONS(257), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(260), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(263), 1,
      anon_sym_SET,
    ACTIONS(266), 1,
      anon_sym_TRY,
    ACTIONS(269), 1,
      anon_sym_WAIT,
    ACTIONS(272), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(31), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2600] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(275), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2686] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(185), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(187), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(277), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2772] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(279), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2858] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(281), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [2944] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(283), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(32), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [3030] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(285), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [3116] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(287), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [3202] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(289), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [3288] = 22,
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
      anon_sym_FOR,
    ACTIONS(31), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(33), 1,
      anon_sym_FUNCTION,
    ACTIONS(35), 1,
      anon_sym_GIT,
    ACTIONS(37), 1,
      anon_sym_IF,
    ACTIONS(41), 1,
      anon_sym_LET,
    ACTIONS(43), 1,
      anon_sym_LOCALLY,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(51), 1,
      anon_sym_SET,
    ACTIONS(53), 1,
      anon_sym_TRY,
    ACTIONS(55), 1,
      anon_sym_WAIT,
    ACTIONS(57), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(129), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(131), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(291), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(38), 19,
      sym_arg_command,
      sym_from_command,
      sym_cache_command,
      sym_copy_command,
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
  [3374] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(297), 1,
      anon_sym_COLON2,
    ACTIONS(299), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(295), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(293), 26,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3420] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      sym_image_name,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(309), 1,
      sym_cache_hint,
    ACTIONS(311), 1,
      sym_push,
    STATE(44), 1,
      aux_sym_save_image_command_repeat1,
    STATE(68), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(67), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(303), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(301), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3475] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(317), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(315), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(313), 26,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3518] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      sym_image_name,
    ACTIONS(307), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(311), 1,
      sym_push,
    STATE(51), 1,
      aux_sym_save_image_command_repeat1,
    STATE(68), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(66), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(321), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3570] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(325), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(323), 26,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3610] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(329), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(327), 26,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3650] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(309), 1,
      sym_cache_hint,
    ACTIONS(331), 1,
      sym_image_name,
    ACTIONS(333), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(335), 1,
      sym_push,
    STATE(53), 1,
      aux_sym_save_image_command_repeat1,
    STATE(135), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(129), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(301), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3703] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(309), 1,
      sym_cache_hint,
    ACTIONS(337), 1,
      sym_image_name,
    ACTIONS(339), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(341), 1,
      sym_push,
    STATE(50), 1,
      aux_sym_save_image_command_repeat1,
    STATE(86), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(82), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(303), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(301), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3756] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      sym_image_name,
    ACTIONS(345), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(347), 1,
      sym_cache_hint,
    ACTIONS(349), 1,
      sym_push,
    STATE(52), 1,
      aux_sym_save_image_command_repeat1,
    STATE(132), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(303), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(301), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3809] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      sym_image_name,
    ACTIONS(339), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(341), 1,
      sym_push,
    STATE(60), 1,
      aux_sym_save_image_command_repeat1,
    STATE(86), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(83), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(321), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3859] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(355), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(358), 1,
      sym_push,
    STATE(51), 1,
      aux_sym_save_image_command_repeat1,
    STATE(68), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3905] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      sym_image_name,
    ACTIONS(345), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(349), 1,
      sym_push,
    STATE(70), 1,
      aux_sym_save_image_command_repeat1,
    STATE(132), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(142), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(321), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [3955] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      sym_image_name,
    ACTIONS(333), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(335), 1,
      sym_push,
    STATE(69), 1,
      aux_sym_save_image_command_repeat1,
    STATE(135), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(119), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(321), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(319), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4005] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(58), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(361), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4046] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
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
    ACTIONS(367), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4087] = 6,
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
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(371), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4128] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(380), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(55), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(378), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4169] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(365), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(384), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(56), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(382), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4210] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(390), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(59), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4250] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(393), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(396), 1,
      sym_push,
    STATE(60), 1,
      aux_sym_save_image_command_repeat1,
    STATE(86), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4294] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4330] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(403), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4366] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(407), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4402] = 3,
    ACTIONS(413), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 23,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4436] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(415), 1,
      anon_sym_COLON2,
    ACTIONS(417), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4476] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(59), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(421), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(419), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4516] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(305), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(59), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4556] = 4,
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
    ACTIONS(427), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4592] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(431), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(434), 1,
      sym_push,
    STATE(69), 1,
      aux_sym_save_image_command_repeat1,
    STATE(135), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4636] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(437), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(440), 1,
      sym_push,
    STATE(70), 1,
      aux_sym_save_image_command_repeat1,
    STATE(132), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(353), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(351), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4680] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(405), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4715] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(409), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4750] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4789] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      anon_sym_ASLOCAL,
    ACTIONS(457), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(451), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4828] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(461), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(459), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4863] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(465), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(463), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4898] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(471), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(467), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4935] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(315), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [4972] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(479), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(477), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(475), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5009] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(483), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(481), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5043] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(487), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(485), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5077] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5115] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(337), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(421), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(419), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5153] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(489), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(84), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5191] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5225] = 4,
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
    ACTIONS(427), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5259] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(494), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(492), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5293] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(498), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(496), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5327] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(502), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(500), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5361] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(506), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(504), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5395] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(510), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(508), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5429] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(363), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(361), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5463] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(514), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(512), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5497] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(518), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(516), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5531] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(522), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(520), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5565] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(526), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(524), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5599] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(530), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(528), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5633] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(534), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(532), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5667] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5701] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(538), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(536), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5735] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(542), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(540), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5769] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(546), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(544), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5803] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(548), 1,
      anon_sym_COLON2,
    ACTIONS(550), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5841] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(554), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(552), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5875] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(558), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(556), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5909] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(562), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(560), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5943] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(401), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(399), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [5977] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(566), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(564), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6011] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(570), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(568), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6045] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(574), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(572), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6079] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(578), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(576), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6113] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(582), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(580), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6147] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(584), 1,
      anon_sym_COLON2,
    ACTIONS(586), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6185] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(590), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(588), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6219] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(594), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(592), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6253] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(598), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(596), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6287] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(602), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(600), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6321] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(604), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(118), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6359] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(118), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(421), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(419), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6397] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(607), 1,
      anon_sym_COLON2,
    ACTIONS(609), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(295), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6435] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(613), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(611), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6469] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(617), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(615), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6503] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(621), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(619), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6537] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(625), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(623), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6571] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(629), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(627), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6605] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(633), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(631), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6639] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(637), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(635), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6673] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(329), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6707] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(331), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(118), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6745] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 17,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6779] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(641), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(639), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6813] = 4,
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
    ACTIONS(427), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6847] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(403), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6881] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(139), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(425), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(423), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6919] = 4,
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
    ACTIONS(427), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6953] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(643), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [6987] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(649), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(647), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7021] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(653), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(651), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7055] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(139), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(388), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(386), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7093] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(660), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(658), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7127] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(664), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(662), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7161] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(343), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(139), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(421), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(419), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7199] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(668), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(666), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7233] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(672), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(670), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7267] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 7,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(407), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7301] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(676), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(674), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7335] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(680), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(678), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7369] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(407), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7403] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(403), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7437] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(684), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(682), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7471] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(380), 1,
      anon_sym_FROM,
    ACTIONS(686), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(156), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(378), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7509] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(407), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7543] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(403), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7577] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(384), 1,
      anon_sym_FROM,
    ACTIONS(686), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(158), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(382), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7615] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_FROM,
    ACTIONS(686), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(154), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(361), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7653] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(369), 1,
      anon_sym_FROM,
    ACTIONS(686), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(158), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(367), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7691] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(690), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(688), 20,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7725] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(373), 1,
      anon_sym_FROM,
    ACTIONS(692), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(158), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(371), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7763] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(295), 1,
      anon_sym_FROM,
    ACTIONS(695), 1,
      anon_sym_COLON2,
    ACTIONS(697), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7800] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7837] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(699), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(315), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7872] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7909] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      anon_sym_ASLOCAL,
    ACTIONS(457), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(451), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [7946] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_path,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(713), 1,
      anon_sym_DASH_DASHplatform,
    STATE(240), 1,
      aux_sym_copy_command_repeat1,
    STATE(320), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(255), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(707), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [7999] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(715), 1,
      anon_sym_ASLOCAL,
    ACTIONS(717), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(451), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8036] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_path,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(713), 1,
      anon_sym_DASH_DASHplatform,
    STATE(164), 1,
      aux_sym_copy_command_repeat1,
    STATE(321), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(255), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(707), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [8089] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_path,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(713), 1,
      anon_sym_DASH_DASHplatform,
    STATE(240), 1,
      aux_sym_copy_command_repeat1,
    STATE(350), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(255), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(707), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [8142] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(455), 1,
      anon_sym_ASLOCAL,
    ACTIONS(457), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(453), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(451), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8179] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(719), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(315), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8214] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(315), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8249] = 4,
    ACTIONS(723), 1,
      aux_sym_branch_token1,
    ACTIONS(725), 1,
      sym__dedent,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 19,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8282] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(727), 1,
      anon_sym_ASLOCAL,
    ACTIONS(729), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(445), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(443), 14,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8319] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      sym_path,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(711), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(713), 1,
      anon_sym_DASH_DASHplatform,
    STATE(167), 1,
      aux_sym_copy_command_repeat1,
    STATE(337), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(255), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(707), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [8372] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(329), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8404] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(315), 1,
      anon_sym_FROM,
    ACTIONS(731), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8438] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8470] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8502] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(329), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8534] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(465), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(463), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8566] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 5,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(329), 15,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8598] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8630] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(469), 1,
      anon_sym_FROM,
    ACTIONS(733), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(467), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8664] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8696] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 4,
      anon_sym_FROMDOCKERFILE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 16,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8728] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 19,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8760] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(477), 1,
      anon_sym_FROM,
    ACTIONS(735), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(475), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8794] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(534), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(532), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8825] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(483), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8856] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(676), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(674), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8887] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(680), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(678), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8918] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(487), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(485), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8949] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(554), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [8980] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(498), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(496), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9011] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(621), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(619), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9042] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(542), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(540), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9073] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(363), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(361), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9104] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(637), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(635), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9135] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(329), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9166] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(566), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(564), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9197] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(538), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(536), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9228] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(325), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(323), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9259] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(690), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(688), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9290] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(684), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(682), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9321] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(594), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(592), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9352] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(649), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(647), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9383] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(653), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(651), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9414] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(664), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(662), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9445] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(617), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(615), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9476] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(570), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(568), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9507] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(643), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9538] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(530), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(528), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9569] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(672), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(670), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9600] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(574), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(572), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9631] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(590), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(588), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9662] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(582), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(580), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9693] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(546), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(544), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9724] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(598), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(596), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9755] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(502), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(500), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9786] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(576), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9817] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(660), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(658), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9848] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(506), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(504), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9879] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(510), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(508), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9910] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(602), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(600), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9941] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(625), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(623), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [9972] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(633), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(631), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10003] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(514), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(512), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10034] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(668), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(666), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10065] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(518), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(516), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10096] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(494), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(492), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10127] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10158] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(522), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(520), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
    ACTIONS(629), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(627), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10220] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(526), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(524), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10251] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(641), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(639), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10282] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(613), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(611), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10313] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(558), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 18,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
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
  [10344] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      anon_sym_DASH_DASH,
    ACTIONS(741), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(745), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(747), 1,
      anon_sym_DASH_DASHsecret,
    STATE(242), 1,
      aux_sym_run_command_repeat1,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(492), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(739), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(263), 2,
      sym_mount,
      sym_secret,
    ACTIONS(743), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10389] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(745), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(747), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(749), 1,
      anon_sym_DASH_DASH,
    STATE(242), 1,
      aux_sym_run_command_repeat1,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(536), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(739), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(263), 2,
      sym_mount,
      sym_secret,
    ACTIONS(743), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10434] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(745), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(747), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(751), 1,
      anon_sym_DASH_DASH,
    STATE(238), 1,
      aux_sym_run_command_repeat1,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(525), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(739), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(263), 2,
      sym_mount,
      sym_secret,
    ACTIONS(743), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10479] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      sym_path,
    ACTIONS(760), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(763), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(766), 1,
      anon_sym_DASH_DASHplatform,
    STATE(240), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(755), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(255), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(757), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [10520] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(745), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(747), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(769), 1,
      anon_sym_DASH_DASH,
    STATE(237), 1,
      aux_sym_run_command_repeat1,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(532), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(739), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(263), 2,
      sym_mount,
      sym_secret,
    ACTIONS(743), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10565] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(778), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(781), 1,
      anon_sym_DASH_DASHsecret,
    STATE(242), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(771), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(773), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(263), 2,
      sym_mount,
      sym_secret,
    ACTIONS(775), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [10602] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(784), 1,
      sym_allow_privileged,
    ACTIONS(786), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(788), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(790), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(792), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(794), 1,
      anon_sym_DASH_DASHservice,
    STATE(244), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(650), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(352), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10644] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(784), 1,
      sym_allow_privileged,
    ACTIONS(786), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(788), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(790), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(792), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(794), 1,
      anon_sym_DASH_DASHservice,
    STATE(252), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(657), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(352), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10686] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(784), 1,
      sym_allow_privileged,
    ACTIONS(786), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(788), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(790), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(792), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(794), 1,
      anon_sym_DASH_DASHservice,
    STATE(246), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(645), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(352), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10728] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(45), 1,
      anon_sym_RUN,
    ACTIONS(784), 1,
      sym_allow_privileged,
    ACTIONS(786), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(788), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(790), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(792), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(794), 1,
      anon_sym_DASH_DASHservice,
    STATE(252), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(706), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(352), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10770] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(796), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(798), 12,
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
  [10795] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(800), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(802), 12,
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
  [10820] = 10,
    ACTIONS(804), 1,
      sym_image_name,
    ACTIONS(806), 1,
      anon_sym_PLUS,
    ACTIONS(810), 1,
      anon_sym_DASH_DASHplatform,
    STATE(292), 1,
      sym_target_ref,
    STATE(307), 1,
      aux_sym_from_command_repeat1,
    STATE(473), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(362), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(812), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10857] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 12,
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
  [10882] = 10,
    ACTIONS(810), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(814), 1,
      sym_image_name,
    ACTIONS(816), 1,
      anon_sym_PLUS,
    STATE(54), 1,
      sym_target_ref,
    STATE(340), 1,
      aux_sym_from_command_repeat1,
    STATE(473), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(92), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(818), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [10919] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(820), 1,
      anon_sym_RUN,
    ACTIONS(822), 1,
      sym_allow_privileged,
    ACTIONS(825), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(828), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(831), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(834), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(837), 1,
      anon_sym_DASH_DASHservice,
    STATE(252), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(352), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [10958] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(840), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(842), 12,
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
  [10983] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 12,
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
  [11008] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(844), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(846), 12,
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
  [11033] = 10,
    ACTIONS(810), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(848), 1,
      sym_image_name,
    ACTIONS(850), 1,
      anon_sym_PLUS,
    STATE(155), 1,
      sym_target_ref,
    STATE(355), 1,
      aux_sym_from_command_repeat1,
    STATE(473), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(808), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(196), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(852), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11070] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(403), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(405), 10,
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
  [11094] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym__eol,
    STATE(272), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(860), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11126] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(864), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(862), 10,
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
  [11150] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      sym__eol,
    STATE(265), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(866), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11182] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym__eol,
    STATE(264), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(868), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11214] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym__eol,
    STATE(258), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(870), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11246] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(874), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(872), 10,
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
  [11270] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym__eol,
    STATE(272), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(876), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11302] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym__eol,
    STATE(272), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(878), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11334] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__eol,
    STATE(272), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(880), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11366] = 9,
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
    ACTIONS(882), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(271), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [11400] = 8,
    ACTIONS(856), 1,
      anon_sym_DQUOTE,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym__eol,
    STATE(266), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(854), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(884), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11432] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(407), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(409), 10,
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
  [11456] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(888), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(886), 10,
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
  [11480] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
    ACTIONS(892), 1,
      anon_sym_ARG,
    ACTIONS(895), 1,
      anon_sym_FROM,
    ACTIONS(898), 1,
      anon_sym_PROJECT,
    ACTIONS(901), 1,
      anon_sym_VERSION,
    ACTIONS(904), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(271), 6,
      sym_arg_command,
      sym_from_command,
      sym_project_command,
      sym_target,
      sym_version_command,
      aux_sym_source_file_repeat1,
  [11514] = 7,
    ACTIONS(910), 1,
      anon_sym_DQUOTE,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    STATE(272), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(907), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(325), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(916), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [11543] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(918), 1,
      sym_identifier,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(926), 1,
      anon_sym_DASH_DASHsep,
    STATE(278), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(339), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11576] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(928), 1,
      sym_identifier,
    ACTIONS(930), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(936), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(939), 1,
      anon_sym_DASH_DASHsep,
    STATE(274), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(933), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(339), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11609] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(926), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(942), 1,
      sym_identifier,
    STATE(277), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(339), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11642] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(297), 1,
      aux_sym__conditional_block_repeat1,
    STATE(544), 1,
      sym__conditional_block,
    STATE(552), 1,
      sym_else_if_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(374), 2,
      sym_mount,
      sym_secret,
    ACTIONS(946), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11677] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(926), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(948), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(339), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11710] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(926), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(950), 1,
      sym_identifier,
    STATE(274), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(922), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(339), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [11743] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(952), 1,
      sym_path,
    ACTIONS(954), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(956), 1,
      anon_sym_DASHf,
    ACTIONS(958), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(960), 1,
      anon_sym_DASH_DASHplatform,
    STATE(286), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(401), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11775] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(956), 1,
      anon_sym_DASHf,
    ACTIONS(958), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(960), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(962), 1,
      sym_path,
    STATE(284), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(401), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11807] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(297), 1,
      aux_sym__conditional_block_repeat1,
    STATE(512), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(374), 2,
      sym_mount,
      sym_secret,
    ACTIONS(946), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11839] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(964), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(282), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(373), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [11865] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(956), 1,
      anon_sym_DASHf,
    ACTIONS(958), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(960), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(967), 1,
      sym_path,
    STATE(279), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(401), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11897] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(954), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(956), 1,
      anon_sym_DASHf,
    ACTIONS(958), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(960), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(969), 1,
      sym_path,
    STATE(286), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(401), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11929] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(944), 1,
      sym_identifier,
    STATE(297), 1,
      aux_sym__conditional_block_repeat1,
    STATE(541), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(374), 2,
      sym_mount,
      sym_secret,
    ACTIONS(946), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [11961] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(971), 1,
      sym_path,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(976), 1,
      anon_sym_DASHf,
    ACTIONS(979), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(982), 1,
      anon_sym_DASH_DASHplatform,
    STATE(286), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(401), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [11993] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(985), 1,
      sym_path,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(991), 1,
      sym_persist,
    ACTIONS(993), 1,
      anon_sym_DASH_DASHsharing,
    STATE(299), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(416), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12024] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(995), 1,
      anon_sym_COLON2,
    ACTIONS(997), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(295), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12049] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(282), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(369), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12074] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(282), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(384), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12099] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(991), 1,
      sym_persist,
    ACTIONS(993), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1001), 1,
      sym_path,
    STATE(299), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(416), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12130] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(290), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(363), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12155] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(991), 1,
      sym_persist,
    ACTIONS(993), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1003), 1,
      sym_path,
    STATE(291), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(416), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12186] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(289), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(380), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12211] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(991), 1,
      sym_persist,
    ACTIONS(993), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1005), 1,
      sym_path,
    STATE(287), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(416), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12242] = 4,
    ACTIONS(725), 1,
      ts_builtin_sym_end,
    ACTIONS(1007), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(411), 7,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [12263] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(924), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1009), 1,
      sym_identifier,
    STATE(298), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(374), 2,
      sym_mount,
      sym_secret,
    ACTIONS(946), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12292] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1011), 1,
      sym_identifier,
    ACTIONS(1013), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1019), 1,
      anon_sym_DASH_DASHsecret,
    STATE(298), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(374), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1016), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [12321] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1022), 1,
      sym_path,
    ACTIONS(1024), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1027), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1030), 1,
      sym_persist,
    ACTIONS(1033), 1,
      anon_sym_DASH_DASHsharing,
    STATE(299), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(416), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [12352] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(403), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12372] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(463), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(465), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12392] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1036), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(315), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12414] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(407), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12434] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_DASH_DASH2,
    ACTIONS(461), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12454] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1038), 1,
      sym_expr,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1044), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(516), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12479] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1046), 1,
      sym_path,
    STATE(335), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12500] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(713), 1,
      anon_sym_DASH_DASHplatform,
    STATE(294), 1,
      sym_target_ref,
    STATE(375), 1,
      aux_sym_from_command_repeat1,
    STATE(473), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1050), 2,
      sym_allow_privileged,
      sym_pass_args,
  [12527] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(459), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12544] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1052), 1,
      sym_expr,
    ACTIONS(1054), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(503), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12569] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1056), 1,
      ts_builtin_sym_end,
    ACTIONS(1060), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1058), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12590] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1062), 1,
      sym_path,
    STATE(335), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12611] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1064), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12628] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1066), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12645] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1068), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12662] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1070), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [12679] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(403), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12694] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(407), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12709] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1072), 1,
      sym_expr,
    ACTIONS(1074), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(510), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [12734] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(329), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [12753] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(1076), 1,
      sym_path,
    STATE(348), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12780] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(1078), 1,
      sym_path,
    STATE(348), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [12807] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1080), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12824] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(862), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12841] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(886), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [12858] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1082), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12873] = 4,
    STATE(231), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1084), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1086), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [12892] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1088), 1,
      sym_path,
    STATE(346), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12913] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
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
  [12932] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1090), 1,
      sym_path,
    STATE(306), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12953] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1092), 1,
      sym_path,
    STATE(335), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12974] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1094), 1,
      sym_path,
    STATE(330), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [12995] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1096), 1,
      sym_path,
    STATE(335), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13016] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1098), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13033] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1100), 1,
      sym_path,
    STATE(332), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13054] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1102), 1,
      sym_path,
    STATE(335), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1104), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13075] = 4,
    STATE(336), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1107), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1110), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13094] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(1112), 1,
      sym_path,
    STATE(348), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [13121] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1114), 1,
      sym_expr,
    ACTIONS(1116), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(537), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13146] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1118), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13163] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1120), 1,
      anon_sym_PLUS,
    STATE(57), 1,
      sym_target_ref,
    STATE(375), 1,
      aux_sym_from_command_repeat1,
    STATE(473), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1050), 2,
      sym_allow_privileged,
      sym_pass_args,
  [13190] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13207] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [13224] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(802), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13241] = 4,
    STATE(95), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1084), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1122), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13260] = 4,
    STATE(336), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1124), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1126), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13279] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1128), 1,
      sym_path,
    STATE(335), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13300] = 4,
    STATE(111), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1084), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1130), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13319] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1132), 1,
      sym_path,
    ACTIONS(1135), 1,
      anon_sym_PLUS,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [13346] = 4,
    STATE(219), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1084), 3,
      sym_path,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    ACTIONS(1141), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [13365] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(1143), 1,
      sym_path,
    STATE(348), 1,
      aux_sym_copy_command_repeat2,
    STATE(587), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(545), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [13392] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13409] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1145), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13426] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [13443] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1147), 1,
      sym_path,
    STATE(311), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1048), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13464] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1149), 1,
      anon_sym_PLUS,
    STATE(151), 1,
      sym_target_ref,
    STATE(375), 1,
      aux_sym_from_command_repeat1,
    STATE(473), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1050), 2,
      sym_allow_privileged,
      sym_pass_args,
  [13491] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1151), 1,
      sym_expr,
    ACTIONS(1153), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(502), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13516] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1155), 1,
      sym_expr,
    ACTIONS(1157), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(429), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13541] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1159), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(526), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13563] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(617), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13581] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1161), 1,
      anon_sym_DQUOTE,
    ACTIONS(1163), 1,
      anon_sym_SQUOTE,
    ACTIONS(1165), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(408), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13603] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1167), 1,
      anon_sym_DQUOTE,
    ACTIONS(1169), 1,
      anon_sym_SQUOTE,
    ACTIONS(1171), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(179), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13625] = 4,
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
  [13643] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1173), 1,
      anon_sym_DQUOTE,
    ACTIONS(1175), 1,
      anon_sym_SQUOTE,
    ACTIONS(1177), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(253), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13665] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1179), 1,
      anon_sym_DQUOTE,
    ACTIONS(1181), 1,
      anon_sym_SQUOTE,
    ACTIONS(1183), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(411), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13687] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1173), 1,
      anon_sym_DQUOTE,
    ACTIONS(1175), 1,
      anon_sym_SQUOTE,
    ACTIONS(1185), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(247), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13709] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(498), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13727] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1187), 1,
      anon_sym_DQUOTE,
    ACTIONS(1189), 1,
      anon_sym_SQUOTE,
    ACTIONS(1191), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(324), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13749] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1193), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1195), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [13767] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1187), 1,
      anon_sym_DQUOTE,
    ACTIONS(1189), 1,
      anon_sym_SQUOTE,
    ACTIONS(1197), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(323), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13789] = 6,
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
    STATE(270), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13811] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1173), 1,
      anon_sym_DQUOTE,
    ACTIONS(1175), 1,
      anon_sym_SQUOTE,
    ACTIONS(1205), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(248), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13833] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      anon_sym_SQUOTE,
    ACTIONS(1207), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(259), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13855] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1209), 1,
      anon_sym_DQUOTE,
    ACTIONS(1211), 1,
      anon_sym_SQUOTE,
    ACTIONS(1213), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(99), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13877] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1215), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [13893] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1217), 1,
      anon_sym_PLUS,
    ACTIONS(1222), 1,
      anon_sym_DASH_DASHplatform,
    STATE(375), 1,
      aux_sym_from_command_repeat1,
    STATE(473), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1219), 2,
      sym_allow_privileged,
      sym_pass_args,
  [13917] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1225), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1227), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13935] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(494), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13953] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1229), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(497), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [13975] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1231), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1233), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [13993] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1235), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1237), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14011] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE,
    ACTIONS(1241), 1,
      anon_sym_SQUOTE,
    ACTIONS(1243), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(343), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14033] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1245), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(470), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14055] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(613), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14073] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1247), 1,
      anon_sym_DQUOTE,
    ACTIONS(1249), 1,
      anon_sym_SQUOTE,
    ACTIONS(1251), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(76), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14095] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE,
    ACTIONS(1255), 1,
      anon_sym_SQUOTE,
    ACTIONS(1257), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(301), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14117] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    ACTIONS(1261), 1,
      anon_sym_SQUOTE,
    ACTIONS(1263), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(107), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14139] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    ACTIONS(1265), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(466), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14161] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1267), 1,
      anon_sym_DQUOTE,
    ACTIONS(1269), 1,
      anon_sym_SQUOTE,
    ACTIONS(1271), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(85), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14183] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1239), 1,
      anon_sym_DQUOTE,
    ACTIONS(1241), 1,
      anon_sym_SQUOTE,
    ACTIONS(1273), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(313), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14205] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1179), 1,
      anon_sym_DQUOTE,
    ACTIONS(1181), 1,
      anon_sym_SQUOTE,
    ACTIONS(1275), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(419), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14227] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1277), 1,
      anon_sym_DQUOTE,
    ACTIONS(1279), 1,
      anon_sym_SQUOTE,
    ACTIONS(1281), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(61), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14249] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1187), 1,
      anon_sym_DQUOTE,
    ACTIONS(1189), 1,
      anon_sym_SQUOTE,
    ACTIONS(1283), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(322), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [14271] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1285), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1287), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14289] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1289), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1291), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14307] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(538), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14325] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(534), 5,
      anon_sym_ARG,
      anon_sym_FROM,
      anon_sym_PROJECT,
      anon_sym_VERSION,
      sym_identifier,
  [14343] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1293), 1,
      sym_path,
    ACTIONS(1295), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1297), 1,
      sym_keep_ts,
    STATE(406), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14366] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14383] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(403), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(405), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14400] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      aux_sym_shell_fragment_token3,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(535), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(741), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14421] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1299), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1301), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14438] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1303), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1305), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14455] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      aux_sym_shell_fragment_token3,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(469), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(741), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14476] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1307), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1309), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14493] = 4,
    ACTIONS(1311), 1,
      anon_sym_EQ,
    STATE(229), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1313), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14510] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1295), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1297), 1,
      sym_keep_ts,
    ACTIONS(1315), 1,
      sym_path,
    STATE(413), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14533] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      aux_sym_shell_fragment_token3,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(522), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(741), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14554] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(796), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(798), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14571] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14588] = 4,
    ACTIONS(1317), 1,
      anon_sym_EQ,
    STATE(88), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1319), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14605] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1321), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1323), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14622] = 4,
    ACTIONS(1325), 1,
      anon_sym_EQ,
    STATE(87), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1327), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14639] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1329), 1,
      sym_path,
    ACTIONS(1331), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1334), 1,
      sym_keep_ts,
    STATE(413), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14662] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(407), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(409), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14679] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1337), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1339), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14696] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1341), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1343), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14713] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(739), 1,
      aux_sym_shell_fragment_token3,
    STATE(345), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(493), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(741), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [14734] = 4,
    ACTIONS(1345), 1,
      anon_sym_EQ,
    STATE(377), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1347), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14751] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(800), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(802), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [14768] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1349), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1351), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [14785] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1295), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1297), 1,
      sym_keep_ts,
    ACTIONS(1353), 1,
      sym_path,
    STATE(424), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14808] = 4,
    ACTIONS(1355), 1,
      anon_sym_EQ,
    STATE(366), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1357), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14825] = 4,
    ACTIONS(1359), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1361), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14842] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1295), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1297), 1,
      sym_keep_ts,
    ACTIONS(1363), 1,
      sym_path,
    STATE(413), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(549), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14865] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1365), 1,
      anon_sym_END,
    ACTIONS(1367), 1,
      anon_sym_ELSEIF,
    ACTIONS(1369), 1,
      anon_sym_ELSE,
    STATE(471), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [14885] = 3,
    STATE(5), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1371), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14899] = 3,
    STATE(200), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1373), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14913] = 3,
    STATE(33), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1375), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14927] = 3,
    STATE(235), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1377), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14941] = 3,
    STATE(208), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1379), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14955] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(282), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [14973] = 3,
    STATE(199), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1383), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [14987] = 3,
    STATE(109), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1385), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15001] = 3,
    STATE(209), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1387), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15015] = 3,
    STATE(213), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1389), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15029] = 3,
    STATE(214), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1391), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15043] = 3,
    STATE(217), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1393), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15057] = 3,
    STATE(110), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1395), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15071] = 3,
    STATE(114), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1397), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15085] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1399), 1,
      anon_sym_END,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    STATE(442), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15105] = 3,
    STATE(223), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1403), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15119] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1405), 1,
      anon_sym_END,
    ACTIONS(1407), 1,
      anon_sym_SAVEARTIFACT,
    STATE(442), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15139] = 3,
    STATE(224), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1410), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15153] = 3,
    STATE(225), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1412), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15167] = 3,
    STATE(234), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1414), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15181] = 3,
    STATE(210), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1416), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15195] = 3,
    STATE(227), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1418), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15209] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1420), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(282), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15227] = 3,
    STATE(116), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1422), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15241] = 3,
    STATE(117), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1424), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15255] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1426), 1,
      anon_sym_END,
    STATE(440), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15275] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1428), 1,
      anon_sym_END,
    STATE(442), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15295] = 3,
    STATE(124), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1430), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15309] = 3,
    STATE(203), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1432), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15323] = 3,
    STATE(126), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1434), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15337] = 3,
    STATE(131), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1436), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15351] = 3,
    STATE(190), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1438), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15365] = 3,
    STATE(191), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1440), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15379] = 3,
    STATE(136), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1442), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15393] = 3,
    STATE(202), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1444), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15407] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(448), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [15425] = 3,
    STATE(206), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1448), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15439] = 3,
    STATE(143), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1450), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15453] = 3,
    STATE(451), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1452), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15467] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1454), 1,
      anon_sym_END,
    STATE(452), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15487] = 3,
    STATE(212), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1456), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15501] = 3,
    STATE(500), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1458), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15515] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1460), 1,
      sym_identifier,
    STATE(483), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1462), 2,
      sym_global,
      sym_required,
  [15533] = 3,
    STATE(221), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1464), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15547] = 3,
    STATE(222), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1466), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15561] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1468), 1,
      anon_sym_END,
    ACTIONS(1470), 1,
      anon_sym_ELSEIF,
    ACTIONS(1473), 1,
      anon_sym_ELSE,
    STATE(471), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15581] = 3,
    STATE(226), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1475), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15595] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1477), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [15609] = 3,
    STATE(504), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1479), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15623] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(451), 1,
      anon_sym_END,
    ACTIONS(453), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(455), 1,
      anon_sym_ASLOCAL,
    ACTIONS(457), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15643] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_END,
    ACTIONS(445), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(447), 1,
      anon_sym_ASLOCAL,
    ACTIONS(449), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15663] = 3,
    STATE(150), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1481), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15677] = 3,
    STATE(376), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1483), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15691] = 3,
    STATE(3), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1485), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15705] = 3,
    STATE(228), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1487), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15719] = 3,
    STATE(310), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1489), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15733] = 3,
    STATE(147), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1491), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15747] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1493), 1,
      sym_identifier,
    STATE(483), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1495), 2,
      sym_global,
      sym_required,
  [15765] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1498), 1,
      sym_identifier,
    STATE(531), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1462), 2,
      sym_global,
      sym_required,
  [15783] = 3,
    STATE(233), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1500), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15797] = 3,
    STATE(81), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1502), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15811] = 3,
    STATE(157), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1504), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15825] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1506), 1,
      anon_sym_END,
    STATE(442), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [15845] = 3,
    STATE(211), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1508), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15859] = 3,
    STATE(465), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1510), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15873] = 3,
    STATE(379), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1512), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15887] = 3,
    STATE(216), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1514), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15901] = 3,
    STATE(192), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1516), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15915] = 3,
    STATE(108), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1518), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15929] = 3,
    STATE(236), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1520), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15943] = 3,
    STATE(138), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1522), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15957] = 3,
    STATE(144), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1524), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15971] = 3,
    STATE(359), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1526), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15985] = 3,
    STATE(230), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1528), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [15999] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1530), 1,
      anon_sym_END,
    STATE(488), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16019] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1532), 1,
      anon_sym_END,
    STATE(442), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16039] = 3,
    STATE(187), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1534), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16053] = 3,
    STATE(383), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1536), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16067] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1401), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1538), 1,
      anon_sym_END,
    STATE(501), 1,
      aux_sym_try_command_repeat1,
    STATE(563), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16087] = 3,
    STATE(393), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1540), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16101] = 3,
    STATE(215), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1542), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16115] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1544), 1,
      sym_identifier,
    STATE(483), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1462), 2,
      sym_global,
      sym_required,
  [16133] = 3,
    STATE(395), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1546), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16147] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1367), 1,
      anon_sym_ELSEIF,
    ACTIONS(1548), 1,
      anon_sym_END,
    ACTIONS(1550), 1,
      anon_sym_ELSE,
    STATE(471), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16167] = 3,
    STATE(396), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1552), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16181] = 3,
    STATE(207), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1554), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16195] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1367), 1,
      anon_sym_ELSEIF,
    ACTIONS(1556), 1,
      anon_sym_END,
    ACTIONS(1558), 1,
      anon_sym_ELSE,
    STATE(509), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16215] = 3,
    STATE(220), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1560), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16229] = 3,
    STATE(28), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1562), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16243] = 3,
    STATE(122), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1564), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16257] = 3,
    STATE(121), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1566), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16271] = 3,
    STATE(197), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1568), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16285] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1570), 1,
      sym_identifier,
    STATE(507), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1462), 2,
      sym_global,
      sym_required,
  [16303] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1572), 1,
      sym_identifier,
    STATE(468), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1462), 2,
      sym_global,
      sym_required,
  [16321] = 3,
    STATE(141), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1574), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16335] = 3,
    STATE(140), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1576), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16349] = 3,
    STATE(90), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1578), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16363] = 3,
    STATE(127), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1580), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16377] = 3,
    STATE(125), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1582), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16391] = 3,
    STATE(123), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1584), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16405] = 3,
    STATE(91), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1586), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16419] = 3,
    STATE(115), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1588), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16433] = 3,
    STATE(204), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1590), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16447] = 3,
    STATE(112), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1592), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16461] = 3,
    STATE(232), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1594), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16475] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1596), 1,
      sym_identifier,
    STATE(483), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1462), 2,
      sym_global,
      sym_required,
  [16493] = 3,
    STATE(194), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1598), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16507] = 3,
    STATE(106), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1600), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16521] = 3,
    STATE(105), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1602), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16535] = 3,
    STATE(104), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1604), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16549] = 3,
    STATE(102), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1606), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16563] = 3,
    STATE(98), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1608), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16577] = 3,
    STATE(100), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1610), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16591] = 3,
    STATE(97), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1612), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16605] = 3,
    STATE(96), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1614), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16619] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1367), 1,
      anon_sym_ELSEIF,
    ACTIONS(1616), 1,
      anon_sym_END,
    ACTIONS(1618), 1,
      anon_sym_ELSE,
    STATE(425), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16639] = 3,
    STATE(94), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1620), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16653] = 3,
    STATE(93), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1622), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16667] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1626), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1624), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [16682] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1084), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1628), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16697] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(407), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16708] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(403), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [16719] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1630), 1,
      sym_version_major_minor,
    ACTIONS(1632), 1,
      sym_feature_flag,
    STATE(548), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16736] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1635), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1637), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [16751] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1639), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1641), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16766] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1643), 1,
      sym_version_major_minor,
    ACTIONS(1645), 1,
      sym_feature_flag,
    STATE(548), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16783] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1649), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1647), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [16798] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1651), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1653), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [16813] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1655), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [16826] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1657), 1,
      sym_version_major_minor,
    ACTIONS(1659), 1,
      sym_feature_flag,
    STATE(551), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16843] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1661), 1,
      anon_sym_PLUS,
    ACTIONS(1663), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16860] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1665), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1667), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16875] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1669), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1671), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [16890] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(999), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(431), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [16905] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1673), 1,
      sym_image_name,
    STATE(603), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16919] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1675), 1,
      sym_image_name,
    STATE(314), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16933] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    STATE(661), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16947] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1677), 2,
      anon_sym_END,
      anon_sym_SAVEARTIFACT,
  [16959] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(703), 1,
      anon_sym_PLUS,
    STATE(559), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16973] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1679), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [16984] = 2,
    ACTIONS(1681), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [16993] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1683), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17004] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1685), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17015] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1687), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17026] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1689), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17037] = 2,
    ACTIONS(1691), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17046] = 2,
    ACTIONS(1693), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17055] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1695), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17066] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1697), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17077] = 2,
    ACTIONS(1699), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17086] = 2,
    ACTIONS(1701), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17095] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1703), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17106] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1705), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17117] = 2,
    ACTIONS(1707), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17126] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1709), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17137] = 2,
    ACTIONS(1711), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17146] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1713), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17157] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1715), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17168] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1717), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17179] = 2,
    ACTIONS(1719), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17188] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1721), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17199] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1723), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17210] = 2,
    ACTIONS(1725), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17219] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1727), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17230] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1729), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17241] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1731), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17252] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1733), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17263] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1735), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17274] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1737), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17285] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1739), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17296] = 2,
    ACTIONS(1741), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17305] = 2,
    ACTIONS(1743), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17314] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1745), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17325] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1747), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17336] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1749), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17347] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1751), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17358] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1753), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17369] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1755), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17380] = 2,
    ACTIONS(1757), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17389] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1759), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17400] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1761), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17411] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1763), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17422] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1765), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17433] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1767), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17444] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1769), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17455] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1771), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17466] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1773), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17477] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1775), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17488] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1777), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17499] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1779), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17510] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1781), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17521] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1783), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17532] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1785), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17543] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1787), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17554] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1789), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17565] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1791), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17576] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1793), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17587] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1795), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17598] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1797), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17609] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1799), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17620] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1801), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17631] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1803), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17642] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17653] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1807), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17664] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1809), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17675] = 2,
    ACTIONS(1811), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17684] = 2,
    ACTIONS(1813), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17693] = 2,
    ACTIONS(1815), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17702] = 2,
    ACTIONS(1817), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17711] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1819), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17722] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1821), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17733] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1823), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17744] = 2,
    ACTIONS(1825), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17753] = 2,
    ACTIONS(1827), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17762] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1829), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17773] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1831), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17784] = 2,
    ACTIONS(1833), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17793] = 2,
    ACTIONS(1835), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17802] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1837), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17813] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1839), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17824] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1841), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17835] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1843), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17846] = 2,
    ACTIONS(1845), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [17855] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1847), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17866] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1849), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17877] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1851), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17888] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1853), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17899] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1855), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17910] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1857), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17921] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1859), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17932] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1861), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17943] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1863), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17954] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1865), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17965] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1867), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17976] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1869), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17987] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1871), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [17998] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1873), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18009] = 2,
    ACTIONS(1875), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18018] = 2,
    ACTIONS(1877), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18027] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1879), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18038] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1881), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18049] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1883), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18060] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1885), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18071] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1887), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18082] = 2,
    ACTIONS(1889), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18091] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1891), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18102] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1893), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18113] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1895), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18124] = 2,
    ACTIONS(1897), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18133] = 2,
    ACTIONS(1899), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18142] = 2,
    ACTIONS(1901), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18151] = 2,
    ACTIONS(1903), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18160] = 2,
    ACTIONS(1905), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18169] = 2,
    ACTIONS(1907), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18178] = 2,
    ACTIONS(1909), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18187] = 2,
    ACTIONS(1911), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18196] = 2,
    ACTIONS(1913), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18205] = 2,
    ACTIONS(1915), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18214] = 2,
    ACTIONS(1917), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18223] = 2,
    ACTIONS(1919), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18232] = 2,
    ACTIONS(1921), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18241] = 2,
    ACTIONS(1923), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18250] = 2,
    ACTIONS(1925), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18259] = 2,
    ACTIONS(1927), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18268] = 2,
    ACTIONS(1929), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18277] = 2,
    ACTIONS(1931), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18286] = 2,
    ACTIONS(1933), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18295] = 2,
    ACTIONS(1935), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18304] = 2,
    ACTIONS(1937), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18313] = 2,
    ACTIONS(1939), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18322] = 2,
    ACTIONS(1941), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18331] = 2,
    ACTIONS(1943), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18340] = 2,
    ACTIONS(1945), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18349] = 2,
    ACTIONS(1947), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18358] = 2,
    ACTIONS(1949), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18367] = 2,
    ACTIONS(1951), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18376] = 2,
    ACTIONS(1953), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18385] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1955), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18396] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1957), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18407] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1959), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18418] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1961), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18429] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1963), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18440] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1965), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18451] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1967), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18462] = 2,
    ACTIONS(1969), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18471] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1971), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18482] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1973), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18493] = 2,
    ACTIONS(1975), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18502] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1977), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18513] = 2,
    ACTIONS(1979), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [18522] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1981), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18533] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1983), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18544] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1985), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18555] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1987), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18566] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1989), 1,
      anon_sym_CLONE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18577] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1991), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18588] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1993), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18599] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1995), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18610] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1997), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18621] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1999), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18632] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2001), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18643] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2003), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18654] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2005), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [18665] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2007), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 536,
  [SMALL_STATE(9)] = 622,
  [SMALL_STATE(10)] = 708,
  [SMALL_STATE(11)] = 794,
  [SMALL_STATE(12)] = 880,
  [SMALL_STATE(13)] = 966,
  [SMALL_STATE(14)] = 1052,
  [SMALL_STATE(15)] = 1138,
  [SMALL_STATE(16)] = 1224,
  [SMALL_STATE(17)] = 1310,
  [SMALL_STATE(18)] = 1396,
  [SMALL_STATE(19)] = 1482,
  [SMALL_STATE(20)] = 1568,
  [SMALL_STATE(21)] = 1654,
  [SMALL_STATE(22)] = 1740,
  [SMALL_STATE(23)] = 1826,
  [SMALL_STATE(24)] = 1912,
  [SMALL_STATE(25)] = 1998,
  [SMALL_STATE(26)] = 2084,
  [SMALL_STATE(27)] = 2170,
  [SMALL_STATE(28)] = 2256,
  [SMALL_STATE(29)] = 2342,
  [SMALL_STATE(30)] = 2428,
  [SMALL_STATE(31)] = 2514,
  [SMALL_STATE(32)] = 2600,
  [SMALL_STATE(33)] = 2686,
  [SMALL_STATE(34)] = 2772,
  [SMALL_STATE(35)] = 2858,
  [SMALL_STATE(36)] = 2944,
  [SMALL_STATE(37)] = 3030,
  [SMALL_STATE(38)] = 3116,
  [SMALL_STATE(39)] = 3202,
  [SMALL_STATE(40)] = 3288,
  [SMALL_STATE(41)] = 3374,
  [SMALL_STATE(42)] = 3420,
  [SMALL_STATE(43)] = 3475,
  [SMALL_STATE(44)] = 3518,
  [SMALL_STATE(45)] = 3570,
  [SMALL_STATE(46)] = 3610,
  [SMALL_STATE(47)] = 3650,
  [SMALL_STATE(48)] = 3703,
  [SMALL_STATE(49)] = 3756,
  [SMALL_STATE(50)] = 3809,
  [SMALL_STATE(51)] = 3859,
  [SMALL_STATE(52)] = 3905,
  [SMALL_STATE(53)] = 3955,
  [SMALL_STATE(54)] = 4005,
  [SMALL_STATE(55)] = 4046,
  [SMALL_STATE(56)] = 4087,
  [SMALL_STATE(57)] = 4128,
  [SMALL_STATE(58)] = 4169,
  [SMALL_STATE(59)] = 4210,
  [SMALL_STATE(60)] = 4250,
  [SMALL_STATE(61)] = 4294,
  [SMALL_STATE(62)] = 4330,
  [SMALL_STATE(63)] = 4366,
  [SMALL_STATE(64)] = 4402,
  [SMALL_STATE(65)] = 4436,
  [SMALL_STATE(66)] = 4476,
  [SMALL_STATE(67)] = 4516,
  [SMALL_STATE(68)] = 4556,
  [SMALL_STATE(69)] = 4592,
  [SMALL_STATE(70)] = 4636,
  [SMALL_STATE(71)] = 4680,
  [SMALL_STATE(72)] = 4715,
  [SMALL_STATE(73)] = 4750,
  [SMALL_STATE(74)] = 4789,
  [SMALL_STATE(75)] = 4828,
  [SMALL_STATE(76)] = 4863,
  [SMALL_STATE(77)] = 4898,
  [SMALL_STATE(78)] = 4935,
  [SMALL_STATE(79)] = 4972,
  [SMALL_STATE(80)] = 5009,
  [SMALL_STATE(81)] = 5043,
  [SMALL_STATE(82)] = 5077,
  [SMALL_STATE(83)] = 5115,
  [SMALL_STATE(84)] = 5153,
  [SMALL_STATE(85)] = 5191,
  [SMALL_STATE(86)] = 5225,
  [SMALL_STATE(87)] = 5259,
  [SMALL_STATE(88)] = 5293,
  [SMALL_STATE(89)] = 5327,
  [SMALL_STATE(90)] = 5361,
  [SMALL_STATE(91)] = 5395,
  [SMALL_STATE(92)] = 5429,
  [SMALL_STATE(93)] = 5463,
  [SMALL_STATE(94)] = 5497,
  [SMALL_STATE(95)] = 5531,
  [SMALL_STATE(96)] = 5565,
  [SMALL_STATE(97)] = 5599,
  [SMALL_STATE(98)] = 5633,
  [SMALL_STATE(99)] = 5667,
  [SMALL_STATE(100)] = 5701,
  [SMALL_STATE(101)] = 5735,
  [SMALL_STATE(102)] = 5769,
  [SMALL_STATE(103)] = 5803,
  [SMALL_STATE(104)] = 5841,
  [SMALL_STATE(105)] = 5875,
  [SMALL_STATE(106)] = 5909,
  [SMALL_STATE(107)] = 5943,
  [SMALL_STATE(108)] = 5977,
  [SMALL_STATE(109)] = 6011,
  [SMALL_STATE(110)] = 6045,
  [SMALL_STATE(111)] = 6079,
  [SMALL_STATE(112)] = 6113,
  [SMALL_STATE(113)] = 6147,
  [SMALL_STATE(114)] = 6185,
  [SMALL_STATE(115)] = 6219,
  [SMALL_STATE(116)] = 6253,
  [SMALL_STATE(117)] = 6287,
  [SMALL_STATE(118)] = 6321,
  [SMALL_STATE(119)] = 6359,
  [SMALL_STATE(120)] = 6397,
  [SMALL_STATE(121)] = 6435,
  [SMALL_STATE(122)] = 6469,
  [SMALL_STATE(123)] = 6503,
  [SMALL_STATE(124)] = 6537,
  [SMALL_STATE(125)] = 6571,
  [SMALL_STATE(126)] = 6605,
  [SMALL_STATE(127)] = 6639,
  [SMALL_STATE(128)] = 6673,
  [SMALL_STATE(129)] = 6707,
  [SMALL_STATE(130)] = 6745,
  [SMALL_STATE(131)] = 6779,
  [SMALL_STATE(132)] = 6813,
  [SMALL_STATE(133)] = 6847,
  [SMALL_STATE(134)] = 6881,
  [SMALL_STATE(135)] = 6919,
  [SMALL_STATE(136)] = 6953,
  [SMALL_STATE(137)] = 6987,
  [SMALL_STATE(138)] = 7021,
  [SMALL_STATE(139)] = 7055,
  [SMALL_STATE(140)] = 7093,
  [SMALL_STATE(141)] = 7127,
  [SMALL_STATE(142)] = 7161,
  [SMALL_STATE(143)] = 7199,
  [SMALL_STATE(144)] = 7233,
  [SMALL_STATE(145)] = 7267,
  [SMALL_STATE(146)] = 7301,
  [SMALL_STATE(147)] = 7335,
  [SMALL_STATE(148)] = 7369,
  [SMALL_STATE(149)] = 7403,
  [SMALL_STATE(150)] = 7437,
  [SMALL_STATE(151)] = 7471,
  [SMALL_STATE(152)] = 7509,
  [SMALL_STATE(153)] = 7543,
  [SMALL_STATE(154)] = 7577,
  [SMALL_STATE(155)] = 7615,
  [SMALL_STATE(156)] = 7653,
  [SMALL_STATE(157)] = 7691,
  [SMALL_STATE(158)] = 7725,
  [SMALL_STATE(159)] = 7763,
  [SMALL_STATE(160)] = 7800,
  [SMALL_STATE(161)] = 7837,
  [SMALL_STATE(162)] = 7872,
  [SMALL_STATE(163)] = 7909,
  [SMALL_STATE(164)] = 7946,
  [SMALL_STATE(165)] = 7999,
  [SMALL_STATE(166)] = 8036,
  [SMALL_STATE(167)] = 8089,
  [SMALL_STATE(168)] = 8142,
  [SMALL_STATE(169)] = 8179,
  [SMALL_STATE(170)] = 8214,
  [SMALL_STATE(171)] = 8249,
  [SMALL_STATE(172)] = 8282,
  [SMALL_STATE(173)] = 8319,
  [SMALL_STATE(174)] = 8372,
  [SMALL_STATE(175)] = 8404,
  [SMALL_STATE(176)] = 8438,
  [SMALL_STATE(177)] = 8470,
  [SMALL_STATE(178)] = 8502,
  [SMALL_STATE(179)] = 8534,
  [SMALL_STATE(180)] = 8566,
  [SMALL_STATE(181)] = 8598,
  [SMALL_STATE(182)] = 8630,
  [SMALL_STATE(183)] = 8664,
  [SMALL_STATE(184)] = 8696,
  [SMALL_STATE(185)] = 8728,
  [SMALL_STATE(186)] = 8760,
  [SMALL_STATE(187)] = 8794,
  [SMALL_STATE(188)] = 8825,
  [SMALL_STATE(189)] = 8856,
  [SMALL_STATE(190)] = 8887,
  [SMALL_STATE(191)] = 8918,
  [SMALL_STATE(192)] = 8949,
  [SMALL_STATE(193)] = 8980,
  [SMALL_STATE(194)] = 9011,
  [SMALL_STATE(195)] = 9042,
  [SMALL_STATE(196)] = 9073,
  [SMALL_STATE(197)] = 9104,
  [SMALL_STATE(198)] = 9135,
  [SMALL_STATE(199)] = 9166,
  [SMALL_STATE(200)] = 9197,
  [SMALL_STATE(201)] = 9228,
  [SMALL_STATE(202)] = 9259,
  [SMALL_STATE(203)] = 9290,
  [SMALL_STATE(204)] = 9321,
  [SMALL_STATE(205)] = 9352,
  [SMALL_STATE(206)] = 9383,
  [SMALL_STATE(207)] = 9414,
  [SMALL_STATE(208)] = 9445,
  [SMALL_STATE(209)] = 9476,
  [SMALL_STATE(210)] = 9507,
  [SMALL_STATE(211)] = 9538,
  [SMALL_STATE(212)] = 9569,
  [SMALL_STATE(213)] = 9600,
  [SMALL_STATE(214)] = 9631,
  [SMALL_STATE(215)] = 9662,
  [SMALL_STATE(216)] = 9693,
  [SMALL_STATE(217)] = 9724,
  [SMALL_STATE(218)] = 9755,
  [SMALL_STATE(219)] = 9786,
  [SMALL_STATE(220)] = 9817,
  [SMALL_STATE(221)] = 9848,
  [SMALL_STATE(222)] = 9879,
  [SMALL_STATE(223)] = 9910,
  [SMALL_STATE(224)] = 9941,
  [SMALL_STATE(225)] = 9972,
  [SMALL_STATE(226)] = 10003,
  [SMALL_STATE(227)] = 10034,
  [SMALL_STATE(228)] = 10065,
  [SMALL_STATE(229)] = 10096,
  [SMALL_STATE(230)] = 10127,
  [SMALL_STATE(231)] = 10158,
  [SMALL_STATE(232)] = 10189,
  [SMALL_STATE(233)] = 10220,
  [SMALL_STATE(234)] = 10251,
  [SMALL_STATE(235)] = 10282,
  [SMALL_STATE(236)] = 10313,
  [SMALL_STATE(237)] = 10344,
  [SMALL_STATE(238)] = 10389,
  [SMALL_STATE(239)] = 10434,
  [SMALL_STATE(240)] = 10479,
  [SMALL_STATE(241)] = 10520,
  [SMALL_STATE(242)] = 10565,
  [SMALL_STATE(243)] = 10602,
  [SMALL_STATE(244)] = 10644,
  [SMALL_STATE(245)] = 10686,
  [SMALL_STATE(246)] = 10728,
  [SMALL_STATE(247)] = 10770,
  [SMALL_STATE(248)] = 10795,
  [SMALL_STATE(249)] = 10820,
  [SMALL_STATE(250)] = 10857,
  [SMALL_STATE(251)] = 10882,
  [SMALL_STATE(252)] = 10919,
  [SMALL_STATE(253)] = 10958,
  [SMALL_STATE(254)] = 10983,
  [SMALL_STATE(255)] = 11008,
  [SMALL_STATE(256)] = 11033,
  [SMALL_STATE(257)] = 11070,
  [SMALL_STATE(258)] = 11094,
  [SMALL_STATE(259)] = 11126,
  [SMALL_STATE(260)] = 11150,
  [SMALL_STATE(261)] = 11182,
  [SMALL_STATE(262)] = 11214,
  [SMALL_STATE(263)] = 11246,
  [SMALL_STATE(264)] = 11270,
  [SMALL_STATE(265)] = 11302,
  [SMALL_STATE(266)] = 11334,
  [SMALL_STATE(267)] = 11366,
  [SMALL_STATE(268)] = 11400,
  [SMALL_STATE(269)] = 11432,
  [SMALL_STATE(270)] = 11456,
  [SMALL_STATE(271)] = 11480,
  [SMALL_STATE(272)] = 11514,
  [SMALL_STATE(273)] = 11543,
  [SMALL_STATE(274)] = 11576,
  [SMALL_STATE(275)] = 11609,
  [SMALL_STATE(276)] = 11642,
  [SMALL_STATE(277)] = 11677,
  [SMALL_STATE(278)] = 11710,
  [SMALL_STATE(279)] = 11743,
  [SMALL_STATE(280)] = 11775,
  [SMALL_STATE(281)] = 11807,
  [SMALL_STATE(282)] = 11839,
  [SMALL_STATE(283)] = 11865,
  [SMALL_STATE(284)] = 11897,
  [SMALL_STATE(285)] = 11929,
  [SMALL_STATE(286)] = 11961,
  [SMALL_STATE(287)] = 11993,
  [SMALL_STATE(288)] = 12024,
  [SMALL_STATE(289)] = 12049,
  [SMALL_STATE(290)] = 12074,
  [SMALL_STATE(291)] = 12099,
  [SMALL_STATE(292)] = 12130,
  [SMALL_STATE(293)] = 12155,
  [SMALL_STATE(294)] = 12186,
  [SMALL_STATE(295)] = 12211,
  [SMALL_STATE(296)] = 12242,
  [SMALL_STATE(297)] = 12263,
  [SMALL_STATE(298)] = 12292,
  [SMALL_STATE(299)] = 12321,
  [SMALL_STATE(300)] = 12352,
  [SMALL_STATE(301)] = 12372,
  [SMALL_STATE(302)] = 12392,
  [SMALL_STATE(303)] = 12414,
  [SMALL_STATE(304)] = 12434,
  [SMALL_STATE(305)] = 12454,
  [SMALL_STATE(306)] = 12479,
  [SMALL_STATE(307)] = 12500,
  [SMALL_STATE(308)] = 12527,
  [SMALL_STATE(309)] = 12544,
  [SMALL_STATE(310)] = 12569,
  [SMALL_STATE(311)] = 12590,
  [SMALL_STATE(312)] = 12611,
  [SMALL_STATE(313)] = 12628,
  [SMALL_STATE(314)] = 12645,
  [SMALL_STATE(315)] = 12662,
  [SMALL_STATE(316)] = 12679,
  [SMALL_STATE(317)] = 12694,
  [SMALL_STATE(318)] = 12709,
  [SMALL_STATE(319)] = 12734,
  [SMALL_STATE(320)] = 12753,
  [SMALL_STATE(321)] = 12780,
  [SMALL_STATE(322)] = 12807,
  [SMALL_STATE(323)] = 12824,
  [SMALL_STATE(324)] = 12841,
  [SMALL_STATE(325)] = 12858,
  [SMALL_STATE(326)] = 12873,
  [SMALL_STATE(327)] = 12892,
  [SMALL_STATE(328)] = 12913,
  [SMALL_STATE(329)] = 12932,
  [SMALL_STATE(330)] = 12953,
  [SMALL_STATE(331)] = 12974,
  [SMALL_STATE(332)] = 12995,
  [SMALL_STATE(333)] = 13016,
  [SMALL_STATE(334)] = 13033,
  [SMALL_STATE(335)] = 13054,
  [SMALL_STATE(336)] = 13075,
  [SMALL_STATE(337)] = 13094,
  [SMALL_STATE(338)] = 13121,
  [SMALL_STATE(339)] = 13146,
  [SMALL_STATE(340)] = 13163,
  [SMALL_STATE(341)] = 13190,
  [SMALL_STATE(342)] = 13207,
  [SMALL_STATE(343)] = 13224,
  [SMALL_STATE(344)] = 13241,
  [SMALL_STATE(345)] = 13260,
  [SMALL_STATE(346)] = 13279,
  [SMALL_STATE(347)] = 13300,
  [SMALL_STATE(348)] = 13319,
  [SMALL_STATE(349)] = 13346,
  [SMALL_STATE(350)] = 13365,
  [SMALL_STATE(351)] = 13392,
  [SMALL_STATE(352)] = 13409,
  [SMALL_STATE(353)] = 13426,
  [SMALL_STATE(354)] = 13443,
  [SMALL_STATE(355)] = 13464,
  [SMALL_STATE(356)] = 13491,
  [SMALL_STATE(357)] = 13516,
  [SMALL_STATE(358)] = 13541,
  [SMALL_STATE(359)] = 13563,
  [SMALL_STATE(360)] = 13581,
  [SMALL_STATE(361)] = 13603,
  [SMALL_STATE(362)] = 13625,
  [SMALL_STATE(363)] = 13643,
  [SMALL_STATE(364)] = 13665,
  [SMALL_STATE(365)] = 13687,
  [SMALL_STATE(366)] = 13709,
  [SMALL_STATE(367)] = 13727,
  [SMALL_STATE(368)] = 13749,
  [SMALL_STATE(369)] = 13767,
  [SMALL_STATE(370)] = 13789,
  [SMALL_STATE(371)] = 13811,
  [SMALL_STATE(372)] = 13833,
  [SMALL_STATE(373)] = 13855,
  [SMALL_STATE(374)] = 13877,
  [SMALL_STATE(375)] = 13893,
  [SMALL_STATE(376)] = 13917,
  [SMALL_STATE(377)] = 13935,
  [SMALL_STATE(378)] = 13953,
  [SMALL_STATE(379)] = 13975,
  [SMALL_STATE(380)] = 13993,
  [SMALL_STATE(381)] = 14011,
  [SMALL_STATE(382)] = 14033,
  [SMALL_STATE(383)] = 14055,
  [SMALL_STATE(384)] = 14073,
  [SMALL_STATE(385)] = 14095,
  [SMALL_STATE(386)] = 14117,
  [SMALL_STATE(387)] = 14139,
  [SMALL_STATE(388)] = 14161,
  [SMALL_STATE(389)] = 14183,
  [SMALL_STATE(390)] = 14205,
  [SMALL_STATE(391)] = 14227,
  [SMALL_STATE(392)] = 14249,
  [SMALL_STATE(393)] = 14271,
  [SMALL_STATE(394)] = 14289,
  [SMALL_STATE(395)] = 14307,
  [SMALL_STATE(396)] = 14325,
  [SMALL_STATE(397)] = 14343,
  [SMALL_STATE(398)] = 14366,
  [SMALL_STATE(399)] = 14383,
  [SMALL_STATE(400)] = 14400,
  [SMALL_STATE(401)] = 14421,
  [SMALL_STATE(402)] = 14438,
  [SMALL_STATE(403)] = 14455,
  [SMALL_STATE(404)] = 14476,
  [SMALL_STATE(405)] = 14493,
  [SMALL_STATE(406)] = 14510,
  [SMALL_STATE(407)] = 14533,
  [SMALL_STATE(408)] = 14554,
  [SMALL_STATE(409)] = 14571,
  [SMALL_STATE(410)] = 14588,
  [SMALL_STATE(411)] = 14605,
  [SMALL_STATE(412)] = 14622,
  [SMALL_STATE(413)] = 14639,
  [SMALL_STATE(414)] = 14662,
  [SMALL_STATE(415)] = 14679,
  [SMALL_STATE(416)] = 14696,
  [SMALL_STATE(417)] = 14713,
  [SMALL_STATE(418)] = 14734,
  [SMALL_STATE(419)] = 14751,
  [SMALL_STATE(420)] = 14768,
  [SMALL_STATE(421)] = 14785,
  [SMALL_STATE(422)] = 14808,
  [SMALL_STATE(423)] = 14825,
  [SMALL_STATE(424)] = 14842,
  [SMALL_STATE(425)] = 14865,
  [SMALL_STATE(426)] = 14885,
  [SMALL_STATE(427)] = 14899,
  [SMALL_STATE(428)] = 14913,
  [SMALL_STATE(429)] = 14927,
  [SMALL_STATE(430)] = 14941,
  [SMALL_STATE(431)] = 14955,
  [SMALL_STATE(432)] = 14973,
  [SMALL_STATE(433)] = 14987,
  [SMALL_STATE(434)] = 15001,
  [SMALL_STATE(435)] = 15015,
  [SMALL_STATE(436)] = 15029,
  [SMALL_STATE(437)] = 15043,
  [SMALL_STATE(438)] = 15057,
  [SMALL_STATE(439)] = 15071,
  [SMALL_STATE(440)] = 15085,
  [SMALL_STATE(441)] = 15105,
  [SMALL_STATE(442)] = 15119,
  [SMALL_STATE(443)] = 15139,
  [SMALL_STATE(444)] = 15153,
  [SMALL_STATE(445)] = 15167,
  [SMALL_STATE(446)] = 15181,
  [SMALL_STATE(447)] = 15195,
  [SMALL_STATE(448)] = 15209,
  [SMALL_STATE(449)] = 15227,
  [SMALL_STATE(450)] = 15241,
  [SMALL_STATE(451)] = 15255,
  [SMALL_STATE(452)] = 15275,
  [SMALL_STATE(453)] = 15295,
  [SMALL_STATE(454)] = 15309,
  [SMALL_STATE(455)] = 15323,
  [SMALL_STATE(456)] = 15337,
  [SMALL_STATE(457)] = 15351,
  [SMALL_STATE(458)] = 15365,
  [SMALL_STATE(459)] = 15379,
  [SMALL_STATE(460)] = 15393,
  [SMALL_STATE(461)] = 15407,
  [SMALL_STATE(462)] = 15425,
  [SMALL_STATE(463)] = 15439,
  [SMALL_STATE(464)] = 15453,
  [SMALL_STATE(465)] = 15467,
  [SMALL_STATE(466)] = 15487,
  [SMALL_STATE(467)] = 15501,
  [SMALL_STATE(468)] = 15515,
  [SMALL_STATE(469)] = 15533,
  [SMALL_STATE(470)] = 15547,
  [SMALL_STATE(471)] = 15561,
  [SMALL_STATE(472)] = 15581,
  [SMALL_STATE(473)] = 15595,
  [SMALL_STATE(474)] = 15609,
  [SMALL_STATE(475)] = 15623,
  [SMALL_STATE(476)] = 15643,
  [SMALL_STATE(477)] = 15663,
  [SMALL_STATE(478)] = 15677,
  [SMALL_STATE(479)] = 15691,
  [SMALL_STATE(480)] = 15705,
  [SMALL_STATE(481)] = 15719,
  [SMALL_STATE(482)] = 15733,
  [SMALL_STATE(483)] = 15747,
  [SMALL_STATE(484)] = 15765,
  [SMALL_STATE(485)] = 15783,
  [SMALL_STATE(486)] = 15797,
  [SMALL_STATE(487)] = 15811,
  [SMALL_STATE(488)] = 15825,
  [SMALL_STATE(489)] = 15845,
  [SMALL_STATE(490)] = 15859,
  [SMALL_STATE(491)] = 15873,
  [SMALL_STATE(492)] = 15887,
  [SMALL_STATE(493)] = 15901,
  [SMALL_STATE(494)] = 15915,
  [SMALL_STATE(495)] = 15929,
  [SMALL_STATE(496)] = 15943,
  [SMALL_STATE(497)] = 15957,
  [SMALL_STATE(498)] = 15971,
  [SMALL_STATE(499)] = 15985,
  [SMALL_STATE(500)] = 15999,
  [SMALL_STATE(501)] = 16019,
  [SMALL_STATE(502)] = 16039,
  [SMALL_STATE(503)] = 16053,
  [SMALL_STATE(504)] = 16067,
  [SMALL_STATE(505)] = 16087,
  [SMALL_STATE(506)] = 16101,
  [SMALL_STATE(507)] = 16115,
  [SMALL_STATE(508)] = 16133,
  [SMALL_STATE(509)] = 16147,
  [SMALL_STATE(510)] = 16167,
  [SMALL_STATE(511)] = 16181,
  [SMALL_STATE(512)] = 16195,
  [SMALL_STATE(513)] = 16215,
  [SMALL_STATE(514)] = 16229,
  [SMALL_STATE(515)] = 16243,
  [SMALL_STATE(516)] = 16257,
  [SMALL_STATE(517)] = 16271,
  [SMALL_STATE(518)] = 16285,
  [SMALL_STATE(519)] = 16303,
  [SMALL_STATE(520)] = 16321,
  [SMALL_STATE(521)] = 16335,
  [SMALL_STATE(522)] = 16349,
  [SMALL_STATE(523)] = 16363,
  [SMALL_STATE(524)] = 16377,
  [SMALL_STATE(525)] = 16391,
  [SMALL_STATE(526)] = 16405,
  [SMALL_STATE(527)] = 16419,
  [SMALL_STATE(528)] = 16433,
  [SMALL_STATE(529)] = 16447,
  [SMALL_STATE(530)] = 16461,
  [SMALL_STATE(531)] = 16475,
  [SMALL_STATE(532)] = 16493,
  [SMALL_STATE(533)] = 16507,
  [SMALL_STATE(534)] = 16521,
  [SMALL_STATE(535)] = 16535,
  [SMALL_STATE(536)] = 16549,
  [SMALL_STATE(537)] = 16563,
  [SMALL_STATE(538)] = 16577,
  [SMALL_STATE(539)] = 16591,
  [SMALL_STATE(540)] = 16605,
  [SMALL_STATE(541)] = 16619,
  [SMALL_STATE(542)] = 16639,
  [SMALL_STATE(543)] = 16653,
  [SMALL_STATE(544)] = 16667,
  [SMALL_STATE(545)] = 16682,
  [SMALL_STATE(546)] = 16697,
  [SMALL_STATE(547)] = 16708,
  [SMALL_STATE(548)] = 16719,
  [SMALL_STATE(549)] = 16736,
  [SMALL_STATE(550)] = 16751,
  [SMALL_STATE(551)] = 16766,
  [SMALL_STATE(552)] = 16783,
  [SMALL_STATE(553)] = 16798,
  [SMALL_STATE(554)] = 16813,
  [SMALL_STATE(555)] = 16826,
  [SMALL_STATE(556)] = 16843,
  [SMALL_STATE(557)] = 16860,
  [SMALL_STATE(558)] = 16875,
  [SMALL_STATE(559)] = 16890,
  [SMALL_STATE(560)] = 16905,
  [SMALL_STATE(561)] = 16919,
  [SMALL_STATE(562)] = 16933,
  [SMALL_STATE(563)] = 16947,
  [SMALL_STATE(564)] = 16959,
  [SMALL_STATE(565)] = 16973,
  [SMALL_STATE(566)] = 16984,
  [SMALL_STATE(567)] = 16993,
  [SMALL_STATE(568)] = 17004,
  [SMALL_STATE(569)] = 17015,
  [SMALL_STATE(570)] = 17026,
  [SMALL_STATE(571)] = 17037,
  [SMALL_STATE(572)] = 17046,
  [SMALL_STATE(573)] = 17055,
  [SMALL_STATE(574)] = 17066,
  [SMALL_STATE(575)] = 17077,
  [SMALL_STATE(576)] = 17086,
  [SMALL_STATE(577)] = 17095,
  [SMALL_STATE(578)] = 17106,
  [SMALL_STATE(579)] = 17117,
  [SMALL_STATE(580)] = 17126,
  [SMALL_STATE(581)] = 17137,
  [SMALL_STATE(582)] = 17146,
  [SMALL_STATE(583)] = 17157,
  [SMALL_STATE(584)] = 17168,
  [SMALL_STATE(585)] = 17179,
  [SMALL_STATE(586)] = 17188,
  [SMALL_STATE(587)] = 17199,
  [SMALL_STATE(588)] = 17210,
  [SMALL_STATE(589)] = 17219,
  [SMALL_STATE(590)] = 17230,
  [SMALL_STATE(591)] = 17241,
  [SMALL_STATE(592)] = 17252,
  [SMALL_STATE(593)] = 17263,
  [SMALL_STATE(594)] = 17274,
  [SMALL_STATE(595)] = 17285,
  [SMALL_STATE(596)] = 17296,
  [SMALL_STATE(597)] = 17305,
  [SMALL_STATE(598)] = 17314,
  [SMALL_STATE(599)] = 17325,
  [SMALL_STATE(600)] = 17336,
  [SMALL_STATE(601)] = 17347,
  [SMALL_STATE(602)] = 17358,
  [SMALL_STATE(603)] = 17369,
  [SMALL_STATE(604)] = 17380,
  [SMALL_STATE(605)] = 17389,
  [SMALL_STATE(606)] = 17400,
  [SMALL_STATE(607)] = 17411,
  [SMALL_STATE(608)] = 17422,
  [SMALL_STATE(609)] = 17433,
  [SMALL_STATE(610)] = 17444,
  [SMALL_STATE(611)] = 17455,
  [SMALL_STATE(612)] = 17466,
  [SMALL_STATE(613)] = 17477,
  [SMALL_STATE(614)] = 17488,
  [SMALL_STATE(615)] = 17499,
  [SMALL_STATE(616)] = 17510,
  [SMALL_STATE(617)] = 17521,
  [SMALL_STATE(618)] = 17532,
  [SMALL_STATE(619)] = 17543,
  [SMALL_STATE(620)] = 17554,
  [SMALL_STATE(621)] = 17565,
  [SMALL_STATE(622)] = 17576,
  [SMALL_STATE(623)] = 17587,
  [SMALL_STATE(624)] = 17598,
  [SMALL_STATE(625)] = 17609,
  [SMALL_STATE(626)] = 17620,
  [SMALL_STATE(627)] = 17631,
  [SMALL_STATE(628)] = 17642,
  [SMALL_STATE(629)] = 17653,
  [SMALL_STATE(630)] = 17664,
  [SMALL_STATE(631)] = 17675,
  [SMALL_STATE(632)] = 17684,
  [SMALL_STATE(633)] = 17693,
  [SMALL_STATE(634)] = 17702,
  [SMALL_STATE(635)] = 17711,
  [SMALL_STATE(636)] = 17722,
  [SMALL_STATE(637)] = 17733,
  [SMALL_STATE(638)] = 17744,
  [SMALL_STATE(639)] = 17753,
  [SMALL_STATE(640)] = 17762,
  [SMALL_STATE(641)] = 17773,
  [SMALL_STATE(642)] = 17784,
  [SMALL_STATE(643)] = 17793,
  [SMALL_STATE(644)] = 17802,
  [SMALL_STATE(645)] = 17813,
  [SMALL_STATE(646)] = 17824,
  [SMALL_STATE(647)] = 17835,
  [SMALL_STATE(648)] = 17846,
  [SMALL_STATE(649)] = 17855,
  [SMALL_STATE(650)] = 17866,
  [SMALL_STATE(651)] = 17877,
  [SMALL_STATE(652)] = 17888,
  [SMALL_STATE(653)] = 17899,
  [SMALL_STATE(654)] = 17910,
  [SMALL_STATE(655)] = 17921,
  [SMALL_STATE(656)] = 17932,
  [SMALL_STATE(657)] = 17943,
  [SMALL_STATE(658)] = 17954,
  [SMALL_STATE(659)] = 17965,
  [SMALL_STATE(660)] = 17976,
  [SMALL_STATE(661)] = 17987,
  [SMALL_STATE(662)] = 17998,
  [SMALL_STATE(663)] = 18009,
  [SMALL_STATE(664)] = 18018,
  [SMALL_STATE(665)] = 18027,
  [SMALL_STATE(666)] = 18038,
  [SMALL_STATE(667)] = 18049,
  [SMALL_STATE(668)] = 18060,
  [SMALL_STATE(669)] = 18071,
  [SMALL_STATE(670)] = 18082,
  [SMALL_STATE(671)] = 18091,
  [SMALL_STATE(672)] = 18102,
  [SMALL_STATE(673)] = 18113,
  [SMALL_STATE(674)] = 18124,
  [SMALL_STATE(675)] = 18133,
  [SMALL_STATE(676)] = 18142,
  [SMALL_STATE(677)] = 18151,
  [SMALL_STATE(678)] = 18160,
  [SMALL_STATE(679)] = 18169,
  [SMALL_STATE(680)] = 18178,
  [SMALL_STATE(681)] = 18187,
  [SMALL_STATE(682)] = 18196,
  [SMALL_STATE(683)] = 18205,
  [SMALL_STATE(684)] = 18214,
  [SMALL_STATE(685)] = 18223,
  [SMALL_STATE(686)] = 18232,
  [SMALL_STATE(687)] = 18241,
  [SMALL_STATE(688)] = 18250,
  [SMALL_STATE(689)] = 18259,
  [SMALL_STATE(690)] = 18268,
  [SMALL_STATE(691)] = 18277,
  [SMALL_STATE(692)] = 18286,
  [SMALL_STATE(693)] = 18295,
  [SMALL_STATE(694)] = 18304,
  [SMALL_STATE(695)] = 18313,
  [SMALL_STATE(696)] = 18322,
  [SMALL_STATE(697)] = 18331,
  [SMALL_STATE(698)] = 18340,
  [SMALL_STATE(699)] = 18349,
  [SMALL_STATE(700)] = 18358,
  [SMALL_STATE(701)] = 18367,
  [SMALL_STATE(702)] = 18376,
  [SMALL_STATE(703)] = 18385,
  [SMALL_STATE(704)] = 18396,
  [SMALL_STATE(705)] = 18407,
  [SMALL_STATE(706)] = 18418,
  [SMALL_STATE(707)] = 18429,
  [SMALL_STATE(708)] = 18440,
  [SMALL_STATE(709)] = 18451,
  [SMALL_STATE(710)] = 18462,
  [SMALL_STATE(711)] = 18471,
  [SMALL_STATE(712)] = 18482,
  [SMALL_STATE(713)] = 18493,
  [SMALL_STATE(714)] = 18502,
  [SMALL_STATE(715)] = 18513,
  [SMALL_STATE(716)] = 18522,
  [SMALL_STATE(717)] = 18533,
  [SMALL_STATE(718)] = 18544,
  [SMALL_STATE(719)] = 18555,
  [SMALL_STATE(720)] = 18566,
  [SMALL_STATE(721)] = 18577,
  [SMALL_STATE(722)] = 18588,
  [SMALL_STATE(723)] = 18599,
  [SMALL_STATE(724)] = 18610,
  [SMALL_STATE(725)] = 18621,
  [SMALL_STATE(726)] = 18632,
  [SMALL_STATE(727)] = 18643,
  [SMALL_STATE(728)] = 18654,
  [SMALL_STATE(729)] = 18665,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 25),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 25),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 37),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(484),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(251),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(295),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(166),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(273),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_block, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(280),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(520),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(720),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(281),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_block, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(721),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(521),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(239),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(331),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(42),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(722),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(428),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(11),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(243),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(334),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(354),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(518),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(256),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(293),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(173),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(275),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(283),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(511),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(646),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(285),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(644),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(513),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(241),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(327),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(49),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(640),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(514),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(30),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_block, 2), SHIFT_REPEAT(245),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 8),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 17),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 9),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(680),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(68),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(580),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(65),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(677),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(86),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 10),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(566),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(135),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(715),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(132),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 28),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 20),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 18),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 41),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 27),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 48),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 6, .production_id = 51),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(120),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 46),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 18),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 45),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 44),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 42),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 16),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 15),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 40),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 39),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 38),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 33),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 32),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 59),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 8, .production_id = 60),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 59),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 30),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 4, .production_id = 29),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 7),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 56),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(113),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 13),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 12),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 26),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7, .production_id = 58),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 24),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 57),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 3, .production_id = 22),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 7),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 56),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 21),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 5),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(103),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locally_command, 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locally_command, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_command, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_command, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 18),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 53),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 52),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 6),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 6),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 3),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(641),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(255),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(639),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(588),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(713),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(263),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(642),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(643),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 10),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 10),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 10),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(352),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(596),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(648),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(674),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(631),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(638),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 10),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 10),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 10),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 10),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 10),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 10),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [892] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(519),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(729),
  [901] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(555),
  [904] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(726),
  [907] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(325),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(681),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43), SHIFT_REPEAT(682),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 43),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(585),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(339),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(581),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(579),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(703),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(575),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(572),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(571),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(632),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4),
  [1013] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(585),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(374),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 4), SHIFT_REPEAT(581),
  [1022] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(604),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(576),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(416),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(597),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 2),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 3, .production_id = 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 55),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 10),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 10),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 10),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 10),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 31),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 61),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(368),
  [1107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(336),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(545),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(716),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 23), SHIFT_REPEAT(562),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4),
  [1219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(473),
  [1222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(713),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 6),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 11),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 2),
  [1237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 6, .production_id = 2),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 14),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 2),
  [1291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 5, .production_id = 2),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 10),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 50),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4),
  [1331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(670),
  [1334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(549),
  [1337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 10),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sharing, 3),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing, 3),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54),
  [1407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 54), SHIFT_REPEAT(329),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36), SHIFT_REPEAT(276),
  [1473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 36),
  [1475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4),
  [1495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(554),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 34),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 19),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [1632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(548),
  [1635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [1639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 35),
  [1651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 10),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [1669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 1, .production_id = 49),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [1877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [1917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [1935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [1943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [1947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [1951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [1953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1997] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
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
