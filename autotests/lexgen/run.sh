#!/bin/bash
source ../../scripts/load-config.sh ../.. || exit 1
source ../../scripts/platform-specific.sh

LIBDIR=../../src/srlib

prepare_prefix() {
  if [ ! -e _test_prefix.exe-prefix ]; then
    echo Prepare common prefix...
    ../../bin/srefc-core -o _test_prefix.exe-prefix \
      "${COMMON_SRFLAGS[@]}" $SRFLAGS_NAT 2>__error.txt
      if [ $? -ge 100 ] || [ ! -e _test_prefix.exe-prefix ]; then
        echo "CAN'T CREATE COMMON PREFIX, SEE __error.txt"
        exit 1
      fi
    echo
  fi
}

run_test_aux.LEXGEN() {
  prepare_prefix

  echo Passing $1 \(lexgen\)...
  SREF=$1

  ../../bin/lexgen --from=$SREF --to=_lexgen-out.sref 2>__error.txt
  if [ $? -ge 100 ]; then
    echo LEXGEN ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e _lexgen-out.sref ]; then
    echo LEXGEN FAILED
    exit 1
  fi

  ../../bin/srefc-core _lexgen-out.sref -o _lexgen-out$(platform_exe_suffix) \
    "${COMMON_SRFLAGS[@]}" $SRFLAGS_PREF --keep-rasls 2>__error.txt
  if [ $? -ge 100 ] || [ ! -e _lexgen-out$(platform_exe_suffix) ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt

  ./_lexgen-out ++diagnostic+config=test-diagnostics.txt
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi

  rm _lexgen-out*
  [ -e __dump.txt ] && rm __dump.txt
  [ -e __log.txt ] && rm __log.txt

  echo
}

run_test_aux.BAD-SYNTAX-LEXGEN() {
  echo Passing $1 \(lexgen, syntax error recovering\)...
  SREF=$1

  ../../bin/lexgen --from=$SREF --to=_lexgen-out.sref 2>__error.txt
  if [ $? -ge 100 ]; then
    echo LEXGEN ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ -e _lexgen-out.sref ]; then
    echo LEXGEN SUCCESSED, BUT EXPECTED SYNTAX ERROR
    exit 1
  fi

  echo "Ok! LexGen didn't crash on invalid syntax"
  echo
}

run_test() {
  COMMON_SRFLAGS=(
    --cpp-command-exe="$CPPLINEE"
    --cpp-command-lib="$CPPLINEL"
    --cpp-command-exe-suf="$CPPLINEESUF"
    --cpp-command-lib-suf="$CPPLINELSUF"
    --exesuffix=$(platform_exe_suffix)
    --prelude=test-prelude.srefi
    -D$(platform_subdir_lookup $LIBDIR)
    -D$LIBDIR/platform-POSIX
    -D$LIBDIR
    --log=__log.txt
    -f-g
    --chmod-x-command="chmod +x"
  )
  SRFLAGS_PREF=--prefix=_test_prefix
  SRFLAGS_NAT="
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
  "
  SREF=$1
  if [ -e "$SREF" ]; then
    SUFFIX=`echo ${SREF%.*} | sed 's/[^.]*\(\.[^.]*\)*/\1/'`
    run_test_aux$SUFFIX $1
  fi
}

if [ -z "$1" ]; then
  for s in *.sref *.ref; do
    run_test $s
  done
else
  for s in $*; do
    run_test $s
  done
fi

[ -e _test_prefix.exe-prefix ] && rm _test_prefix.exe-prefix
