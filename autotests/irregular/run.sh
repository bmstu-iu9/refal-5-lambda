#!/bin/bash

run_test_dir() {
  DIR=$(dirname $1)
  echo Passing special test in dir $DIR
  cd $DIR
  ./run.sh
  if [ $? -gt 0 ]; then
    echo TEST FAILED
    cd ..
    exit 1
  fi
  cd ..
}

run_all_dir_tests() {
  for d in */run.sh; do
    run_test_dir $d
  done
}

if [ -z "$1" ]; then
  run_all_dir_tests
else
  for s in $*; do
    [ -e $s/run.sh ] && run_test_dir $s/run.sh
  done
fi
