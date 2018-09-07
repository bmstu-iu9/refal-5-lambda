#!/bin/bash
../../bin/lexgen $LEXGEN_FLAGS DFA-Lexer.sref
../../bin/lexgen $LEXGEN_FLAGS Flex-Lexer.sref
source ../make.sh lexgen lexgen LexGen
