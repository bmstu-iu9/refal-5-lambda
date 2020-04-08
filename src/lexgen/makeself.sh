#!/bin/bash
../../bin/rl-lexgen $LEXGEN_FLAGS DFA-Lexer.ref
../../bin/rl-lexgen $LEXGEN_FLAGS Flex-Lexer.ref
source ../make.sh lexgen rl-lexgen main
