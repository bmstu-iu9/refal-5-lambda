#!/bin/bash
../../bin/lexgen $LEXGEN_FLAGS Lexer.sref
source ../make.sh compiler srefc-core srefc
