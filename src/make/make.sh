#!/bin/bash
source ../make.sh make rlmake-core main || exit 1
cp ../../bin/{rl,sr}make-core
