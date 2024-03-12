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
#define STATE_COUNT 973
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 0
#define TOKEN_COUNT 102
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 64

enum ts_symbol_identifiers {
  anon_sym_PROJECT = 1,
  anon_sym_SLASH = 2,
  anon_sym_COLON = 3,
  anon_sym_VERSION = 4,
  anon_sym_ARG = 5,
  anon_sym_EQ = 6,
  anon_sym_BUILD = 7,
  anon_sym_CACHE = 8,
  anon_sym_COPY = 9,
  anon_sym_DO = 10,
  anon_sym_FOR = 11,
  anon_sym_IN = 12,
  anon_sym_END = 13,
  anon_sym_FROM = 14,
  anon_sym_FROMDOCKERFILE = 15,
  anon_sym_FUNCTION = 16,
  anon_sym_GITCLONE = 17,
  anon_sym_IF = 18,
  anon_sym_ELSEIF = 19,
  anon_sym_ELSE = 20,
  anon_sym_IMPORT = 21,
  anon_sym_AS = 22,
  anon_sym_LET = 23,
  anon_sym_LOCALLY = 24,
  anon_sym_RUN = 25,
  anon_sym_DASH_DASH = 26,
  anon_sym_SAVEARTIFACT = 27,
  anon_sym_ASLOCAL = 28,
  anon_sym_SAVEIMAGE = 29,
  anon_sym_SET = 30,
  anon_sym_TRY = 31,
  anon_sym_FINALLY = 32,
  anon_sym_WAIT = 33,
  anon_sym_WITHDOCKER = 34,
  sym_expr = 35,
  anon_sym_PLUS = 36,
  sym_identifier = 37,
  anon_sym_COLON2 = 38,
  anon_sym_AT = 39,
  sym_image_name = 40,
  sym_image_tag = 41,
  sym_image_digest = 42,
  sym_immediate_identifier = 43,
  sym_path = 44,
  aux_sym_shell_fragment_token1 = 45,
  aux_sym_shell_fragment_token2 = 46,
  aux_sym_shell_fragment_token3 = 47,
  anon_sym_LPAREN = 48,
  anon_sym_RPAREN = 49,
  sym_version_major_minor = 50,
  sym_allow_privileged = 51,
  anon_sym_DASH_DASHbranch = 52,
  aux_sym_branch_token1 = 53,
  anon_sym_DASH_DASH2 = 54,
  anon_sym_DASH_DASHcache_DASHfrom = 55,
  sym_cache_hint = 56,
  anon_sym_DASH_DASHchmod = 57,
  anon_sym_DASH_DASHchown = 58,
  anon_sym_DASH_DASHcompose = 59,
  sym_dir = 60,
  anon_sym_DASH_DASHbuild_DASHarg = 61,
  anon_sym_DASHf = 62,
  anon_sym_DASH_DASHtarget = 63,
  sym_entrypoint = 64,
  sym_feature_flag = 65,
  sym_force = 66,
  sym_global = 67,
  anon_sym_DASH_DASHid = 68,
  sym_if_exists = 69,
  sym_keep_own = 70,
  sym_keep_ts = 71,
  anon_sym_DASH_DASHload = 72,
  anon_sym_DASH_DASHmount = 73,
  sym_network_none = 74,
  sym_no_cache = 75,
  sym_pass_args = 76,
  sym_persist = 77,
  anon_sym_DASH_DASHplatform = 78,
  sym_privileged = 79,
  anon_sym_DASH_DASHpull = 80,
  sym_push = 81,
  sym_required = 82,
  anon_sym_DASH_DASHsecret = 83,
  anon_sym_DASH_DASHsep = 84,
  anon_sym_DASH_DASHservice = 85,
  anon_sym_DASH_DASHsharing = 86,
  sym_ssh = 87,
  sym_symlink_no_follow = 88,
  anon_sym_DQUOTE = 89,
  aux_sym_double_quoted_string_token1 = 90,
  anon_sym_SQUOTE = 91,
  aux_sym_single_quoted_string_token1 = 92,
  sym_unquoted_string = 93,
  sym_line_continuation = 94,
  sym_comment = 95,
  sym_line_continuation_comment = 96,
  anon_sym_LF = 97,
  anon_sym_CRn = 98,
  anon_sym_FF = 99,
  sym__indent = 100,
  sym__dedent = 101,
  sym_source_file = 102,
  sym_project_command = 103,
  sym_target = 104,
  sym_version_command = 105,
  sym_arg_command = 106,
  sym_cache_command = 107,
  sym_copy_command = 108,
  sym_do_command = 109,
  sym_for_command = 110,
  sym_from_command = 111,
  sym_from_dockerfile_command = 112,
  sym_function_command = 113,
  sym_git_clone_command = 114,
  sym_if_command = 115,
  sym_import_command = 116,
  sym_let_command = 117,
  sym_locally_command = 118,
  sym_run_command = 119,
  sym_save_artifact_command = 120,
  sym_save_image_command = 121,
  sym_set_command = 122,
  sym_try_command = 123,
  sym_wait_command = 124,
  sym_with_docker_command = 125,
  aux_sym__command_block = 126,
  sym__conditional_block = 127,
  sym_else_if_block = 128,
  sym_else_block = 129,
  sym_earthfile_ref = 130,
  sym_function_ref = 131,
  sym_image_spec = 132,
  sym_shell_fragment = 133,
  sym_target_ref = 134,
  sym_target_artifact = 135,
  sym_target_artifact_build_args = 136,
  sym_branch = 137,
  sym_build_arg = 138,
  sym_cache_from = 139,
  sym_chmod = 140,
  sym_chown = 141,
  sym_compose = 142,
  sym_docker_build_arg = 143,
  sym_docker_file = 144,
  sym_docker_target = 145,
  sym_id = 146,
  sym_load = 147,
  sym_mount = 148,
  sym_platform = 149,
  sym_pull = 150,
  sym_secret = 151,
  sym_sep = 152,
  sym_service = 153,
  sym_sharing = 154,
  sym__string = 155,
  sym_double_quoted_string = 156,
  sym_single_quoted_string = 157,
  sym__eol = 158,
  aux_sym_source_file_repeat1 = 159,
  aux_sym_version_command_repeat1 = 160,
  aux_sym_arg_command_repeat1 = 161,
  aux_sym_build_command_repeat2 = 162,
  aux_sym_cache_command_repeat1 = 163,
  aux_sym_copy_command_repeat1 = 164,
  aux_sym_copy_command_repeat2 = 165,
  aux_sym_do_command_repeat1 = 166,
  aux_sym_for_command_repeat1 = 167,
  aux_sym_for_command_repeat2 = 168,
  aux_sym_from_command_repeat1 = 169,
  aux_sym_from_dockerfile_command_repeat1 = 170,
  aux_sym_git_clone_command_repeat1 = 171,
  aux_sym_if_command_repeat1 = 172,
  aux_sym_import_command_repeat1 = 173,
  aux_sym_run_command_repeat1 = 174,
  aux_sym_save_artifact_command_repeat1 = 175,
  aux_sym_save_image_command_repeat1 = 176,
  aux_sym_save_image_command_repeat2 = 177,
  aux_sym_try_command_repeat1 = 178,
  aux_sym_with_docker_command_repeat1 = 179,
  aux_sym__conditional_block_repeat1 = 180,
  aux_sym_shell_fragment_repeat1 = 181,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PROJECT] = "PROJECT",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_VERSION] = "VERSION",
  [anon_sym_ARG] = "ARG",
  [anon_sym_EQ] = "=",
  [anon_sym_BUILD] = "BUILD",
  [anon_sym_CACHE] = "CACHE",
  [anon_sym_COPY] = "COPY",
  [anon_sym_DO] = "DO",
  [anon_sym_FOR] = "FOR",
  [anon_sym_IN] = "IN",
  [anon_sym_END] = "END",
  [anon_sym_FROM] = "FROM",
  [anon_sym_FROMDOCKERFILE] = "FROM DOCKERFILE",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_GITCLONE] = "GIT CLONE",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSEIF] = "ELSE IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_IMPORT] = "IMPORT",
  [anon_sym_AS] = "AS",
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
  [sym_project_command] = "project_command",
  [sym_target] = "target",
  [sym_version_command] = "version_command",
  [sym_arg_command] = "arg_command",
  [sym_cache_command] = "cache_command",
  [sym_copy_command] = "copy_command",
  [sym_do_command] = "do_command",
  [sym_for_command] = "for_command",
  [sym_from_command] = "from_command",
  [sym_from_dockerfile_command] = "from_dockerfile_command",
  [sym_function_command] = "function_command",
  [sym_git_clone_command] = "git_clone_command",
  [sym_if_command] = "if_command",
  [sym_import_command] = "import_command",
  [sym_let_command] = "let_command",
  [sym_locally_command] = "locally_command",
  [sym_run_command] = "run_command",
  [sym_save_artifact_command] = "save_artifact_command",
  [sym_save_image_command] = "save_image_command",
  [sym_set_command] = "set_command",
  [sym_try_command] = "try_command",
  [sym_wait_command] = "wait_command",
  [sym_with_docker_command] = "with_docker_command",
  [aux_sym__command_block] = "_command_block",
  [sym__conditional_block] = "_conditional_block",
  [sym_else_if_block] = "else_if_block",
  [sym_else_block] = "else_block",
  [sym_earthfile_ref] = "earthfile_ref",
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
  [aux_sym_version_command_repeat1] = "version_command_repeat1",
  [aux_sym_arg_command_repeat1] = "arg_command_repeat1",
  [aux_sym_build_command_repeat2] = "build_command_repeat2",
  [aux_sym_cache_command_repeat1] = "cache_command_repeat1",
  [aux_sym_copy_command_repeat1] = "copy_command_repeat1",
  [aux_sym_copy_command_repeat2] = "copy_command_repeat2",
  [aux_sym_do_command_repeat1] = "do_command_repeat1",
  [aux_sym_for_command_repeat1] = "for_command_repeat1",
  [aux_sym_for_command_repeat2] = "for_command_repeat2",
  [aux_sym_from_command_repeat1] = "from_command_repeat1",
  [aux_sym_from_dockerfile_command_repeat1] = "from_dockerfile_command_repeat1",
  [aux_sym_git_clone_command_repeat1] = "git_clone_command_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_import_command_repeat1] = "import_command_repeat1",
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
  [anon_sym_PROJECT] = anon_sym_PROJECT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_VERSION] = anon_sym_VERSION,
  [anon_sym_ARG] = anon_sym_ARG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BUILD] = anon_sym_BUILD,
  [anon_sym_CACHE] = anon_sym_CACHE,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_FROMDOCKERFILE] = anon_sym_FROMDOCKERFILE,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_GITCLONE] = anon_sym_GITCLONE,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSEIF] = anon_sym_ELSEIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_IMPORT] = anon_sym_IMPORT,
  [anon_sym_AS] = anon_sym_AS,
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
  [sym_project_command] = sym_project_command,
  [sym_target] = sym_target,
  [sym_version_command] = sym_version_command,
  [sym_arg_command] = sym_arg_command,
  [sym_cache_command] = sym_cache_command,
  [sym_copy_command] = sym_copy_command,
  [sym_do_command] = sym_do_command,
  [sym_for_command] = sym_for_command,
  [sym_from_command] = sym_from_command,
  [sym_from_dockerfile_command] = sym_from_dockerfile_command,
  [sym_function_command] = sym_function_command,
  [sym_git_clone_command] = sym_git_clone_command,
  [sym_if_command] = sym_if_command,
  [sym_import_command] = sym_import_command,
  [sym_let_command] = sym_let_command,
  [sym_locally_command] = sym_locally_command,
  [sym_run_command] = sym_run_command,
  [sym_save_artifact_command] = sym_save_artifact_command,
  [sym_save_image_command] = sym_save_image_command,
  [sym_set_command] = sym_set_command,
  [sym_try_command] = sym_try_command,
  [sym_wait_command] = sym_wait_command,
  [sym_with_docker_command] = sym_with_docker_command,
  [aux_sym__command_block] = aux_sym__command_block,
  [sym__conditional_block] = sym__conditional_block,
  [sym_else_if_block] = sym_else_if_block,
  [sym_else_block] = sym_else_block,
  [sym_earthfile_ref] = sym_earthfile_ref,
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
  [aux_sym_version_command_repeat1] = aux_sym_version_command_repeat1,
  [aux_sym_arg_command_repeat1] = aux_sym_arg_command_repeat1,
  [aux_sym_build_command_repeat2] = aux_sym_build_command_repeat2,
  [aux_sym_cache_command_repeat1] = aux_sym_cache_command_repeat1,
  [aux_sym_copy_command_repeat1] = aux_sym_copy_command_repeat1,
  [aux_sym_copy_command_repeat2] = aux_sym_copy_command_repeat2,
  [aux_sym_do_command_repeat1] = aux_sym_do_command_repeat1,
  [aux_sym_for_command_repeat1] = aux_sym_for_command_repeat1,
  [aux_sym_for_command_repeat2] = aux_sym_for_command_repeat2,
  [aux_sym_from_command_repeat1] = aux_sym_from_command_repeat1,
  [aux_sym_from_dockerfile_command_repeat1] = aux_sym_from_dockerfile_command_repeat1,
  [aux_sym_git_clone_command_repeat1] = aux_sym_git_clone_command_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_import_command_repeat1] = aux_sym_import_command_repeat1,
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
  [anon_sym_FROM] = {
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
  [anon_sym_GITCLONE] = {
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
  [anon_sym_IMPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
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
  [sym_arg_command] = {
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
  [sym_from_command] = {
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
  [sym_import_command] = {
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
  [aux_sym__command_block] = {
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
  [sym_earthfile_ref] = {
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
  [aux_sym_version_command_repeat1] = {
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
  [aux_sym_from_command_repeat1] = {
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
  [aux_sym_import_command_repeat1] = {
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
  field_alias = 1,
  field_command = 2,
  field_condition = 3,
  field_context = 4,
  field_default_value = 5,
  field_default_value_expr = 6,
  field_dest = 7,
  field_digest = 8,
  field_else = 9,
  field_else_if = 10,
  field_finally = 11,
  field_image = 12,
  field_key = 13,
  field_local_dest = 14,
  field_mount_point = 15,
  field_name = 16,
  field_option = 17,
  field_org_name = 18,
  field_project_name = 19,
  field_src = 20,
  field_tag = 21,
  field_target = 22,
  field_url = 23,
  field_value = 24,
  field_version = 25,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 1},
  [13] = {.index = 14, .length = 1},
  [14] = {.index = 15, .length = 1},
  [15] = {.index = 16, .length = 2},
  [16] = {.index = 18, .length = 2},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 1},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 2},
  [22] = {.index = 29, .length = 1},
  [23] = {.index = 30, .length = 3},
  [24] = {.index = 33, .length = 3},
  [25] = {.index = 36, .length = 2},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 2},
  [28] = {.index = 42, .length = 2},
  [29] = {.index = 44, .length = 2},
  [30] = {.index = 46, .length = 2},
  [31] = {.index = 48, .length = 2},
  [32] = {.index = 50, .length = 1},
  [33] = {.index = 51, .length = 2},
  [34] = {.index = 53, .length = 2},
  [35] = {.index = 55, .length = 3},
  [36] = {.index = 58, .length = 2},
  [37] = {.index = 60, .length = 2},
  [38] = {.index = 62, .length = 2},
  [39] = {.index = 64, .length = 3},
  [40] = {.index = 67, .length = 2},
  [41] = {.index = 69, .length = 3},
  [42] = {.index = 72, .length = 3},
  [43] = {.index = 75, .length = 1},
  [44] = {.index = 76, .length = 2},
  [45] = {.index = 78, .length = 2},
  [46] = {.index = 80, .length = 3},
  [47] = {.index = 83, .length = 3},
  [48] = {.index = 86, .length = 1},
  [49] = {.index = 87, .length = 3},
  [50] = {.index = 90, .length = 3},
  [51] = {.index = 93, .length = 5},
  [52] = {.index = 98, .length = 2},
  [53] = {.index = 100, .length = 4},
  [54] = {.index = 104, .length = 2},
  [55] = {.index = 106, .length = 4},
  [56] = {.index = 110, .length = 2},
  [57] = {.index = 112, .length = 2},
  [58] = {.index = 114, .length = 2},
  [59] = {.index = 116, .length = 5},
  [60] = {.index = 121, .length = 1},
  [61] = {.index = 122, .length = 3},
  [62] = {.index = 125, .length = 1},
  [63] = {.index = 126, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_option, 0},
  [1] =
    {field_src, 0},
  [2] =
    {field_name, 0},
  [3] =
    {field_src, 1},
  [4] =
    {field_option, 1},
  [5] =
    {field_option, 1, .inherited = true},
  [6] =
    {field_version, 1},
  [7] =
    {field_name, 1},
  [8] =
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [10] =
    {field_mount_point, 1},
  [11] =
    {field_src, 0, .inherited = true},
    {field_src, 1, .inherited = true},
  [13] =
    {field_context, 1},
  [14] =
    {field_condition, 0},
  [15] =
    {field_command, 1},
  [16] =
    {field_dest, 2},
    {field_src, 1},
  [18] =
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [20] =
    {field_option, 1},
    {field_version, 2},
  [22] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [24] =
    {field_value, 2},
  [25] =
    {field_mount_point, 2},
    {field_option, 1, .inherited = true},
  [27] =
    {field_dest, 2},
    {field_src, 1, .inherited = true},
  [29] =
    {field_value, 0},
  [30] =
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [33] =
    {field_digest, 1},
    {field_digest, 2},
    {field_name, 0},
  [36] =
    {field_context, 2},
    {field_option, 1, .inherited = true},
  [38] =
    {field_dest, 2},
    {field_url, 1},
  [40] =
    {field_condition, 1, .inherited = true},
    {field_option, 1, .inherited = true},
  [42] =
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [44] =
    {field_else_if, 0},
    {field_else_if, 1},
  [46] =
    {field_else_if, 0, .inherited = true},
    {field_else_if, 1, .inherited = true},
  [48] =
    {field_condition, 1},
    {field_option, 0, .inherited = true},
  [50] =
    {field_command, 2},
  [51] =
    {field_command, 2},
    {field_option, 1, .inherited = true},
  [53] =
    {field_local_dest, 3},
    {field_src, 1},
  [55] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [58] =
    {field_org_name, 1},
    {field_project_name, 3},
  [60] =
    {field_default_value_expr, 3},
    {field_name, 1},
  [62] =
    {field_default_value, 3},
    {field_name, 1},
  [64] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_src, 2, .inherited = true},
  [67] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [69] =
    {field_dest, 3},
    {field_option, 1, .inherited = true},
    {field_url, 2},
  [72] =
    {field_condition, 1, .inherited = true},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [75] =
    {field_alias, 3},
  [76] =
    {field_name, 1},
    {field_value, 3},
  [78] =
    {field_command, 3},
    {field_option, 1, .inherited = true},
  [80] =
    {field_dest, 2},
    {field_local_dest, 4},
    {field_src, 1},
  [83] =
    {field_local_dest, 4},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [86] =
    {field_finally, 0},
  [87] =
    {field_default_value_expr, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [90] =
    {field_default_value, 4},
    {field_name, 2},
    {field_option, 1, .inherited = true},
  [93] =
    {field_digest, 3},
    {field_digest, 4},
    {field_name, 0},
    {field_tag, 1},
    {field_tag, 2},
  [98] =
    {field_key, 2},
    {field_value, 4},
  [100] =
    {field_condition, 1, .inherited = true},
    {field_else, 2},
    {field_else, 3},
    {field_option, 1, .inherited = true},
  [104] =
    {field_alias, 4},
    {field_option, 1, .inherited = true},
  [106] =
    {field_dest, 3},
    {field_local_dest, 5},
    {field_option, 1, .inherited = true},
    {field_src, 2},
  [110] =
    {field_finally, 0, .inherited = true},
    {field_finally, 1, .inherited = true},
  [112] =
    {field_image, 2},
    {field_target, 4},
  [114] =
    {field_name, 1},
    {field_value, 3, .inherited = true},
  [116] =
    {field_condition, 1, .inherited = true},
    {field_else, 3},
    {field_else, 4},
    {field_else_if, 2, .inherited = true},
    {field_option, 1, .inherited = true},
  [121] =
    {field_finally, 4, .inherited = true},
  [122] =
    {field_name, 2},
    {field_option, 1, .inherited = true},
    {field_value, 4, .inherited = true},
  [125] =
    {field_finally, 5, .inherited = true},
  [126] =
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
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 15,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 14,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 12,
  [36] = 23,
  [37] = 37,
  [38] = 37,
  [39] = 18,
  [40] = 33,
  [41] = 14,
  [42] = 23,
  [43] = 34,
  [44] = 28,
  [45] = 34,
  [46] = 30,
  [47] = 33,
  [48] = 31,
  [49] = 12,
  [50] = 37,
  [51] = 24,
  [52] = 30,
  [53] = 22,
  [54] = 16,
  [55] = 55,
  [56] = 21,
  [57] = 24,
  [58] = 21,
  [59] = 12,
  [60] = 22,
  [61] = 28,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 68,
  [69] = 64,
  [70] = 64,
  [71] = 64,
  [72] = 65,
  [73] = 65,
  [74] = 65,
  [75] = 75,
  [76] = 65,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 75,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 75,
  [88] = 75,
  [89] = 89,
  [90] = 75,
  [91] = 91,
  [92] = 62,
  [93] = 83,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 86,
  [101] = 101,
  [102] = 89,
  [103] = 103,
  [104] = 98,
  [105] = 78,
  [106] = 84,
  [107] = 95,
  [108] = 94,
  [109] = 91,
  [110] = 110,
  [111] = 82,
  [112] = 81,
  [113] = 97,
  [114] = 114,
  [115] = 115,
  [116] = 62,
  [117] = 62,
  [118] = 97,
  [119] = 63,
  [120] = 99,
  [121] = 96,
  [122] = 99,
  [123] = 123,
  [124] = 85,
  [125] = 79,
  [126] = 126,
  [127] = 77,
  [128] = 63,
  [129] = 101,
  [130] = 96,
  [131] = 114,
  [132] = 81,
  [133] = 82,
  [134] = 83,
  [135] = 97,
  [136] = 95,
  [137] = 94,
  [138] = 99,
  [139] = 85,
  [140] = 97,
  [141] = 79,
  [142] = 77,
  [143] = 78,
  [144] = 89,
  [145] = 98,
  [146] = 99,
  [147] = 84,
  [148] = 86,
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
  [164] = 97,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 63,
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
  [183] = 96,
  [184] = 184,
  [185] = 99,
  [186] = 99,
  [187] = 187,
  [188] = 62,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 97,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 95,
  [200] = 94,
  [201] = 62,
  [202] = 202,
  [203] = 203,
  [204] = 123,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 68,
  [209] = 89,
  [210] = 98,
  [211] = 211,
  [212] = 66,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 62,
  [217] = 98,
  [218] = 89,
  [219] = 94,
  [220] = 95,
  [221] = 115,
  [222] = 96,
  [223] = 68,
  [224] = 123,
  [225] = 101,
  [226] = 63,
  [227] = 123,
  [228] = 228,
  [229] = 63,
  [230] = 62,
  [231] = 101,
  [232] = 63,
  [233] = 66,
  [234] = 110,
  [235] = 235,
  [236] = 66,
  [237] = 68,
  [238] = 123,
  [239] = 103,
  [240] = 101,
  [241] = 126,
  [242] = 91,
  [243] = 158,
  [244] = 166,
  [245] = 202,
  [246] = 191,
  [247] = 198,
  [248] = 126,
  [249] = 203,
  [250] = 207,
  [251] = 66,
  [252] = 213,
  [253] = 114,
  [254] = 205,
  [255] = 206,
  [256] = 99,
  [257] = 190,
  [258] = 97,
  [259] = 189,
  [260] = 68,
  [261] = 187,
  [262] = 184,
  [263] = 197,
  [264] = 115,
  [265] = 192,
  [266] = 149,
  [267] = 150,
  [268] = 196,
  [269] = 151,
  [270] = 182,
  [271] = 152,
  [272] = 193,
  [273] = 153,
  [274] = 154,
  [275] = 181,
  [276] = 155,
  [277] = 156,
  [278] = 157,
  [279] = 279,
  [280] = 180,
  [281] = 159,
  [282] = 66,
  [283] = 179,
  [284] = 68,
  [285] = 160,
  [286] = 161,
  [287] = 178,
  [288] = 211,
  [289] = 68,
  [290] = 215,
  [291] = 103,
  [292] = 63,
  [293] = 168,
  [294] = 165,
  [295] = 214,
  [296] = 195,
  [297] = 177,
  [298] = 162,
  [299] = 176,
  [300] = 66,
  [301] = 163,
  [302] = 175,
  [303] = 110,
  [304] = 174,
  [305] = 173,
  [306] = 172,
  [307] = 171,
  [308] = 167,
  [309] = 170,
  [310] = 206,
  [311] = 157,
  [312] = 174,
  [313] = 179,
  [314] = 149,
  [315] = 180,
  [316] = 150,
  [317] = 198,
  [318] = 151,
  [319] = 184,
  [320] = 170,
  [321] = 68,
  [322] = 175,
  [323] = 152,
  [324] = 66,
  [325] = 202,
  [326] = 181,
  [327] = 153,
  [328] = 203,
  [329] = 182,
  [330] = 168,
  [331] = 154,
  [332] = 205,
  [333] = 155,
  [334] = 334,
  [335] = 335,
  [336] = 335,
  [337] = 156,
  [338] = 197,
  [339] = 196,
  [340] = 173,
  [341] = 158,
  [342] = 207,
  [343] = 159,
  [344] = 167,
  [345] = 335,
  [346] = 160,
  [347] = 195,
  [348] = 161,
  [349] = 334,
  [350] = 162,
  [351] = 187,
  [352] = 163,
  [353] = 176,
  [354] = 189,
  [355] = 165,
  [356] = 193,
  [357] = 211,
  [358] = 171,
  [359] = 192,
  [360] = 178,
  [361] = 191,
  [362] = 172,
  [363] = 177,
  [364] = 166,
  [365] = 190,
  [366] = 213,
  [367] = 214,
  [368] = 334,
  [369] = 215,
  [370] = 370,
  [371] = 371,
  [372] = 370,
  [373] = 373,
  [374] = 373,
  [375] = 373,
  [376] = 370,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 378,
  [381] = 378,
  [382] = 379,
  [383] = 379,
  [384] = 97,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 99,
  [389] = 385,
  [390] = 390,
  [391] = 391,
  [392] = 385,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 394,
  [397] = 395,
  [398] = 398,
  [399] = 398,
  [400] = 394,
  [401] = 401,
  [402] = 402,
  [403] = 401,
  [404] = 395,
  [405] = 99,
  [406] = 406,
  [407] = 407,
  [408] = 401,
  [409] = 97,
  [410] = 398,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 414,
  [416] = 411,
  [417] = 417,
  [418] = 414,
  [419] = 411,
  [420] = 420,
  [421] = 421,
  [422] = 420,
  [423] = 420,
  [424] = 424,
  [425] = 424,
  [426] = 424,
  [427] = 421,
  [428] = 428,
  [429] = 421,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 432,
  [434] = 434,
  [435] = 435,
  [436] = 432,
  [437] = 435,
  [438] = 435,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 407,
  [446] = 441,
  [447] = 447,
  [448] = 439,
  [449] = 449,
  [450] = 450,
  [451] = 441,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 99,
  [456] = 456,
  [457] = 391,
  [458] = 97,
  [459] = 447,
  [460] = 456,
  [461] = 461,
  [462] = 439,
  [463] = 461,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 114,
  [469] = 467,
  [470] = 406,
  [471] = 447,
  [472] = 461,
  [473] = 447,
  [474] = 474,
  [475] = 439,
  [476] = 453,
  [477] = 439,
  [478] = 444,
  [479] = 464,
  [480] = 99,
  [481] = 97,
  [482] = 467,
  [483] = 456,
  [484] = 464,
  [485] = 485,
  [486] = 97,
  [487] = 487,
  [488] = 444,
  [489] = 489,
  [490] = 439,
  [491] = 453,
  [492] = 447,
  [493] = 447,
  [494] = 99,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 498,
  [500] = 500,
  [501] = 497,
  [502] = 502,
  [503] = 497,
  [504] = 504,
  [505] = 505,
  [506] = 497,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 505,
  [513] = 511,
  [514] = 514,
  [515] = 505,
  [516] = 497,
  [517] = 511,
  [518] = 518,
  [519] = 514,
  [520] = 507,
  [521] = 509,
  [522] = 498,
  [523] = 508,
  [524] = 508,
  [525] = 525,
  [526] = 526,
  [527] = 525,
  [528] = 528,
  [529] = 97,
  [530] = 530,
  [531] = 99,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 533,
  [536] = 530,
  [537] = 99,
  [538] = 97,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 532,
  [543] = 391,
  [544] = 525,
  [545] = 541,
  [546] = 546,
  [547] = 530,
  [548] = 548,
  [549] = 549,
  [550] = 549,
  [551] = 532,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 548,
  [556] = 556,
  [557] = 528,
  [558] = 526,
  [559] = 548,
  [560] = 560,
  [561] = 549,
  [562] = 387,
  [563] = 528,
  [564] = 526,
  [565] = 541,
  [566] = 554,
  [567] = 533,
  [568] = 554,
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
  [589] = 570,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 590,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 605,
  [608] = 606,
  [609] = 602,
  [610] = 604,
  [611] = 599,
  [612] = 569,
  [613] = 603,
  [614] = 598,
  [615] = 597,
  [616] = 570,
  [617] = 601,
  [618] = 588,
  [619] = 587,
  [620] = 586,
  [621] = 600,
  [622] = 585,
  [623] = 584,
  [624] = 583,
  [625] = 582,
  [626] = 581,
  [627] = 580,
  [628] = 579,
  [629] = 578,
  [630] = 577,
  [631] = 576,
  [632] = 575,
  [633] = 574,
  [634] = 573,
  [635] = 572,
  [636] = 571,
  [637] = 637,
  [638] = 591,
  [639] = 592,
  [640] = 580,
  [641] = 594,
  [642] = 595,
  [643] = 596,
  [644] = 123,
  [645] = 645,
  [646] = 600,
  [647] = 647,
  [648] = 601,
  [649] = 101,
  [650] = 603,
  [651] = 569,
  [652] = 604,
  [653] = 590,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 605,
  [658] = 658,
  [659] = 606,
  [660] = 602,
  [661] = 599,
  [662] = 598,
  [663] = 597,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 637,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 588,
  [676] = 676,
  [677] = 587,
  [678] = 678,
  [679] = 586,
  [680] = 680,
  [681] = 585,
  [682] = 584,
  [683] = 674,
  [684] = 676,
  [685] = 685,
  [686] = 583,
  [687] = 672,
  [688] = 688,
  [689] = 689,
  [690] = 582,
  [691] = 669,
  [692] = 676,
  [693] = 581,
  [694] = 576,
  [695] = 688,
  [696] = 579,
  [697] = 697,
  [698] = 674,
  [699] = 672,
  [700] = 669,
  [701] = 578,
  [702] = 702,
  [703] = 592,
  [704] = 591,
  [705] = 655,
  [706] = 654,
  [707] = 577,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 656,
  [712] = 712,
  [713] = 637,
  [714] = 655,
  [715] = 666,
  [716] = 665,
  [717] = 654,
  [718] = 709,
  [719] = 678,
  [720] = 575,
  [721] = 670,
  [722] = 722,
  [723] = 723,
  [724] = 671,
  [725] = 688,
  [726] = 708,
  [727] = 574,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 596,
  [732] = 709,
  [733] = 678,
  [734] = 689,
  [735] = 735,
  [736] = 736,
  [737] = 573,
  [738] = 708,
  [739] = 666,
  [740] = 740,
  [741] = 572,
  [742] = 594,
  [743] = 665,
  [744] = 656,
  [745] = 595,
  [746] = 689,
  [747] = 670,
  [748] = 671,
  [749] = 571,
  [750] = 750,
  [751] = 99,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 97,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 790,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 788,
  [797] = 784,
  [798] = 783,
  [799] = 779,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 794,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 816,
  [819] = 811,
  [820] = 778,
  [821] = 800,
  [822] = 813,
  [823] = 823,
  [824] = 812,
  [825] = 825,
  [826] = 810,
  [827] = 809,
  [828] = 808,
  [829] = 786,
  [830] = 807,
  [831] = 784,
  [832] = 783,
  [833] = 801,
  [834] = 812,
  [835] = 813,
  [836] = 816,
  [837] = 804,
  [838] = 801,
  [839] = 784,
  [840] = 783,
  [841] = 841,
  [842] = 812,
  [843] = 813,
  [844] = 816,
  [845] = 845,
  [846] = 846,
  [847] = 784,
  [848] = 783,
  [849] = 812,
  [850] = 813,
  [851] = 816,
  [852] = 784,
  [853] = 783,
  [854] = 812,
  [855] = 813,
  [856] = 816,
  [857] = 784,
  [858] = 783,
  [859] = 812,
  [860] = 813,
  [861] = 816,
  [862] = 812,
  [863] = 813,
  [864] = 812,
  [865] = 813,
  [866] = 812,
  [867] = 813,
  [868] = 812,
  [869] = 813,
  [870] = 812,
  [871] = 813,
  [872] = 812,
  [873] = 813,
  [874] = 812,
  [875] = 813,
  [876] = 812,
  [877] = 813,
  [878] = 778,
  [879] = 879,
  [880] = 880,
  [881] = 800,
  [882] = 779,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 886,
  [889] = 887,
  [890] = 825,
  [891] = 823,
  [892] = 817,
  [893] = 893,
  [894] = 783,
  [895] = 787,
  [896] = 784,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 885,
  [901] = 901,
  [902] = 788,
  [903] = 804,
  [904] = 794,
  [905] = 897,
  [906] = 786,
  [907] = 907,
  [908] = 908,
  [909] = 884,
  [910] = 885,
  [911] = 898,
  [912] = 912,
  [913] = 825,
  [914] = 823,
  [915] = 817,
  [916] = 790,
  [917] = 917,
  [918] = 918,
  [919] = 787,
  [920] = 897,
  [921] = 898,
  [922] = 922,
  [923] = 786,
  [924] = 924,
  [925] = 807,
  [926] = 926,
  [927] = 823,
  [928] = 897,
  [929] = 898,
  [930] = 823,
  [931] = 897,
  [932] = 898,
  [933] = 897,
  [934] = 898,
  [935] = 897,
  [936] = 898,
  [937] = 897,
  [938] = 898,
  [939] = 897,
  [940] = 898,
  [941] = 897,
  [942] = 898,
  [943] = 897,
  [944] = 898,
  [945] = 897,
  [946] = 898,
  [947] = 897,
  [948] = 898,
  [949] = 897,
  [950] = 898,
  [951] = 897,
  [952] = 898,
  [953] = 897,
  [954] = 898,
  [955] = 955,
  [956] = 956,
  [957] = 893,
  [958] = 808,
  [959] = 785,
  [960] = 956,
  [961] = 955,
  [962] = 956,
  [963] = 893,
  [964] = 809,
  [965] = 785,
  [966] = 955,
  [967] = 810,
  [968] = 968,
  [969] = 812,
  [970] = 813,
  [971] = 816,
  [972] = 811,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(325);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == ',') ADVANCE(927);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(174);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(311)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(989);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '#') ADVANCE(932);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(931);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(992);
      if (lookahead == '\f') ADVANCE(993);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\f') ADVANCE(1004);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(1000);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\f') ADVANCE(1004);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(6)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead == '\f') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(985);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(1001);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(986);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead == '\f') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(985);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(986);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '\f') ADVANCE(1006);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(1002);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '\f') ADVANCE(1006);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '#') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(980);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '#') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(984);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(997);
      if (lookahead == '\f') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(1003);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(930);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(997);
      if (lookahead == '\f') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(930);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(998);
      if (lookahead == '\f') ADVANCE(1008);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(998);
      if (lookahead == '\f') ADVANCE(1008);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(999);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(998);
      if (lookahead == '\f') ADVANCE(1008);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(174);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(927);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(174);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(927);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(929);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(174);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(927);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '=') ADVANCE(939);
      if (lookahead == 'A') ADVANCE(167);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(35)
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(941);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '=') ADVANCE(939);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(52)
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(927);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(25)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(930);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(929);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(927);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(25)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(930);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(985);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(986);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(649);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(641);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(167);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(649);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(641);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(649);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(641);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'E') ADVANCE(649);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(656);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(661);
      if (lookahead == 'C') ADVANCE(622);
      if (lookahead == 'D') ADVANCE(654);
      if (lookahead == 'F') ADVANCE(641);
      if (lookahead == 'G') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(635);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == 'R') ADVANCE(673);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(662);
      if (lookahead == 'W') ADVANCE(625);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(927);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(930);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(734);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(741);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '-') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '-') ADVANCE(745);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '-') ADVANCE(751);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(796);
      if (lookahead == 'C') ADVANCE(755);
      if (lookahead == 'D') ADVANCE(789);
      if (lookahead == 'E') ADVANCE(778);
      if (lookahead == 'F') ADVANCE(791);
      if (lookahead == 'G') ADVANCE(774);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'L') ADVANCE(767);
      if (lookahead == 'R') ADVANCE(809);
      if (lookahead == 'S') ADVANCE(756);
      if (lookahead == 'T') ADVANCE(797);
      if (lookahead == 'W') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(796);
      if (lookahead == 'C') ADVANCE(755);
      if (lookahead == 'D') ADVANCE(789);
      if (lookahead == 'E') ADVANCE(784);
      if (lookahead == 'F') ADVANCE(791);
      if (lookahead == 'G') ADVANCE(774);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'L') ADVANCE(767);
      if (lookahead == 'R') ADVANCE(809);
      if (lookahead == 'S') ADVANCE(756);
      if (lookahead == 'T') ADVANCE(797);
      if (lookahead == 'W') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(796);
      if (lookahead == 'C') ADVANCE(755);
      if (lookahead == 'D') ADVANCE(789);
      if (lookahead == 'F') ADVANCE(791);
      if (lookahead == 'G') ADVANCE(774);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'L') ADVANCE(767);
      if (lookahead == 'R') ADVANCE(809);
      if (lookahead == 'S') ADVANCE(756);
      if (lookahead == 'T') ADVANCE(797);
      if (lookahead == 'W') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(796);
      if (lookahead == 'C') ADVANCE(755);
      if (lookahead == 'D') ADVANCE(789);
      if (lookahead == 'F') ADVANCE(776);
      if (lookahead == 'G') ADVANCE(774);
      if (lookahead == 'I') ADVANCE(770);
      if (lookahead == 'L') ADVANCE(767);
      if (lookahead == 'R') ADVANCE(809);
      if (lookahead == 'S') ADVANCE(756);
      if (lookahead == 'T') ADVANCE(797);
      if (lookahead == 'W') ADVANCE(758);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(800);
      if (lookahead == 'E') ADVANCE(784);
      if (lookahead == 'S') ADVANCE(759);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(729);
      if (lookahead == '\\') ADVANCE(730);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(732);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(310);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(942);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(207);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(261);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(165);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(141);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(188);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(177);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(124);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(135);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(144);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(190);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(186);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(187);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(136);
      END_STATE();
    case 101:
      if (lookahead == 'D') ADVANCE(365);
      END_STATE();
    case 102:
      if (lookahead == 'D') ADVANCE(339);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(160);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(164);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(389);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(381);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(420);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(374);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 116:
      if (lookahead == 'F') ADVANCE(382);
      if (lookahead == 'M') ADVANCE(166);
      END_STATE();
    case 117:
      if (lookahead == 'F') ADVANCE(382);
      if (lookahead == 'M') ADVANCE(166);
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 118:
      if (lookahead == 'F') ADVANCE(388);
      END_STATE();
    case 119:
      if (lookahead == 'F') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'F') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'G') ADVANCE(332);
      END_STATE();
    case 122:
      if (lookahead == 'G') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'H') ADVANCE(29);
      END_STATE();
    case 124:
      if (lookahead == 'H') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(149);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'R') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(153);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(181);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 129:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 130:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 131:
      if (lookahead == 'I') ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'I') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'J') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'K') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'K') ADVANCE(114);
      END_STATE();
    case 137:
      if (lookahead == 'L') ADVANCE(179);
      if (lookahead == 'N') ADVANCE(101);
      END_STATE();
    case 138:
      if (lookahead == 'L') ADVANCE(419);
      END_STATE();
    case 139:
      if (lookahead == 'L') ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(196);
      END_STATE();
    case 141:
      if (lookahead == 'L') ADVANCE(140);
      END_STATE();
    case 142:
      if (lookahead == 'L') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == 'L') ADVANCE(142);
      END_STATE();
    case 144:
      if (lookahead == 'L') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'L') ADVANCE(109);
      END_STATE();
    case 146:
      if (lookahead == 'L') ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'M') ADVANCE(368);
      END_STATE();
    case 148:
      if (lookahead == 'M') ADVANCE(84);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(411);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(330);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(375);
      END_STATE();
    case 153:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(352);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(147);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(176);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(154);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 164:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 165:
      if (lookahead == 'P') ADVANCE(195);
      END_STATE();
    case 166:
      if (lookahead == 'P') ADVANCE(159);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(121);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(398);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(194);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(358);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(442);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(189);
      END_STATE();
    case 178:
      if (lookahead == 'S') ADVANCE(398);
      END_STATE();
    case 179:
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(130);
      END_STATE();
    case 181:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 182:
      if (lookahead == 'T') ADVANCE(399);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(421);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(436);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(392);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(326);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(418);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 191:
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 192:
      if (lookahead == 'U') ADVANCE(150);
      END_STATE();
    case 193:
      if (lookahead == 'V') ADVANCE(111);
      END_STATE();
    case 194:
      if (lookahead == 'Y') ADVANCE(427);
      END_STATE();
    case 195:
      if (lookahead == 'Y') ADVANCE(346);
      END_STATE();
    case 196:
      if (lookahead == 'Y') ADVANCE(433);
      END_STATE();
    case 197:
      if (lookahead == 'Y') ADVANCE(405);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 206:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(972);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(967);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(937);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(960);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(970);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(280);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(963);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(962);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(947);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(973);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 232:
      if (lookahead == 'f') ADVANCE(274);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(975);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(969);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 247:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(968);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(955);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 257:
      if (lookahead == 'm') ADVANCE(966);
      END_STATE();
    case 258:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 264:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 266:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 267:
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 268:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 269:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 270:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 275:
      if (lookahead == 'p') ADVANCE(270);
      END_STATE();
    case 276:
      if (lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 277:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 278:
      if (lookahead == 'q') ADVANCE(300);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 283:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 285:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 286:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 287:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 288:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(964);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(961);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(971);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(952);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 302:
      if (lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 303:
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 304:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 305:
      if (lookahead == 'w') ADVANCE(271);
      END_STATE();
    case 306:
      if (lookahead == 'w') ADVANCE(78);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(275);
      END_STATE();
    case 308:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(936);
      END_STATE();
    case 309:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(953);
      END_STATE();
    case 310:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 311:
      if (eof) ADVANCE(325);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '"') ADVANCE(977);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(981);
      if (lookahead == '(') ADVANCE(934);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'G') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'P') ADVANCE(174);
      if (lookahead == 'R') ADVANCE(192);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == 'V') ADVANCE(112);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(927);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(311)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 312:
      if (eof) ADVANCE(325);
      if (lookahead == ' ') ADVANCE(940);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '=') ADVANCE(939);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(501);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'L') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(315)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 313:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(501);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'L') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(315)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 314:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(501);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'L') ADVANCE(481);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(314)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 315:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ')') ADVANCE(935);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(501);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'L') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(315)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 316:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(501);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'L') ADVANCE(481);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == 'V') ADVANCE(487);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(317)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 317:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(501);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'L') ADVANCE(481);
      if (lookahead == 'P') ADVANCE(565);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == 'V') ADVANCE(487);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(317)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 318:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(615);
      if (lookahead == 'A') ADVANCE(559);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(502);
      if (lookahead == 'I') ADVANCE(490);
      if (lookahead == 'L') ADVANCE(483);
      if (lookahead == 'R') ADVANCE(593);
      if (lookahead == 'S') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(560);
      if (lookahead == 'W') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '_') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(318)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(728);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 319:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(554);
      if (lookahead == 'C') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(501);
      if (lookahead == 'I') ADVANCE(489);
      if (lookahead == 'L') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == 'W') ADVANCE(465);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 320:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(320)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 321:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(621);
      if (lookahead == 'A') ADVANCE(559);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(502);
      if (lookahead == 'I') ADVANCE(490);
      if (lookahead == 'L') ADVANCE(483);
      if (lookahead == 'R') ADVANCE(593);
      if (lookahead == 'S') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(560);
      if (lookahead == 'W') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '_') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(321)
      if (('.' <= lookahead && lookahead <= '9')) ADVANCE(728);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 322:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == ':') ADVANCE(610);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(559);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(502);
      if (lookahead == 'I') ADVANCE(490);
      if (lookahead == 'L') ADVANCE(483);
      if (lookahead == 'R') ADVANCE(593);
      if (lookahead == 'S') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(560);
      if (lookahead == 'W') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '_') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(323)
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(728);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 323:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'A') ADVANCE(559);
      if (lookahead == 'C') ADVANCE(459);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(502);
      if (lookahead == 'I') ADVANCE(490);
      if (lookahead == 'L') ADVANCE(483);
      if (lookahead == 'R') ADVANCE(593);
      if (lookahead == 'S') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(560);
      if (lookahead == 'W') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '_') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(323)
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(728);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 324:
      if (eof) ADVANCE(325);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(462);
      if (lookahead == 'D') ADVANCE(536);
      if (lookahead == 'F') ADVANCE(538);
      if (lookahead == 'G') ADVANCE(503);
      if (lookahead == 'I') ADVANCE(491);
      if (lookahead == 'L') ADVANCE(485);
      if (lookahead == 'R') ADVANCE(594);
      if (lookahead == 'S') ADVANCE(463);
      if (lookahead == 'T') ADVANCE(563);
      if (lookahead == 'W') ADVANCE(467);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(324)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(926);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PROJECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_VERSION);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_VERSION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_ARG);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_ARG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BUILD);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_CACHE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DO);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_DO);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DO);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DO);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DO);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_END);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_FROMDOCKERFILE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_GITCLONE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_ELSEIF);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(128);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LET);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LOCALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_RUN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SAVEARTIFACT);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_ASLOCAL);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_SAVEIMAGE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_SET);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_TRY);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_TRY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_FINALLY);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_WAIT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_WITHDOCKER);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(468);
      if (lookahead == 'O') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(597);
      if (lookahead == 'E') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(470);
      if (lookahead == 'O') ADVANCE(549);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(595);
      if (lookahead == 'E') ADVANCE(578);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(513);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(596);
      if (lookahead == 'E') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(507);
      if (lookahead == 'I') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(508);
      if (lookahead == 'I') ADVANCE(587);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(509);
      if (lookahead == 'I') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(495);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(461);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(586);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(571);
      if (lookahead == 'O') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(471);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(581);
      if (lookahead == 'O') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(384);
      if (lookahead == 'M') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(383);
      if (lookahead == 'M') ADVANCE(551);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(385);
      if (lookahead == 'M') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(333);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(479);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(576);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(579);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(516);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(603);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(369);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(412);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(376);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(475);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(353);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(519);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(564);
      if (lookahead == 'R') ADVANCE(537);
      if (lookahead == 'U') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(561);
      if (lookahead == 'R') ADVANCE(535);
      if (lookahead == 'U') ADVANCE(529);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(525);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(557);
      if (lookahead == 'R') ADVANCE(532);
      if (lookahead == 'U') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(567);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(602);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(546);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(492);
      if (lookahead == 'S') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(493);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(601);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(359);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(494);
      if (lookahead == 'S') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(580);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(400);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(422);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(437);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(393);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(504);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(499);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(524);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(484);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(428);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(347);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(406);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(608);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(90);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(94);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == ' ') ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(685);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(694);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(695);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(680);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(714);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(682);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == '-') ADVANCE(688);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(627);
      if (lookahead == 'O') ADVANCE(659);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'E') ADVANCE(668);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(644);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(642);
      if (lookahead == 'I') ADVANCE(672);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'A') ADVANCE(647);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(637);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(624);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'C') ADVANCE(671);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'D') ADVANCE(366);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(390);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(344);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(667);
      if (lookahead == 'O') ADVANCE(628);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'E') ADVANCE(612);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'M') ADVANCE(660);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'G') ADVANCE(336);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(632);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'H') ADVANCE(614);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(666);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(657);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(653);
      if (lookahead == 'O') ADVANCE(663);
      if (lookahead == 'R') ADVANCE(655);
      if (lookahead == 'U') ADVANCE(652);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'I') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'N') ADVANCE(630);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(645);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(677);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(678);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'L') ADVANCE(646);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'M') ADVANCE(372);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(630);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(415);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(379);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(629);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'N') ADVANCE(626);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(356);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(648);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(663);
      if (lookahead == 'R') ADVANCE(655);
      if (lookahead == 'U') ADVANCE(652);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(651);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'O') ADVANCE(664);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(676);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'P') ADVANCE(658);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(636);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(675);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(362);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'R') ADVANCE(670);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'S') ADVANCE(631);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(613);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(403);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(396);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(640);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'T') ADVANCE(638);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'U') ADVANCE(650);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'V') ADVANCE(634);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(431);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(350);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'Y') ADVANCE(434);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(686);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(707);
      if (lookahead == 'p') ADVANCE(681);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == 'l') ADVANCE(683);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(716);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(724);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'a') ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(679);
      if (lookahead == 'p') ADVANCE(725);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(700);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(701);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead == 'p') ADVANCE(725);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'd') ADVANCE(937);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(689);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(616);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(697);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'e') ADVANCE(617);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(715);
      if (lookahead == 'h') ADVANCE(702);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(715);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'f') ADVANCE(713);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(690);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'g') ADVANCE(719);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(969);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(691);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'h') ADVANCE(693);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(710);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(726);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'i') ADVANCE(705);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(692);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(712);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'l') ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(966);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'm') ADVANCE(943);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'n') ADVANCE(723);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(709);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(727);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'o') ADVANCE(718);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'p') ADVANCE(717);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(711);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(698);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(703);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'r') ADVANCE(708);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(964);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(699);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(722);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 's') ADVANCE(620);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(944);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 't') ADVANCE(696);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'u') ADVANCE(720);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'v') ADVANCE(704);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_image_name);
      if (lookahead == 'w') ADVANCE(619);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_image_name);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(989);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(1);
      if (lookahead != 0) ADVANCE(729);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(987);
      if (lookahead == '#') ADVANCE(731);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(732);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead == '\n') ADVANCE(992);
      if (lookahead == '\f') ADVANCE(993);
      if (lookahead == '\r') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(4);
      if (lookahead != 0) ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_image_tag);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_image_digest);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_immediate_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(734);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(989);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(735);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(816);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(825);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(827);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(847);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(820);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(893);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(835);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(882);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(817);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(846);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '-') ADVANCE(822);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(761);
      if (lookahead == 'O') ADVANCE(794);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(810);
      if (lookahead == 'E') ADVANCE(803);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(779);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(777);
      if (lookahead == 'I') ADVANCE(808);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(811);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A') ADVANCE(782);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(772);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(757);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C') ADVANCE(806);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(802);
      if (lookahead == 'O') ADVANCE(762);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E') ADVANCE(738);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(795);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(766);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H') ADVANCE(740);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(807);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(793);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(788);
      if (lookahead == 'O') ADVANCE(798);
      if (lookahead == 'R') ADVANCE(790);
      if (lookahead == 'U') ADVANCE(787);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I') ADVANCE(804);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(801);
      if (lookahead == 'N') ADVANCE(764);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(814);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(815);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L') ADVANCE(781);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(764);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(763);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N') ADVANCE(760);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(783);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(798);
      if (lookahead == 'R') ADVANCE(790);
      if (lookahead == 'U') ADVANCE(787);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(799);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O') ADVANCE(786);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(813);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P') ADVANCE(792);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(771);
      if (lookahead == 'S') ADVANCE(739);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(812);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R') ADVANCE(805);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(739);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S') ADVANCE(765);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(775);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(737);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T') ADVANCE(773);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U') ADVANCE(785);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(768);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'V') ADVANCE(769);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'c') ADVANCE(853);
      if (lookahead == 'd') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead == 'k') ADVANCE(837);
      if (lookahead == 'p') ADVANCE(818);
      if (lookahead == 's') ADVANCE(925);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(908);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(915);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(896);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(904);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(899);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'a') ADVANCE(903);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(918);
      if (lookahead == 'p') ADVANCE(866);
      if (lookahead == 't') ADVANCE(821);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'b') ADVANCE(901);
      if (lookahead == 'k') ADVANCE(843);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(855);
      if (lookahead == 'i') ADVANCE(832);
      if (lookahead == 'p') ADVANCE(841);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(854);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'c') ADVANCE(836);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(937);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(945);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(956);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'd') ADVANCE(754);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(954);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(830);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(749);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(886);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(891);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'f') ADVANCE(889);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead == 'k') ADVANCE(837);
      if (lookahead == 's') ADVANCE(925);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(949);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(974);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(838);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(840);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'g') ADVANCE(905);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(875);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(938);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(876);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'h') ADVANCE(824);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(895);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(919);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(879);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(909);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(883);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'i') ADVANCE(911);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'k') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(885);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(867);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(859);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(833);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(887);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'l') ADVANCE(872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(966);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(884);
      if (lookahead == 'o') ADVANCE(920);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(884);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'm') ADVANCE(869);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(946);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(865);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(958);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(828);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(888);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(831);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(898);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(921);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(752);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == 't') ADVANCE(906);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(900);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(753);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(852);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(829);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(848);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(858);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(823);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(912);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(964);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(959);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(957);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(910);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(917);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(914);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 's') ADVANCE(864);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(951);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(965);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(906);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'u') ADVANCE(863);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'v') ADVANCE(861);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(878);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(976);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(880);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'w') ADVANCE(748);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'x') ADVANCE(860);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'y') ADVANCE(877);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n') ADVANCE(992);
      if (lookahead == '\f') ADVANCE(993);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_version_major_minor);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(936);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_allow_privileged);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbranch);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_branch_token1);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_DASH_DASH2);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcache_DASHfrom);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_cache_hint);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchmod);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_DASH_DASHcompose);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_dir);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_DASH_DASHbuild_DASHarg);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtarget);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_feature_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(953);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_force);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_global);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_DASH_DASHid);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_if_exists);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_keep_own);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_keep_ts);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_DASH_DASHload);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_DASH_DASHmount);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_network_none);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_no_cache);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_pass_args);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_persist);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_privileged);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpull);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_push);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_required);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsecret);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsep);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_DASH_DASHservice);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_DASH_DASHsharing);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_ssh);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_symlink_no_follow);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(990);
      if (lookahead == '\r') ADVANCE(978);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(980);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(980);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(991);
      if (lookahead == '\r') ADVANCE(982);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(984);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(984);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(989);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(985);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_unquoted_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(986);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(989);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(990);
      if (lookahead == '\r') ADVANCE(978);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(978);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(988);
      if (lookahead == '\f') ADVANCE(991);
      if (lookahead == '\r') ADVANCE(982);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(982);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_line_continuation_comment);
      if (lookahead == '\n') ADVANCE(992);
      if (lookahead == '\f') ADVANCE(993);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\f') ADVANCE(1004);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead == '\f') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(985);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '\f') ADVANCE(1006);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(997);
      if (lookahead == '\f') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(998);
      if (lookahead == '\f') ADVANCE(1008);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_CRn);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(986);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(926);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(anon_sym_CRn);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(930);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(994);
      if (lookahead == '\f') ADVANCE(1004);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '-') ADVANCE(618);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(995);
      if (lookahead == '\f') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(985);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(996);
      if (lookahead == '\f') ADVANCE(1006);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '#') ADVANCE(735);
      if (lookahead == '+') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(3);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(997);
      if (lookahead == '\f') ADVANCE(1007);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '\n') ADVANCE(998);
      if (lookahead == '\f') ADVANCE(1008);
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
  [1] = {.lex_state = 316},
  [2] = {.lex_state = 314},
  [3] = {.lex_state = 313},
  [4] = {.lex_state = 313},
  [5] = {.lex_state = 313},
  [6] = {.lex_state = 313},
  [7] = {.lex_state = 313},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 313},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 38},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 318},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 33, .external_lex_state = 2},
  [72] = {.lex_state = 321},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 40, .external_lex_state = 2},
  [75] = {.lex_state = 38},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 321},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 35},
  [85] = {.lex_state = 35},
  [86] = {.lex_state = 35},
  [87] = {.lex_state = 41},
  [88] = {.lex_state = 40, .external_lex_state = 2},
  [89] = {.lex_state = 42},
  [90] = {.lex_state = 39},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 42},
  [93] = {.lex_state = 313},
  [94] = {.lex_state = 42},
  [95] = {.lex_state = 42},
  [96] = {.lex_state = 38},
  [97] = {.lex_state = 38},
  [98] = {.lex_state = 38},
  [99] = {.lex_state = 38},
  [100] = {.lex_state = 313},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 322},
  [103] = {.lex_state = 35},
  [104] = {.lex_state = 321},
  [105] = {.lex_state = 313},
  [106] = {.lex_state = 313},
  [107] = {.lex_state = 322},
  [108] = {.lex_state = 322},
  [109] = {.lex_state = 312},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 313},
  [112] = {.lex_state = 313},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 35},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 322},
  [117] = {.lex_state = 313},
  [118] = {.lex_state = 321},
  [119] = {.lex_state = 42},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 321},
  [122] = {.lex_state = 321},
  [123] = {.lex_state = 62},
  [124] = {.lex_state = 313},
  [125] = {.lex_state = 313},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 313},
  [128] = {.lex_state = 322},
  [129] = {.lex_state = 324},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 313},
  [132] = {.lex_state = 35, .external_lex_state = 2},
  [133] = {.lex_state = 35, .external_lex_state = 2},
  [134] = {.lex_state = 35, .external_lex_state = 2},
  [135] = {.lex_state = 40, .external_lex_state = 2},
  [136] = {.lex_state = 45},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 35, .external_lex_state = 2},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 35, .external_lex_state = 2},
  [142] = {.lex_state = 35, .external_lex_state = 2},
  [143] = {.lex_state = 35, .external_lex_state = 2},
  [144] = {.lex_state = 45},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 313},
  [147] = {.lex_state = 35, .external_lex_state = 2},
  [148] = {.lex_state = 35, .external_lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 313},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 313},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 39},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 39},
  [186] = {.lex_state = 40, .external_lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 43},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 39},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 43},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 44, .external_lex_state = 2},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 324},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 43},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 42},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 45},
  [217] = {.lex_state = 40, .external_lex_state = 2},
  [218] = {.lex_state = 44, .external_lex_state = 2},
  [219] = {.lex_state = 44, .external_lex_state = 2},
  [220] = {.lex_state = 44, .external_lex_state = 2},
  [221] = {.lex_state = 313},
  [222] = {.lex_state = 40, .external_lex_state = 2},
  [223] = {.lex_state = 313},
  [224] = {.lex_state = 64, .external_lex_state = 2},
  [225] = {.lex_state = 64, .external_lex_state = 2},
  [226] = {.lex_state = 45},
  [227] = {.lex_state = 63},
  [228] = {.lex_state = 314},
  [229] = {.lex_state = 43},
  [230] = {.lex_state = 36, .external_lex_state = 2},
  [231] = {.lex_state = 63},
  [232] = {.lex_state = 44, .external_lex_state = 2},
  [233] = {.lex_state = 322},
  [234] = {.lex_state = 319},
  [235] = {.lex_state = 314},
  [236] = {.lex_state = 313},
  [237] = {.lex_state = 322},
  [238] = {.lex_state = 65},
  [239] = {.lex_state = 313},
  [240] = {.lex_state = 65},
  [241] = {.lex_state = 319},
  [242] = {.lex_state = 22, .external_lex_state = 2},
  [243] = {.lex_state = 313},
  [244] = {.lex_state = 313},
  [245] = {.lex_state = 313},
  [246] = {.lex_state = 313},
  [247] = {.lex_state = 313},
  [248] = {.lex_state = 36, .external_lex_state = 2},
  [249] = {.lex_state = 313},
  [250] = {.lex_state = 313},
  [251] = {.lex_state = 43},
  [252] = {.lex_state = 313},
  [253] = {.lex_state = 35, .external_lex_state = 2},
  [254] = {.lex_state = 313},
  [255] = {.lex_state = 313},
  [256] = {.lex_state = 35, .external_lex_state = 2},
  [257] = {.lex_state = 313},
  [258] = {.lex_state = 35, .external_lex_state = 2},
  [259] = {.lex_state = 313},
  [260] = {.lex_state = 43},
  [261] = {.lex_state = 313},
  [262] = {.lex_state = 313},
  [263] = {.lex_state = 313},
  [264] = {.lex_state = 35, .external_lex_state = 2},
  [265] = {.lex_state = 313},
  [266] = {.lex_state = 313},
  [267] = {.lex_state = 313},
  [268] = {.lex_state = 313},
  [269] = {.lex_state = 313},
  [270] = {.lex_state = 313},
  [271] = {.lex_state = 313},
  [272] = {.lex_state = 313},
  [273] = {.lex_state = 313},
  [274] = {.lex_state = 313},
  [275] = {.lex_state = 313},
  [276] = {.lex_state = 313},
  [277] = {.lex_state = 313},
  [278] = {.lex_state = 313},
  [279] = {.lex_state = 313},
  [280] = {.lex_state = 313},
  [281] = {.lex_state = 313},
  [282] = {.lex_state = 45},
  [283] = {.lex_state = 313},
  [284] = {.lex_state = 45},
  [285] = {.lex_state = 313},
  [286] = {.lex_state = 313},
  [287] = {.lex_state = 313},
  [288] = {.lex_state = 313},
  [289] = {.lex_state = 44, .external_lex_state = 2},
  [290] = {.lex_state = 313},
  [291] = {.lex_state = 35, .external_lex_state = 2},
  [292] = {.lex_state = 0, .external_lex_state = 2},
  [293] = {.lex_state = 313},
  [294] = {.lex_state = 313},
  [295] = {.lex_state = 313},
  [296] = {.lex_state = 313},
  [297] = {.lex_state = 313},
  [298] = {.lex_state = 313},
  [299] = {.lex_state = 313},
  [300] = {.lex_state = 44, .external_lex_state = 2},
  [301] = {.lex_state = 313},
  [302] = {.lex_state = 313},
  [303] = {.lex_state = 36, .external_lex_state = 2},
  [304] = {.lex_state = 313},
  [305] = {.lex_state = 313},
  [306] = {.lex_state = 313},
  [307] = {.lex_state = 313},
  [308] = {.lex_state = 313},
  [309] = {.lex_state = 313},
  [310] = {.lex_state = 0, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 0, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0, .external_lex_state = 2},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 2},
  [324] = {.lex_state = 0, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 2},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 0, .external_lex_state = 2},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 0, .external_lex_state = 2},
  [334] = {.lex_state = 55},
  [335] = {.lex_state = 55},
  [336] = {.lex_state = 55},
  [337] = {.lex_state = 0, .external_lex_state = 2},
  [338] = {.lex_state = 0, .external_lex_state = 2},
  [339] = {.lex_state = 0, .external_lex_state = 2},
  [340] = {.lex_state = 0, .external_lex_state = 2},
  [341] = {.lex_state = 0, .external_lex_state = 2},
  [342] = {.lex_state = 0, .external_lex_state = 2},
  [343] = {.lex_state = 0, .external_lex_state = 2},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 55},
  [346] = {.lex_state = 0, .external_lex_state = 2},
  [347] = {.lex_state = 0, .external_lex_state = 2},
  [348] = {.lex_state = 0, .external_lex_state = 2},
  [349] = {.lex_state = 55},
  [350] = {.lex_state = 0, .external_lex_state = 2},
  [351] = {.lex_state = 0, .external_lex_state = 2},
  [352] = {.lex_state = 0, .external_lex_state = 2},
  [353] = {.lex_state = 0, .external_lex_state = 2},
  [354] = {.lex_state = 0, .external_lex_state = 2},
  [355] = {.lex_state = 0, .external_lex_state = 2},
  [356] = {.lex_state = 0, .external_lex_state = 2},
  [357] = {.lex_state = 0, .external_lex_state = 2},
  [358] = {.lex_state = 0, .external_lex_state = 2},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 0, .external_lex_state = 2},
  [361] = {.lex_state = 0, .external_lex_state = 2},
  [362] = {.lex_state = 0, .external_lex_state = 2},
  [363] = {.lex_state = 0, .external_lex_state = 2},
  [364] = {.lex_state = 0, .external_lex_state = 2},
  [365] = {.lex_state = 0, .external_lex_state = 2},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 0, .external_lex_state = 2},
  [368] = {.lex_state = 55},
  [369] = {.lex_state = 0, .external_lex_state = 2},
  [370] = {.lex_state = 25},
  [371] = {.lex_state = 55},
  [372] = {.lex_state = 25},
  [373] = {.lex_state = 25},
  [374] = {.lex_state = 25},
  [375] = {.lex_state = 25},
  [376] = {.lex_state = 25},
  [377] = {.lex_state = 25},
  [378] = {.lex_state = 36},
  [379] = {.lex_state = 36},
  [380] = {.lex_state = 36},
  [381] = {.lex_state = 36},
  [382] = {.lex_state = 36},
  [383] = {.lex_state = 36},
  [384] = {.lex_state = 55},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 36},
  [387] = {.lex_state = 55},
  [388] = {.lex_state = 55},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 55},
  [391] = {.lex_state = 55},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 55},
  [394] = {.lex_state = 8},
  [395] = {.lex_state = 8},
  [396] = {.lex_state = 8},
  [397] = {.lex_state = 8},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 8},
  [400] = {.lex_state = 8},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 25},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 8},
  [405] = {.lex_state = 25},
  [406] = {.lex_state = 25},
  [407] = {.lex_state = 25},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 25},
  [410] = {.lex_state = 8},
  [411] = {.lex_state = 320},
  [412] = {.lex_state = 320},
  [413] = {.lex_state = 8},
  [414] = {.lex_state = 320},
  [415] = {.lex_state = 320},
  [416] = {.lex_state = 320},
  [417] = {.lex_state = 320},
  [418] = {.lex_state = 320},
  [419] = {.lex_state = 320},
  [420] = {.lex_state = 320},
  [421] = {.lex_state = 57},
  [422] = {.lex_state = 320},
  [423] = {.lex_state = 320},
  [424] = {.lex_state = 57},
  [425] = {.lex_state = 57},
  [426] = {.lex_state = 57},
  [427] = {.lex_state = 57},
  [428] = {.lex_state = 57},
  [429] = {.lex_state = 57},
  [430] = {.lex_state = 58},
  [431] = {.lex_state = 320},
  [432] = {.lex_state = 58},
  [433] = {.lex_state = 58},
  [434] = {.lex_state = 320},
  [435] = {.lex_state = 58},
  [436] = {.lex_state = 58},
  [437] = {.lex_state = 58},
  [438] = {.lex_state = 58},
  [439] = {.lex_state = 59},
  [440] = {.lex_state = 320},
  [441] = {.lex_state = 30},
  [442] = {.lex_state = 59},
  [443] = {.lex_state = 14},
  [444] = {.lex_state = 316},
  [445] = {.lex_state = 320},
  [446] = {.lex_state = 30},
  [447] = {.lex_state = 59},
  [448] = {.lex_state = 59},
  [449] = {.lex_state = 36},
  [450] = {.lex_state = 36},
  [451] = {.lex_state = 30},
  [452] = {.lex_state = 36},
  [453] = {.lex_state = 56},
  [454] = {.lex_state = 14},
  [455] = {.lex_state = 36},
  [456] = {.lex_state = 10},
  [457] = {.lex_state = 36},
  [458] = {.lex_state = 36},
  [459] = {.lex_state = 59},
  [460] = {.lex_state = 10},
  [461] = {.lex_state = 56},
  [462] = {.lex_state = 59},
  [463] = {.lex_state = 56},
  [464] = {.lex_state = 10},
  [465] = {.lex_state = 320},
  [466] = {.lex_state = 56},
  [467] = {.lex_state = 30},
  [468] = {.lex_state = 36},
  [469] = {.lex_state = 30},
  [470] = {.lex_state = 320},
  [471] = {.lex_state = 59},
  [472] = {.lex_state = 56},
  [473] = {.lex_state = 59},
  [474] = {.lex_state = 8},
  [475] = {.lex_state = 59},
  [476] = {.lex_state = 56},
  [477] = {.lex_state = 59},
  [478] = {.lex_state = 316},
  [479] = {.lex_state = 10},
  [480] = {.lex_state = 320},
  [481] = {.lex_state = 320},
  [482] = {.lex_state = 30},
  [483] = {.lex_state = 10},
  [484] = {.lex_state = 10},
  [485] = {.lex_state = 36},
  [486] = {.lex_state = 8},
  [487] = {.lex_state = 36},
  [488] = {.lex_state = 316},
  [489] = {.lex_state = 36},
  [490] = {.lex_state = 59},
  [491] = {.lex_state = 56},
  [492] = {.lex_state = 59},
  [493] = {.lex_state = 59},
  [494] = {.lex_state = 8},
  [495] = {.lex_state = 30},
  [496] = {.lex_state = 59},
  [497] = {.lex_state = 30},
  [498] = {.lex_state = 30},
  [499] = {.lex_state = 30},
  [500] = {.lex_state = 320},
  [501] = {.lex_state = 30},
  [502] = {.lex_state = 30},
  [503] = {.lex_state = 30},
  [504] = {.lex_state = 30},
  [505] = {.lex_state = 30},
  [506] = {.lex_state = 30},
  [507] = {.lex_state = 30},
  [508] = {.lex_state = 30},
  [509] = {.lex_state = 30},
  [510] = {.lex_state = 316},
  [511] = {.lex_state = 30},
  [512] = {.lex_state = 30},
  [513] = {.lex_state = 30},
  [514] = {.lex_state = 30},
  [515] = {.lex_state = 30},
  [516] = {.lex_state = 30},
  [517] = {.lex_state = 30},
  [518] = {.lex_state = 30},
  [519] = {.lex_state = 30},
  [520] = {.lex_state = 30},
  [521] = {.lex_state = 30},
  [522] = {.lex_state = 30},
  [523] = {.lex_state = 30},
  [524] = {.lex_state = 30},
  [525] = {.lex_state = 15},
  [526] = {.lex_state = 50},
  [527] = {.lex_state = 15},
  [528] = {.lex_state = 15},
  [529] = {.lex_state = 57},
  [530] = {.lex_state = 15},
  [531] = {.lex_state = 57},
  [532] = {.lex_state = 60},
  [533] = {.lex_state = 50},
  [534] = {.lex_state = 60},
  [535] = {.lex_state = 50},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 58},
  [538] = {.lex_state = 58},
  [539] = {.lex_state = 57},
  [540] = {.lex_state = 57},
  [541] = {.lex_state = 316},
  [542] = {.lex_state = 60},
  [543] = {.lex_state = 57},
  [544] = {.lex_state = 15},
  [545] = {.lex_state = 316},
  [546] = {.lex_state = 58},
  [547] = {.lex_state = 15},
  [548] = {.lex_state = 60},
  [549] = {.lex_state = 316},
  [550] = {.lex_state = 316},
  [551] = {.lex_state = 60},
  [552] = {.lex_state = 58},
  [553] = {.lex_state = 57},
  [554] = {.lex_state = 15},
  [555] = {.lex_state = 60},
  [556] = {.lex_state = 57},
  [557] = {.lex_state = 15},
  [558] = {.lex_state = 50},
  [559] = {.lex_state = 60},
  [560] = {.lex_state = 58},
  [561] = {.lex_state = 316},
  [562] = {.lex_state = 58},
  [563] = {.lex_state = 15},
  [564] = {.lex_state = 50},
  [565] = {.lex_state = 316},
  [566] = {.lex_state = 15},
  [567] = {.lex_state = 50},
  [568] = {.lex_state = 15},
  [569] = {.lex_state = 15},
  [570] = {.lex_state = 15},
  [571] = {.lex_state = 15},
  [572] = {.lex_state = 15},
  [573] = {.lex_state = 15},
  [574] = {.lex_state = 15},
  [575] = {.lex_state = 15},
  [576] = {.lex_state = 15},
  [577] = {.lex_state = 15},
  [578] = {.lex_state = 15},
  [579] = {.lex_state = 15},
  [580] = {.lex_state = 15},
  [581] = {.lex_state = 15},
  [582] = {.lex_state = 15},
  [583] = {.lex_state = 15},
  [584] = {.lex_state = 15},
  [585] = {.lex_state = 15},
  [586] = {.lex_state = 15},
  [587] = {.lex_state = 15},
  [588] = {.lex_state = 15},
  [589] = {.lex_state = 15},
  [590] = {.lex_state = 15},
  [591] = {.lex_state = 15},
  [592] = {.lex_state = 15},
  [593] = {.lex_state = 15},
  [594] = {.lex_state = 15},
  [595] = {.lex_state = 15},
  [596] = {.lex_state = 15},
  [597] = {.lex_state = 15},
  [598] = {.lex_state = 15},
  [599] = {.lex_state = 15},
  [600] = {.lex_state = 15},
  [601] = {.lex_state = 15},
  [602] = {.lex_state = 15},
  [603] = {.lex_state = 15},
  [604] = {.lex_state = 15},
  [605] = {.lex_state = 15},
  [606] = {.lex_state = 15},
  [607] = {.lex_state = 15},
  [608] = {.lex_state = 15},
  [609] = {.lex_state = 15},
  [610] = {.lex_state = 15},
  [611] = {.lex_state = 15},
  [612] = {.lex_state = 15},
  [613] = {.lex_state = 15},
  [614] = {.lex_state = 15},
  [615] = {.lex_state = 15},
  [616] = {.lex_state = 15},
  [617] = {.lex_state = 15},
  [618] = {.lex_state = 15},
  [619] = {.lex_state = 15},
  [620] = {.lex_state = 15},
  [621] = {.lex_state = 15},
  [622] = {.lex_state = 15},
  [623] = {.lex_state = 15},
  [624] = {.lex_state = 15},
  [625] = {.lex_state = 15},
  [626] = {.lex_state = 15},
  [627] = {.lex_state = 15},
  [628] = {.lex_state = 15},
  [629] = {.lex_state = 15},
  [630] = {.lex_state = 15},
  [631] = {.lex_state = 15},
  [632] = {.lex_state = 15},
  [633] = {.lex_state = 15},
  [634] = {.lex_state = 15},
  [635] = {.lex_state = 15},
  [636] = {.lex_state = 15},
  [637] = {.lex_state = 15},
  [638] = {.lex_state = 15},
  [639] = {.lex_state = 15},
  [640] = {.lex_state = 15},
  [641] = {.lex_state = 15},
  [642] = {.lex_state = 15},
  [643] = {.lex_state = 15},
  [644] = {.lex_state = 66},
  [645] = {.lex_state = 314},
  [646] = {.lex_state = 15},
  [647] = {.lex_state = 320},
  [648] = {.lex_state = 15},
  [649] = {.lex_state = 66},
  [650] = {.lex_state = 15},
  [651] = {.lex_state = 15},
  [652] = {.lex_state = 15},
  [653] = {.lex_state = 15},
  [654] = {.lex_state = 15},
  [655] = {.lex_state = 320},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 15},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 15},
  [660] = {.lex_state = 15},
  [661] = {.lex_state = 15},
  [662] = {.lex_state = 15},
  [663] = {.lex_state = 15},
  [664] = {.lex_state = 314},
  [665] = {.lex_state = 61},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 15},
  [668] = {.lex_state = 15},
  [669] = {.lex_state = 15},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 61},
  [673] = {.lex_state = 316},
  [674] = {.lex_state = 15},
  [675] = {.lex_state = 15},
  [676] = {.lex_state = 15},
  [677] = {.lex_state = 15},
  [678] = {.lex_state = 320},
  [679] = {.lex_state = 15},
  [680] = {.lex_state = 314},
  [681] = {.lex_state = 15},
  [682] = {.lex_state = 15},
  [683] = {.lex_state = 15},
  [684] = {.lex_state = 15},
  [685] = {.lex_state = 320},
  [686] = {.lex_state = 15},
  [687] = {.lex_state = 61},
  [688] = {.lex_state = 15},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 15},
  [691] = {.lex_state = 15},
  [692] = {.lex_state = 15},
  [693] = {.lex_state = 15},
  [694] = {.lex_state = 15},
  [695] = {.lex_state = 15},
  [696] = {.lex_state = 15},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 15},
  [699] = {.lex_state = 61},
  [700] = {.lex_state = 15},
  [701] = {.lex_state = 15},
  [702] = {.lex_state = 320},
  [703] = {.lex_state = 15},
  [704] = {.lex_state = 15},
  [705] = {.lex_state = 320},
  [706] = {.lex_state = 15},
  [707] = {.lex_state = 15},
  [708] = {.lex_state = 15},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 15},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 320},
  [713] = {.lex_state = 15},
  [714] = {.lex_state = 320},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 61},
  [717] = {.lex_state = 15},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 320},
  [720] = {.lex_state = 15},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 15},
  [723] = {.lex_state = 320},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 15},
  [726] = {.lex_state = 15},
  [727] = {.lex_state = 15},
  [728] = {.lex_state = 320},
  [729] = {.lex_state = 15},
  [730] = {.lex_state = 316},
  [731] = {.lex_state = 15},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 320},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 15},
  [736] = {.lex_state = 15},
  [737] = {.lex_state = 15},
  [738] = {.lex_state = 15},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 15},
  [741] = {.lex_state = 15},
  [742] = {.lex_state = 15},
  [743] = {.lex_state = 61},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 15},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 15},
  [750] = {.lex_state = 60},
  [751] = {.lex_state = 15},
  [752] = {.lex_state = 60},
  [753] = {.lex_state = 314},
  [754] = {.lex_state = 316},
  [755] = {.lex_state = 56},
  [756] = {.lex_state = 320, .external_lex_state = 3},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 56},
  [759] = {.lex_state = 320},
  [760] = {.lex_state = 56},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 56},
  [763] = {.lex_state = 61},
  [764] = {.lex_state = 319},
  [765] = {.lex_state = 319},
  [766] = {.lex_state = 319},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 15},
  [769] = {.lex_state = 320},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 320},
  [772] = {.lex_state = 51},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 61},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 51},
  [777] = {.lex_state = 320},
  [778] = {.lex_state = 67},
  [779] = {.lex_state = 67},
  [780] = {.lex_state = 67},
  [781] = {.lex_state = 320},
  [782] = {.lex_state = 67},
  [783] = {.lex_state = 54},
  [784] = {.lex_state = 68},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 53},
  [787] = {.lex_state = 53},
  [788] = {.lex_state = 53},
  [789] = {.lex_state = 67},
  [790] = {.lex_state = 67},
  [791] = {.lex_state = 67},
  [792] = {.lex_state = 320},
  [793] = {.lex_state = 320},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 320},
  [796] = {.lex_state = 53},
  [797] = {.lex_state = 68},
  [798] = {.lex_state = 54},
  [799] = {.lex_state = 67},
  [800] = {.lex_state = 320},
  [801] = {.lex_state = 67},
  [802] = {.lex_state = 67},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 23},
  [806] = {.lex_state = 23},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 320},
  [809] = {.lex_state = 67},
  [810] = {.lex_state = 67},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 23},
  [815] = {.lex_state = 23},
  [816] = {.lex_state = 54},
  [817] = {.lex_state = 316},
  [818] = {.lex_state = 54},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 67},
  [821] = {.lex_state = 320},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 23},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 316},
  [826] = {.lex_state = 67},
  [827] = {.lex_state = 67},
  [828] = {.lex_state = 320},
  [829] = {.lex_state = 53},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 68},
  [832] = {.lex_state = 54},
  [833] = {.lex_state = 67},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 54},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 67},
  [839] = {.lex_state = 68},
  [840] = {.lex_state = 54},
  [841] = {.lex_state = 23},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 54},
  [845] = {.lex_state = 320},
  [846] = {.lex_state = 23},
  [847] = {.lex_state = 68},
  [848] = {.lex_state = 54},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 54},
  [852] = {.lex_state = 68},
  [853] = {.lex_state = 54},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 54},
  [857] = {.lex_state = 68},
  [858] = {.lex_state = 54},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 54},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 67},
  [879] = {.lex_state = 23},
  [880] = {.lex_state = 23},
  [881] = {.lex_state = 320},
  [882] = {.lex_state = 67},
  [883] = {.lex_state = 23},
  [884] = {.lex_state = 23},
  [885] = {.lex_state = 23},
  [886] = {.lex_state = 23},
  [887] = {.lex_state = 23},
  [888] = {.lex_state = 23},
  [889] = {.lex_state = 23},
  [890] = {.lex_state = 316},
  [891] = {.lex_state = 23},
  [892] = {.lex_state = 316},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 54},
  [895] = {.lex_state = 53},
  [896] = {.lex_state = 68},
  [897] = {.lex_state = 11},
  [898] = {.lex_state = 12},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 23},
  [901] = {.lex_state = 23},
  [902] = {.lex_state = 53},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 11},
  [906] = {.lex_state = 53},
  [907] = {.lex_state = 23},
  [908] = {.lex_state = 23},
  [909] = {.lex_state = 23},
  [910] = {.lex_state = 23},
  [911] = {.lex_state = 12},
  [912] = {.lex_state = 0},
  [913] = {.lex_state = 316},
  [914] = {.lex_state = 23},
  [915] = {.lex_state = 316},
  [916] = {.lex_state = 67},
  [917] = {.lex_state = 67},
  [918] = {.lex_state = 23},
  [919] = {.lex_state = 53},
  [920] = {.lex_state = 11},
  [921] = {.lex_state = 12},
  [922] = {.lex_state = 0},
  [923] = {.lex_state = 53},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 0},
  [926] = {.lex_state = 316},
  [927] = {.lex_state = 23},
  [928] = {.lex_state = 11},
  [929] = {.lex_state = 12},
  [930] = {.lex_state = 23},
  [931] = {.lex_state = 11},
  [932] = {.lex_state = 12},
  [933] = {.lex_state = 11},
  [934] = {.lex_state = 12},
  [935] = {.lex_state = 11},
  [936] = {.lex_state = 12},
  [937] = {.lex_state = 11},
  [938] = {.lex_state = 12},
  [939] = {.lex_state = 11},
  [940] = {.lex_state = 12},
  [941] = {.lex_state = 11},
  [942] = {.lex_state = 12},
  [943] = {.lex_state = 11},
  [944] = {.lex_state = 12},
  [945] = {.lex_state = 11},
  [946] = {.lex_state = 12},
  [947] = {.lex_state = 11},
  [948] = {.lex_state = 12},
  [949] = {.lex_state = 11},
  [950] = {.lex_state = 12},
  [951] = {.lex_state = 11},
  [952] = {.lex_state = 12},
  [953] = {.lex_state = 11},
  [954] = {.lex_state = 12},
  [955] = {.lex_state = 320},
  [956] = {.lex_state = 320},
  [957] = {.lex_state = 0},
  [958] = {.lex_state = 320},
  [959] = {.lex_state = 0},
  [960] = {.lex_state = 320},
  [961] = {.lex_state = 320},
  [962] = {.lex_state = 320},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 67},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 320},
  [967] = {.lex_state = 67},
  [968] = {.lex_state = 316},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 0},
  [971] = {.lex_state = 54},
  [972] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PROJECT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_VERSION] = ACTIONS(1),
    [anon_sym_ARG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BUILD] = ACTIONS(1),
    [anon_sym_CACHE] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_FROMDOCKERFILE] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_GITCLONE] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSEIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_IMPORT] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_LOCALLY] = ACTIONS(1),
    [anon_sym_RUN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_SAVEARTIFACT] = ACTIONS(1),
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
    [sym_source_file] = STATE(924),
    [sym_project_command] = STATE(3),
    [sym_target] = STATE(702),
    [sym_version_command] = STATE(2),
    [sym_arg_command] = STATE(7),
    [sym_cache_command] = STATE(7),
    [sym_copy_command] = STATE(7),
    [sym_do_command] = STATE(7),
    [sym_for_command] = STATE(7),
    [sym_from_command] = STATE(7),
    [sym_from_dockerfile_command] = STATE(7),
    [sym_function_command] = STATE(7),
    [sym_git_clone_command] = STATE(7),
    [sym_if_command] = STATE(7),
    [sym_import_command] = STATE(7),
    [sym_let_command] = STATE(7),
    [sym_locally_command] = STATE(7),
    [sym_run_command] = STATE(7),
    [sym_save_artifact_command] = STATE(7),
    [sym_save_image_command] = STATE(7),
    [sym_set_command] = STATE(7),
    [sym_try_command] = STATE(7),
    [sym_wait_command] = STATE(7),
    [sym_with_docker_command] = STATE(7),
    [aux_sym__command_block] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(702),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_PROJECT] = ACTIONS(9),
    [anon_sym_VERSION] = ACTIONS(11),
    [anon_sym_ARG] = ACTIONS(13),
    [anon_sym_CACHE] = ACTIONS(15),
    [anon_sym_COPY] = ACTIONS(17),
    [anon_sym_DO] = ACTIONS(19),
    [anon_sym_FOR] = ACTIONS(21),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_FROMDOCKERFILE] = ACTIONS(25),
    [anon_sym_FUNCTION] = ACTIONS(27),
    [anon_sym_GITCLONE] = ACTIONS(29),
    [anon_sym_IF] = ACTIONS(31),
    [anon_sym_IMPORT] = ACTIONS(33),
    [anon_sym_LET] = ACTIONS(35),
    [anon_sym_LOCALLY] = ACTIONS(37),
    [anon_sym_RUN] = ACTIONS(39),
    [anon_sym_SAVEARTIFACT] = ACTIONS(41),
    [anon_sym_SAVEIMAGE] = ACTIONS(43),
    [anon_sym_SET] = ACTIONS(45),
    [anon_sym_TRY] = ACTIONS(47),
    [anon_sym_WAIT] = ACTIONS(49),
    [anon_sym_WITHDOCKER] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      anon_sym_PROJECT,
    ACTIONS(13), 1,
      anon_sym_ARG,
    ACTIONS(15), 1,
      anon_sym_CACHE,
    ACTIONS(17), 1,
      anon_sym_COPY,
    ACTIONS(19), 1,
      anon_sym_DO,
    ACTIONS(21), 1,
      anon_sym_FOR,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_FUNCTION,
    ACTIONS(29), 1,
      anon_sym_GITCLONE,
    ACTIONS(31), 1,
      anon_sym_IF,
    ACTIONS(33), 1,
      anon_sym_IMPORT,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_LOCALLY,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_project_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(647), 2,
      sym_target,
      aux_sym_source_file_repeat1,
    STATE(5), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [107] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(13), 1,
      anon_sym_ARG,
    ACTIONS(15), 1,
      anon_sym_CACHE,
    ACTIONS(17), 1,
      anon_sym_COPY,
    ACTIONS(19), 1,
      anon_sym_DO,
    ACTIONS(21), 1,
      anon_sym_FOR,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_FUNCTION,
    ACTIONS(29), 1,
      anon_sym_GITCLONE,
    ACTIONS(31), 1,
      anon_sym_IF,
    ACTIONS(33), 1,
      anon_sym_IMPORT,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_LOCALLY,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(647), 2,
      sym_target,
      aux_sym_source_file_repeat1,
    STATE(5), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [208] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(13), 1,
      anon_sym_ARG,
    ACTIONS(15), 1,
      anon_sym_CACHE,
    ACTIONS(17), 1,
      anon_sym_COPY,
    ACTIONS(19), 1,
      anon_sym_DO,
    ACTIONS(21), 1,
      anon_sym_FOR,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_FUNCTION,
    ACTIONS(29), 1,
      anon_sym_GITCLONE,
    ACTIONS(31), 1,
      anon_sym_IF,
    ACTIONS(33), 1,
      anon_sym_IMPORT,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_LOCALLY,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(723), 2,
      sym_target,
      aux_sym_source_file_repeat1,
    STATE(6), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [309] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(13), 1,
      anon_sym_ARG,
    ACTIONS(15), 1,
      anon_sym_CACHE,
    ACTIONS(17), 1,
      anon_sym_COPY,
    ACTIONS(19), 1,
      anon_sym_DO,
    ACTIONS(21), 1,
      anon_sym_FOR,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_FUNCTION,
    ACTIONS(29), 1,
      anon_sym_GITCLONE,
    ACTIONS(31), 1,
      anon_sym_IF,
    ACTIONS(33), 1,
      anon_sym_IMPORT,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_LOCALLY,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(723), 2,
      sym_target,
      aux_sym_source_file_repeat1,
    STATE(13), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [410] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(13), 1,
      anon_sym_ARG,
    ACTIONS(15), 1,
      anon_sym_CACHE,
    ACTIONS(17), 1,
      anon_sym_COPY,
    ACTIONS(19), 1,
      anon_sym_DO,
    ACTIONS(21), 1,
      anon_sym_FOR,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_FUNCTION,
    ACTIONS(29), 1,
      anon_sym_GITCLONE,
    ACTIONS(31), 1,
      anon_sym_IF,
    ACTIONS(33), 1,
      anon_sym_IMPORT,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_LOCALLY,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(685), 2,
      sym_target,
      aux_sym_source_file_repeat1,
    STATE(13), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [511] = 26,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(13), 1,
      anon_sym_ARG,
    ACTIONS(15), 1,
      anon_sym_CACHE,
    ACTIONS(17), 1,
      anon_sym_COPY,
    ACTIONS(19), 1,
      anon_sym_DO,
    ACTIONS(21), 1,
      anon_sym_FOR,
    ACTIONS(23), 1,
      anon_sym_FROM,
    ACTIONS(25), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(27), 1,
      anon_sym_FUNCTION,
    ACTIONS(29), 1,
      anon_sym_GITCLONE,
    ACTIONS(31), 1,
      anon_sym_IF,
    ACTIONS(33), 1,
      anon_sym_IMPORT,
    ACTIONS(35), 1,
      anon_sym_LET,
    ACTIONS(37), 1,
      anon_sym_LOCALLY,
    ACTIONS(39), 1,
      anon_sym_RUN,
    ACTIONS(41), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(43), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(45), 1,
      anon_sym_SET,
    ACTIONS(47), 1,
      anon_sym_TRY,
    ACTIONS(49), 1,
      anon_sym_WAIT,
    ACTIONS(51), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(647), 2,
      sym_target,
      aux_sym_source_file_repeat1,
    STATE(13), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [612] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(83), 1,
      anon_sym_ELSE,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(93), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(95), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(71), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(9), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [710] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(93), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(95), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(107), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(105), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(12), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [808] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(93), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(95), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(111), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(109), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(11), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [906] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(93), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(95), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(115), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(113), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(12), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1004] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(117), 1,
      anon_sym_ARG,
    ACTIONS(120), 1,
      anon_sym_CACHE,
    ACTIONS(123), 1,
      anon_sym_COPY,
    ACTIONS(126), 1,
      anon_sym_DO,
    ACTIONS(129), 1,
      anon_sym_FOR,
    ACTIONS(134), 1,
      anon_sym_FROM,
    ACTIONS(137), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(140), 1,
      anon_sym_FUNCTION,
    ACTIONS(143), 1,
      anon_sym_GITCLONE,
    ACTIONS(146), 1,
      anon_sym_IF,
    ACTIONS(149), 1,
      anon_sym_ELSE,
    ACTIONS(151), 1,
      anon_sym_IMPORT,
    ACTIONS(154), 1,
      anon_sym_LET,
    ACTIONS(157), 1,
      anon_sym_LOCALLY,
    ACTIONS(160), 1,
      anon_sym_RUN,
    ACTIONS(163), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(166), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(169), 1,
      anon_sym_SET,
    ACTIONS(172), 1,
      anon_sym_TRY,
    ACTIONS(175), 1,
      anon_sym_WAIT,
    ACTIONS(178), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(132), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
    STATE(12), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1102] = 25,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_ARG,
    ACTIONS(184), 1,
      anon_sym_CACHE,
    ACTIONS(187), 1,
      anon_sym_COPY,
    ACTIONS(190), 1,
      anon_sym_DO,
    ACTIONS(193), 1,
      anon_sym_FOR,
    ACTIONS(196), 1,
      anon_sym_FROM,
    ACTIONS(199), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(202), 1,
      anon_sym_FUNCTION,
    ACTIONS(205), 1,
      anon_sym_GITCLONE,
    ACTIONS(208), 1,
      anon_sym_IF,
    ACTIONS(211), 1,
      anon_sym_IMPORT,
    ACTIONS(214), 1,
      anon_sym_LET,
    ACTIONS(217), 1,
      anon_sym_LOCALLY,
    ACTIONS(220), 1,
      anon_sym_RUN,
    ACTIONS(223), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(226), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(229), 1,
      anon_sym_SET,
    ACTIONS(232), 1,
      anon_sym_TRY,
    ACTIONS(235), 1,
      anon_sym_WAIT,
    ACTIONS(238), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(13), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1199] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(241), 1,
      anon_sym_END,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1293] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(247), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(249), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(251), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(39), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1387] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(253), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(25), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1481] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(247), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(249), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(255), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(20), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1575] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(247), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(249), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(257), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1669] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(247), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(249), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(259), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(18), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1763] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(247), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(249), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(261), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1857] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(263), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [1951] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(265), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(21), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2045] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(267), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2139] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(269), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2233] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(271), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2327] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(273), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(41), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2421] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      anon_sym_ARG,
    ACTIONS(277), 1,
      anon_sym_CACHE,
    ACTIONS(279), 1,
      anon_sym_COPY,
    ACTIONS(281), 1,
      anon_sym_DO,
    ACTIONS(283), 1,
      anon_sym_FOR,
    ACTIONS(285), 1,
      anon_sym_FROM,
    ACTIONS(287), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(289), 1,
      anon_sym_FUNCTION,
    ACTIONS(291), 1,
      anon_sym_GITCLONE,
    ACTIONS(293), 1,
      anon_sym_IF,
    ACTIONS(295), 1,
      anon_sym_IMPORT,
    ACTIONS(297), 1,
      anon_sym_LET,
    ACTIONS(299), 1,
      anon_sym_LOCALLY,
    ACTIONS(301), 1,
      anon_sym_RUN,
    ACTIONS(303), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(305), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(307), 1,
      anon_sym_SET,
    ACTIONS(309), 1,
      anon_sym_TRY,
    ACTIONS(311), 1,
      anon_sym_WAIT,
    ACTIONS(313), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(315), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(59), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2515] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    STATE(819), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2609] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(275), 1,
      anon_sym_ARG,
    ACTIONS(277), 1,
      anon_sym_CACHE,
    ACTIONS(279), 1,
      anon_sym_COPY,
    ACTIONS(281), 1,
      anon_sym_DO,
    ACTIONS(283), 1,
      anon_sym_FOR,
    ACTIONS(285), 1,
      anon_sym_FROM,
    ACTIONS(287), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(289), 1,
      anon_sym_FUNCTION,
    ACTIONS(291), 1,
      anon_sym_GITCLONE,
    ACTIONS(293), 1,
      anon_sym_IF,
    ACTIONS(295), 1,
      anon_sym_IMPORT,
    ACTIONS(297), 1,
      anon_sym_LET,
    ACTIONS(299), 1,
      anon_sym_LOCALLY,
    ACTIONS(301), 1,
      anon_sym_RUN,
    ACTIONS(303), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(305), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(307), 1,
      anon_sym_SET,
    ACTIONS(309), 1,
      anon_sym_TRY,
    ACTIONS(311), 1,
      anon_sym_WAIT,
    ACTIONS(313), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(317), 1,
      sym__dedent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(27), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2703] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(319), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2797] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    STATE(807), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2891] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    STATE(925), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [2985] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(321), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(24), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3079] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(323), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(30), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3173] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(117), 1,
      anon_sym_ARG,
    ACTIONS(120), 1,
      anon_sym_CACHE,
    ACTIONS(123), 1,
      anon_sym_COPY,
    ACTIONS(126), 1,
      anon_sym_DO,
    ACTIONS(129), 1,
      anon_sym_FOR,
    ACTIONS(132), 1,
      anon_sym_FINALLY,
    ACTIONS(134), 1,
      anon_sym_FROM,
    ACTIONS(137), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(140), 1,
      anon_sym_FUNCTION,
    ACTIONS(143), 1,
      anon_sym_GITCLONE,
    ACTIONS(146), 1,
      anon_sym_IF,
    ACTIONS(151), 1,
      anon_sym_IMPORT,
    ACTIONS(154), 1,
      anon_sym_LET,
    ACTIONS(157), 1,
      anon_sym_LOCALLY,
    ACTIONS(160), 1,
      anon_sym_RUN,
    ACTIONS(169), 1,
      anon_sym_SET,
    ACTIONS(172), 1,
      anon_sym_TRY,
    ACTIONS(175), 1,
      anon_sym_WAIT,
    ACTIONS(178), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(325), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(328), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3267] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(331), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3361] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(333), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(36), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3455] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(335), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(42), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3549] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(247), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(249), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(337), 1,
      anon_sym_FINALLY,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(35), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3643] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(339), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(51), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3737] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(341), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3831] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(343), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [3925] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(345), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(46), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4019] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    STATE(811), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4113] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(347), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(52), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4207] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(349), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4301] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(351), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(57), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4395] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    STATE(830), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4489] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(117), 1,
      anon_sym_ARG,
    ACTIONS(120), 1,
      anon_sym_CACHE,
    ACTIONS(123), 1,
      anon_sym_COPY,
    ACTIONS(126), 1,
      anon_sym_DO,
    ACTIONS(129), 1,
      anon_sym_FOR,
    ACTIONS(132), 1,
      anon_sym_END,
    ACTIONS(134), 1,
      anon_sym_FROM,
    ACTIONS(137), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(140), 1,
      anon_sym_FUNCTION,
    ACTIONS(143), 1,
      anon_sym_GITCLONE,
    ACTIONS(146), 1,
      anon_sym_IF,
    ACTIONS(151), 1,
      anon_sym_IMPORT,
    ACTIONS(154), 1,
      anon_sym_LET,
    ACTIONS(157), 1,
      anon_sym_LOCALLY,
    ACTIONS(160), 1,
      anon_sym_RUN,
    ACTIONS(169), 1,
      anon_sym_SET,
    ACTIONS(172), 1,
      anon_sym_TRY,
    ACTIONS(175), 1,
      anon_sym_WAIT,
    ACTIONS(178), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(353), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(356), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4583] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(359), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(23), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4677] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(361), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4771] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(363), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4865] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(365), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(58), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [4959] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(367), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(14), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5053] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(369), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5147] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(371), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5241] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(373), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5335] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(375), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(49), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5429] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(132), 1,
      sym__dedent,
    ACTIONS(377), 1,
      anon_sym_ARG,
    ACTIONS(380), 1,
      anon_sym_CACHE,
    ACTIONS(383), 1,
      anon_sym_COPY,
    ACTIONS(386), 1,
      anon_sym_DO,
    ACTIONS(389), 1,
      anon_sym_FOR,
    ACTIONS(392), 1,
      anon_sym_FROM,
    ACTIONS(395), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(398), 1,
      anon_sym_FUNCTION,
    ACTIONS(401), 1,
      anon_sym_GITCLONE,
    ACTIONS(404), 1,
      anon_sym_IF,
    ACTIONS(407), 1,
      anon_sym_IMPORT,
    ACTIONS(410), 1,
      anon_sym_LET,
    ACTIONS(413), 1,
      anon_sym_LOCALLY,
    ACTIONS(416), 1,
      anon_sym_RUN,
    ACTIONS(419), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(422), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(425), 1,
      anon_sym_SET,
    ACTIONS(428), 1,
      anon_sym_TRY,
    ACTIONS(431), 1,
      anon_sym_WAIT,
    ACTIONS(434), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(59), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5523] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    ACTIONS(437), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(56), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5617] = 24,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(61), 1,
      anon_sym_ARG,
    ACTIONS(63), 1,
      anon_sym_CACHE,
    ACTIONS(65), 1,
      anon_sym_COPY,
    ACTIONS(67), 1,
      anon_sym_DO,
    ACTIONS(69), 1,
      anon_sym_FOR,
    ACTIONS(73), 1,
      anon_sym_FROM,
    ACTIONS(75), 1,
      anon_sym_FROMDOCKERFILE,
    ACTIONS(77), 1,
      anon_sym_FUNCTION,
    ACTIONS(79), 1,
      anon_sym_GITCLONE,
    ACTIONS(81), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_IMPORT,
    ACTIONS(87), 1,
      anon_sym_LET,
    ACTIONS(89), 1,
      anon_sym_LOCALLY,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(97), 1,
      anon_sym_SET,
    ACTIONS(99), 1,
      anon_sym_TRY,
    ACTIONS(101), 1,
      anon_sym_WAIT,
    ACTIONS(103), 1,
      anon_sym_WITHDOCKER,
    ACTIONS(243), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(245), 1,
      anon_sym_SAVEIMAGE,
    STATE(972), 1,
      sym_else_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(55), 21,
      sym_arg_command,
      sym_cache_command,
      sym_copy_command,
      sym_do_command,
      sym_for_command,
      sym_from_command,
      sym_from_dockerfile_command,
      sym_function_command,
      sym_git_clone_command,
      sym_if_command,
      sym_import_command,
      sym_let_command,
      sym_locally_command,
      sym_run_command,
      sym_save_artifact_command,
      sym_save_image_command,
      sym_set_command,
      sym_try_command,
      sym_wait_command,
      sym_with_docker_command,
      aux_sym__command_block,
  [5711] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(443), 1,
      anon_sym_COLON2,
    ACTIONS(445), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(441), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(439), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5759] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(451), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(449), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(447), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5804] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      sym_image_name,
    ACTIONS(459), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(461), 1,
      sym_cache_hint,
    ACTIONS(463), 1,
      sym_push,
    STATE(65), 1,
      aux_sym_save_image_command_repeat1,
    STATE(98), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(89), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(455), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(453), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5861] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      sym_image_name,
    ACTIONS(459), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(463), 1,
      sym_push,
    STATE(75), 1,
      aux_sym_save_image_command_repeat1,
    STATE(98), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(94), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(467), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(465), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [5915] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(471), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(469), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [5957] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      sym_image_name,
    ACTIONS(475), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(477), 1,
      sym_cache_hint,
    ACTIONS(479), 1,
      sym_push,
    STATE(72), 1,
      aux_sym_save_image_command_repeat1,
    STATE(104), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(102), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(455), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(453), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [6013] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(483), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(481), 28,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6055] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      sym_cache_hint,
    ACTIONS(485), 1,
      sym_image_name,
    ACTIONS(487), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(489), 1,
      sym_push,
    STATE(76), 1,
      aux_sym_save_image_command_repeat1,
    STATE(210), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(209), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(455), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(453), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6110] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(461), 1,
      sym_cache_hint,
    ACTIONS(491), 1,
      sym_image_name,
    ACTIONS(493), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(495), 1,
      sym_push,
    STATE(73), 1,
      aux_sym_save_image_command_repeat1,
    STATE(145), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(144), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(455), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(453), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6165] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      sym_image_name,
    ACTIONS(499), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(501), 1,
      sym_cache_hint,
    ACTIONS(503), 1,
      sym_push,
    STATE(74), 1,
      aux_sym_save_image_command_repeat1,
    STATE(217), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(218), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(455), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(453), 15,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6220] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      sym_image_name,
    ACTIONS(475), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(479), 1,
      sym_push,
    STATE(80), 1,
      aux_sym_save_image_command_repeat1,
    STATE(104), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(108), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(465), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [6273] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      sym_image_name,
    ACTIONS(493), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(495), 1,
      sym_push,
    STATE(87), 1,
      aux_sym_save_image_command_repeat1,
    STATE(145), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(137), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(467), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(465), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [6325] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      sym_image_name,
    ACTIONS(499), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(503), 1,
      sym_push,
    STATE(88), 1,
      aux_sym_save_image_command_repeat1,
    STATE(217), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(219), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(467), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(465), 15,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6377] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(509), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(512), 1,
      sym_push,
    STATE(75), 1,
      aux_sym_save_image_command_repeat1,
    STATE(98), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(505), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [6425] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      sym_image_name,
    ACTIONS(487), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(489), 1,
      sym_push,
    STATE(90), 1,
      aux_sym_save_image_command_repeat1,
    STATE(210), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(200), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(467), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(465), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [6477] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(517), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(82), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(515), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6520] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(523), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(83), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(521), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6563] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(527), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(83), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(525), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6606] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(529), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(532), 1,
      sym_push,
    STATE(80), 1,
      aux_sym_save_image_command_repeat1,
    STATE(104), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(505), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [6653] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(537), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(83), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(535), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6696] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(541), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(83), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(539), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6739] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(547), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(545), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(83), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(543), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6782] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(79), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(550), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6825] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(556), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(81), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(554), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6868] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(519), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(560), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    STATE(78), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(558), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [6911] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(562), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(565), 1,
      sym_push,
    STATE(87), 1,
      aux_sym_save_image_command_repeat1,
    STATE(145), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(505), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [6957] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(568), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(571), 1,
      sym_push,
    STATE(88), 1,
      aux_sym_save_image_command_repeat1,
    STATE(217), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(505), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7003] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(576), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(574), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7045] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(578), 1,
      anon_sym_DASH_DASHcache_DASHfrom,
    ACTIONS(581), 1,
      sym_push,
    STATE(90), 1,
      aux_sym_save_image_command_repeat1,
    STATE(210), 1,
      sym_cache_from,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(507), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(505), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7091] = 3,
    ACTIONS(586), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(584), 25,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
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
  [7127] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(588), 1,
      anon_sym_COLON2,
    ACTIONS(590), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7169] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(592), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_RPAREN,
    ACTIONS(545), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7211] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(457), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(597), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(595), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7253] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(603), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(95), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(601), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(599), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7295] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(606), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7333] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(610), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7371] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(614), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7409] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 8,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(618), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [7447] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(105), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(558), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(560), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7488] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(628), 1,
      anon_sym_ASLOCAL,
    ACTIONS(630), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(624), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [7529] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(107), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(576), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(574), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7570] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(634), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(632), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7607] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 8,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(614), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [7644] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(521), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(523), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7685] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(125), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(550), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(552), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7726] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(636), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(107), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(601), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(599), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7767] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(473), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(107), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(597), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(595), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7808] = 4,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
    ACTIONS(641), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(584), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
  [7845] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(647), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(645), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(643), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [7884] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(539), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(541), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7925] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(535), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(537), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [7966] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(612), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8003] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(651), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(649), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8040] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(655), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(653), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8077] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(657), 1,
      anon_sym_COLON2,
    ACTIONS(659), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [8118] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(661), 1,
      anon_sym_COLON2,
    ACTIONS(663), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [8159] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 8,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(610), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [8196] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(665), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(449), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8235] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(620), 23,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8272] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 8,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(606), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [8309] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(618), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [8346] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      anon_sym_ASLOCAL,
    ACTIONS(673), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(669), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(667), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [8387] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(112), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(554), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(556), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [8428] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(525), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(527), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [8469] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(679), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(677), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(675), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [8508] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(111), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(515), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(517), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [8549] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(681), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(449), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [8587] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(683), 1,
      anon_sym_ASLOCAL,
    ACTIONS(685), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(624), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [8627] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(606), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8663] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(649), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
    ACTIONS(651), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [8699] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(537), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(535), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8739] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(541), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(539), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8779] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(545), 1,
      anon_sym_FROM,
    ACTIONS(689), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(543), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [8819] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(610), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [8855] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(692), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(136), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(601), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(599), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [8895] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(136), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(597), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(595), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [8935] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(618), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [8971] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(556), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(132), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(554), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(610), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [9047] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(527), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(525), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9087] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(517), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(133), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(515), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9127] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(523), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(134), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(521), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9167] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(491), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(136), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(576), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(574), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [9207] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(614), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [9243] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(618), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [9279] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(141), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(550), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9319] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(560), 1,
      anon_sym_FROM,
    ACTIONS(687), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(143), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
    ACTIONS(558), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [9359] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(697), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(695), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9395] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(701), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(699), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9431] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(705), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(703), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9467] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(709), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(707), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9503] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(713), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(711), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9539] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(717), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(715), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9575] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(721), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(719), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9611] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(725), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(723), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9647] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(729), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(727), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9683] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(733), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(731), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9719] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(737), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(735), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9755] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(741), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(739), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9791] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(745), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(743), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9827] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(749), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(747), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9863] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(753), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(751), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9899] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 8,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(610), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [9935] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(757), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(755), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [9971] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(761), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(759), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10007] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(765), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(763), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10043] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(769), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(767), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10079] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(771), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(449), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [10117] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(775), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(773), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10153] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(779), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(777), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10189] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(783), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(781), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10225] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(787), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(785), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10261] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(791), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(789), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10297] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(795), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(793), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10333] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(799), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(797), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10369] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(803), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(801), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10405] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(807), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(805), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10441] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(811), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(809), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10477] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(815), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(813), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10513] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(819), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(817), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10549] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(823), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(821), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10585] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(606), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [10621] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(827), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(825), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10657] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(618), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [10693] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(618), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [10729] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(831), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(829), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10765] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(833), 1,
      anon_sym_COLON2,
    ACTIONS(835), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [10805] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(839), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(837), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10841] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(843), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(841), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10877] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(847), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(845), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10913] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(851), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(849), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10949] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(855), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(853), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [10985] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(610), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [11021] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(859), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(857), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11057] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(863), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(861), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11093] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(867), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(865), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11129] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(871), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(869), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11165] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(873), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(601), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(599), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [11205] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(597), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(595), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [11245] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(876), 1,
      anon_sym_COLON2,
    ACTIONS(878), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [11285] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(882), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(880), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11321] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(886), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(884), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11357] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(888), 1,
      anon_sym_ASLOCAL,
    ACTIONS(890), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(669), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(667), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [11397] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(894), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(892), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11433] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(898), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(896), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11469] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(902), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(900), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11505] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(483), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [11541] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(485), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(199), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(576), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(574), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [11581] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 7,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(614), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [11617] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(906), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(904), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11653] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 6,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_ELSEIF,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(471), 18,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [11689] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(910), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(908), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11725] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(914), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(912), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11761] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(552), 2,
      anon_sym_FROM,
      anon_sym_ELSE,
    ACTIONS(550), 22,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_ELSEIF,
      anon_sym_IMPORT,
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
  [11797] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(916), 1,
      anon_sym_COLON2,
    ACTIONS(918), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(441), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [11837] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(616), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(614), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [11873] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(220), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(576), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(574), 15,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [11913] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(497), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(220), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(597), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(595), 15,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [11953] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(920), 1,
      sym_image_name,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(220), 2,
      sym_image_spec,
      aux_sym_save_image_command_repeat2,
    ACTIONS(601), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(599), 15,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [11993] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(653), 8,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_RPAREN,
      anon_sym_DASH_DASH2,
    ACTIONS(655), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12029] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(608), 8,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASHcache_DASHfrom,
      sym_push,
    ACTIONS(606), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [12065] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(483), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12100] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(923), 1,
      anon_sym_ASLOCAL,
    ACTIONS(925), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(669), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(667), 15,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [12139] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(927), 1,
      anon_sym_ASLOCAL,
    ACTIONS(929), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(624), 15,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [12178] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(931), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(449), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [12215] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      anon_sym_ASLOCAL,
    ACTIONS(673), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(669), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(667), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [12254] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(933), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(935), 17,
      anon_sym_PROJECT,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12289] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(937), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(449), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [12326] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(441), 1,
      anon_sym_FROM,
    ACTIONS(939), 1,
      anon_sym_COLON2,
    ACTIONS(941), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(439), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [12365] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(628), 1,
      anon_sym_ASLOCAL,
    ACTIONS(630), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(624), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
  [12404] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(943), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(449), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [12441] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(471), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [12476] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(945), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(643), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(645), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12513] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(947), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(949), 17,
      anon_sym_PROJECT,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12548] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(471), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12583] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(483), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
      sym_image_name,
  [12618] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(671), 1,
      anon_sym_ASLOCAL,
    ACTIONS(673), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(669), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(667), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [12657] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(632), 7,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
      anon_sym_DASH_DASH2,
    ACTIONS(634), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12692] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(628), 1,
      anon_sym_ASLOCAL,
    ACTIONS(630), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(626), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(624), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
  [12731] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(951), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(675), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(677), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12768] = 4,
    ACTIONS(639), 1,
      sym__dedent,
    ACTIONS(953), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(584), 21,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [12803] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(731), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(733), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12837] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(759), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(761), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12871] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(880), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(882), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12905] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(845), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(847), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12939] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(869), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(871), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [12973] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(677), 1,
      anon_sym_FROM,
    ACTIONS(955), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(675), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [13009] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(884), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(886), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13043] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(900), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(902), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13077] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(471), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [13111] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(908), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(910), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13145] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(651), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(649), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [13179] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(892), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(894), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13213] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(896), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(898), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13247] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [13281] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(841), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(843), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13315] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [13349] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(837), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(839), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13383] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(483), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_END,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [13417] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(829), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(831), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13451] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(825), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(827), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13485] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(865), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(867), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13519] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(655), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(653), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [13553] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(849), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(851), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13587] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(695), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(697), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13621] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(699), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(701), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13655] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(861), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(863), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13689] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(703), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(705), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13723] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(821), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(823), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13757] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(707), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(709), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13791] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(853), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(855), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13825] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(711), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(713), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13859] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(715), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(717), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13893] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(817), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(819), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13927] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(719), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(721), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13961] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(723), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(725), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [13995] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(729), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14029] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(957), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(959), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14063] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(813), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(815), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14097] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(735), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(737), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14131] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(471), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [14165] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(809), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(811), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14199] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 5,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(483), 17,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_FINALLY,
      anon_sym_WAIT,
      sym_image_name,
  [14233] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(739), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(741), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14267] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(743), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(745), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14301] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(805), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(807), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14335] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(904), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(906), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14369] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(481), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(483), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [14403] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(552), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14437] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(634), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(632), 21,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
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
  [14471] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(449), 1,
      anon_sym_FROM,
    ACTIONS(961), 1,
      anon_sym_AT,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(447), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [14507] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(767), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(769), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14541] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(755), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(757), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14575] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(912), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(914), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14609] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(857), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(859), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14643] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(801), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(803), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14677] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(747), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(749), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14711] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(797), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(799), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14745] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(469), 6,
      sym__dedent,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(471), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_image_name,
  [14779] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(751), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(753), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14813] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(793), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(795), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14847] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(645), 1,
      anon_sym_FROM,
    ACTIONS(963), 1,
      anon_sym_ASLOCAL,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(643), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [14883] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(789), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(791), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14917] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(787), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14951] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(781), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(783), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [14985] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(777), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(779), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [15019] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(763), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(765), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [15053] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(773), 6,
      ts_builtin_sym_end,
      anon_sym_FROMDOCKERFILE,
      anon_sym_GITCLONE,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_WITHDOCKER,
    ACTIONS(775), 16,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROM,
      anon_sym_FUNCTION,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      sym_identifier,
  [15087] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(898), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(896), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15120] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(729), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(727), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15153] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(791), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(789), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15186] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(811), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(809), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15219] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(697), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(695), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15252] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(815), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(813), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15285] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(701), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(699), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15318] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(871), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(869), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15351] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(705), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(703), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15384] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(827), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(825), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15417] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(775), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(773), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15450] = 4,
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
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15483] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(795), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(793), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15516] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(709), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(707), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15549] = 4,
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
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15582] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(882), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(880), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15615] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(819), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(817), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15648] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(713), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(711), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15681] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(886), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(884), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15714] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(823), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(821), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15747] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(769), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(767), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15780] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(717), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(715), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15813] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(894), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(892), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15846] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(721), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(719), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [15879] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(967), 1,
      sym_path,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    STATE(371), 1,
      aux_sym_copy_command_repeat1,
    STATE(461), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(393), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(971), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [15932] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(967), 1,
      sym_path,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    STATE(368), 1,
      aux_sym_copy_command_repeat1,
    STATE(453), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(393), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(971), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [15985] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(967), 1,
      sym_path,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    STATE(349), 1,
      aux_sym_copy_command_repeat1,
    STATE(491), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(393), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(971), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [16038] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(725), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(723), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16071] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(867), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(865), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16104] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(863), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(861), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16137] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(787), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(785), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16170] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(733), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(731), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16203] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(902), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(900), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16236] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(737), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(735), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16269] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(765), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(763), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16302] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(967), 1,
      sym_path,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    STATE(334), 1,
      aux_sym_copy_command_repeat1,
    STATE(476), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(393), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(971), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [16355] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(741), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(739), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16388] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(859), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(857), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16421] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(745), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(743), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16454] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(967), 1,
      sym_path,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    STATE(371), 1,
      aux_sym_copy_command_repeat1,
    STATE(463), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(393), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(971), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [16507] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(749), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(747), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16540] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(831), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(829), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16573] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(753), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(751), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16606] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(799), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(797), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16639] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(839), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(837), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16672] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(757), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(755), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16705] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(855), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(853), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16738] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(906), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(904), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16771] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(779), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(777), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16804] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(851), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(849), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16837] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(807), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(805), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16870] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(847), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(845), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16903] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(783), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(781), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16936] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(803), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(801), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [16969] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(761), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(759), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [17002] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(843), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(841), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [17035] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(910), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(908), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [17068] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(914), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(912), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [17101] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(967), 1,
      sym_path,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(975), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    STATE(371), 1,
      aux_sym_copy_command_repeat1,
    STATE(472), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
    STATE(393), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(971), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [17154] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(552), 1,
      anon_sym_FROM,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(550), 20,
      sym__dedent,
      anon_sym_ARG,
      anon_sym_CACHE,
      anon_sym_COPY,
      anon_sym_DO,
      anon_sym_FOR,
      anon_sym_FROMDOCKERFILE,
      anon_sym_FUNCTION,
      anon_sym_GITCLONE,
      anon_sym_IF,
      anon_sym_IMPORT,
      anon_sym_LET,
      anon_sym_LOCALLY,
      anon_sym_RUN,
      anon_sym_SAVEARTIFACT,
      anon_sym_SAVEIMAGE,
      anon_sym_SET,
      anon_sym_TRY,
      anon_sym_WAIT,
      anon_sym_WITHDOCKER,
  [17187] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(979), 1,
      anon_sym_DASH_DASH,
    ACTIONS(983), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHsecret,
    STATE(377), 1,
      aux_sym_run_command_repeat1,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(572), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(981), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(402), 2,
      sym_mount,
      sym_secret,
    ACTIONS(985), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [17232] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(993), 1,
      sym_path,
    ACTIONS(998), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1001), 1,
      anon_sym_DASH_DASHchown,
    ACTIONS(1004), 1,
      anon_sym_DASH_DASHplatform,
    STATE(371), 1,
      aux_sym_copy_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(991), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
    STATE(393), 3,
      sym_chmod,
      sym_chown,
      sym_platform,
    ACTIONS(995), 7,
      sym_allow_privileged,
      sym_dir,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_pass_args,
      sym_symlink_no_follow,
  [17273] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(983), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1007), 1,
      anon_sym_DASH_DASH,
    STATE(377), 1,
      aux_sym_run_command_repeat1,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(741), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(981), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(402), 2,
      sym_mount,
      sym_secret,
    ACTIONS(985), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [17318] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(983), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1009), 1,
      anon_sym_DASH_DASH,
    STATE(372), 1,
      aux_sym_run_command_repeat1,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(745), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(981), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(402), 2,
      sym_mount,
      sym_secret,
    ACTIONS(985), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [17363] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(983), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1011), 1,
      anon_sym_DASH_DASH,
    STATE(370), 1,
      aux_sym_run_command_repeat1,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(595), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(981), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(402), 2,
      sym_mount,
      sym_secret,
    ACTIONS(985), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [17408] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(983), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1013), 1,
      anon_sym_DASH_DASH,
    STATE(376), 1,
      aux_sym_run_command_repeat1,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(642), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(981), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(402), 2,
      sym_mount,
      sym_secret,
    ACTIONS(985), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [17453] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(983), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(987), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(989), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1015), 1,
      anon_sym_DASH_DASH,
    STATE(377), 1,
      aux_sym_run_command_repeat1,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(635), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(981), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(402), 2,
      sym_mount,
      sym_secret,
    ACTIONS(985), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [17498] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1024), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1027), 1,
      anon_sym_DASH_DASHsecret,
    STATE(377), 1,
      aux_sym_run_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1017), 2,
      anon_sym_DASH_DASH,
      aux_sym_shell_fragment_token2,
    ACTIONS(1019), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    STATE(402), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1021), 6,
      sym_entrypoint,
      sym_network_none,
      sym_no_cache,
      sym_privileged,
      sym_push,
      sym_ssh,
  [17535] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(1030), 1,
      sym_allow_privileged,
    ACTIONS(1032), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(1034), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(1036), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1038), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(1040), 1,
      anon_sym_DASH_DASHservice,
    STATE(382), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(803), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [17577] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(1030), 1,
      sym_allow_privileged,
    ACTIONS(1032), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(1034), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(1036), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1038), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(1040), 1,
      anon_sym_DASH_DASHservice,
    STATE(386), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(804), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [17619] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(1030), 1,
      sym_allow_privileged,
    ACTIONS(1032), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(1034), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(1036), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1038), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(1040), 1,
      anon_sym_DASH_DASHservice,
    STATE(379), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(794), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [17661] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(1030), 1,
      sym_allow_privileged,
    ACTIONS(1032), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(1034), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(1036), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1038), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(1040), 1,
      anon_sym_DASH_DASHservice,
    STATE(383), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(904), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [17703] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(1030), 1,
      sym_allow_privileged,
    ACTIONS(1032), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(1034), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(1036), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1038), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(1040), 1,
      anon_sym_DASH_DASHservice,
    STATE(386), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(903), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [17745] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(91), 1,
      anon_sym_RUN,
    ACTIONS(1030), 1,
      sym_allow_privileged,
    ACTIONS(1032), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(1034), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(1036), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1038), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(1040), 1,
      anon_sym_DASH_DASHservice,
    STATE(386), 1,
      aux_sym_with_docker_command_repeat1,
    STATE(837), 1,
      sym_run_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [17787] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 12,
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
  [17812] = 10,
    ACTIONS(1042), 1,
      anon_sym_PLUS,
    ACTIONS(1044), 1,
      sym_image_name,
    ACTIONS(1048), 1,
      anon_sym_DASH_DASHplatform,
    STATE(106), 1,
      sym_target_ref,
    STATE(478), 1,
      aux_sym_from_command_repeat1,
    STATE(730), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1046), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(290), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(1050), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17849] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1052), 1,
      anon_sym_RUN,
    ACTIONS(1054), 1,
      sym_allow_privileged,
    ACTIONS(1057), 1,
      anon_sym_DASH_DASHcompose,
    ACTIONS(1060), 1,
      anon_sym_DASH_DASHload,
    ACTIONS(1063), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1066), 1,
      anon_sym_DASH_DASHpull,
    ACTIONS(1069), 1,
      anon_sym_DASH_DASHservice,
    STATE(386), 1,
      aux_sym_with_docker_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(487), 5,
      sym_compose,
      sym_load,
      sym_platform,
      sym_pull,
      sym_service,
  [17888] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1074), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1072), 12,
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
  [17913] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 12,
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
  [17938] = 10,
    ACTIONS(1048), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1076), 1,
      anon_sym_PLUS,
    ACTIONS(1078), 1,
      sym_image_name,
    STATE(147), 1,
      sym_target_ref,
    STATE(444), 1,
      aux_sym_from_command_repeat1,
    STATE(730), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1046), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(369), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(1080), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [17975] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1084), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1082), 12,
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
  [18000] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1088), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1086), 12,
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
  [18025] = 10,
    ACTIONS(1048), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1090), 1,
      anon_sym_PLUS,
    ACTIONS(1092), 1,
      sym_image_name,
    STATE(84), 1,
      sym_target_ref,
    STATE(488), 1,
      aux_sym_from_command_repeat1,
    STATE(730), 1,
      sym_platform,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1046), 2,
      sym_allow_privileged,
      sym_pass_args,
    STATE(215), 2,
      sym_image_spec,
      sym__eol,
    ACTIONS(1094), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18062] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1098), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1096), 12,
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
  [18087] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1106), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18119] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym__eol,
    STATE(410), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1108), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18151] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1110), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18183] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym__eol,
    STATE(398), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1112), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18215] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1114), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18247] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1116), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18279] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1118), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18311] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym__eol,
    STATE(400), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1120), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18343] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1124), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(1122), 10,
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
  [18367] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym__eol,
    STATE(394), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1126), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18399] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym__eol,
    STATE(399), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1128), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18431] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(618), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(620), 10,
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
  [18455] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1132), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(1130), 10,
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
  [18479] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1136), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(1134), 10,
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
  [18503] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym__eol,
    STATE(396), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1138), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18535] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(610), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token3,
    ACTIONS(612), 10,
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
  [18559] = 8,
    ACTIONS(1102), 1,
      anon_sym_DQUOTE,
    ACTIONS(1104), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym__eol,
    STATE(413), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1100), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1140), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18591] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1142), 1,
      sym_identifier,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1150), 1,
      anon_sym_DASH_DASHsep,
    STATE(417), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1146), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(440), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [18624] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1152), 1,
      sym_identifier,
    STATE(431), 1,
      aux_sym__conditional_block_repeat1,
    STATE(757), 1,
      sym__conditional_block,
    STATE(761), 1,
      sym_else_if_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(500), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1154), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [18659] = 7,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE,
    ACTIONS(1162), 1,
      anon_sym_SQUOTE,
    STATE(413), 1,
      aux_sym_for_command_repeat2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1156), 2,
      sym_expr,
      sym_unquoted_string,
    STATE(474), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(1165), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [18688] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1150), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(1167), 1,
      sym_identifier,
    STATE(419), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1146), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(440), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [18721] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1150), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(1169), 1,
      sym_identifier,
    STATE(416), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1146), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(440), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [18754] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1150), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(1171), 1,
      sym_identifier,
    STATE(417), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1146), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(440), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [18787] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1173), 1,
      sym_identifier,
    ACTIONS(1175), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1181), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1184), 1,
      anon_sym_DASH_DASHsep,
    STATE(417), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1178), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(440), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [18820] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1150), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(1187), 1,
      sym_identifier,
    STATE(411), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1146), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(440), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [18853] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1150), 1,
      anon_sym_DASH_DASHsep,
    ACTIONS(1189), 1,
      sym_identifier,
    STATE(417), 1,
      aux_sym_for_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1146), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
    STATE(440), 3,
      sym_mount,
      sym_secret,
      sym_sep,
  [18886] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1152), 1,
      sym_identifier,
    STATE(431), 1,
      aux_sym__conditional_block_repeat1,
    STATE(666), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(500), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1154), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [18918] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1191), 1,
      sym_path,
    ACTIONS(1193), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1195), 1,
      anon_sym_DASHf,
    ACTIONS(1197), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1199), 1,
      anon_sym_DASH_DASHplatform,
    STATE(428), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(539), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [18950] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1152), 1,
      sym_identifier,
    STATE(431), 1,
      aux_sym__conditional_block_repeat1,
    STATE(715), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(500), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1154), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [18982] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1152), 1,
      sym_identifier,
    STATE(431), 1,
      aux_sym__conditional_block_repeat1,
    STATE(739), 1,
      sym__conditional_block,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(500), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1154), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [19014] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1193), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1195), 1,
      anon_sym_DASHf,
    ACTIONS(1197), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1199), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1201), 1,
      sym_path,
    STATE(429), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(539), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [19046] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1193), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1195), 1,
      anon_sym_DASHf,
    ACTIONS(1197), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1199), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1203), 1,
      sym_path,
    STATE(421), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(539), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [19078] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1193), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1195), 1,
      anon_sym_DASHf,
    ACTIONS(1197), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1199), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1205), 1,
      sym_path,
    STATE(427), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(539), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [19110] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1193), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1195), 1,
      anon_sym_DASHf,
    ACTIONS(1197), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1199), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1207), 1,
      sym_path,
    STATE(428), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(539), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [19142] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1209), 1,
      sym_path,
    ACTIONS(1211), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1214), 1,
      anon_sym_DASHf,
    ACTIONS(1217), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1220), 1,
      anon_sym_DASH_DASHplatform,
    STATE(428), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(539), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [19174] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1193), 1,
      anon_sym_DASH_DASHbuild_DASHarg,
    ACTIONS(1195), 1,
      anon_sym_DASHf,
    ACTIONS(1197), 1,
      anon_sym_DASH_DASHtarget,
    ACTIONS(1199), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1223), 1,
      sym_path,
    STATE(428), 1,
      aux_sym_from_dockerfile_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(539), 4,
      sym_docker_build_arg,
      sym_docker_file,
      sym_docker_target,
      sym_platform,
  [19206] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1225), 1,
      sym_path,
    ACTIONS(1227), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1230), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1233), 1,
      sym_persist,
    ACTIONS(1236), 1,
      anon_sym_DASH_DASHsharing,
    STATE(430), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [19237] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1144), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1148), 1,
      anon_sym_DASH_DASHsecret,
    ACTIONS(1239), 1,
      sym_identifier,
    STATE(434), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(500), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1154), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [19266] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1241), 1,
      sym_path,
    ACTIONS(1243), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1245), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1247), 1,
      sym_persist,
    ACTIONS(1249), 1,
      anon_sym_DASH_DASHsharing,
    STATE(438), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [19297] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1243), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1245), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1247), 1,
      sym_persist,
    ACTIONS(1249), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1251), 1,
      sym_path,
    STATE(435), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [19328] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1253), 1,
      sym_identifier,
    ACTIONS(1255), 1,
      anon_sym_DASH_DASHmount,
    ACTIONS(1261), 1,
      anon_sym_DASH_DASHsecret,
    STATE(434), 1,
      aux_sym__conditional_block_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(500), 2,
      sym_mount,
      sym_secret,
    ACTIONS(1258), 3,
      sym_no_cache,
      sym_privileged,
      sym_ssh,
  [19357] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1243), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1245), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1247), 1,
      sym_persist,
    ACTIONS(1249), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1264), 1,
      sym_path,
    STATE(430), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [19388] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1243), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1245), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1247), 1,
      sym_persist,
    ACTIONS(1249), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1266), 1,
      sym_path,
    STATE(437), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [19419] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1243), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1245), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1247), 1,
      sym_persist,
    ACTIONS(1249), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1268), 1,
      sym_path,
    STATE(430), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [19450] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1243), 1,
      anon_sym_DASH_DASHchmod,
    ACTIONS(1245), 1,
      anon_sym_DASH_DASHid,
    ACTIONS(1247), 1,
      sym_persist,
    ACTIONS(1249), 1,
      anon_sym_DASH_DASHsharing,
    ACTIONS(1270), 1,
      sym_path,
    STATE(430), 1,
      aux_sym_cache_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(546), 3,
      sym_chmod,
      sym_id,
      sym_sharing,
  [19481] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1272), 1,
      sym_path,
    STATE(442), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [19502] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1276), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [19519] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1278), 1,
      sym_expr,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1284), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(681), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [19544] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1286), 1,
      sym_path,
    STATE(442), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1288), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [19565] = 4,
    STATE(443), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1291), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1294), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [19584] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1296), 1,
      anon_sym_PLUS,
    STATE(139), 1,
      sym_target_ref,
    STATE(510), 1,
      aux_sym_from_command_repeat1,
    STATE(730), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1298), 2,
      sym_allow_privileged,
      sym_pass_args,
  [19611] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1134), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [19628] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1300), 1,
      sym_expr,
    ACTIONS(1302), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(622), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [19653] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1304), 1,
      sym_path,
    STATE(448), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [19674] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1306), 1,
      sym_path,
    STATE(442), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [19695] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1308), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [19712] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1310), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [19729] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1312), 1,
      sym_expr,
    ACTIONS(1314), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(585), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [19754] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1316), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [19771] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1318), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [19798] = 4,
    STATE(443), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1320), 3,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
    ACTIONS(1322), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [19817] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [19834] = 4,
    STATE(360), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1326), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [19853] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1086), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [19870] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [19887] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1328), 1,
      sym_path,
    STATE(462), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [19908] = 4,
    STATE(178), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1330), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [19927] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1332), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [19954] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1334), 1,
      sym_path,
    STATE(442), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [19975] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1336), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [20002] = 4,
    STATE(296), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1338), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [20021] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1340), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [20038] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1342), 1,
      anon_sym_PLUS,
    ACTIONS(1345), 1,
      sym_path,
    ACTIONS(1348), 1,
      anon_sym_LPAREN,
    STATE(466), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [20065] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1351), 1,
      sym_expr,
    ACTIONS(1353), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(576), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20090] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(649), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [20107] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1355), 1,
      sym_expr,
    ACTIONS(1357), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(694), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20132] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1130), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [20149] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1359), 1,
      sym_path,
    STATE(475), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20170] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1361), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [20197] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1363), 1,
      sym_path,
    STATE(439), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20218] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1365), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [20233] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1367), 1,
      sym_path,
    STATE(442), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20254] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1369), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [20281] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1371), 1,
      sym_path,
    STATE(442), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20302] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    STATE(124), 1,
      sym_target_ref,
    STATE(510), 1,
      aux_sym_from_command_repeat1,
    STATE(730), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1298), 2,
      sym_allow_privileged,
      sym_pass_args,
  [20329] = 4,
    STATE(347), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1373), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [20348] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [20365] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 7,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      anon_sym_DASH_DASHsep,
      sym_ssh,
  [20382] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1375), 1,
      sym_expr,
    ACTIONS(1377), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(631), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20407] = 4,
    STATE(287), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1379), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [20426] = 4,
    STATE(195), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1324), 3,
      anon_sym_PLUS,
      sym_path,
      anon_sym_LPAREN,
    ACTIONS(1381), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [20445] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1383), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [20462] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(610), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [20477] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1385), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [20494] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(977), 1,
      anon_sym_DASH_DASHplatform,
    ACTIONS(1387), 1,
      anon_sym_PLUS,
    STATE(85), 1,
      sym_target_ref,
    STATE(510), 1,
      aux_sym_from_command_repeat1,
    STATE(730), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1298), 2,
      sym_allow_privileged,
      sym_pass_args,
  [20521] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1389), 7,
      anon_sym_RUN,
      sym_allow_privileged,
      anon_sym_DASH_DASHcompose,
      anon_sym_DASH_DASHload,
      anon_sym_DASH_DASHplatform,
      anon_sym_DASH_DASHpull,
      anon_sym_DASH_DASHservice,
  [20538] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1391), 1,
      sym_path,
    STATE(442), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20559] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(1393), 1,
      sym_path,
    STATE(466), 1,
      aux_sym_copy_command_repeat2,
    STATE(899), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(758), 2,
      sym_target_artifact,
      sym_target_artifact_build_args,
  [20586] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1395), 1,
      sym_path,
    STATE(490), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20607] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1397), 1,
      sym_path,
    STATE(477), 1,
      aux_sym_save_artifact_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1274), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20628] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(618), 8,
      sym_expr,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_unquoted_string,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [20643] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1399), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SQUOTE,
    ACTIONS(1403), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(452), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20665] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1405), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1407), 5,
      sym_force,
      sym_if_exists,
      sym_keep_own,
      sym_keep_ts,
      sym_symlink_no_follow,
  [20683] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1409), 1,
      anon_sym_DQUOTE,
    ACTIONS(1411), 1,
      anon_sym_SQUOTE,
    ACTIONS(1413), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(130), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20705] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1415), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(582), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20727] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1417), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(690), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20749] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1419), 6,
      sym_identifier,
      anon_sym_DASH_DASHmount,
      sym_no_cache,
      sym_privileged,
      anon_sym_DASH_DASHsecret,
      sym_ssh,
  [20765] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1421), 1,
      anon_sym_DQUOTE,
    ACTIONS(1423), 1,
      anon_sym_SQUOTE,
    ACTIONS(1425), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(96), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20787] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1427), 1,
      anon_sym_DQUOTE,
    ACTIONS(1429), 1,
      anon_sym_SQUOTE,
    ACTIONS(1431), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(465), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20809] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1433), 1,
      anon_sym_DQUOTE,
    ACTIONS(1435), 1,
      anon_sym_SQUOTE,
    ACTIONS(1437), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(183), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20831] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1439), 1,
      anon_sym_DQUOTE,
    ACTIONS(1441), 1,
      anon_sym_SQUOTE,
    ACTIONS(1443), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(390), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20853] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1445), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(640), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20875] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1447), 1,
      anon_sym_DQUOTE,
    ACTIONS(1449), 1,
      anon_sym_SQUOTE,
    ACTIONS(1451), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(121), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20897] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1427), 1,
      anon_sym_DQUOTE,
    ACTIONS(1429), 1,
      anon_sym_SQUOTE,
    ACTIONS(1453), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(470), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20919] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1439), 1,
      anon_sym_DQUOTE,
    ACTIONS(1441), 1,
      anon_sym_SQUOTE,
    ACTIONS(1455), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(391), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20941] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1427), 1,
      anon_sym_DQUOTE,
    ACTIONS(1429), 1,
      anon_sym_SQUOTE,
    ACTIONS(1457), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(445), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [20963] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1459), 1,
      anon_sym_PLUS,
    ACTIONS(1464), 1,
      anon_sym_DASH_DASHplatform,
    STATE(510), 1,
      aux_sym_from_command_repeat1,
    STATE(730), 1,
      sym_platform,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1461), 2,
      sym_allow_privileged,
      sym_pass_args,
  [20987] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1467), 1,
      anon_sym_DQUOTE,
    ACTIONS(1469), 1,
      anon_sym_SQUOTE,
    ACTIONS(1471), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(115), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21009] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1473), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(580), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21031] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1477), 1,
      anon_sym_SQUOTE,
    ACTIONS(1479), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(221), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21053] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1481), 1,
      anon_sym_DQUOTE,
    ACTIONS(1483), 1,
      anon_sym_SQUOTE,
    ACTIONS(1485), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(562), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21075] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1487), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(627), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21097] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1489), 1,
      anon_sym_DQUOTE,
    ACTIONS(1491), 1,
      anon_sym_SQUOTE,
    ACTIONS(1493), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(222), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21119] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1495), 1,
      anon_sym_DQUOTE,
    ACTIONS(1497), 1,
      anon_sym_SQUOTE,
    ACTIONS(1499), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(264), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21141] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1501), 1,
      anon_sym_DQUOTE,
    ACTIONS(1503), 1,
      anon_sym_SQUOTE,
    ACTIONS(1505), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(540), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21163] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1439), 1,
      anon_sym_DQUOTE,
    ACTIONS(1441), 1,
      anon_sym_SQUOTE,
    ACTIONS(1507), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(387), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21185] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1509), 1,
      anon_sym_DQUOTE,
    ACTIONS(1511), 1,
      anon_sym_SQUOTE,
    ACTIONS(1513), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(406), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21207] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1509), 1,
      anon_sym_DQUOTE,
    ACTIONS(1511), 1,
      anon_sym_SQUOTE,
    ACTIONS(1515), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(407), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21229] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1280), 1,
      anon_sym_DQUOTE,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1517), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(625), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21251] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1399), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      anon_sym_SQUOTE,
    ACTIONS(1519), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(457), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21273] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1501), 1,
      anon_sym_DQUOTE,
    ACTIONS(1503), 1,
      anon_sym_SQUOTE,
    ACTIONS(1521), 1,
      sym_unquoted_string,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(543), 3,
      sym__string,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [21295] = 4,
    ACTIONS(1523), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1525), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21312] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(981), 1,
      aux_sym_shell_fragment_token3,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(626), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(983), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [21333] = 4,
    ACTIONS(1527), 1,
      anon_sym_EQ,
    STATE(263), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1529), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21350] = 4,
    ACTIONS(1531), 1,
      anon_sym_EQ,
    STATE(207), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1533), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21367] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [21384] = 4,
    ACTIONS(1535), 1,
      anon_sym_AS,
    STATE(365), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1537), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21401] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [21418] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1539), 1,
      sym_path,
    ACTIONS(1541), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1543), 1,
      sym_keep_ts,
    STATE(548), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(752), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [21441] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(981), 1,
      aux_sym_shell_fragment_token3,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(636), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(983), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [21462] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1545), 1,
      sym_path,
    ACTIONS(1547), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1550), 1,
      sym_keep_ts,
    STATE(534), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(752), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [21485] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(981), 1,
      aux_sym_shell_fragment_token3,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(571), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(983), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [21506] = 4,
    ACTIONS(1553), 1,
      anon_sym_AS,
    STATE(190), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1555), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21523] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(618), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(620), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [21540] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(610), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(612), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [21557] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1557), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1559), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [21574] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1561), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1563), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [21591] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1565), 1,
      anon_sym_PLUS,
    STATE(148), 1,
      sym_function_ref,
    STATE(550), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1567), 2,
      sym_allow_privileged,
      sym_pass_args,
  [21612] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1541), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1543), 1,
      sym_keep_ts,
    ACTIONS(1569), 1,
      sym_path,
    STATE(555), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(752), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [21635] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1088), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1086), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [21652] = 4,
    ACTIONS(1571), 1,
      anon_sym_EQ,
    STATE(338), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1573), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21669] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1575), 1,
      anon_sym_PLUS,
    STATE(100), 1,
      sym_function_ref,
    STATE(561), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1567), 2,
      sym_allow_privileged,
      sym_pass_args,
  [21690] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1577), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1579), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [21707] = 4,
    ACTIONS(1581), 1,
      anon_sym_AS,
    STATE(257), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1583), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21724] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1541), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1543), 1,
      sym_keep_ts,
    ACTIONS(1585), 1,
      sym_path,
    STATE(534), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(752), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [21747] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1587), 1,
      anon_sym_PLUS,
    STATE(77), 1,
      sym_function_ref,
    STATE(673), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1567), 2,
      sym_allow_privileged,
      sym_pass_args,
  [21768] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1565), 1,
      anon_sym_PLUS,
    STATE(142), 1,
      sym_function_ref,
    STATE(673), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1567), 2,
      sym_allow_privileged,
      sym_pass_args,
  [21789] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1541), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1543), 1,
      sym_keep_ts,
    ACTIONS(1589), 1,
      sym_path,
    STATE(559), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(752), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [21812] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1591), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1593), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [21829] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1595), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1597), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [21846] = 4,
    ACTIONS(1599), 1,
      anon_sym_AS,
    STATE(328), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1601), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21863] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1541), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1543), 1,
      sym_keep_ts,
    ACTIONS(1603), 1,
      sym_path,
    STATE(534), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(752), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [21886] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1605), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1607), 4,
      anon_sym_DASH_DASHbuild_DASHarg,
      anon_sym_DASHf,
      anon_sym_DASH_DASHtarget,
      anon_sym_DASH_DASHplatform,
  [21903] = 4,
    ACTIONS(1609), 1,
      anon_sym_EQ,
    STATE(250), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1611), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [21920] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(981), 1,
      aux_sym_shell_fragment_token3,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(581), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(983), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [21941] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1541), 1,
      anon_sym_DASH_DASHbranch,
    ACTIONS(1543), 1,
      sym_keep_ts,
    ACTIONS(1613), 1,
      sym_path,
    STATE(534), 1,
      aux_sym_git_clone_command_repeat1,
    STATE(752), 1,
      sym_branch,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [21964] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1615), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1617), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [21981] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1575), 1,
      anon_sym_PLUS,
    STATE(127), 1,
      sym_function_ref,
    STATE(673), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1567), 2,
      sym_allow_privileged,
      sym_pass_args,
  [22002] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1074), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1072), 4,
      anon_sym_DASH_DASHchmod,
      anon_sym_DASH_DASHid,
      sym_persist,
      anon_sym_DASH_DASHsharing,
  [22019] = 4,
    ACTIONS(1619), 1,
      anon_sym_EQ,
    STATE(342), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1621), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22036] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(981), 1,
      aux_sym_shell_fragment_token3,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(693), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(983), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [22057] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1587), 1,
      anon_sym_PLUS,
    STATE(86), 1,
      sym_function_ref,
    STATE(549), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1567), 2,
      sym_allow_privileged,
      sym_pass_args,
  [22078] = 4,
    ACTIONS(1623), 1,
      anon_sym_AS,
    STATE(249), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1625), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22095] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(981), 1,
      aux_sym_shell_fragment_token3,
    STATE(454), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(749), 1,
      sym_shell_fragment,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(983), 2,
      aux_sym_shell_fragment_token1,
      aux_sym_shell_fragment_token2,
  [22116] = 4,
    ACTIONS(1627), 1,
      anon_sym_AS,
    STATE(203), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1629), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22133] = 3,
    STATE(152), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1631), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22147] = 3,
    STATE(285), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1633), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22161] = 3,
    STATE(354), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1635), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22175] = 3,
    STATE(351), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1637), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22189] = 3,
    STATE(329), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1639), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22203] = 3,
    STATE(326), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1641), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22217] = 3,
    STATE(315), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1643), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22231] = 3,
    STATE(313), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1645), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22245] = 3,
    STATE(363), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1647), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22259] = 3,
    STATE(353), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1649), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22273] = 3,
    STATE(322), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1651), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22287] = 3,
    STATE(312), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1653), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22301] = 3,
    STATE(340), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1655), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22315] = 3,
    STATE(320), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1657), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22329] = 3,
    STATE(330), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1659), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22343] = 3,
    STATE(344), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1661), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22357] = 3,
    STATE(364), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1663), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22371] = 3,
    STATE(355), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1665), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22385] = 3,
    STATE(352), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1667), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22399] = 3,
    STATE(350), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1669), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22413] = 3,
    STATE(346), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1671), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22427] = 3,
    STATE(339), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1673), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22441] = 3,
    STATE(359), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1675), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22455] = 3,
    STATE(356), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1677), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22469] = 3,
    STATE(196), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1679), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22483] = 3,
    STATE(317), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1681), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22497] = 3,
    STATE(325), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1683), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22511] = 3,
    STATE(332), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1685), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22525] = 3,
    STATE(343), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1687), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22539] = 3,
    STATE(341), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1689), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22553] = 3,
    STATE(311), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1691), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22567] = 3,
    STATE(149), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1693), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22581] = 3,
    STATE(150), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1695), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22595] = 3,
    STATE(337), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1697), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22609] = 3,
    STATE(151), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1699), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22623] = 3,
    STATE(153), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1701), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22637] = 3,
    STATE(154), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1703), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22651] = 3,
    STATE(333), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1705), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22665] = 3,
    STATE(331), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1707), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22679] = 3,
    STATE(155), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1709), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22693] = 3,
    STATE(156), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1711), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22707] = 3,
    STATE(327), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1713), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22721] = 3,
    STATE(157), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1715), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22735] = 3,
    STATE(323), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1717), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22749] = 3,
    STATE(318), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1719), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22763] = 3,
    STATE(158), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1721), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22777] = 3,
    STATE(159), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1723), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22791] = 3,
    STATE(160), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1725), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22805] = 3,
    STATE(316), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1727), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22819] = 3,
    STATE(162), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1729), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22833] = 3,
    STATE(163), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1731), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22847] = 3,
    STATE(165), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1733), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22861] = 3,
    STATE(314), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1735), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22875] = 3,
    STATE(166), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1737), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22889] = 3,
    STATE(167), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1739), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22903] = 3,
    STATE(168), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1741), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22917] = 3,
    STATE(170), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1743), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22931] = 3,
    STATE(173), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1745), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22945] = 3,
    STATE(174), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1747), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22959] = 3,
    STATE(175), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1749), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22973] = 3,
    STATE(176), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1751), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [22987] = 3,
    STATE(177), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1753), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23001] = 3,
    STATE(179), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1755), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23015] = 3,
    STATE(180), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1757), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23029] = 3,
    STATE(181), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1759), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23043] = 3,
    STATE(182), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1761), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23057] = 3,
    STATE(187), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1763), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23071] = 3,
    STATE(189), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1765), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23085] = 3,
    STATE(191), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1767), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23099] = 3,
    STATE(192), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1769), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23113] = 3,
    STATE(193), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1771), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23127] = 3,
    STATE(304), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1773), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23141] = 3,
    STATE(198), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1775), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23155] = 3,
    STATE(202), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1777), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23169] = 3,
    STATE(205), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1779), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23183] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(667), 1,
      anon_sym_END,
    ACTIONS(669), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(671), 1,
      anon_sym_ASLOCAL,
    ACTIONS(673), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23203] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [23221] = 3,
    STATE(266), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1783), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23235] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(1785), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(728), 2,
      sym_target,
      aux_sym_source_file_repeat1,
  [23253] = 3,
    STATE(267), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1787), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23267] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(624), 1,
      anon_sym_END,
    ACTIONS(626), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(628), 1,
      anon_sym_ASLOCAL,
    ACTIONS(630), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23287] = 3,
    STATE(269), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1789), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23301] = 3,
    STATE(271), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1791), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23315] = 3,
    STATE(273), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1793), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23329] = 3,
    STATE(268), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1795), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23343] = 3,
    STATE(310), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1797), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23357] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1799), 1,
      sym_identifier,
    STATE(712), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1801), 2,
      sym_global,
      sym_required,
  [23375] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1803), 1,
      anon_sym_END,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    STATE(658), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23395] = 3,
    STATE(274), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1807), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23409] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1809), 1,
      anon_sym_END,
    ACTIONS(1811), 1,
      anon_sym_SAVEARTIFACT,
    STATE(658), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23429] = 3,
    STATE(276), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1814), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23443] = 3,
    STATE(277), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1816), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23457] = 3,
    STATE(278), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1818), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23471] = 3,
    STATE(243), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1820), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23485] = 3,
    STATE(281), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1822), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23499] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1824), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(93), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [23517] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1826), 1,
      sym_path,
    ACTIONS(1828), 1,
      sym_allow_privileged,
    STATE(530), 1,
      sym_earthfile_ref,
    STATE(763), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23537] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1830), 1,
      anon_sym_END,
    ACTIONS(1832), 1,
      anon_sym_ELSEIF,
    ACTIONS(1834), 1,
      anon_sym_ELSE,
    STATE(709), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23557] = 3,
    STATE(361), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1836), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23571] = 3,
    STATE(228), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1838), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23585] = 3,
    STATE(366), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1840), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23599] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1842), 1,
      anon_sym_END,
    STATE(656), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23619] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1844), 1,
      anon_sym_END,
    STATE(658), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23639] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1826), 1,
      sym_path,
    ACTIONS(1828), 1,
      sym_allow_privileged,
    STATE(554), 1,
      sym_earthfile_ref,
    STATE(665), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23659] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1846), 1,
      anon_sym_PLUS,
    STATE(673), 1,
      aux_sym_do_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1848), 2,
      sym_allow_privileged,
      sym_pass_args,
  [23677] = 3,
    STATE(367), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1851), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23691] = 3,
    STATE(298), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1853), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23705] = 3,
    STATE(19), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1855), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23719] = 3,
    STATE(301), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1857), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23733] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1859), 1,
      sym_identifier,
    STATE(714), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1801), 2,
      sym_global,
      sym_required,
  [23751] = 3,
    STATE(294), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1861), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23765] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(1863), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(664), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [23783] = 3,
    STATE(244), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1865), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23797] = 3,
    STATE(308), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1867), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23811] = 3,
    STATE(295), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1869), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23825] = 3,
    STATE(17), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1871), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23839] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1785), 1,
      sym_identifier,
    ACTIONS(1873), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(728), 2,
      sym_target,
      aux_sym_source_file_repeat1,
  [23857] = 3,
    STATE(293), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1875), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23871] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1826), 1,
      sym_path,
    ACTIONS(1828), 1,
      sym_allow_privileged,
    STATE(566), 1,
      sym_earthfile_ref,
    STATE(743), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23891] = 3,
    STATE(670), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1877), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23905] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1879), 1,
      anon_sym_END,
    STATE(671), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [23925] = 3,
    STATE(309), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1881), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23939] = 3,
    STATE(252), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1883), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23953] = 3,
    STATE(15), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1885), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23967] = 3,
    STATE(305), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1887), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23981] = 3,
    STATE(283), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1889), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [23995] = 3,
    STATE(747), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1891), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24009] = 3,
    STATE(302), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1893), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24023] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1895), 1,
      anon_sym_END,
    ACTIONS(1897), 1,
      anon_sym_ELSEIF,
    ACTIONS(1900), 1,
      anon_sym_ELSE,
    STATE(697), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24043] = 3,
    STATE(214), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1902), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24057] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1826), 1,
      sym_path,
    ACTIONS(1828), 1,
      sym_allow_privileged,
    STATE(568), 1,
      sym_earthfile_ref,
    STATE(716), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24077] = 3,
    STATE(213), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1904), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24091] = 3,
    STATE(299), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1906), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24105] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(1785), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(728), 2,
      sym_target,
      aux_sym_source_file_repeat1,
  [24123] = 3,
    STATE(272), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1908), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24137] = 3,
    STATE(265), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1910), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24151] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1912), 1,
      sym_identifier,
    STATE(712), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1801), 2,
      sym_global,
      sym_required,
  [24169] = 3,
    STATE(206), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1914), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24183] = 3,
    STATE(297), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1916), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24197] = 3,
    STATE(734), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1918), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24211] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1832), 1,
      anon_sym_ELSEIF,
    ACTIONS(1920), 1,
      anon_sym_END,
    ACTIONS(1922), 1,
      anon_sym_ELSE,
    STATE(697), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24231] = 3,
    STATE(235), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1924), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24245] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1926), 1,
      anon_sym_END,
    STATE(658), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24265] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1928), 1,
      sym_identifier,
    STATE(712), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1930), 2,
      sym_global,
      sym_required,
  [24283] = 3,
    STATE(246), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1933), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24297] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1935), 1,
      sym_identifier,
    STATE(712), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1801), 2,
      sym_global,
      sym_required,
  [24315] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1832), 1,
      anon_sym_ELSEIF,
    ACTIONS(1937), 1,
      anon_sym_END,
    ACTIONS(1939), 1,
      anon_sym_ELSE,
    STATE(732), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24335] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1826), 1,
      sym_path,
    ACTIONS(1828), 1,
      sym_allow_privileged,
    STATE(536), 1,
      sym_earthfile_ref,
    STATE(763), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24355] = 3,
    STATE(255), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1941), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24369] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1832), 1,
      anon_sym_ELSEIF,
    ACTIONS(1943), 1,
      anon_sym_END,
    ACTIONS(1945), 1,
      anon_sym_ELSE,
    STATE(697), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24389] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1947), 1,
      sym_identifier,
    STATE(655), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1801), 2,
      sym_global,
      sym_required,
  [24407] = 3,
    STATE(280), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1949), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24421] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1951), 1,
      anon_sym_END,
    STATE(711), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24441] = 3,
    STATE(279), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1953), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24455] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(1785), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(728), 2,
      sym_target,
      aux_sym_source_file_repeat1,
  [24473] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1955), 1,
      anon_sym_END,
    STATE(658), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24493] = 3,
    STATE(721), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1957), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24507] = 3,
    STATE(746), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1959), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24521] = 3,
    STATE(275), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1961), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24535] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1963), 1,
      ts_builtin_sym_end,
    ACTIONS(1965), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(728), 2,
      sym_target,
      aux_sym_source_file_repeat1,
  [24553] = 3,
    STATE(756), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1968), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24567] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1970), 4,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
      anon_sym_DASH_DASHplatform,
  [24581] = 3,
    STATE(254), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1972), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24595] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1832), 1,
      anon_sym_ELSEIF,
    ACTIONS(1974), 1,
      anon_sym_END,
    ACTIONS(1976), 1,
      anon_sym_ELSE,
    STATE(697), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24615] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1978), 1,
      sym_identifier,
    STATE(705), 1,
      aux_sym_arg_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(1801), 2,
      sym_global,
      sym_required,
  [24633] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(1980), 1,
      anon_sym_END,
    STATE(748), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24653] = 3,
    STATE(10), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1982), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24667] = 3,
    STATE(8), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1984), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24681] = 3,
    STATE(270), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1986), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24695] = 3,
    STATE(689), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1988), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24709] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1832), 1,
      anon_sym_ELSEIF,
    ACTIONS(1990), 1,
      anon_sym_END,
    ACTIONS(1992), 1,
      anon_sym_ELSE,
    STATE(718), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24729] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1994), 5,
      anon_sym_AS,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24741] = 3,
    STATE(261), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1996), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24755] = 3,
    STATE(247), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(1998), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24769] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1826), 1,
      sym_path,
    ACTIONS(1828), 1,
      sym_allow_privileged,
    STATE(547), 1,
      sym_earthfile_ref,
    STATE(763), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24789] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(2000), 1,
      anon_sym_END,
    STATE(658), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24809] = 3,
    STATE(245), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(2002), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24823] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(2004), 1,
      anon_sym_END,
    STATE(724), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24843] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(2006), 1,
      anon_sym_END,
    STATE(744), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24863] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1805), 1,
      anon_sym_SAVEARTIFACT,
    ACTIONS(2008), 1,
      anon_sym_END,
    STATE(658), 1,
      aux_sym_try_command_repeat1,
    STATE(770), 1,
      sym_save_artifact_command,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [24883] = 3,
    STATE(259), 1,
      sym__eol,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(2010), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24897] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2012), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2014), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [24912] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(618), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [24923] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2016), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2018), 2,
      anon_sym_DASH_DASHbranch,
      sym_keep_ts,
  [24938] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH2,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    STATE(645), 2,
      sym_build_arg,
      aux_sym_build_command_repeat2,
  [24953] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2020), 3,
      anon_sym_PLUS,
      sym_allow_privileged,
      sym_pass_args,
  [24966] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2024), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2022), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [24981] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2028), 1,
      sym__indent,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2026), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [24996] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2032), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2030), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [25011] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(1324), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2034), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [25026] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2036), 3,
      sym_identifier,
      sym_global,
      sym_required,
  [25039] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2040), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2038), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [25054] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2044), 1,
      anon_sym_ELSE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2042), 2,
      anon_sym_END,
      anon_sym_ELSEIF,
  [25069] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2048), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2046), 2,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [25084] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2050), 1,
      sym_path,
    ACTIONS(2052), 1,
      sym_allow_privileged,
    STATE(763), 1,
      aux_sym_import_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25101] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2055), 1,
      sym_version_major_minor,
    ACTIONS(2057), 1,
      sym_feature_flag,
    STATE(765), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25118] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2059), 1,
      sym_version_major_minor,
    ACTIONS(2061), 1,
      sym_feature_flag,
    STATE(765), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25135] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2064), 1,
      sym_version_major_minor,
    ACTIONS(2066), 1,
      sym_feature_flag,
    STATE(764), 1,
      aux_sym_version_command_repeat1,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25152] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2068), 1,
      anon_sym_PLUS,
    ACTIONS(2070), 1,
      anon_sym_LPAREN,
    STATE(485), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25169] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_line_continuation_comment,
    ACTIONS(610), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_CRn,
      anon_sym_FF,
  [25180] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2072), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [25192] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2074), 2,
      anon_sym_END,
      anon_sym_SAVEARTIFACT,
  [25204] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
    ACTIONS(2076), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [25216] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2078), 1,
      sym_image_name,
    STATE(968), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25230] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    STATE(753), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25244] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2080), 1,
      sym_path,
    ACTIONS(2082), 1,
      sym_allow_privileged,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25258] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(965), 1,
      anon_sym_PLUS,
    STATE(912), 1,
      sym_target_ref,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25272] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2084), 1,
      sym_image_name,
    STATE(450), 1,
      sym_image_spec,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25286] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2086), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25297] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2088), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25308] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2090), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25319] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2092), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25330] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2094), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25341] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2096), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25352] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2098), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25363] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2100), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25374] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2102), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25385] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2104), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25396] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2106), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25407] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2108), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25418] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2110), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25429] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2112), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25440] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2114), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25451] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2116), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25462] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2118), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25473] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2120), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25484] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2122), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25495] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2124), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25506] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2126), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25517] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2128), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25528] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2130), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25539] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2132), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25550] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2134), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25561] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2136), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25572] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2138), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25583] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2140), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25594] = 2,
    ACTIONS(2142), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [25603] = 2,
    ACTIONS(2144), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [25612] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2146), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25623] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2148), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25634] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2150), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25645] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2152), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25656] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2154), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25667] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2156), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25678] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2158), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25689] = 2,
    ACTIONS(2160), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [25698] = 2,
    ACTIONS(2162), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [25707] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2164), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25718] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2166), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25729] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2168), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25740] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2170), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25751] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2172), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25762] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2174), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25773] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2176), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25784] = 2,
    ACTIONS(2178), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [25793] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2180), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25804] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2182), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25815] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2184), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25826] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2186), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25837] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2188), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25848] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2190), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25859] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2192), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25870] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2194), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25881] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2196), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25892] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2198), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25903] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2200), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25914] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2202), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25925] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2204), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25936] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2206), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25947] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2208), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25958] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2210), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25969] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2212), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [25980] = 2,
    ACTIONS(2214), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [25989] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2216), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26000] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2218), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26011] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2220), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26022] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2222), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26033] = 2,
    ACTIONS(2224), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26042] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2226), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26053] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2228), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26064] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2230), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26075] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2232), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26086] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2234), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26097] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2236), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26108] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2238), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26119] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2240), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26130] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2242), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26141] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2244), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26152] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2246), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26163] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2248), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26174] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2250), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26185] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2252), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26196] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2254), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26207] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2256), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26218] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2258), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26229] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2260), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26240] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2262), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26251] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2264), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26262] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2266), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26273] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2268), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26284] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2270), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26295] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2272), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26306] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2274), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26317] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2276), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26328] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2278), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26339] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2280), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26350] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2282), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26361] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2284), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26372] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2286), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26383] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2288), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26394] = 2,
    ACTIONS(2290), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26403] = 2,
    ACTIONS(2292), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26412] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2294), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26423] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2296), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26434] = 2,
    ACTIONS(2298), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26443] = 2,
    ACTIONS(2300), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26452] = 2,
    ACTIONS(2302), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26461] = 2,
    ACTIONS(2304), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26470] = 2,
    ACTIONS(2306), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26479] = 2,
    ACTIONS(2308), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26488] = 2,
    ACTIONS(2310), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26497] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2312), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26508] = 2,
    ACTIONS(2314), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26517] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2316), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26528] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2318), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26539] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2320), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26550] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2322), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26561] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2324), 1,
      sym_image_tag,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26572] = 2,
    ACTIONS(2326), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26581] = 2,
    ACTIONS(2328), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26590] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2330), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26601] = 2,
    ACTIONS(2332), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26610] = 2,
    ACTIONS(2334), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26619] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2336), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26630] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2338), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26641] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2340), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26652] = 2,
    ACTIONS(2342), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26661] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2344), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26672] = 2,
    ACTIONS(2346), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26681] = 2,
    ACTIONS(2348), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26690] = 2,
    ACTIONS(2350), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26699] = 2,
    ACTIONS(2352), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26708] = 2,
    ACTIONS(2354), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26717] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2356), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26728] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2358), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26739] = 2,
    ACTIONS(2360), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26748] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2362), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26759] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2364), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26770] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2366), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26781] = 2,
    ACTIONS(2368), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26790] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2370), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26801] = 2,
    ACTIONS(2372), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26810] = 2,
    ACTIONS(2374), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26819] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2376), 1,
      anon_sym_SLASH,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26830] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2378), 1,
      sym_immediate_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26841] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2380), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26852] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2382), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26863] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2384), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [26874] = 2,
    ACTIONS(2386), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26883] = 2,
    ACTIONS(2388), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26892] = 2,
    ACTIONS(2390), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26901] = 2,
    ACTIONS(2392), 1,
      aux_sym_branch_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26910] = 2,
    ACTIONS(2394), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26919] = 2,
    ACTIONS(2396), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26928] = 2,
    ACTIONS(2398), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26937] = 2,
    ACTIONS(2400), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26946] = 2,
    ACTIONS(2402), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26955] = 2,
    ACTIONS(2404), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26964] = 2,
    ACTIONS(2406), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26973] = 2,
    ACTIONS(2408), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26982] = 2,
    ACTIONS(2410), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [26991] = 2,
    ACTIONS(2412), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27000] = 2,
    ACTIONS(2414), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27009] = 2,
    ACTIONS(2416), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27018] = 2,
    ACTIONS(2418), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27027] = 2,
    ACTIONS(2420), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27036] = 2,
    ACTIONS(2422), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27045] = 2,
    ACTIONS(2424), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27054] = 2,
    ACTIONS(2426), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27063] = 2,
    ACTIONS(2428), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27072] = 2,
    ACTIONS(2430), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27081] = 2,
    ACTIONS(2432), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27090] = 2,
    ACTIONS(2434), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27099] = 2,
    ACTIONS(2436), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27108] = 2,
    ACTIONS(2438), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27117] = 2,
    ACTIONS(2440), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(3), 3,
      sym_line_continuation,
      sym_comment,
      sym_line_continuation_comment,
  [27126] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2442), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27137] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2444), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27148] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2446), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27159] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2448), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27170] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2450), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27181] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2452), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27192] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2454), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27203] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2456), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27214] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2458), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27225] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2460), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27236] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2462), 1,
      anon_sym_IN,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27247] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2464), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27258] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2466), 1,
      sym_path,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27269] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2468), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27280] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2470), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27291] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2472), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27302] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2474), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
  [27313] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(2476), 1,
      anon_sym_END,
    ACTIONS(5), 2,
      sym_comment,
      sym_line_continuation_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 208,
  [SMALL_STATE(5)] = 309,
  [SMALL_STATE(6)] = 410,
  [SMALL_STATE(7)] = 511,
  [SMALL_STATE(8)] = 612,
  [SMALL_STATE(9)] = 710,
  [SMALL_STATE(10)] = 808,
  [SMALL_STATE(11)] = 906,
  [SMALL_STATE(12)] = 1004,
  [SMALL_STATE(13)] = 1102,
  [SMALL_STATE(14)] = 1199,
  [SMALL_STATE(15)] = 1293,
  [SMALL_STATE(16)] = 1387,
  [SMALL_STATE(17)] = 1481,
  [SMALL_STATE(18)] = 1575,
  [SMALL_STATE(19)] = 1669,
  [SMALL_STATE(20)] = 1763,
  [SMALL_STATE(21)] = 1857,
  [SMALL_STATE(22)] = 1951,
  [SMALL_STATE(23)] = 2045,
  [SMALL_STATE(24)] = 2139,
  [SMALL_STATE(25)] = 2233,
  [SMALL_STATE(26)] = 2327,
  [SMALL_STATE(27)] = 2421,
  [SMALL_STATE(28)] = 2515,
  [SMALL_STATE(29)] = 2609,
  [SMALL_STATE(30)] = 2703,
  [SMALL_STATE(31)] = 2797,
  [SMALL_STATE(32)] = 2891,
  [SMALL_STATE(33)] = 2985,
  [SMALL_STATE(34)] = 3079,
  [SMALL_STATE(35)] = 3173,
  [SMALL_STATE(36)] = 3267,
  [SMALL_STATE(37)] = 3361,
  [SMALL_STATE(38)] = 3455,
  [SMALL_STATE(39)] = 3549,
  [SMALL_STATE(40)] = 3643,
  [SMALL_STATE(41)] = 3737,
  [SMALL_STATE(42)] = 3831,
  [SMALL_STATE(43)] = 3925,
  [SMALL_STATE(44)] = 4019,
  [SMALL_STATE(45)] = 4113,
  [SMALL_STATE(46)] = 4207,
  [SMALL_STATE(47)] = 4301,
  [SMALL_STATE(48)] = 4395,
  [SMALL_STATE(49)] = 4489,
  [SMALL_STATE(50)] = 4583,
  [SMALL_STATE(51)] = 4677,
  [SMALL_STATE(52)] = 4771,
  [SMALL_STATE(53)] = 4865,
  [SMALL_STATE(54)] = 4959,
  [SMALL_STATE(55)] = 5053,
  [SMALL_STATE(56)] = 5147,
  [SMALL_STATE(57)] = 5241,
  [SMALL_STATE(58)] = 5335,
  [SMALL_STATE(59)] = 5429,
  [SMALL_STATE(60)] = 5523,
  [SMALL_STATE(61)] = 5617,
  [SMALL_STATE(62)] = 5711,
  [SMALL_STATE(63)] = 5759,
  [SMALL_STATE(64)] = 5804,
  [SMALL_STATE(65)] = 5861,
  [SMALL_STATE(66)] = 5915,
  [SMALL_STATE(67)] = 5957,
  [SMALL_STATE(68)] = 6013,
  [SMALL_STATE(69)] = 6055,
  [SMALL_STATE(70)] = 6110,
  [SMALL_STATE(71)] = 6165,
  [SMALL_STATE(72)] = 6220,
  [SMALL_STATE(73)] = 6273,
  [SMALL_STATE(74)] = 6325,
  [SMALL_STATE(75)] = 6377,
  [SMALL_STATE(76)] = 6425,
  [SMALL_STATE(77)] = 6477,
  [SMALL_STATE(78)] = 6520,
  [SMALL_STATE(79)] = 6563,
  [SMALL_STATE(80)] = 6606,
  [SMALL_STATE(81)] = 6653,
  [SMALL_STATE(82)] = 6696,
  [SMALL_STATE(83)] = 6739,
  [SMALL_STATE(84)] = 6782,
  [SMALL_STATE(85)] = 6825,
  [SMALL_STATE(86)] = 6868,
  [SMALL_STATE(87)] = 6911,
  [SMALL_STATE(88)] = 6957,
  [SMALL_STATE(89)] = 7003,
  [SMALL_STATE(90)] = 7045,
  [SMALL_STATE(91)] = 7091,
  [SMALL_STATE(92)] = 7127,
  [SMALL_STATE(93)] = 7169,
  [SMALL_STATE(94)] = 7211,
  [SMALL_STATE(95)] = 7253,
  [SMALL_STATE(96)] = 7295,
  [SMALL_STATE(97)] = 7333,
  [SMALL_STATE(98)] = 7371,
  [SMALL_STATE(99)] = 7409,
  [SMALL_STATE(100)] = 7447,
  [SMALL_STATE(101)] = 7488,
  [SMALL_STATE(102)] = 7529,
  [SMALL_STATE(103)] = 7570,
  [SMALL_STATE(104)] = 7607,
  [SMALL_STATE(105)] = 7644,
  [SMALL_STATE(106)] = 7685,
  [SMALL_STATE(107)] = 7726,
  [SMALL_STATE(108)] = 7767,
  [SMALL_STATE(109)] = 7808,
  [SMALL_STATE(110)] = 7845,
  [SMALL_STATE(111)] = 7884,
  [SMALL_STATE(112)] = 7925,
  [SMALL_STATE(113)] = 7966,
  [SMALL_STATE(114)] = 8003,
  [SMALL_STATE(115)] = 8040,
  [SMALL_STATE(116)] = 8077,
  [SMALL_STATE(117)] = 8118,
  [SMALL_STATE(118)] = 8159,
  [SMALL_STATE(119)] = 8196,
  [SMALL_STATE(120)] = 8235,
  [SMALL_STATE(121)] = 8272,
  [SMALL_STATE(122)] = 8309,
  [SMALL_STATE(123)] = 8346,
  [SMALL_STATE(124)] = 8387,
  [SMALL_STATE(125)] = 8428,
  [SMALL_STATE(126)] = 8469,
  [SMALL_STATE(127)] = 8508,
  [SMALL_STATE(128)] = 8549,
  [SMALL_STATE(129)] = 8587,
  [SMALL_STATE(130)] = 8627,
  [SMALL_STATE(131)] = 8663,
  [SMALL_STATE(132)] = 8699,
  [SMALL_STATE(133)] = 8739,
  [SMALL_STATE(134)] = 8779,
  [SMALL_STATE(135)] = 8819,
  [SMALL_STATE(136)] = 8855,
  [SMALL_STATE(137)] = 8895,
  [SMALL_STATE(138)] = 8935,
  [SMALL_STATE(139)] = 8971,
  [SMALL_STATE(140)] = 9011,
  [SMALL_STATE(141)] = 9047,
  [SMALL_STATE(142)] = 9087,
  [SMALL_STATE(143)] = 9127,
  [SMALL_STATE(144)] = 9167,
  [SMALL_STATE(145)] = 9207,
  [SMALL_STATE(146)] = 9243,
  [SMALL_STATE(147)] = 9279,
  [SMALL_STATE(148)] = 9319,
  [SMALL_STATE(149)] = 9359,
  [SMALL_STATE(150)] = 9395,
  [SMALL_STATE(151)] = 9431,
  [SMALL_STATE(152)] = 9467,
  [SMALL_STATE(153)] = 9503,
  [SMALL_STATE(154)] = 9539,
  [SMALL_STATE(155)] = 9575,
  [SMALL_STATE(156)] = 9611,
  [SMALL_STATE(157)] = 9647,
  [SMALL_STATE(158)] = 9683,
  [SMALL_STATE(159)] = 9719,
  [SMALL_STATE(160)] = 9755,
  [SMALL_STATE(161)] = 9791,
  [SMALL_STATE(162)] = 9827,
  [SMALL_STATE(163)] = 9863,
  [SMALL_STATE(164)] = 9899,
  [SMALL_STATE(165)] = 9935,
  [SMALL_STATE(166)] = 9971,
  [SMALL_STATE(167)] = 10007,
  [SMALL_STATE(168)] = 10043,
  [SMALL_STATE(169)] = 10079,
  [SMALL_STATE(170)] = 10117,
  [SMALL_STATE(171)] = 10153,
  [SMALL_STATE(172)] = 10189,
  [SMALL_STATE(173)] = 10225,
  [SMALL_STATE(174)] = 10261,
  [SMALL_STATE(175)] = 10297,
  [SMALL_STATE(176)] = 10333,
  [SMALL_STATE(177)] = 10369,
  [SMALL_STATE(178)] = 10405,
  [SMALL_STATE(179)] = 10441,
  [SMALL_STATE(180)] = 10477,
  [SMALL_STATE(181)] = 10513,
  [SMALL_STATE(182)] = 10549,
  [SMALL_STATE(183)] = 10585,
  [SMALL_STATE(184)] = 10621,
  [SMALL_STATE(185)] = 10657,
  [SMALL_STATE(186)] = 10693,
  [SMALL_STATE(187)] = 10729,
  [SMALL_STATE(188)] = 10765,
  [SMALL_STATE(189)] = 10805,
  [SMALL_STATE(190)] = 10841,
  [SMALL_STATE(191)] = 10877,
  [SMALL_STATE(192)] = 10913,
  [SMALL_STATE(193)] = 10949,
  [SMALL_STATE(194)] = 10985,
  [SMALL_STATE(195)] = 11021,
  [SMALL_STATE(196)] = 11057,
  [SMALL_STATE(197)] = 11093,
  [SMALL_STATE(198)] = 11129,
  [SMALL_STATE(199)] = 11165,
  [SMALL_STATE(200)] = 11205,
  [SMALL_STATE(201)] = 11245,
  [SMALL_STATE(202)] = 11285,
  [SMALL_STATE(203)] = 11321,
  [SMALL_STATE(204)] = 11357,
  [SMALL_STATE(205)] = 11397,
  [SMALL_STATE(206)] = 11433,
  [SMALL_STATE(207)] = 11469,
  [SMALL_STATE(208)] = 11505,
  [SMALL_STATE(209)] = 11541,
  [SMALL_STATE(210)] = 11581,
  [SMALL_STATE(211)] = 11617,
  [SMALL_STATE(212)] = 11653,
  [SMALL_STATE(213)] = 11689,
  [SMALL_STATE(214)] = 11725,
  [SMALL_STATE(215)] = 11761,
  [SMALL_STATE(216)] = 11797,
  [SMALL_STATE(217)] = 11837,
  [SMALL_STATE(218)] = 11873,
  [SMALL_STATE(219)] = 11913,
  [SMALL_STATE(220)] = 11953,
  [SMALL_STATE(221)] = 11993,
  [SMALL_STATE(222)] = 12029,
  [SMALL_STATE(223)] = 12065,
  [SMALL_STATE(224)] = 12100,
  [SMALL_STATE(225)] = 12139,
  [SMALL_STATE(226)] = 12178,
  [SMALL_STATE(227)] = 12215,
  [SMALL_STATE(228)] = 12254,
  [SMALL_STATE(229)] = 12289,
  [SMALL_STATE(230)] = 12326,
  [SMALL_STATE(231)] = 12365,
  [SMALL_STATE(232)] = 12404,
  [SMALL_STATE(233)] = 12441,
  [SMALL_STATE(234)] = 12476,
  [SMALL_STATE(235)] = 12513,
  [SMALL_STATE(236)] = 12548,
  [SMALL_STATE(237)] = 12583,
  [SMALL_STATE(238)] = 12618,
  [SMALL_STATE(239)] = 12657,
  [SMALL_STATE(240)] = 12692,
  [SMALL_STATE(241)] = 12731,
  [SMALL_STATE(242)] = 12768,
  [SMALL_STATE(243)] = 12803,
  [SMALL_STATE(244)] = 12837,
  [SMALL_STATE(245)] = 12871,
  [SMALL_STATE(246)] = 12905,
  [SMALL_STATE(247)] = 12939,
  [SMALL_STATE(248)] = 12973,
  [SMALL_STATE(249)] = 13009,
  [SMALL_STATE(250)] = 13043,
  [SMALL_STATE(251)] = 13077,
  [SMALL_STATE(252)] = 13111,
  [SMALL_STATE(253)] = 13145,
  [SMALL_STATE(254)] = 13179,
  [SMALL_STATE(255)] = 13213,
  [SMALL_STATE(256)] = 13247,
  [SMALL_STATE(257)] = 13281,
  [SMALL_STATE(258)] = 13315,
  [SMALL_STATE(259)] = 13349,
  [SMALL_STATE(260)] = 13383,
  [SMALL_STATE(261)] = 13417,
  [SMALL_STATE(262)] = 13451,
  [SMALL_STATE(263)] = 13485,
  [SMALL_STATE(264)] = 13519,
  [SMALL_STATE(265)] = 13553,
  [SMALL_STATE(266)] = 13587,
  [SMALL_STATE(267)] = 13621,
  [SMALL_STATE(268)] = 13655,
  [SMALL_STATE(269)] = 13689,
  [SMALL_STATE(270)] = 13723,
  [SMALL_STATE(271)] = 13757,
  [SMALL_STATE(272)] = 13791,
  [SMALL_STATE(273)] = 13825,
  [SMALL_STATE(274)] = 13859,
  [SMALL_STATE(275)] = 13893,
  [SMALL_STATE(276)] = 13927,
  [SMALL_STATE(277)] = 13961,
  [SMALL_STATE(278)] = 13995,
  [SMALL_STATE(279)] = 14029,
  [SMALL_STATE(280)] = 14063,
  [SMALL_STATE(281)] = 14097,
  [SMALL_STATE(282)] = 14131,
  [SMALL_STATE(283)] = 14165,
  [SMALL_STATE(284)] = 14199,
  [SMALL_STATE(285)] = 14233,
  [SMALL_STATE(286)] = 14267,
  [SMALL_STATE(287)] = 14301,
  [SMALL_STATE(288)] = 14335,
  [SMALL_STATE(289)] = 14369,
  [SMALL_STATE(290)] = 14403,
  [SMALL_STATE(291)] = 14437,
  [SMALL_STATE(292)] = 14471,
  [SMALL_STATE(293)] = 14507,
  [SMALL_STATE(294)] = 14541,
  [SMALL_STATE(295)] = 14575,
  [SMALL_STATE(296)] = 14609,
  [SMALL_STATE(297)] = 14643,
  [SMALL_STATE(298)] = 14677,
  [SMALL_STATE(299)] = 14711,
  [SMALL_STATE(300)] = 14745,
  [SMALL_STATE(301)] = 14779,
  [SMALL_STATE(302)] = 14813,
  [SMALL_STATE(303)] = 14847,
  [SMALL_STATE(304)] = 14883,
  [SMALL_STATE(305)] = 14917,
  [SMALL_STATE(306)] = 14951,
  [SMALL_STATE(307)] = 14985,
  [SMALL_STATE(308)] = 15019,
  [SMALL_STATE(309)] = 15053,
  [SMALL_STATE(310)] = 15087,
  [SMALL_STATE(311)] = 15120,
  [SMALL_STATE(312)] = 15153,
  [SMALL_STATE(313)] = 15186,
  [SMALL_STATE(314)] = 15219,
  [SMALL_STATE(315)] = 15252,
  [SMALL_STATE(316)] = 15285,
  [SMALL_STATE(317)] = 15318,
  [SMALL_STATE(318)] = 15351,
  [SMALL_STATE(319)] = 15384,
  [SMALL_STATE(320)] = 15417,
  [SMALL_STATE(321)] = 15450,
  [SMALL_STATE(322)] = 15483,
  [SMALL_STATE(323)] = 15516,
  [SMALL_STATE(324)] = 15549,
  [SMALL_STATE(325)] = 15582,
  [SMALL_STATE(326)] = 15615,
  [SMALL_STATE(327)] = 15648,
  [SMALL_STATE(328)] = 15681,
  [SMALL_STATE(329)] = 15714,
  [SMALL_STATE(330)] = 15747,
  [SMALL_STATE(331)] = 15780,
  [SMALL_STATE(332)] = 15813,
  [SMALL_STATE(333)] = 15846,
  [SMALL_STATE(334)] = 15879,
  [SMALL_STATE(335)] = 15932,
  [SMALL_STATE(336)] = 15985,
  [SMALL_STATE(337)] = 16038,
  [SMALL_STATE(338)] = 16071,
  [SMALL_STATE(339)] = 16104,
  [SMALL_STATE(340)] = 16137,
  [SMALL_STATE(341)] = 16170,
  [SMALL_STATE(342)] = 16203,
  [SMALL_STATE(343)] = 16236,
  [SMALL_STATE(344)] = 16269,
  [SMALL_STATE(345)] = 16302,
  [SMALL_STATE(346)] = 16355,
  [SMALL_STATE(347)] = 16388,
  [SMALL_STATE(348)] = 16421,
  [SMALL_STATE(349)] = 16454,
  [SMALL_STATE(350)] = 16507,
  [SMALL_STATE(351)] = 16540,
  [SMALL_STATE(352)] = 16573,
  [SMALL_STATE(353)] = 16606,
  [SMALL_STATE(354)] = 16639,
  [SMALL_STATE(355)] = 16672,
  [SMALL_STATE(356)] = 16705,
  [SMALL_STATE(357)] = 16738,
  [SMALL_STATE(358)] = 16771,
  [SMALL_STATE(359)] = 16804,
  [SMALL_STATE(360)] = 16837,
  [SMALL_STATE(361)] = 16870,
  [SMALL_STATE(362)] = 16903,
  [SMALL_STATE(363)] = 16936,
  [SMALL_STATE(364)] = 16969,
  [SMALL_STATE(365)] = 17002,
  [SMALL_STATE(366)] = 17035,
  [SMALL_STATE(367)] = 17068,
  [SMALL_STATE(368)] = 17101,
  [SMALL_STATE(369)] = 17154,
  [SMALL_STATE(370)] = 17187,
  [SMALL_STATE(371)] = 17232,
  [SMALL_STATE(372)] = 17273,
  [SMALL_STATE(373)] = 17318,
  [SMALL_STATE(374)] = 17363,
  [SMALL_STATE(375)] = 17408,
  [SMALL_STATE(376)] = 17453,
  [SMALL_STATE(377)] = 17498,
  [SMALL_STATE(378)] = 17535,
  [SMALL_STATE(379)] = 17577,
  [SMALL_STATE(380)] = 17619,
  [SMALL_STATE(381)] = 17661,
  [SMALL_STATE(382)] = 17703,
  [SMALL_STATE(383)] = 17745,
  [SMALL_STATE(384)] = 17787,
  [SMALL_STATE(385)] = 17812,
  [SMALL_STATE(386)] = 17849,
  [SMALL_STATE(387)] = 17888,
  [SMALL_STATE(388)] = 17913,
  [SMALL_STATE(389)] = 17938,
  [SMALL_STATE(390)] = 17975,
  [SMALL_STATE(391)] = 18000,
  [SMALL_STATE(392)] = 18025,
  [SMALL_STATE(393)] = 18062,
  [SMALL_STATE(394)] = 18087,
  [SMALL_STATE(395)] = 18119,
  [SMALL_STATE(396)] = 18151,
  [SMALL_STATE(397)] = 18183,
  [SMALL_STATE(398)] = 18215,
  [SMALL_STATE(399)] = 18247,
  [SMALL_STATE(400)] = 18279,
  [SMALL_STATE(401)] = 18311,
  [SMALL_STATE(402)] = 18343,
  [SMALL_STATE(403)] = 18367,
  [SMALL_STATE(404)] = 18399,
  [SMALL_STATE(405)] = 18431,
  [SMALL_STATE(406)] = 18455,
  [SMALL_STATE(407)] = 18479,
  [SMALL_STATE(408)] = 18503,
  [SMALL_STATE(409)] = 18535,
  [SMALL_STATE(410)] = 18559,
  [SMALL_STATE(411)] = 18591,
  [SMALL_STATE(412)] = 18624,
  [SMALL_STATE(413)] = 18659,
  [SMALL_STATE(414)] = 18688,
  [SMALL_STATE(415)] = 18721,
  [SMALL_STATE(416)] = 18754,
  [SMALL_STATE(417)] = 18787,
  [SMALL_STATE(418)] = 18820,
  [SMALL_STATE(419)] = 18853,
  [SMALL_STATE(420)] = 18886,
  [SMALL_STATE(421)] = 18918,
  [SMALL_STATE(422)] = 18950,
  [SMALL_STATE(423)] = 18982,
  [SMALL_STATE(424)] = 19014,
  [SMALL_STATE(425)] = 19046,
  [SMALL_STATE(426)] = 19078,
  [SMALL_STATE(427)] = 19110,
  [SMALL_STATE(428)] = 19142,
  [SMALL_STATE(429)] = 19174,
  [SMALL_STATE(430)] = 19206,
  [SMALL_STATE(431)] = 19237,
  [SMALL_STATE(432)] = 19266,
  [SMALL_STATE(433)] = 19297,
  [SMALL_STATE(434)] = 19328,
  [SMALL_STATE(435)] = 19357,
  [SMALL_STATE(436)] = 19388,
  [SMALL_STATE(437)] = 19419,
  [SMALL_STATE(438)] = 19450,
  [SMALL_STATE(439)] = 19481,
  [SMALL_STATE(440)] = 19502,
  [SMALL_STATE(441)] = 19519,
  [SMALL_STATE(442)] = 19544,
  [SMALL_STATE(443)] = 19565,
  [SMALL_STATE(444)] = 19584,
  [SMALL_STATE(445)] = 19611,
  [SMALL_STATE(446)] = 19628,
  [SMALL_STATE(447)] = 19653,
  [SMALL_STATE(448)] = 19674,
  [SMALL_STATE(449)] = 19695,
  [SMALL_STATE(450)] = 19712,
  [SMALL_STATE(451)] = 19729,
  [SMALL_STATE(452)] = 19754,
  [SMALL_STATE(453)] = 19771,
  [SMALL_STATE(454)] = 19798,
  [SMALL_STATE(455)] = 19817,
  [SMALL_STATE(456)] = 19834,
  [SMALL_STATE(457)] = 19853,
  [SMALL_STATE(458)] = 19870,
  [SMALL_STATE(459)] = 19887,
  [SMALL_STATE(460)] = 19908,
  [SMALL_STATE(461)] = 19927,
  [SMALL_STATE(462)] = 19954,
  [SMALL_STATE(463)] = 19975,
  [SMALL_STATE(464)] = 20002,
  [SMALL_STATE(465)] = 20021,
  [SMALL_STATE(466)] = 20038,
  [SMALL_STATE(467)] = 20065,
  [SMALL_STATE(468)] = 20090,
  [SMALL_STATE(469)] = 20107,
  [SMALL_STATE(470)] = 20132,
  [SMALL_STATE(471)] = 20149,
  [SMALL_STATE(472)] = 20170,
  [SMALL_STATE(473)] = 20197,
  [SMALL_STATE(474)] = 20218,
  [SMALL_STATE(475)] = 20233,
  [SMALL_STATE(476)] = 20254,
  [SMALL_STATE(477)] = 20281,
  [SMALL_STATE(478)] = 20302,
  [SMALL_STATE(479)] = 20329,
  [SMALL_STATE(480)] = 20348,
  [SMALL_STATE(481)] = 20365,
  [SMALL_STATE(482)] = 20382,
  [SMALL_STATE(483)] = 20407,
  [SMALL_STATE(484)] = 20426,
  [SMALL_STATE(485)] = 20445,
  [SMALL_STATE(486)] = 20462,
  [SMALL_STATE(487)] = 20477,
  [SMALL_STATE(488)] = 20494,
  [SMALL_STATE(489)] = 20521,
  [SMALL_STATE(490)] = 20538,
  [SMALL_STATE(491)] = 20559,
  [SMALL_STATE(492)] = 20586,
  [SMALL_STATE(493)] = 20607,
  [SMALL_STATE(494)] = 20628,
  [SMALL_STATE(495)] = 20643,
  [SMALL_STATE(496)] = 20665,
  [SMALL_STATE(497)] = 20683,
  [SMALL_STATE(498)] = 20705,
  [SMALL_STATE(499)] = 20727,
  [SMALL_STATE(500)] = 20749,
  [SMALL_STATE(501)] = 20765,
  [SMALL_STATE(502)] = 20787,
  [SMALL_STATE(503)] = 20809,
  [SMALL_STATE(504)] = 20831,
  [SMALL_STATE(505)] = 20853,
  [SMALL_STATE(506)] = 20875,
  [SMALL_STATE(507)] = 20897,
  [SMALL_STATE(508)] = 20919,
  [SMALL_STATE(509)] = 20941,
  [SMALL_STATE(510)] = 20963,
  [SMALL_STATE(511)] = 20987,
  [SMALL_STATE(512)] = 21009,
  [SMALL_STATE(513)] = 21031,
  [SMALL_STATE(514)] = 21053,
  [SMALL_STATE(515)] = 21075,
  [SMALL_STATE(516)] = 21097,
  [SMALL_STATE(517)] = 21119,
  [SMALL_STATE(518)] = 21141,
  [SMALL_STATE(519)] = 21163,
  [SMALL_STATE(520)] = 21185,
  [SMALL_STATE(521)] = 21207,
  [SMALL_STATE(522)] = 21229,
  [SMALL_STATE(523)] = 21251,
  [SMALL_STATE(524)] = 21273,
  [SMALL_STATE(525)] = 21295,
  [SMALL_STATE(526)] = 21312,
  [SMALL_STATE(527)] = 21333,
  [SMALL_STATE(528)] = 21350,
  [SMALL_STATE(529)] = 21367,
  [SMALL_STATE(530)] = 21384,
  [SMALL_STATE(531)] = 21401,
  [SMALL_STATE(532)] = 21418,
  [SMALL_STATE(533)] = 21441,
  [SMALL_STATE(534)] = 21462,
  [SMALL_STATE(535)] = 21485,
  [SMALL_STATE(536)] = 21506,
  [SMALL_STATE(537)] = 21523,
  [SMALL_STATE(538)] = 21540,
  [SMALL_STATE(539)] = 21557,
  [SMALL_STATE(540)] = 21574,
  [SMALL_STATE(541)] = 21591,
  [SMALL_STATE(542)] = 21612,
  [SMALL_STATE(543)] = 21635,
  [SMALL_STATE(544)] = 21652,
  [SMALL_STATE(545)] = 21669,
  [SMALL_STATE(546)] = 21690,
  [SMALL_STATE(547)] = 21707,
  [SMALL_STATE(548)] = 21724,
  [SMALL_STATE(549)] = 21747,
  [SMALL_STATE(550)] = 21768,
  [SMALL_STATE(551)] = 21789,
  [SMALL_STATE(552)] = 21812,
  [SMALL_STATE(553)] = 21829,
  [SMALL_STATE(554)] = 21846,
  [SMALL_STATE(555)] = 21863,
  [SMALL_STATE(556)] = 21886,
  [SMALL_STATE(557)] = 21903,
  [SMALL_STATE(558)] = 21920,
  [SMALL_STATE(559)] = 21941,
  [SMALL_STATE(560)] = 21964,
  [SMALL_STATE(561)] = 21981,
  [SMALL_STATE(562)] = 22002,
  [SMALL_STATE(563)] = 22019,
  [SMALL_STATE(564)] = 22036,
  [SMALL_STATE(565)] = 22057,
  [SMALL_STATE(566)] = 22078,
  [SMALL_STATE(567)] = 22095,
  [SMALL_STATE(568)] = 22116,
  [SMALL_STATE(569)] = 22133,
  [SMALL_STATE(570)] = 22147,
  [SMALL_STATE(571)] = 22161,
  [SMALL_STATE(572)] = 22175,
  [SMALL_STATE(573)] = 22189,
  [SMALL_STATE(574)] = 22203,
  [SMALL_STATE(575)] = 22217,
  [SMALL_STATE(576)] = 22231,
  [SMALL_STATE(577)] = 22245,
  [SMALL_STATE(578)] = 22259,
  [SMALL_STATE(579)] = 22273,
  [SMALL_STATE(580)] = 22287,
  [SMALL_STATE(581)] = 22301,
  [SMALL_STATE(582)] = 22315,
  [SMALL_STATE(583)] = 22329,
  [SMALL_STATE(584)] = 22343,
  [SMALL_STATE(585)] = 22357,
  [SMALL_STATE(586)] = 22371,
  [SMALL_STATE(587)] = 22385,
  [SMALL_STATE(588)] = 22399,
  [SMALL_STATE(589)] = 22413,
  [SMALL_STATE(590)] = 22427,
  [SMALL_STATE(591)] = 22441,
  [SMALL_STATE(592)] = 22455,
  [SMALL_STATE(593)] = 22469,
  [SMALL_STATE(594)] = 22483,
  [SMALL_STATE(595)] = 22497,
  [SMALL_STATE(596)] = 22511,
  [SMALL_STATE(597)] = 22525,
  [SMALL_STATE(598)] = 22539,
  [SMALL_STATE(599)] = 22553,
  [SMALL_STATE(600)] = 22567,
  [SMALL_STATE(601)] = 22581,
  [SMALL_STATE(602)] = 22595,
  [SMALL_STATE(603)] = 22609,
  [SMALL_STATE(604)] = 22623,
  [SMALL_STATE(605)] = 22637,
  [SMALL_STATE(606)] = 22651,
  [SMALL_STATE(607)] = 22665,
  [SMALL_STATE(608)] = 22679,
  [SMALL_STATE(609)] = 22693,
  [SMALL_STATE(610)] = 22707,
  [SMALL_STATE(611)] = 22721,
  [SMALL_STATE(612)] = 22735,
  [SMALL_STATE(613)] = 22749,
  [SMALL_STATE(614)] = 22763,
  [SMALL_STATE(615)] = 22777,
  [SMALL_STATE(616)] = 22791,
  [SMALL_STATE(617)] = 22805,
  [SMALL_STATE(618)] = 22819,
  [SMALL_STATE(619)] = 22833,
  [SMALL_STATE(620)] = 22847,
  [SMALL_STATE(621)] = 22861,
  [SMALL_STATE(622)] = 22875,
  [SMALL_STATE(623)] = 22889,
  [SMALL_STATE(624)] = 22903,
  [SMALL_STATE(625)] = 22917,
  [SMALL_STATE(626)] = 22931,
  [SMALL_STATE(627)] = 22945,
  [SMALL_STATE(628)] = 22959,
  [SMALL_STATE(629)] = 22973,
  [SMALL_STATE(630)] = 22987,
  [SMALL_STATE(631)] = 23001,
  [SMALL_STATE(632)] = 23015,
  [SMALL_STATE(633)] = 23029,
  [SMALL_STATE(634)] = 23043,
  [SMALL_STATE(635)] = 23057,
  [SMALL_STATE(636)] = 23071,
  [SMALL_STATE(637)] = 23085,
  [SMALL_STATE(638)] = 23099,
  [SMALL_STATE(639)] = 23113,
  [SMALL_STATE(640)] = 23127,
  [SMALL_STATE(641)] = 23141,
  [SMALL_STATE(642)] = 23155,
  [SMALL_STATE(643)] = 23169,
  [SMALL_STATE(644)] = 23183,
  [SMALL_STATE(645)] = 23203,
  [SMALL_STATE(646)] = 23221,
  [SMALL_STATE(647)] = 23235,
  [SMALL_STATE(648)] = 23253,
  [SMALL_STATE(649)] = 23267,
  [SMALL_STATE(650)] = 23287,
  [SMALL_STATE(651)] = 23301,
  [SMALL_STATE(652)] = 23315,
  [SMALL_STATE(653)] = 23329,
  [SMALL_STATE(654)] = 23343,
  [SMALL_STATE(655)] = 23357,
  [SMALL_STATE(656)] = 23375,
  [SMALL_STATE(657)] = 23395,
  [SMALL_STATE(658)] = 23409,
  [SMALL_STATE(659)] = 23429,
  [SMALL_STATE(660)] = 23443,
  [SMALL_STATE(661)] = 23457,
  [SMALL_STATE(662)] = 23471,
  [SMALL_STATE(663)] = 23485,
  [SMALL_STATE(664)] = 23499,
  [SMALL_STATE(665)] = 23517,
  [SMALL_STATE(666)] = 23537,
  [SMALL_STATE(667)] = 23557,
  [SMALL_STATE(668)] = 23571,
  [SMALL_STATE(669)] = 23585,
  [SMALL_STATE(670)] = 23599,
  [SMALL_STATE(671)] = 23619,
  [SMALL_STATE(672)] = 23639,
  [SMALL_STATE(673)] = 23659,
  [SMALL_STATE(674)] = 23677,
  [SMALL_STATE(675)] = 23691,
  [SMALL_STATE(676)] = 23705,
  [SMALL_STATE(677)] = 23719,
  [SMALL_STATE(678)] = 23733,
  [SMALL_STATE(679)] = 23751,
  [SMALL_STATE(680)] = 23765,
  [SMALL_STATE(681)] = 23783,
  [SMALL_STATE(682)] = 23797,
  [SMALL_STATE(683)] = 23811,
  [SMALL_STATE(684)] = 23825,
  [SMALL_STATE(685)] = 23839,
  [SMALL_STATE(686)] = 23857,
  [SMALL_STATE(687)] = 23871,
  [SMALL_STATE(688)] = 23891,
  [SMALL_STATE(689)] = 23905,
  [SMALL_STATE(690)] = 23925,
  [SMALL_STATE(691)] = 23939,
  [SMALL_STATE(692)] = 23953,
  [SMALL_STATE(693)] = 23967,
  [SMALL_STATE(694)] = 23981,
  [SMALL_STATE(695)] = 23995,
  [SMALL_STATE(696)] = 24009,
  [SMALL_STATE(697)] = 24023,
  [SMALL_STATE(698)] = 24043,
  [SMALL_STATE(699)] = 24057,
  [SMALL_STATE(700)] = 24077,
  [SMALL_STATE(701)] = 24091,
  [SMALL_STATE(702)] = 24105,
  [SMALL_STATE(703)] = 24123,
  [SMALL_STATE(704)] = 24137,
  [SMALL_STATE(705)] = 24151,
  [SMALL_STATE(706)] = 24169,
  [SMALL_STATE(707)] = 24183,
  [SMALL_STATE(708)] = 24197,
  [SMALL_STATE(709)] = 24211,
  [SMALL_STATE(710)] = 24231,
  [SMALL_STATE(711)] = 24245,
  [SMALL_STATE(712)] = 24265,
  [SMALL_STATE(713)] = 24283,
  [SMALL_STATE(714)] = 24297,
  [SMALL_STATE(715)] = 24315,
  [SMALL_STATE(716)] = 24335,
  [SMALL_STATE(717)] = 24355,
  [SMALL_STATE(718)] = 24369,
  [SMALL_STATE(719)] = 24389,
  [SMALL_STATE(720)] = 24407,
  [SMALL_STATE(721)] = 24421,
  [SMALL_STATE(722)] = 24441,
  [SMALL_STATE(723)] = 24455,
  [SMALL_STATE(724)] = 24473,
  [SMALL_STATE(725)] = 24493,
  [SMALL_STATE(726)] = 24507,
  [SMALL_STATE(727)] = 24521,
  [SMALL_STATE(728)] = 24535,
  [SMALL_STATE(729)] = 24553,
  [SMALL_STATE(730)] = 24567,
  [SMALL_STATE(731)] = 24581,
  [SMALL_STATE(732)] = 24595,
  [SMALL_STATE(733)] = 24615,
  [SMALL_STATE(734)] = 24633,
  [SMALL_STATE(735)] = 24653,
  [SMALL_STATE(736)] = 24667,
  [SMALL_STATE(737)] = 24681,
  [SMALL_STATE(738)] = 24695,
  [SMALL_STATE(739)] = 24709,
  [SMALL_STATE(740)] = 24729,
  [SMALL_STATE(741)] = 24741,
  [SMALL_STATE(742)] = 24755,
  [SMALL_STATE(743)] = 24769,
  [SMALL_STATE(744)] = 24789,
  [SMALL_STATE(745)] = 24809,
  [SMALL_STATE(746)] = 24823,
  [SMALL_STATE(747)] = 24843,
  [SMALL_STATE(748)] = 24863,
  [SMALL_STATE(749)] = 24883,
  [SMALL_STATE(750)] = 24897,
  [SMALL_STATE(751)] = 24912,
  [SMALL_STATE(752)] = 24923,
  [SMALL_STATE(753)] = 24938,
  [SMALL_STATE(754)] = 24953,
  [SMALL_STATE(755)] = 24966,
  [SMALL_STATE(756)] = 24981,
  [SMALL_STATE(757)] = 24996,
  [SMALL_STATE(758)] = 25011,
  [SMALL_STATE(759)] = 25026,
  [SMALL_STATE(760)] = 25039,
  [SMALL_STATE(761)] = 25054,
  [SMALL_STATE(762)] = 25069,
  [SMALL_STATE(763)] = 25084,
  [SMALL_STATE(764)] = 25101,
  [SMALL_STATE(765)] = 25118,
  [SMALL_STATE(766)] = 25135,
  [SMALL_STATE(767)] = 25152,
  [SMALL_STATE(768)] = 25169,
  [SMALL_STATE(769)] = 25180,
  [SMALL_STATE(770)] = 25192,
  [SMALL_STATE(771)] = 25204,
  [SMALL_STATE(772)] = 25216,
  [SMALL_STATE(773)] = 25230,
  [SMALL_STATE(774)] = 25244,
  [SMALL_STATE(775)] = 25258,
  [SMALL_STATE(776)] = 25272,
  [SMALL_STATE(777)] = 25286,
  [SMALL_STATE(778)] = 25297,
  [SMALL_STATE(779)] = 25308,
  [SMALL_STATE(780)] = 25319,
  [SMALL_STATE(781)] = 25330,
  [SMALL_STATE(782)] = 25341,
  [SMALL_STATE(783)] = 25352,
  [SMALL_STATE(784)] = 25363,
  [SMALL_STATE(785)] = 25374,
  [SMALL_STATE(786)] = 25385,
  [SMALL_STATE(787)] = 25396,
  [SMALL_STATE(788)] = 25407,
  [SMALL_STATE(789)] = 25418,
  [SMALL_STATE(790)] = 25429,
  [SMALL_STATE(791)] = 25440,
  [SMALL_STATE(792)] = 25451,
  [SMALL_STATE(793)] = 25462,
  [SMALL_STATE(794)] = 25473,
  [SMALL_STATE(795)] = 25484,
  [SMALL_STATE(796)] = 25495,
  [SMALL_STATE(797)] = 25506,
  [SMALL_STATE(798)] = 25517,
  [SMALL_STATE(799)] = 25528,
  [SMALL_STATE(800)] = 25539,
  [SMALL_STATE(801)] = 25550,
  [SMALL_STATE(802)] = 25561,
  [SMALL_STATE(803)] = 25572,
  [SMALL_STATE(804)] = 25583,
  [SMALL_STATE(805)] = 25594,
  [SMALL_STATE(806)] = 25603,
  [SMALL_STATE(807)] = 25612,
  [SMALL_STATE(808)] = 25623,
  [SMALL_STATE(809)] = 25634,
  [SMALL_STATE(810)] = 25645,
  [SMALL_STATE(811)] = 25656,
  [SMALL_STATE(812)] = 25667,
  [SMALL_STATE(813)] = 25678,
  [SMALL_STATE(814)] = 25689,
  [SMALL_STATE(815)] = 25698,
  [SMALL_STATE(816)] = 25707,
  [SMALL_STATE(817)] = 25718,
  [SMALL_STATE(818)] = 25729,
  [SMALL_STATE(819)] = 25740,
  [SMALL_STATE(820)] = 25751,
  [SMALL_STATE(821)] = 25762,
  [SMALL_STATE(822)] = 25773,
  [SMALL_STATE(823)] = 25784,
  [SMALL_STATE(824)] = 25793,
  [SMALL_STATE(825)] = 25804,
  [SMALL_STATE(826)] = 25815,
  [SMALL_STATE(827)] = 25826,
  [SMALL_STATE(828)] = 25837,
  [SMALL_STATE(829)] = 25848,
  [SMALL_STATE(830)] = 25859,
  [SMALL_STATE(831)] = 25870,
  [SMALL_STATE(832)] = 25881,
  [SMALL_STATE(833)] = 25892,
  [SMALL_STATE(834)] = 25903,
  [SMALL_STATE(835)] = 25914,
  [SMALL_STATE(836)] = 25925,
  [SMALL_STATE(837)] = 25936,
  [SMALL_STATE(838)] = 25947,
  [SMALL_STATE(839)] = 25958,
  [SMALL_STATE(840)] = 25969,
  [SMALL_STATE(841)] = 25980,
  [SMALL_STATE(842)] = 25989,
  [SMALL_STATE(843)] = 26000,
  [SMALL_STATE(844)] = 26011,
  [SMALL_STATE(845)] = 26022,
  [SMALL_STATE(846)] = 26033,
  [SMALL_STATE(847)] = 26042,
  [SMALL_STATE(848)] = 26053,
  [SMALL_STATE(849)] = 26064,
  [SMALL_STATE(850)] = 26075,
  [SMALL_STATE(851)] = 26086,
  [SMALL_STATE(852)] = 26097,
  [SMALL_STATE(853)] = 26108,
  [SMALL_STATE(854)] = 26119,
  [SMALL_STATE(855)] = 26130,
  [SMALL_STATE(856)] = 26141,
  [SMALL_STATE(857)] = 26152,
  [SMALL_STATE(858)] = 26163,
  [SMALL_STATE(859)] = 26174,
  [SMALL_STATE(860)] = 26185,
  [SMALL_STATE(861)] = 26196,
  [SMALL_STATE(862)] = 26207,
  [SMALL_STATE(863)] = 26218,
  [SMALL_STATE(864)] = 26229,
  [SMALL_STATE(865)] = 26240,
  [SMALL_STATE(866)] = 26251,
  [SMALL_STATE(867)] = 26262,
  [SMALL_STATE(868)] = 26273,
  [SMALL_STATE(869)] = 26284,
  [SMALL_STATE(870)] = 26295,
  [SMALL_STATE(871)] = 26306,
  [SMALL_STATE(872)] = 26317,
  [SMALL_STATE(873)] = 26328,
  [SMALL_STATE(874)] = 26339,
  [SMALL_STATE(875)] = 26350,
  [SMALL_STATE(876)] = 26361,
  [SMALL_STATE(877)] = 26372,
  [SMALL_STATE(878)] = 26383,
  [SMALL_STATE(879)] = 26394,
  [SMALL_STATE(880)] = 26403,
  [SMALL_STATE(881)] = 26412,
  [SMALL_STATE(882)] = 26423,
  [SMALL_STATE(883)] = 26434,
  [SMALL_STATE(884)] = 26443,
  [SMALL_STATE(885)] = 26452,
  [SMALL_STATE(886)] = 26461,
  [SMALL_STATE(887)] = 26470,
  [SMALL_STATE(888)] = 26479,
  [SMALL_STATE(889)] = 26488,
  [SMALL_STATE(890)] = 26497,
  [SMALL_STATE(891)] = 26508,
  [SMALL_STATE(892)] = 26517,
  [SMALL_STATE(893)] = 26528,
  [SMALL_STATE(894)] = 26539,
  [SMALL_STATE(895)] = 26550,
  [SMALL_STATE(896)] = 26561,
  [SMALL_STATE(897)] = 26572,
  [SMALL_STATE(898)] = 26581,
  [SMALL_STATE(899)] = 26590,
  [SMALL_STATE(900)] = 26601,
  [SMALL_STATE(901)] = 26610,
  [SMALL_STATE(902)] = 26619,
  [SMALL_STATE(903)] = 26630,
  [SMALL_STATE(904)] = 26641,
  [SMALL_STATE(905)] = 26652,
  [SMALL_STATE(906)] = 26661,
  [SMALL_STATE(907)] = 26672,
  [SMALL_STATE(908)] = 26681,
  [SMALL_STATE(909)] = 26690,
  [SMALL_STATE(910)] = 26699,
  [SMALL_STATE(911)] = 26708,
  [SMALL_STATE(912)] = 26717,
  [SMALL_STATE(913)] = 26728,
  [SMALL_STATE(914)] = 26739,
  [SMALL_STATE(915)] = 26748,
  [SMALL_STATE(916)] = 26759,
  [SMALL_STATE(917)] = 26770,
  [SMALL_STATE(918)] = 26781,
  [SMALL_STATE(919)] = 26790,
  [SMALL_STATE(920)] = 26801,
  [SMALL_STATE(921)] = 26810,
  [SMALL_STATE(922)] = 26819,
  [SMALL_STATE(923)] = 26830,
  [SMALL_STATE(924)] = 26841,
  [SMALL_STATE(925)] = 26852,
  [SMALL_STATE(926)] = 26863,
  [SMALL_STATE(927)] = 26874,
  [SMALL_STATE(928)] = 26883,
  [SMALL_STATE(929)] = 26892,
  [SMALL_STATE(930)] = 26901,
  [SMALL_STATE(931)] = 26910,
  [SMALL_STATE(932)] = 26919,
  [SMALL_STATE(933)] = 26928,
  [SMALL_STATE(934)] = 26937,
  [SMALL_STATE(935)] = 26946,
  [SMALL_STATE(936)] = 26955,
  [SMALL_STATE(937)] = 26964,
  [SMALL_STATE(938)] = 26973,
  [SMALL_STATE(939)] = 26982,
  [SMALL_STATE(940)] = 26991,
  [SMALL_STATE(941)] = 27000,
  [SMALL_STATE(942)] = 27009,
  [SMALL_STATE(943)] = 27018,
  [SMALL_STATE(944)] = 27027,
  [SMALL_STATE(945)] = 27036,
  [SMALL_STATE(946)] = 27045,
  [SMALL_STATE(947)] = 27054,
  [SMALL_STATE(948)] = 27063,
  [SMALL_STATE(949)] = 27072,
  [SMALL_STATE(950)] = 27081,
  [SMALL_STATE(951)] = 27090,
  [SMALL_STATE(952)] = 27099,
  [SMALL_STATE(953)] = 27108,
  [SMALL_STATE(954)] = 27117,
  [SMALL_STATE(955)] = 27126,
  [SMALL_STATE(956)] = 27137,
  [SMALL_STATE(957)] = 27148,
  [SMALL_STATE(958)] = 27159,
  [SMALL_STATE(959)] = 27170,
  [SMALL_STATE(960)] = 27181,
  [SMALL_STATE(961)] = 27192,
  [SMALL_STATE(962)] = 27203,
  [SMALL_STATE(963)] = 27214,
  [SMALL_STATE(964)] = 27225,
  [SMALL_STATE(965)] = 27236,
  [SMALL_STATE(966)] = 27247,
  [SMALL_STATE(967)] = 27258,
  [SMALL_STATE(968)] = 27269,
  [SMALL_STATE(969)] = 27280,
  [SMALL_STATE(970)] = 27291,
  [SMALL_STATE(971)] = 27302,
  [SMALL_STATE(972)] = 27313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(926),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 2, .production_id = 13),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 2, .production_id = 13),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 13),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 13),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 3, .production_id = 31),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 3, .production_id = 31),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional_block, 4, .production_id = 31),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional_block, 4, .production_id = 31),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(733),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(436),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(335),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(565),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(415),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_block, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(392),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(426),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(698),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(551),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(422),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_block, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(699),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(955),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(700),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(375),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(447),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(64),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(956),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(684),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(54),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(381),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(678),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(432),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(336),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(545),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(418),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(385),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(425),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(683),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(542),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(423),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(687),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(966),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(691),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(373),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(471),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(67),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(960),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(692),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(26),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(378),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(493),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(70),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(492),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(69),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_block, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(719),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(433),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(345),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(541),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(414),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(389),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(424),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(674),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(532),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(420),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(672),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(961),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(669),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(374),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(473),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(71),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(962),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(676),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(16),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_block, 2), SHIFT_REPEAT(380),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 23),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 23),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 24),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 24),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 5, .production_id = 51),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 5, .production_id = 51),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(927),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(98),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 3, .production_id = 6),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 3, .production_id = 6),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 3),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 3),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(823),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(104),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 4, .production_id = 6),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 4, .production_id = 6),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 4, .production_id = 6),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 4, .production_id = 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_command_repeat2, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(902),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_command, 3, .production_id = 6),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_command, 3, .production_id = 6),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_command, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_command, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(914),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(145),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(930),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(217),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(891),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(210),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 2, .production_id = 8),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(788),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 3, .production_id = 6),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 3, .production_id = 6),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat2, 2),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(92),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_from, 3, .production_id = 19),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_from, 3, .production_id = 19),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_image_command_repeat1, 1, .production_id = 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 16),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 16),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_ref, 2, .production_id = 8),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_ref, 2, .production_id = 8),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(116),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 2, .production_id = 8),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 3, .production_id = 15),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 3, .production_id = 15),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_ref, 2, .production_id = 8),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_ref, 2, .production_id = 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_arg, 4, .production_id = 44),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_build_arg, 4, .production_id = 44),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 2, .production_id = 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 2, .production_id = 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 35),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 35),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_command_repeat2, 2), SHIFT_REPEAT(796),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(216),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 9, .production_id = 61),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 9, .production_id = 61),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 8, .production_id = 62),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 8, .production_id = 62),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 61),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 61),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 18),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 18),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 8, .production_id = 58),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 8, .production_id = 58),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 7, .production_id = 60),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 7, .production_id = 60),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 7, .production_id = 59),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 7, .production_id = 59),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 18),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 18),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 58),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 58),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 7, .production_id = 8),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 7, .production_id = 8),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_command, 6),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try_command, 6),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 6, .production_id = 55),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 6, .production_id = 55),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 6, .production_id = 54),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 6, .production_id = 54),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 6, .production_id = 53),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6, .production_id = 53),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_command, 6, .production_id = 8),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_command, 6, .production_id = 8),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 50),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 50),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 6, .production_id = 49),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 6, .production_id = 49),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 5, .production_id = 6),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 5, .production_id = 6),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_command, 5, .production_id = 44),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_command, 5, .production_id = 44),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 47),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 5, .production_id = 46),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 5, .production_id = 45),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 5, .production_id = 45),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_command, 5, .production_id = 44),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_command, 5, .production_id = 44),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 5, .production_id = 43),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 5, .production_id = 43),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 5, .production_id = 42),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5, .production_id = 42),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 5, .production_id = 41),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 5, .production_id = 41),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 5, .production_id = 39),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 5, .production_id = 39),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 38),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 38),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 5, .production_id = 37),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 5, .production_id = 37),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_docker_command, 4),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_docker_command, 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 4),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 4),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_artifact_command, 4, .production_id = 34),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_artifact_command, 4, .production_id = 34),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 33),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 33),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 4, .production_id = 32),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 4, .production_id = 32),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 4, .production_id = 6),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 4, .production_id = 6),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_command, 4, .production_id = 27),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4, .production_id = 27),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git_clone_command, 4, .production_id = 26),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git_clone_command, 4, .production_id = 26),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 25),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 4, .production_id = 25),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_command, 4, .production_id = 21),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_command, 4, .production_id = 21),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 4, .production_id = 20),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 4, .production_id = 20),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 4, .production_id = 18),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 4, .production_id = 18),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wait_command, 3),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wait_command, 3),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(188),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_command, 3, .production_id = 14),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_command, 3, .production_id = 14),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_command, 3),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_command, 3),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 12),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_dockerfile_command, 3, .production_id = 12),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_command, 3, .production_id = 10),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_command, 3, .production_id = 10),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_command, 3, .production_id = 8),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg_command, 3, .production_id = 8),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_save_image_command, 2, .production_id = 5),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locally_command, 2),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_locally_command, 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_command, 2),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_command, 2),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [920] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_save_image_command_repeat2, 2), SHIFT_REPEAT(201),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 4, .production_id = 17),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 4, .production_id = 17),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_command, 3, .production_id = 7),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_command, 3, .production_id = 7),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_command, 5, .production_id = 36),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project_command, 5, .production_id = 36),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 9),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 9),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(393),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(884),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(901),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(900),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 9),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 9),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(402),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(887),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(888),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 9),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(487),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(815),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(814),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(910),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(806),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(805),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chmod, 3, .production_id = 19),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chmod, 3, .production_id = 19),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chown, 3, .production_id = 19),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chown, 3, .production_id = 19),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_platform, 3, .production_id = 19),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_platform, 3, .production_id = 19),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat1, 1, .production_id = 1),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_command_repeat1, 1, .production_id = 1),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_secret, 3, .production_id = 19),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_secret, 3, .production_id = 19),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount, 3, .production_id = 19),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount, 3, .production_id = 19),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 40), SHIFT_REPEAT(474),
  [1159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 40), SHIFT_REPEAT(928),
  [1162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 40), SHIFT_REPEAT(929),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 2, .production_id = 40),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 9),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(889),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(440),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(886),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(883),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 9),
  [1211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(880),
  [1214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(879),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(846),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(885),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 9),
  [1227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(909),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(908),
  [1233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(546),
  [1236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(907),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 9),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 9), SHIFT_REPEAT(889),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 9), SHIFT_REPEAT(500),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 2, .production_id = 9), SHIFT_REPEAT(886),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_command_repeat1, 1, .production_id = 1),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 9),
  [1288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(496),
  [1291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(443),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compose, 3, .production_id = 19),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 3, .production_id = 19),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, .production_id = 19),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 2),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 3, .production_id = 19),
  [1342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 11), SHIFT_REPEAT(906),
  [1345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 11), SHIFT_REPEAT(758),
  [1348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 2, .production_id = 11), SHIFT_REPEAT(775),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_for_command_repeat2, 1, .production_id = 22),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 5, .production_id = 57),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_docker_command_repeat1, 1, .production_id = 1),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 8, .production_id = 63),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_save_artifact_command_repeat1, 1, .production_id = 1),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__conditional_block_repeat1, 1, .production_id = 1),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 9),
  [1461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(730),
  [1464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(900),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [1473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(627),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [1513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [1537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 9),
  [1547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(841),
  [1550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(752),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_dockerfile_command_repeat1, 1, .production_id = 1),
  [1561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_build_arg, 5, .production_id = 52),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_build_arg, 5, .production_id = 52),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cache_command_repeat1, 1, .production_id = 1),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(958),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [1591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sharing, 3),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sharing, 3),
  [1595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_file, 3, .production_id = 19),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_file, 3, .production_id = 19),
  [1599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [1605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docker_target, 3, .production_id = 19),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docker_target, 3, .production_id = 19),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [1613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [1615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [1705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [1735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [1779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [1787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 56),
  [1811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 2, .production_id = 56), SHIFT_REPEAT(459),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [1836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 2, .production_id = 9),
  [1848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(754),
  [1851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [1857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [1875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [1893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 30),
  [1897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 30), SHIFT_REPEAT(412),
  [1900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 30),
  [1902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [1924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 9),
  [1930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(759),
  [1933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [1961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [1965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(926),
  [1968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_command_repeat1, 1, .production_id = 1),
  [1972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [1984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [1986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_earthfile_ref, 1),
  [1996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [2002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [2012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3, .production_id = 19),
  [2014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3, .production_id = 19),
  [2016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_clone_command_repeat1, 1, .production_id = 1),
  [2020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_command_repeat1, 1, .production_id = 1),
  [2022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 6),
  [2024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 6),
  [2026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 3, .production_id = 3),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_block, 1, .production_id = 28),
  [2032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_block, 1, .production_id = 28),
  [2034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_copy_command_repeat2, 1, .production_id = 2),
  [2036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_command_repeat1, 1, .production_id = 1),
  [2038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact, 3),
  [2040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact, 3),
  [2042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 29),
  [2044] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2, .production_id = 29),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_artifact_build_args, 5),
  [2048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_artifact_build_args, 5),
  [2050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_command_repeat1, 2, .production_id = 9),
  [2052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_command_repeat1, 2, .production_id = 9), SHIFT_REPEAT(774),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2),
  [2061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_command_repeat1, 2), SHIFT_REPEAT(765),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [2072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 6, .production_id = 3),
  [2074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_try_command_repeat1, 1, .production_id = 48),
  [2076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 5, .production_id = 3),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_command_repeat1, 1, .production_id = 1),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_command_repeat1, 1, .production_id = 1),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [2090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [2092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [2100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [2112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [2114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [2126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [2130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [2136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [2144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [2152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [2160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [2162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(802),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [2184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [2186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [2198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [2208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [2210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [2226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [2236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [2248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [2250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [2254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [2262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [2270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [2274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [2276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [2278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [2282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [2284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [2286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [2290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [2292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [2294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [2298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [2300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [2302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [2304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [2306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [2308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [2310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [2312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [2316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [2324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [2326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [2328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [2330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [2332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [2334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [2336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(969),
  [2344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [2348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [2350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [2352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [2354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(970),
  [2356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [2362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [2366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [2368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [2370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [2374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [2376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2380] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [2388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [2390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [2392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [2394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [2396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [2398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [2400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [2402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [2404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [2406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [2408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [2410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [2412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [2414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(864),
  [2416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [2418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [2420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(867),
  [2422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [2424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [2426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [2428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [2430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(872),
  [2432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [2434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(874),
  [2436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [2438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [2440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(877),
  [2442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [2452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [2454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [2462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [2468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
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
