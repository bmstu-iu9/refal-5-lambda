#!/bin/bash

SRMAKE_FLAGS="$SRMAKE_FLAGS"

SCRIPT_FLAGS=--scratch \
SRMAKE_FLAGS="${SRMAKE_FLAGS} --makelib" \
  ../make.sh lib-rich-prefix rich-prefix rich-prefix

cp ../../bin/rich-prefix* ../../lib/rich.lib-prefix
mv ../../bin/rich-prefix* ../../lib/rich-debug.lib-prefix
chmod -x ../../lib/rich*.lib-prefix
