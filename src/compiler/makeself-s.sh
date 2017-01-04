#!/bin/bash
../../distrib/bin/lexgen Lexer.sref
../../bin/rasl-constants.exe ../srlib/refalrts.h Opcodes.sref
source ../make.sh compiler srefc-core srefc "" ../../distrib
