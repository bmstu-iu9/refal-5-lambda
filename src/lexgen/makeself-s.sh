#!/bin/bash
../../distrib/bin/rl-lexgen $LEXGEN_FLAGS DFA-Lexer.ref || exit 1
../../distrib/bin/rl-lexgen $LEXGEN_FLAGS Flex-Lexer.ref || exit 1
source ../make.sh lexgen rl-lexgen main ../../distrib
