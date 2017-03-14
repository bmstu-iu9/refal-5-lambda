#!/bin/bash
source ../../c-plus-plus.conf.sh
source ../../src/scripts/platform-specific.sh

LIBDIR=../../src/srlib

run_all_tests() {
  COMMON_SRFLAGS="
    --targsuffix=$(platform_suffix)
    -D$LIBDIR
    -D$(platform_subdir_lookup $LIBDIR)
    -f-DSTEP_LIMIT=1000
    -f-DMEMORY_LIMIT=1000
    -f-DIDENTS_LIMIT=25
    -f-DDUMP_FILE=\\\"__dump.txt\\\"
    -f-DDONT_PRINT_STATISTICS
    -f-g
    refalrts
    refalrts-platform-specific
  "

  cp $LIBDIR/Hash.sref .
  for s in $*; do
    compile $s
  done

  simple_tests ok \
    Hash-HashLittle2-Chars

  rm Hash.rasl Hash.cpp Hash.sref
}

compile() {
  echo Compiling $1
  SRC=$1
  TARGET=${SRC%%.sref}$(platform_suffix)

  if [ "$SRC" != "Hash.sref" ]; then
    ../../bin/srefc-core $SRC -o $TARGET -c "$CPPLINEE" $COMMON_SRFLAGS \
      Hash lookup3 2>__error.txt
    if [ $? -ge 100 ] || [ ! -e $TARGET ]; then
      echo COMPILER FAILS ON $SRC, SEE __error.txt
      exit 1
    fi
    rm __error.txt
  else
    echo ...skips
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
  rm -f $1$(platform_suffix) $1.rasl $1.cpp \
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
