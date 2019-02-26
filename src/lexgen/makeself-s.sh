#!/bin/bash
../../distrib/bin/lexgen $LEXGEN_FLAGS DFA-Lexer.ref
../../distrib/bin/lexgen $LEXGEN_FLAGS Flex-Lexer.sref
source ../make.sh lexgen lexgen LexGen "" ../../distrib
