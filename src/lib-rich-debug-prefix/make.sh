#!/bin/bash

if [ -n "$1" ]; then
  cat /dev/null > rich-debug-prefix.ref
  for s in $1; do
    echo '*$FROM '$s >> rich-debug-prefix.ref
  done
fi

SCRIPT_FLAGS="--scratch --debug" ../make.sh \
  lib-rich-debug-prefix rich-debug-prefix rich-debug-prefix
