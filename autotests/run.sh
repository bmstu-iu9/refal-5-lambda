#!/bin/bash
source ../c-plus-plus.conf.sh
source ../src/scripts/platform-specific.sh

LIBDIR=../src/srlib

run_test_all_modes() {
  SRFLAGS= $2 $1
  SRFLAGS=--markup-context $2 $1
  SRFLAGS=-OP $2 $1
  SRFLAGS=-OR $2 $1
  SRFLAGS=-OPR $2 $1
  SRFLAGS=-Od $2 $1
  SRFLAGS=-OdP $2 $1
  SRFLAGS=-OdR $2 $1
  SRFLAGS=-OdPR $2 $1
}

run_test_aux() {
  run_test_all_modes $1 run_test_aux_with_flags
}

run_test_aux_with_flags() {
  echo Passing $1 \(flags $SRFLAGS\)...
  SREF=$1
  RASL=${SREF%%.sref}.rasl
  NATCPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}$(platform_suffix)

  ../bin/srefc-core $SREF -o $EXE -c "$CPPLINE" $COMMON_SRFLAGS $SRFLAGS \
     2>__error.txt
  if [ $? -ge 100 ] || [ ! -e $EXE ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt

  if [ ! -e $NATCPP ]; then
    NATCPP=
  fi

  ./$EXE
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi

  rm $RASL $NATCPP $EXE
  [ -e __dump.txt ] && rm __dump.txt

  echo
}

run_test_aux.BAD-SYNTAX() {
  echo Passing $1 \(syntax error recovering\)...
  SREF=$1
  RASL=${SREF%%.sref}.rasl
  EXE=${SREF%%.sref}$(platform_suffix)

  ../bin/srefc-core $SRFLAGS $SREF 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ -e $RASL ]; then
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
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
  RASL=${SREF%%.sref}.rasl
  NATCPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}$(platform_suffix)

  ../bin/srefc-core $SREF -o $EXE -c "$CPPLINE" $COMMON_SRFLAGS $SRFLAGS \
    2>__error.txt
  if [ $? -ge 100 ] || [ ! -e $EXE ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt

  if [ ! -e $NATCPP ]; then
    NATCPP=
  fi

  ./$EXE
  if [ $? -lt 100 ]; then
    echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
    exit 1
  fi

  rm $RASL $NATCPP $EXE
  [ -e __dump.txt ] && rm __dump.txt

  echo "Ok! This failure was normal and expected"
  echo
}

run_test_aux.LEXGEN() {
  echo Passing $1 \(lexgen\)...
  SREF=$1

  ../bin/lexgen --from=$SREF --to=_lexgen-out.sref 2>__error.txt
  if [ $? -ge 100 ]; then
    echo LEXGEN ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e _lexgen-out.sref ]; then
    echo LEXGEN FAILED
    exit 1
  fi

  ../bin/srefc-core _lexgen-out.sref -o _lexgen-out$(platform_suffix) \
    -c "$CPPLINE" $COMMON_SRFLAGS 2>__error.txt
  if [ $? -ge 100 ] || [ ! -e _lexgen-out$(platform_suffix) ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt

  ./_lexgen-out
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi

  rm _lexgen-out*
  [ -e __dump.txt ] && rm __dump.txt

  echo
}

run_test_aux.BAD-SYNTAX-LEXGEN() {
  echo Passing $1 \(lexgen, syntax error recovering\)...
  SREF=$1

  ../bin/lexgen --from=$SREF --to=_lexgen-out.sref 2>__error.txt
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
  SREF=$1
  SUFFIX=`echo ${SREF%%.sref} | sed 's/[^.]*\(\.[^.]*\)*/\1/'`
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
  for s in *.sref; do
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
