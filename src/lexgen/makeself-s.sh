#!/bin/bash
../../distrib/bin/lexgen $LEXGEN_FLAGS DFA-Lexer.ref
../../distrib/bin/lexgen $LEXGEN_FLAGS Flex-Lexer.ref
source ../make.sh lexgen rl-lexgen main "" ../../distrib
cp ../../bin/{rl-lexgen,lexgen}
