#!/bin/bash
source ../scripts/load-config.sh .. || exit 1
source ../scripts/platform-specific.sh

LIBDIR=../src/srlib

prepare_prefix() {
  if [ ! -e _test_prefix.exe-prefix ]; then
    echo Prepare common prefix...
    ../bin/srefc-core -o _test_prefix.exe-prefix \
      "${COMMON_SRFLAGS[@]}" $SRFLAGS_NAT 2>__error.txt
      if [ $? -ge 100 ] || [ ! -e _test_prefix.exe-prefix ]; then
        echo "CAN'T CREATE COMMON PREFIX, SEE __error.txt"
        exit 1
      fi
    echo
  fi
}

run_test_all_modes() {
  if ! grep '%%' $1 > /dev/null; then
    prepare_prefix
    SRFLAGS_PLUS_INIT="$SRFLAGS_PREF"
  else
    SRFLAGS_PLUS_INIT="$SRFLAGS_NAT"
  fi

  SRFLAGS_PLUS="$SRFLAGS_PLUS_INIT"
  SRFLAGS= $2 $1
  SRFLAGS=--markup-context $2 $1
  SRFLAGS=-OP $2 $1
  SRFLAGS=-OR $2 $1
  SRFLAGS=-OPR $2 $1
  SRFLAGS_PLUS="$SRFLAGS_NAT"
  SRFLAGS=-Od $2 $1
  SRFLAGS=-OdP $2 $1
  SRFLAGS=-OdR $2 $1
  SRFLAGS=-OdPR $2 $1

  if grep 'CONDITIONS' $1 > /dev/null; then
    echo "Pass special conditions tests:"
    SRFLAGS_PLUS="$SRFLAGS_PLUS_INIT"
    SRFLAGS=-OC $2 $1
    SRFLAGS="-OC --markup-context" $2 $1
    SRFLAGS=-OCP $2 $1
    SRFLAGS=-OCR $2 $1
    SRFLAGS=-OCPR $2 $1
    SRFLAGS_PLUS="$SRFLAGS_NAT"
    SRFLAGS=-OCd $2 $1
    SRFLAGS=-OCdP $2 $1
    SRFLAGS=-OCdR $2 $1
    SRFLAGS=-OCdPR $2 $1
    echo "Special conditions tests is passed"
  fi

  if grep 'TREE' $1 > /dev/null; then
    echo "Pass special tree tests:"
    SRFLAGS_PLUS="$SRFLAGS_PLUS_INIT"
    SRFLAGS=-OT $2 $1
    SRFLAGS=-OD $2 $1
    SRFLAGS=-OI $2 $1
    SRFLAGS=-OS $2 $1
    SRFLAGS="-OS --markup-context" $2 $1
    SRFLAGS="-ODS --markup-context" $2 $1
    echo "Special tree tests is passed"
  fi
}

run_test_aux() {
  run_test_all_modes $1 run_test_aux_with_flags
}

run_test_aux_with_flags() {
  echo Passing $1 \(flags $SRFLAGS\)...
  SREF=$1
  RASL=${SREF%.*}.rasl
  NATCPP=${SREF%.*}.cpp
  EXE=${SREF%.*}$(platform_exe_suffix)

  ../bin/srefc-core --keep-rasls $SREF -o $EXE "${COMMON_SRFLAGS[@]}" \
    $SRFLAGS $SRFLAGS_PLUS 2>__error.txt
  if [ $? -ge 100 ] || [ ! -e $EXE ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt

  if [ ! -e $NATCPP ]; then
    NATCPP=
  fi

  ./$EXE ++diagnostic+config=test-diagnostics.txt
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi

  rm $RASL $NATCPP $EXE
  rm -rf ${SREF%.*}.partial.dSYM
  [ -e __dump.txt ] && rm __dump.txt
  [ -e __log.txt ] && rm __log.txt

  echo
}

run_test_aux.BAD-SYNTAX() {
  echo Passing $1 \(syntax error recovering\)...
  SREF=$1
  RASL=${SREF%.*}.rasl
  EXE=${SREF%.*}$(platform_exe_suffix)

  ../bin/srefc-core --prelude=test-prelude.srefi -C $SRFLAGS $SREF 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ -e $RASL ]; then
    echo COMPILATION SUCCEEDED, BUT EXPECTED SYNTAX ERROR
    rm $RASL
    exit 1
  fi

  echo "Ok! Compiler didn't crash on invalid syntax"
  echo
}

run_test_aux.FAILURE() {
  run_test_all_modes $1 run_test_aux_with_flags.FAILURE
}

run_test_aux_with_flags.FAILURE() {
  echo Passing $1 \(expecting failure, flags $SRFLAGS\)...
  SREF=$1
  RASL=${SREF%.*}.rasl
  NATCPP=${SREF%.*}.cpp
  EXE=${SREF%.*}$(platform_exe_suffix)

  ../bin/srefc-core --keep-rasls $SREF -o $EXE "${COMMON_SRFLAGS[@]}" \
    $SRFLAGS $SRFLAGS_PLUS 2>__error.txt
  if [ $? -ge 100 ] || [ ! -e $EXE ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt

  if [ ! -e $NATCPP ]; then
    NATCPP=
  fi

  ./$EXE ++diagnostic+config=test-diagnostics.txt
  if [ $? -lt 100 ]; then
    echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
    exit 1
  fi

  rm $RASL $NATCPP $EXE
  [ -e __dump.txt ] && rm __dump.txt
  [ -e __log.txt ] && rm __log.txt

  echo "Ok! This failure was normal and expected"
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
  SUFFIX=`echo ${SREF%.*} | sed 's/[^.]*\(\.[^.]*\)*/\1/'`
  run_test_aux$SUFFIX $1
}

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
  for s in *.sref *.ref; do
    run_test $s
  done
  run_all_dir_tests
elif [ "$1" = "--dir" ]; then
  run_all_dir_tests
else
  for s in $*; do
    run_test $s
  done
fi

[ -e _test_prefix.exe-prefix ] && rm _test_prefix.exe-prefix
rm -rf _test_prefix.exe-prefix.partial.dSYM
