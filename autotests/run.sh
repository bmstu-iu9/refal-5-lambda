#!/bin/bash

run_test_all_modes() {
  SRFLAGS= $2 $1
  SRFLAGS=-OP $2 $1
  SRFLAGS=-OR $2 $1
  SRFLAGS=-OPR $2 $1
  SRFLAGS=--gen=interp $2 $1
  SRFLAGS='-OP --gen=interp' $2 $1
  SRFLAGS='-OR --gen=interp' $2 $1
  SRFLAGS='-OPR --gen=interp' $2 $1
}

run_test_aux() {
  run_test_all_modes $1 run_test_aux_with_flags
}

run_test_aux_with_flags() {
  echo Passing $1 \(flags $SRFLAGS\)...
  SREF=$1
  CPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}

  ../bin/srefc-core $SREF $SRFLAGS 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e $CPP ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  g++ $TEST_CPP_FLAGS -o$EXE $CPP ../srlib/refalrts.cpp

  if [ $? -gt 0 ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  ./$EXE
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi

  rm $CPP $EXE
  [ -e __dump.txt ] && rm __dump.txt

  echo
}

run_test_aux.BAD-SYNTAX() {
  echo Passing $1 \(syntax error recovering\)...
  SREF=$1
  CPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}

  ../bin/srefc-core $SRFLAGS $SREF 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ -e $CPP ]; then
    echo COMPILATION SUCCESSED, BUT EXPECTED SYNTAX ERROR
    rm $CPP
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
  CPP=${SREF%%.sref}.cpp
  EXE=${SREF%%.sref}

  ../bin/srefc-core $SREF $SRFLAGS 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER ON $SREF FAILS, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e $CPP ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  g++ $TEST_CPP_FLAGS -o$EXE $CPP ../srlib/refalrts.cpp

  if [ $? -gt 0 ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  ./$EXE
  if [ $? -lt 100 ]; then
    echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
    exit 1
  fi

  rm $CPP $EXE
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
  if [ ! -e _lexgen-out.cpp ]; then
    echo COMPILATION FAILED
    exit 1
  fi

  g++ $TEST_CPP_FLAGS -o_lexgen-out _lexgen-out.cpp ../srlib/refalrts.cpp

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
    -I../srlib \
    -DSTEP_LIMIT=1000 \
    -DMEMORY_LIMIT=1000 \
    -DDUMP_FILE=\"__dump.txt\"\
    -DDONT_PRINT_STATISTICS \
    -g"
  SREF=$1
  SUFFIX=`echo ${SREF%%.sref} | sed 's/[^.]*\(\.[^.]*\)*/\1/'`
  run_test_aux$SUFFIX $1
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
