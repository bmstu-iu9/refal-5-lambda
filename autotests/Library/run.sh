#!/bin/bash
source ../../scripts/load-config.sh ../.. || return 1
source ../../scripts/platform-specific.sh

LIBDIR=../../src/lib

run_all_tests() {
  COMMON_SRFLAGS=(
    --cpp-command-exe="$CPPLINEE"
    --cpp-command-lib="$CPPLINEL"
    --cpp-command-exe-suf="$CPPLINEESUF"
    --cpp-command-lib-suf="$CPPLINELSUF"
    --exesuffix=$(platform_exe_suffix)
    -D$(platform_subdir_lookup $LIBDIR)
    -D$LIBDIR/platform-POSIX
    -D$LIBDIR/debug
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

  DIAG="++diagnostic+config=test-diagnostics.ini"

  echo Precompile Library.ref
  cp $LIBDIR/Library.ref .
  ../../bin/rlc-core "${COMMON_SRFLAGS[@]}" -C Library 2>__error.txt
  if [ $? -ge 100 ] || [ ! -e Library.rasl ]; then
    echo COMPILER FAILS ON Library.ref, SEE __error.txt
    exit 1
  fi
  rm __error.txt Library.ref
  echo

  for s in $*; do
    compile $s
  done

  simple_tests ok \
    Library-Math-OK \
    Library-LongMath-Add-Sub-Compare-OK \
    Library-LongMath-Mul-OK \
    Library-LongMath-Divmod-OK \
    Library-LongMath-Div-OK \
    Library-LongMath-Mod-OK \
    Library-LongMath-Numb-OK \
    Library-LongMath-Symb-OK \
    Library-FOpen-Get-Close \
    Library-IntFromStr-StrFromInt-Chr-Ord \
    Library-SymbCompare \
    Library-Type \
    Library-Implode-Explode_Ext \
    Library-ReadBytes \
    Library-FTell \
    Library-FSeek \
    Library-PtrFromName \
    Library-Sysfun-2 \
    Library-Platform

  simple_tests fail \
    Library-Math-Fail \
    Library-Math-Div-Fail \
    Library-Math-Mod-Fail \
    Library-FOpen-Fail \
    Library-SymbCompare-Fail \
    Library-Implodes-Fail \
    Library-PtrFromName-Fail

  if [ -e Library-Prout-Expr ]; then
    echo Pass Library-Prout-Expr test...
    run_exe Library-Prout-Expr
    compare __out.txt Prout-Expr.txt
    cleanup Library-Prout-Expr
  fi

  if [ -e Library-FOpen-Putout-Close ]; then
    echo Pass Library-FOpen-Putout-Close test...
    run_exe Library-FOpen-Putout-Close
    compare __written_file.txt 2lines.txt
    cleanup Library-FOpen-Putout-Close
  fi

  if [ -e Library-Card-2lines ]; then
    echo Pass Library-Card-2lines test...
    ./Library-Card-2lines $DIAG < 2lines.txt
    if [ $? -gt 0 ]; then
      echo TEST FAILED, SEE __dump.txt
      exit 1
    fi
    cleanup Library-Card-2lines
  fi

  if [ -e Library-Card-2lines-no-eol ]; then
    echo Pass Library-Card-2lines-no-eol test...
    ./Library-Card-2lines-no-eol $DIAG < 2lines-no-eol.txt
    if [ $? -gt 0 ]; then
      echo TEST FAILED, SEE __dump.txt
      exit 1
    fi
    cleanup Library-Card-2lines-no-eol
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

  if [ -e Library-WriteBytes ]; then
    echo Pass Library-WriteBytes test...
    run_exe Library-WriteBytes
    compare __written_file.txt 2lines-no-eol.txt
    cleanup Library-WriteBytes
  fi

  if [ -e Library-RenameFile ]; then
    echo Pass Library-RenameFile test...
    cp 2lines.txt source.txt
    run_exe Library-RenameFile
    compare __written_file.txt 2lines.txt
    cleanup Library-RenameFile
  fi

  if [ -e Library-symbolic-file-handles ]; then
    echo Pass Library-symbolic-file-handles test...
    ./Library-symbolic-file-handles $DIAG < 2lines.txt > __out.txt 2>__err.txt
    if [ $? -gt 0 ]; then
      echo TEST FAILED, SEE __dump.txt
      exit 1
    fi
    compare __out.txt 2lines.txt
    compare __err.txt 2lines.txt
    cleanup Library-symbolic-file-handles
  fi

  rm Library.rasl Library.cpp
}

compile() {
  echo Compiling $1
  SRC=$1
  TARGET=${SRC%%.sref}$(platform_exe_suffix)

  ../../bin/rlc-core --keep-rasls $SRC -o $TARGET "${COMMON_SRFLAGS[@]}" \
    Library 2>__error.txt
  if [ $? -ge 100 ] || [ ! -e $TARGET ]; then
    echo COMPILER FAILS ON $SRC, SEE __error.txt
    exit 1
  fi
  rm __error.txt
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
    if ./$1 $DIAG; then
      echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
      exit 1
    fi
    echo "Ok! This failure was normal and expected"
    cleanup $1
  fi
}

run_exe() {
  ./$1 $DIAG > __out.txt
  if [ $? -gt 0 ]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi
}

cleanup() {
  rm -f $1$(platform_exe_suffix) $1.rasl $1.cpp
  rm -f __dump.txt __out.txt __err.txt __written_file.txt
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
