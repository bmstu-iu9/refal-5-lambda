#!/bin/bash
../../bin/rl-lexgen ${LEXGEN_FLAGS} SR-Lexer.sref
../../bin/rasl-constants ../lib/refalrts-commands.h Opcodes.refi
source ../make.sh compiler rlc-core main
