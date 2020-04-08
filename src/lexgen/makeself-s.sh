#!/bin/bash
../../distrib/bin/rl-lexgen $LEXGEN_FLAGS DFA-Lexer.ref
../../distrib/bin/rl-lexgen $LEXGEN_FLAGS Flex-Lexer.ref
source ../make.sh lexgen rl-lexgen main ../../distrib
