package tree_sitter_earthfile_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_earthfile "github.com/tree-sitter/tree-sitter-earthfile/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_earthfile.Language())
	if language == nil {
		t.Errorf("Error loading Earthfile grammar")
	}
}
