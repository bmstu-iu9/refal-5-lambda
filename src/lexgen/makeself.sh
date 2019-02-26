#!/bin/bash
../../bin/lexgen $LEXGEN_FLAGS DFA-Lexer.ref
../../bin/lexgen $LEXGEN_FLAGS Flex-Lexer.ref
source ../make.sh lexgen lexgen LexGen
