#!/bin/bash
source ../../c-plus-plus.conf.sh

run_all_tests() {
  TEST_CPP_FLAGS="
    -I../../srlib \
    -DSTEP_LIMIT=1000 \
    -DMEMORY_LIMIT=1000 \
    -DDUMP_FILE=\"__dump.txt\"\
    -DDONT_PRINT_STATISTICS \
    -g"

  cp ../../src/srlib/Hash.sref .
  for s in Hash.sref $*; do
    compile $s
  done

  simple_tests ok \
    Hash-HashLittle2-Chars

  rm Hash.cpp Hash.sref
}

compile() {
  echo Compiling $1
  SRC=$1
  CPP=${SRC%%.sref}.cpp
  TARGET=${SRC%%.sref}

  ../../bin/srefc-core $SRC 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER FAILS ON $SRC, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e $CPP ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  if [ "$SRC" != "Hash.sref" ]; then
    $CPPLINE $TEST_CPP_FLAGS -o$TARGET $CPP Hash.cpp ../../srlib/refalrts.cpp lookup3.c
    if [ $? -gt 0 ]; then
      echo COMPILATION FAILED
      exit 1
    fi
  fi
}

simple_tests() {
  MODE=$1
  shift

  while [ -n "$1" ]; do
    simple_test_$MODE $1
    shift
  done
}

simple_test_ok() {
  if [ -e $1 ]; then
    echo Pass simple OK test $1...
    run_exe $1
    cleanup $1
  fi
}

run_exe() {
  ./$1 > __out.txt
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi
}

cleanup() {
  rm -f $1 $1.cpp __dump.txt __out.txt __written_file.txt
}

compare() {
  cmp "$1" "$2"
  if [ $? -gt 0 ]; then
    echo FILES $1 and $2 is differ:
    diff -u "$1" "$2"
    exit 1
  fi
}

if [ -z "$1" ]; then
  run_all_tests *.sref
else
  run_all_tests $1
fi
