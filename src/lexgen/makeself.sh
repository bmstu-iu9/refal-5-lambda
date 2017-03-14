#!/bin/bash
../../bin/lexgen $LEXGEN_FLAGS DFA-Lexer.sref
source ../make.sh lexgen lexgen LexGen -DDONT_PRINT_STATISTICS
