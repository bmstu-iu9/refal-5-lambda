#!/bin/bash

if [ -n "$1" ]; then
  cat /dev/null > slim-debug-prefix.sref
  for s in $1; do
    echo '//FROM '$s >> slim-debug-prefix.sref
  done
fi

SCRIPT_FLAGS=--scratch ../make.sh \
  srlib-slim-debug-prefix slim-debug-prefix slim-debug-prefix
rm -f ../../build/srlib-slim-debug-prefix/{LibraryEx,GetOpt}.*
