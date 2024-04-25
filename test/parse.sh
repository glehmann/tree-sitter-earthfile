#!/bin/bash

set -e
for f in `find . -name Earthfile`; do
  tree-sitter parse $f > /tmp/res.txt || tail -1 /tmp/res.txt
done
