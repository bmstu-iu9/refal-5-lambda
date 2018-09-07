#!/bin/bash
../../distrib/bin/lexgen $LEXGEN_FLAGS DFA-Lexer.sref
../../distrib/bin/lexgen $LEXGEN_FLAGS Flex-Lexer.sref
source ../make.sh lexgen lexgen LexGen "" ../../distrib
