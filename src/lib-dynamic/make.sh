#!/bin/bash

source ../../scripts/platform-specific.sh

export SCRIPT_FLAGS=--scratch
export SRMAKE_FLAGS=${SRMAKE_FLAGS:-}" --makelib"
export TARGET_SUFFIX=$(platform_lib_suffix)
for l in Hash Library GetOpt LibraryEx Platform; do
  ../make.sh lib-dynamic ${l} ${l}
done
