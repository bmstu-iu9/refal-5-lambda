#!/bin/bash

cleanup() {
  rm -f *.rasl-module *.rasl test *.log *.dump
}

run_test() {
  echo Run $1...
  ../../../bin/rlc ++diagnostic+config=rlc-core.ini \
    $1.ref -o test -OADiS --log=__test.log
  if [[ $? -gt 0 ]]; then
    echo COMPILER FAILED!
    exit 1
  fi

  if [[ ! -e ./test ]]; then
    echo COMPILATION ERRORS!
    exit 1
  fi

  ./test ++diagnostic+config=test.ini
  if [[ $? -gt 0 ]]; then
    echo TEST FAILED!
    exit 1
  fi

  echo Test OK!
  cleanup
}

cleanup
run_test test-Rec-Mu
run_test test-Mu-Rec
