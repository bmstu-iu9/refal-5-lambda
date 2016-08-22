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

  cp ../../src/srlib/Library.sref .
  for s in Library.sref $*; do
    compile $s
  done

  simple_tests ok \
    Library-Math-OK \
    Library-FOpen-FReadLine-FClose \
    Library-ExistFile \
    Library-IntFromStr-StrFromInt-Chr-Ord \
    Library-SymbCompare \
    Library-SymbType

  simple_tests fail \
    Library-Math-Div-Fail \
    Library-Math-Mod-Fail \
    Library-FOpen-Fail \
    Library-SymbCompare-Fail \
    Library-SymbType-Fail

  if [ -e Library-WriteLine ]; then
    echo Pass Library-WriteLine test...
    run_exe Library-WriteLine
    compare __out.txt 2lines.txt
    cleanup Library-WriteLine
  fi

  if [ -e Library-WriteLine-Expr ]; then
    echo Pass Library-WriteLine-Expr test...
    run_exe Library-WriteLine-Expr
    compare __out.txt WriteLine-Expr.txt
    cleanup Library-WriteLine-Expr
  fi

  if [ -e Library-FOpen-FWriteLine-FClose ]; then
    echo Pass Library-FOpen-FWriteLine-FClose test...
    run_exe Library-FOpen-FWriteLine-FClose
    compare __written_file.txt 2lines.txt
    cleanup Library-FOpen-FWriteLine-FClose
  fi

  if [ -e Library-ReadLine-2lines ]; then
    echo Pass Library-ReadLine-2lines test...
    ./Library-ReadLine-2lines < 2lines.txt
    if [ $? -gt 0 ]; then
      echo TEST FAILED, SEE __dump.txt
      exit 1
    fi
    cleanup Library-ReadLine-2lines
  fi

  if [ -e Library-ReadLine-2lines-no-eol ]; then
    echo Pass Library-ReadLine-2lines-no-eol test...
    ./Library-ReadLine-2lines-no-eol < 2lines-no-eol.txt
    if [ $? -gt 0 ]; then
      echo TEST FAILED, SEE __dump.txt
      exit 1
    fi
    cleanup Library-ReadLine-2lines-no-eol
  fi

  if [ -e Library-Arg ]; then
    echo Pass Library-Arg test...
    ./Library-Arg Hello "Hello, World"
    if [ $? -gt 0 ]; then
      echo TEST FAILED, SEE __dump.txt
      exit
    fi
    cleanup Library-Arg
  fi

  if [ -e Library-GetEnv ]; then
    echo Pass Library-GetEnv test...
    (
      export Foo=Bar
      export NoEnv=
      run_exe Library-GetEnv
    )
    if [ $? -gt 0 ]; then
      exit 1
    else
      cleanup Library-GetEnv
    fi
  fi

  if [ -e Library-Exit ]; then
    echo Pass Library-Exit test...
    ./Library-Exit
    if [ $? -ne 42 ]; then
      echo "TEST FAILED, ERROR CODE NOT EQUAL 42 ($? != 42)"
    fi
    cleanup Library-Exit
  fi

  if [ -e Library-System ]; then
    echo Pass Library-System test...
    run_exe Library-System
    compare __out.txt 2lines.txt
    cleanup Library-System
  fi

  rm Library.cpp Library.sref
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

  if [ "$SRC" != "Library.sref" ]; then
    $CPPLINE $TEST_CPP_FLAGS -o$TARGET $CPP Library.cpp ../../srlib/refalrts.cpp
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

simple_test_fail() {
  if [ -e $1 ]; then
    echo Pass simple FAIL test $1...
    if ./$1; then
      echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
      exit 1
    fi
    echo "Ok! This failure was normal and expected"
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
