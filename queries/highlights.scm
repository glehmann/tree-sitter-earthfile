[
    ","
] @punctuation.delimiter

[
    "["
    "]"
] @punctuation.bracket

[
    "ARG"
    "AS"
    "AS LOCAL"
    "BUILD"
    "CACHE"
    "CMD"
    "COPY"
    "DO"
    "ENTRYPOINT"
    "ENV"
    "FROM"
    "FROM DOCKERFILE"
    "FUNCTION"
    "GIT CLONE"
    "HOST"
    "IMPORT"
    "LABEL"
    "LET"
    "PROJECT"
    "RUN"
    "SAVE ARTIFACT"
    "SAVE IMAGE"
    "SET"
    "USER"
    "VERSION"
    "VOLUME"
    "WITH DOCKER"
    "WORKDIR"
] @keyword

[
    "ELSE"
    "ELSE IF"
    "END"
    "FINALLY"
    "FOR"
    "IF"
    "IMPORT"
    "IN"
    "TRY"
] @keyword.control

[
    (comment)
    (line_continuation_comment)
] @comment

(line_continuation) @operator

(function_ref) @function

[
    (target_ref)
    (target_artifact)
    (image_spec)
] @module

(target (identifier) @module)

[
  (double_quoted_string)
  (single_quoted_string)
] @string

(expansion) @constant
(expansion ["$" "{" "}"] @punctuation.special)

[
    option: (_)
] @type


;; option: (_ "=" @operator)
;; (build_arg "=" @operator)
