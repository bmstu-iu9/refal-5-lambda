#!/bin/bash

run_test() {
  echo Passing $1...
  SREF=$1
  CPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}

  ../compiler/srefc $SREF 2>__error.txt
  if [ $? -gt 0 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit
  fi
  rm __error.txt
  if [ ! -e $CPP ]; then
    echo COMPILATION FAILED
    exit
  fi

  #g++ -I../srlib -DDUMP_FILE=\"dump.txt\" -DDONT_PRINT_STATISTICS -o$EXE $CPP ../srlib/refalrts.cpp
  clang++ -Wall -DINTERPRET -g -DDUMP_FREE_LIST -DSHOW_DEBUG=1 -I../srlib -DDUMP_FILE=\"dump.txt\" -DDONT_PRINT_STATISTICS -o$EXE $CPP ../srlib/refalrts.cpp
  if [ $? -gt 0 ]; then
    echo COMPILATION FAILED
    exit
  fi

  ./$EXE
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE dump.txt
    exit
  fi

  rm $CPP $EXE
  [ -e dump.txt ] && rm dump.txt

  echo
}

if [ -z "$1" ]; then
  for s in *.sref; do
    run_test $s
  done
else
  for s in $*; do
    run_test $s
  done
fi
