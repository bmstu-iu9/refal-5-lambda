#!/bin/bash
source ../c-plus-plus.conf.sh
source ../src/scripts/platform-specific.sh

LIBDIR=../src/srlib
RUNTIME_FILES="
  $LIBDIR/refalrts.cpp
  $(platform_subdir_lookup $LIBDIR)/refalrts-platform-specific.cpp
"

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
  CPP=${SREF%%.sref}.rasl.cpp
  NATCPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}$(platform_suffix)

  ../bin/srefc-core $SREF $SRFLAGS 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e $RASL ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  if [ ! -e $NATCPP ]; then
    NATCPP=
  fi

  $CPPLINE$EXE $TEST_CPP_FLAGS $CPP $NATCPP $RUNTIME_FILES

  if [ $? -gt 0 ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  ./$EXE
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi

  rm $RASL $CPP $NATCPP $EXE
  [ -e __dump.txt ] && rm __dump.txt

  echo
}

run_test_aux.BAD-SYNTAX() {
  echo Passing $1 \(syntax error recovering\)...
  SREF=$1
  RASL=${SREF%%.sref}.rasl
  CPP=${SREF%%.sref}.rasl.cpp
  EXE=${SREF%%.sref}$(platform_suffix)

  ../bin/srefc-core $SRFLAGS $SREF 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ -e $RASL ]; then
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
    rm $RASL $CPP
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
  CPP=${SREF%%.sref}.rasl.cpp
  NATCPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}$(platform_suffix)

  ../bin/srefc-core $SREF $SRFLAGS 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e $RASL ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  if [ ! -e $NATCPP ]; then
    NATCPP=
  fi

  $CPPLINE$EXE $TEST_CPP_FLAGS $CPP $NATCPP $RUNTIME_FILES

  if [ $? -gt 0 ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  ./$EXE
  if [ $? -lt 100 ]; then
    echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
    exit 1
  fi

  rm $RASL $CPP $NATCPP $EXE
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

  ../bin/srefc-core _lexgen-out.sref $SRFLAGS 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e _lexgen-out.rasl ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  ${CPPLINE}_lexgen-out $TEST_CPP_FLAGS \
    _lexgen-out.rasl.cpp $RUNTIME_FILES

  if [ $? -gt 0 ]; then
    echo COMPILATION FAILED
    exit 1
  fi

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
  TEST_CPP_FLAGS="
    -I$LIBDIR \
    -DSTEP_LIMIT=1000 \
    -DMEMORY_LIMIT=1000 \
    -DIDENTS_LIMIT=25 \
    -DDUMP_FILE=\"__dump.txt\"\
    -DDONT_PRINT_STATISTICS \
    -g"
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
