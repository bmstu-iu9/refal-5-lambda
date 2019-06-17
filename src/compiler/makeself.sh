#!/bin/bash
../../bin/lexgen $LEXGEN_FLAGS SR-Lexer.sref
../../bin/rasl-constants ../srlib/refalrts-commands.h Opcodes.refi
source ../make.sh compiler srefc-core srefc
