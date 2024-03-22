#!/usr/bin/env python3

import unittest as test

import tree_sitter_earthfile as tse

class TestPackage(test.TestCase):
    def setUp(self) -> None:
        self.source = b'VERSION 0.8\n'
        self.tree = tse.parse(self.source)

    def test_parse(self):
        nodes = self.tree.root_node.named_children
        self.assertEqual(len(nodes), 3)
        self.assertEqual(nodes[0].type, 'source_file')

if __name__ == '__main__':
    test.main(verbosity=2)
