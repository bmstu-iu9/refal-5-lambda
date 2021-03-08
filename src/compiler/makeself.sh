#!/bin/bash
../../bin/rl-lexgen ${LEXGEN_FLAGS} SR-Lexer.sref || exit 1
../../bin/rasl-constants ../lib/refalrts-commands.h Opcodes.refi || exit 1
source ../make.sh compiler rlc-core main
