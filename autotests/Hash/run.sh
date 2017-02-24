#!/bin/bash
source ../../c-plus-plus.conf.sh
source ../../src/scripts/platform-specific.sh

LIBDIR=../../src/srlib
RUNTIME_FILES="
  $LIBDIR/refalrts.cpp
  $(platform_subdir_lookup $LIBDIR)/refalrts-platform-specific.cpp
"
run_all_tests() {
  TEST_CPP_FLAGS="
    -I$LIBDIR \
    -DSTEP_LIMIT=1000 \
    -DMEMORY_LIMIT=1000 \
    -DDUMP_FILE=\"__dump.txt\"\
    -DDONT_PRINT_STATISTICS \
    -g"

  cp $LIBDIR/Hash.sref .
  for s in Hash.sref $*; do
    compile $s
  done

  simple_tests ok \
    Hash-HashLittle2-Chars

  rm Hash.rasl Hash.rasl.cpp Hash.cpp Hash.sref
}

compile() {
  echo Compiling $1
  SRC=$1
  RASL=${SRC%%.sref}.rasl
  CPP=${SRC%%.sref}.rasl.cpp
  NATCPP=${SRC%%.sref}.cpp
  TARGET=${SRC%%.sref}$(platform_suffix)

  ../../bin/srefc-core $SRC 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER FAILS ON $SRC, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e $RASL ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  if [ "$SRC" != "Hash.sref" ]; then
    $CPPLINE$TARGET $TEST_CPP_FLAGS $CPP $NATCPP \
      Hash.rasl.cpp Hash.cpp $RUNTIME_FILES lookup3.cpp
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
  rm -f $1$(platform_suffix) $1.rasl $1.rasl.cpp $1.cpp \
    __dump.txt __out.txt __written_file.txt
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
