package tree_sitter_hledger_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-hledger"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hledger.Language())
	if language == nil {
		t.Errorf("Error loading Hledger grammar")
	}
}
