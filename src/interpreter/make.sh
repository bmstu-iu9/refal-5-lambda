#!/bin/bash
(
  SCRIPT_FLAGS="$SCRIPT_FLAGS --debug --scratch"
  source ../make.sh interpreter rlgo main

  cp ../../lib/scratch-rt/debug/*.{rasl,cpp} ../../build/interpreter
)
