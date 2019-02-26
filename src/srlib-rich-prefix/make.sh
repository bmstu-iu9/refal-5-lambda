#!/bin/bash

if [ -n "$1" ]; then
  cat /dev/null > rich-prefix.ref
  for s in $1; do
    echo '*$FROM '$s >> rich-prefix.ref
  done
fi

SCRIPT_FLAGS=--scratch ../make.sh srlib-rich-prefix rich-prefix rich-prefix
