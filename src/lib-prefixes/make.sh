#!/bin/bash

SRMAKE_FLAGS=${SRMAKE_FLAGS}

make_prefixes() {
  DEBUG=$1

  ../make.sh lib-prefixes rich${DEBUG} rich${DEBUG}-prefix-exe
  mv ../../bin/rich${DEBUG}* ../../lib/rich${DEBUG}.exe-prefix

  ../make.sh lib-prefixes slim${DEBUG} slim${DEBUG}-prefix-exe
  mv ../../bin/slim${DEBUG}* ../../lib/slim${DEBUG}.exe-prefix

  SRMAKE_FLAGS="${SRMAKE_FLAGS} --makelib" \
    ../make.sh lib-prefixes rich${DEBUG} rich${DEBUG}-prefix-lib
  mv ../../bin/rich${DEBUG}* ../../lib/rich${DEBUG}.lib-prefix
}

SCRIPT_FLAGS="--scratch --static" make_prefixes ""
SCRIPT_FLAGS="--scratch --static --debug" make_prefixes "-debug"
chmod -x ../../lib/*.*-prefix
