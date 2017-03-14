#!/bin/bash
../../bin/lexgen $LEXGEN_FLAGS Lexer.sref
../../bin/rasl-constants ../srlib/refalrts.h Opcodes.sref
source ../make.sh compiler srefc-core srefc
