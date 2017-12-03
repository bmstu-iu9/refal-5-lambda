#!/bin/bash

main() {
  UNAME=$(uname | sed 's/_.*$//')
  CMP=cmp
  DIFF=diff
  SEP=/
  if [ "$UNAME" == "MINGW32" -o "$UNAME" == "CYGWIN" ]; then
    CMP="diff --strip-trailing-cr"
    DIFF="diff --strip-trailing-cr"
  fi

  if [ "$UNAME" == "MINGW32" ]; then
    SEP=\\
  fi

  OUTPUT_FILES="stdout.txt stderr.txt written_file.txt REFAL15.DAT"
  lookup_compilers || return 1
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
  refc detect.ref 2>/dev/null || :
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
    source ../../scripts/load-config.sh ../.. || return 1
    source ../../scripts/platform-specific.sh
  fi
  echo
}

valid_rsl_detected() {
  RETCODE=1
  if [ -e detect.rsl ]; then
    refgo detect.rsl > detect.out
    echo detected > detect.expected

    if $CMP detect.out detect.expected; then
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

    (
      export Foo=Bar
      unset NoEnv
      PATH=".:$PATH"
      execute_OK_$c "$1"
    ) || exit 1
    for o in $OUTPUT_FILES; do
      SAMPLE="${1%%.ref}.$o"
      if [ -e "$SAMPLE" ]; then
        if [ ! -e $o ]; then
          echo ERROR: File $o must be created but is absent
          exit 1
        fi
        $CMP $o "$SAMPLE" > /dev/null || {
          echo ERROR: Invalid output to $o. See $SAMPLE and $o
          echo ERROR: Difference between $SAMPLE and $o:
          $DIFF -u $o "$SAMPLE"
          exit 1
        }
      fi
    done
    mv stdout.txt stdout.txt.$c
    LAST=$c
    echo
  done

  for c in $REFAL_COMPILERS; do
    $CMP stdout.txt.$LAST stdout.txt.$c > /dev/null || {
      echo ERROR: Outputs of $c and $LAST is different:
      $DIFF -u stdout.txt.$LAST stdout.txt.$c
      exit 1
    }
  done

  for c in $REFAL_COMPILERS; do
    cleanup_$c "$1"
    rm -f stdout.txt.$c
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
    -D$(platform_subdir_lookup $LIBDIR)
    -D$LIBDIR/common
    -D$LIBDIR
    --prelude=refal5-builtins.srefi
    -f-DSTEP_LIMIT=6000
    -f-DMEMORY_LIMIT=1000
    -f-DDUMP_FILE=\\\"__dump.txt\\\"
    -f-DDONT_PRINT_STATISTICS
    -f-g
    refalrts
    refalrts-platform-POSIX
    refalrts-platform-specific
    --chmod-x-command="chmod +x"
  )

  cp $LIBDIR/Library.sref .
  SRC=$1
  TARGET=${SRC%%.ref}$(platform_exe_suffix)

  ../../bin/srefc-core $SRC -o $TARGET "${COMMON_SRFLAGS[@]}" \
    Library external 2>__error.txt
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
  echo Y | ./$EXE Hello "Hello, World" "" $SEP > stdout.txt 2>stderr.txt || {
    echo TEST FAILED, SEE __dump.txt:
    cat __dump.txt
    exit 1
  }
}

execute_FAIL_srefc() {
  SRC=$1
  EXE=${SRC%%.ref}$(platform_exe_suffix)
  if echo Y | ./$EXE > stdout.txt; then
    echo THIS TEST MUST FAIL BUT DONT IT
    exit 1
  else
    echo Ok! This failure was normal and expected!
  fi
}

cleanup_common() {
  rm -f __dump.txt $OUTPUT_FILES
}

cleanup_srefc() {
  cleanup_common
  SRC=$1
  RASL=${SRC%%.ref}.rasl
  EXE=${SRC%%.ref}$(platform_exe_suffix)
  CPP=${SRC%%.ref}.cpp
  rm -f "$RASL" "$EXE" "$CPP"
  rm -f Library.* external.rasl
}

compile_crefal() {
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  $CREFAL_CALL $SRC $RSL
  if [ ! -e "$RSL" ]; then
    return 1
  fi
  $CREFAL_CALL external.ref external-crefal.rsl
  if [ ! -e external-crefal.rsl ]; then
    return 1
  fi
}

execute_OK_crefal() {
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  echo Y | refgo "$RSL"+external-crefal Hello "Hello, World" "" $SEP \
    >stdout.txt 2>__dump.txt || \
  {
    echo TEST FAILED, SEE __dump.txt:
    cat __dump.txt
    exit 1
  }
  mv __dump.txt stderr.txt
}

execute_FAIL_crefal() {
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  if echo Y | refgo "$RSL"+external-crefal >stdout.txt 2>__dump.txt; then
    echo THIS TEST MUST FAIL BUT DONT IT
    exit 1
  else
    echo Ok! Program failed on this test!
  fi
}

cleanup_crefal() {
  cleanup_common
  SRC=$1
  RSL=${SRC%%.ref}-crefal.rsl
  LIS=${SRC%%.ref}.lis
  rm -f "$RSL" "$LIS" external-crefal.rsl
}

compile_refc() {
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  refc $1
  if [ ! -e "$RSL" ]; then
    return 1
  fi
  refc external.ref
  if [ ! -e external.rsl ]; then
    return 1
  fi
}

execute_OK_refc() {
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  echo Y | refgo "$RSL"+external Hello "Hello, World" "" $SEP \
    >stdout.txt 2>__dump.txt || \
  {
    echo TEST FAILED, SEE __dump.txt:
    cat __dump.txt
    exit 1
  }
  mv __dump.txt stderr.txt
}

execute_FAIL_refc() {
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  if echo Y | refgo "$RSL"+external >stdout.txt 2>__dump.txt; then
    echo THIS TEST MUST FAIL BUT DONT IT
    exit 1
  else
    echo Ok! Program failed on this test!
  fi
}

cleanup_refc() {
  cleanup_common
  SRC=$1
  RSL=${SRC%%.ref}.rsl
  LIS=${SRC%%.ref}.lis
  rm -f "$RSL" "$LIS" external.rsl
}

main "$@"
