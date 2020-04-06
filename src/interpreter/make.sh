#!/bin/bash
(
  SCRIPT_FLAGS="$SCRIPT_FLAGS --debug --scratch"
  source ../make.sh interpreter rlgo main
)
