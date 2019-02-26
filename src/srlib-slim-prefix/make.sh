#!/bin/bash

if [ -n "$1" ]; then
  cat /dev/null > slim-prefix.ref
  for s in $1; do
    echo '*$FROM '$s >> slim-prefix.ref
  done
fi

SCRIPT_FLAGS=--scratch ../make.sh srlib-slim-prefix slim-prefix slim-prefix
rm -f ../../build/srlib-slim-prefix/{LibraryEx,GetOpt}.*
