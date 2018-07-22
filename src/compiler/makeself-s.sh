#!/bin/bash
../../distrib/bin/lexgen $LEXGEN_FLAGS SR-Lexer.sref
../../bin/rasl-constants ../srlib/refalrts-commands.h Opcodes.sref
source ../make.sh compiler srefc-core srefc "" ../../distrib
