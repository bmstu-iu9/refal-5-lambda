#!/bin/bash

if [ -n "$1" ]; then
  cat /dev/null > rich-debug-prefix.sref
  for s in $1; do
    echo '//FROM '$s >> rich-debug-prefix.sref
  done
fi

SCRIPT_FLAGS=--scratch ../make.sh \
  srlib-rich-debug-prefix rich-debug-prefix rich-debug-prefix
