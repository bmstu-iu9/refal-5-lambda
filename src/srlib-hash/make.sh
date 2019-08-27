#!/bin/bash

source ../../scripts/platform-specific.sh

SCRIPT_FLAGS=--scratch SRMAKE_FLAGS="$SRMAKE_FLAGS --makelib" \
  ../make.sh srlib-hash Hash Hash
mv ../../bin/Hash{$(platform_exe_suffix),$(platform_lib_suffix)}
