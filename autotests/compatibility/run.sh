#!/bin/bash

main() {
  lookup_compilers
  if [ -z "$REFC_EXIST$SREFC_EXIST$CREFAL_EXIST" ]; then
    echo NO REFAL COMPILERS FOUND, EXITING
  else
    if [ -z "$1" ]; then
      run_all_tests *.ref
    else
      run_all_tests "$@"
    fi
  fi
}

lookup_compilers() {
  REFC_EXIST=
  SREFC_EXIST=
  CREFAL_EXIST=

  # Поиск refc/refgo
  rm -f detect.rsl
  refc detect.ref || :
  if valid_rsl_detected; then
    REFAL_COMPILERS=refc
    REFC_EXIST=1
    echo ... found refc
  fi

  # Поиск crefal (два варианта)
  crefal detect.ref 2>/dev/null || :
  if valid_rsl_detected; then
    REFAL_COMPILERS="crefal $REFAL_COMPILERS"
    CREFAL_EXIST=1
    CREFAL_CALL=crefal
    echo ... found crefal \(bash script\)
  else
    refgo crefal detect.ref 2>/dev/null || :
    if valid_rsl_detected; then
      REFAL_COMPILERS="crefal $REFAL_COMPILERS"
      CREFAL_EXIST=1
      CREFAL_CALL="refgo crefal"
      echo ... found crefal.rsl
    fi
  fi

  # Поиск srefc
  if [ -e ../../bin/srefc-core ]; then
    REFAL_COMPILERS="srefc $REFAL_COMPILERS"
    SREFC_EXIST=1
    echo ... found srefc
    source ../../c-plus-plus.conf.sh
    source ../../src/scripts/platform-specific.sh
  fi
  echo
}

valid_rsl_detected() {
  RETCODE=1
  if [ -e detect.rsl ]; then
    refgo detect.rsl > detect.out
    echo detected > detect.expected

    if cmp detect.out detect.expected; then
      RETCODE=0
    fi

    rm -f detect.rsl detect.out detect.expected
  fi
  return $RETCODE
}

run_all_tests() {
  for n in "$@"; do
    NAME=${n%.*}
    MODE=${NAME##*.}
    if [ "$NAME" != "$MODE" ]; then
      run_test_result_$MODE "$n"
    fi
  done
}

run_test_result_OK() {
  echo OK $1

  for c in $REFAL_COMPILERS; do
    echo "*** Perform OK test $1 for compiler $c..."
    compile_$c "$1" || {
      echo COMPILATION FOR COMPILER $c FAILED
      exit 1
    }

    execute_OK_$c "$1" || exit 1
    mv __out.txt __out.txt.$c
    LAST=$c
    echo
  done

  for c in $REFAL_COMPILERS; do
    cmp __out.txt.$LAST __out.txt.$c > /dev/null || {
      echo ERROR: Outputs of $c and $LAST is different:
      diff -u __out.txt.$LAST __out.txt.$c
      exit 1
    }
  done

  for c in $REFAL_COMPILERS; do
    cleanup_$c "$1"
    rm -f __out.txt.$c
  done
}

run_test_result_FAIL() {
  for c in $REFAL_COMPILERS; do
    echo "*** Perform FAIL test $1 for compiler $c..."
    compile_$c "$1" || {
      echo COMPILATION FOR COMPILER $c FAILED
      exit 1
    }
    execute_FAIL_$c "$1"
    cleanup_$c "$1"
    echo
  done
}

run_test_result_SYNTAX-ERROR() {
  for c in $REFAL_COMPILERS; do
    echo "*** Perform SYNTAX ERROR test $1 for compiler $c..."
    if compile_$c "$1"; then
      echo COMPILATION FOR COMPILER %%c SUCCESSED, SYNTAX ERRORS IS NOT FOUND
      exit 1
    else
      echo Ok! This syntax errors is normal and expected!
    fi
    cleanup_$c "$1"
    echo
  done
}

compile_srefc() {
  LIBDIR=../../src/srlib

  COMMON_SRFLAGS=(
    "-c $CPPLINEE"
    --exesuffix=$(platform_exe_suffix)
    -D$LIBDIR
    -D$(platform_subdir_lookup $LIBDIR)
    -D$LIBDIR/common
    --prelude=refal5-builtins.srefi
    -f-DSTEP_LIMIT=1000
    -f-DMEMORY_LIMIT=1000
    -f-DDUMP_FILE=\\\"__dump.txt\\\"
    -f-DDONT_PRINT_STATISTICS
    -f-g
    refalrts
    refalrts-platform-specific
    --chmod-x-command="chmod +x"
  )

  cp $LIBDIR/Library.sref .
  SRC=$1
  TARGET=${SRC%%.ref}$(platform_exe_suffix)

  ../../bin/srefc-core $SRC -o $TARGET "${COMMON_SRFLAGS[@]}" \
    Library 2>__error.txt
  if [ $? -ge 100 ]; then
    echo COMPILER FAILS ON $SRC, SEE __error.txt
    exit 1
  fi
  rm __error.txt
  if [ ! -e $TARGET ]; then
    return 1
  fi
}

execute_OK_srefc() {
  SRC=$1
  EXE=${SRC%%.ref}$(platform_exe_suffix)
  ./$EXE Hello "Hello, World" "" / > __out.txt || {
    echo TEST FAILED, SEE __dump.txt
    exit 1
  }
}

execute_FAIL_srefc() {
  SRC=$1
  EXE=${SRC%%.ref}$(platform_exe_suffix)
  if ./$EXE > __out.txt; then
    echo THIS TEST MUST FAIL BUT DONT IT
    exit 1
  else
    echo Ok! This failure was normal and expected!
  fi
}

cleanup_srefc() {
  SRC=$1
  RASL=${SRC%%.ref}.rasl
  EXE=${SRC%%.ref}$(platform_exe_suffix)
  CPP=${SRC%%.ref}.cpp
  rm -f "$RASL" "$EXE" "$CPP" __dump.txt __out.txt
  rm -f Library.*
}

compile_crefal() {
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  $CREFAL_CALL $SRC $RSL
  if [ ! -e "$RSL" ]; then
    return 1
  fi
}

execute_OK_crefal() {
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  echo Y | refgo "$RSL" Hello "Hello, World" "" / >__out.txt 2>__dump.txt || {
    echo TEST FAILED, SEE __dump.txt
    exit 1
  }
}

execute_FAIL_crefal() {
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  if echo Y | refgo "$RSL" >__out.txt 2>__dump.txt; then
    echo THIS TEST MUST FAIL BUT DONT IT
    exit 1
  else
    echo Ok! Program failed on this test!
  fi
}

cleanup_crefal() {
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  LIS=${SRC%%.ref}.lis
  rm -f "$RSL" "$LIS" __dump.txt __out.txt
}

compile_refc() {
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  refc $1
  if [ ! -e "$RSL" ]; then
    return 1
  fi
}

execute_OK_refc() {
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  echo Y | refgo "$RSL" Hello "Hello, World" "" / >__out.txt 2>__dump.txt || {
    echo TEST FAILED, SEE __dump.txt
    exit 1
  }
}

execute_FAIL_refc() {
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  if echo Y | refgo "$RSL" >__out.txt 2>__dump.txt; then
    echo THIS TEST MUST FAIL BUT DONT IT
    exit 1
  else
    echo Ok! Program failed on this test!
  fi
}

cleanup_refc() {
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  LIS=${SRC%%.ref}.lis
  rm -f "$RSL" "$LIS" __dump.txt __out.txt
}

main "$@"
