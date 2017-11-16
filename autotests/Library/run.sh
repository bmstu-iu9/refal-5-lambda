#!/bin/bash
source ../../c-plus-plus.conf.sh
source ../../src/scripts/platform-specific.sh

LIBDIR=../../src/srlib

run_all_tests() {
  COMMON_SRFLAGS=(
    "-c $CPPLINEE"
    --exesuffix=$(platform_exe_suffix)
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
    --chmod-x-command="chmod +x"
  )

  cp $LIBDIR/Library.sref .
  for s in $*; do
    compile $s
  done

  simple_tests ok \
    Library-Math-OK \
    Library-FOpen-FReadLine-FClose \
    Library-IntFromStr-StrFromInt-Chr-Ord \
    Library-SymbCompare \
    Library-Type \
    Library-Implode-Explode \
    Library-FReadBytes \
    Library-FTell \
    Library-FSeek

  simple_tests fail \
    Library-Math-Fail \
    Library-Math-Div-Fail \
    Library-Math-Mod-Fail \
    Library-FOpen-Fail \
    Library-FClose-0-Fail \
    Library-FClose-unopened-Fail \
    Library-FWrite-unopened-file-Fail \
    Library-SymbCompare-Fail \
    Library-Implodes-Fail

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

  if [ -e Library-FOpen-Append ]; then
    echo Pass Library-FOpen-Append test...
    run_exe Library-FOpen-Append
    cleanup Library-FOpen-Append
  fi

  if [ -e Library-FOpen-extended-mode ]; then
    echo Pass Library-FOpen-extended-mode test...
    run_exe Library-FOpen-extended-mode
    compare __written_file.txt 2lines.txt
    cleanup Library-FOpen-extended-mode
  fi

  if [ -e Library-FWriteBytes ]; then
    echo Pass Library-FWriteBytes test...
    run_exe Library-FWriteBytes
    compare __written_file.txt 2lines-no-eol.txt
    cleanup Library-FWriteBytes
  fi

  if [ -e Library-RenameFile ]; then
    echo Pass Library-RenameFile test...
    cp 2lines.txt source.txt
    run_exe Library-RenameFile
    compare __written_file.txt 2lines.txt
    cleanup Library-RenameFile
  fi

  if [ -e Library-RemoveFile ]; then
    echo Pass Library-RemoveFile test...
    cp 2lines.txt for_remove.txt
    run_exe Library-RemoveFile
    if [ -e for_remove.txt ]; then
      echo FILE for_remove.txt must be removed
      exit 1
    fi
    cleanup Library-RemoveFile
  fi

  rm Library.rasl Library.cpp Library.sref
}

compile() {
  echo Compiling $1
  SRC=$1
  TARGET=${SRC%%.sref}$(platform_exe_suffix)

  if [ "$SRC" != "Library.sref" ]; then
    ../../bin/srefc-core $SRC -o $TARGET "${COMMON_SRFLAGS[@]}" \
      Library 2>__error.txt
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
  rm -f $1$(platform_exe_suffix) $1.rasl $1.cpp
  rm -f __dump.txt __out.txt __written_file.txt
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
