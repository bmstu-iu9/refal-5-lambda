#!/bin/bash

SRMAKE_FLAGS=${SRMAKE_FLAGS}

make_prefixes() {
  DEBUG=$1

  ../../bin/srmake ${SCRIPT_FLAGS} rich-prefix-exe \
    -o ../../lib/rich"$DEBUG".exe-prefix

  ../../bin/srmake ${SCRIPT_FLAGS}  slim-prefix-exe \
    -o ../../lib/slim"$DEBUG".exe-prefix

  ../../bin/srmake ${SCRIPT_FLAGS} --makelib rich-prefix-lib \
    -o ../../lib/rich"$DEBUG".lib-prefix
}

SCRIPT_FLAGS="--scratch --static" make_prefixes ""
SCRIPT_FLAGS="--scratch --static --debug" make_prefixes "-debug"
chmod -x ../../lib/*.*-prefix
