#!/bin/bash
source ../../scripts/load-config.sh ../.. || exit 1
source ../../scripts/platform-specific.sh

LIBDIR=../../src/srlib

run_all_tests() {
  COMMON_SRFLAGS=(
    --cpp-command-exe="$CPPLINEE"
    --cpp-command-lib="$CPPLINEL"
    --cpp-command-exe-suf="$CPPLINEESUF"
    --cpp-command-lib-suf="$CPPLINELSUF"
    --exesuffix=$(platform_exe_suffix)
    -D$(platform_subdir_lookup $LIBDIR)
    -D$LIBDIR/platform-POSIX
    -D$LIBDIR
    -f-g
    refalrts
    refalrts-debugger
    refalrts-diagnostic-initializer
    refalrts-dynamic
    refalrts-functions
    refalrts-main
    refalrts-profiler
    refalrts-vm
    refalrts-vm-api
    refalrts-platform-POSIX
    refalrts-platform-specific
    --chmod-x-command="chmod +x"
  )

  cp $LIBDIR/Hash.ref .
  for s in $*; do
    compile $s
  done

  simple_tests ok \
    Hash-HashLittle2-Chars

  rm Hash.rasl Hash.cpp Hash.ref
}

compile() {
  echo Compiling $1
  SRC=$1
  TARGET=${SRC%%.sref}$(platform_exe_suffix)

  if [ "$SRC" != "Hash.ref" ]; then
    ../../bin/srefc-core --keep-rasls $SRC -o $TARGET "${COMMON_SRFLAGS[@]}" \
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
  ./$1 ++diagnostic-config=test-diagnostics.txt > __out.txt
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi
}

cleanup() {
  rm -f $1$(platform_exe_suffix) $1.rasl $1.cpp \
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
