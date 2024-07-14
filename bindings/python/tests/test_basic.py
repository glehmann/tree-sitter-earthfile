#!/usr/bin/env python3

import unittest as test

import tree_sitter_earthfile as tse
import tree_sitter as ts

class TestPackage(test.TestCase):
    def setUp(self) -> None:
        self.source = b'VERSION 0.8\n'
        language = ts.Language(tse.language())
        parser = ts.Parser()
        parser.set_language(language)
        self.tree = parser.parse(self.source)

    def test_parse(self):
        nodes = self.tree.root_node.named_children
        print(nodes)
        self.assertEqual(len(nodes), 1)
        self.assertEqual(nodes[0].type, 'block')

if __name__ == '__main__':
    test.main(verbosity=2)
