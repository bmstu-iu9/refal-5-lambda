#!/bin/bash
../../bin/lexgen DFA-Lexer.sref
source ../make.sh lexgen lexgen LexGen -DDONT_PRINT_STATISTICS
