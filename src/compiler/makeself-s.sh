#!/bin/sh
../../bin/lexgen Lexer.sref
source ../make.sh compiler srefc srefc "" ../../distrib
