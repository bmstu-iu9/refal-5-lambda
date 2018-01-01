#!/bin/bash

if [ -n "$1" ]; then
  cat /dev/null > slim-prefix.sref
  for s in $1; do
    echo '//FROM '$s >> slim-prefix.sref
  done
fi

SCRIPT_FLAGS=--scratch ../make.sh srlib-slim-prefix slim-prefix slim-prefix
rm -f ../../build/srlib-slim-prefix/{LibraryEx,GetOpt}.*
