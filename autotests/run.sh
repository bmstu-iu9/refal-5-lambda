#!/bin/bash
source ../scripts/load-config.sh .. || exit 1
source ../scripts/platform-specific.sh

LIBDIR=../src/lib

INT=_int_test$(platform_exe_suffix)

# Подавление предупреждений плагина
COMMON_SRFLAGS=()
SRFLAGS=
SRFLAGS_NAT=
SRFLAGS_NAT_LIB=
SRFLAGS_PREF=
CPPLINEE=${CPPLINEE}
CPPLINEL=${CPPLINEL}
CPPLINEESUF=${CPPLINEESUF}
CPPLINELSUF=${CPPLINELSUF}

prepare_prefix() {
  if [[ ! -e _test_prefix.exe-prefix ]]; then
    echo Prepare common prefix...
    ../bin/rlc-core -o _test_prefix.exe-prefix \
      "${COMMON_SRFLAGS[@]}" ${SRFLAGS_NAT} 2>__error.txt
      if [[ $? -ge 100 ]] || [[ ! -e _test_prefix.exe-prefix ]]; then
        echo "CAN'T CREATE COMMON PREFIX, SEE __error.txt or __dump_rlc-core.txt"
        exit 1
      fi
    echo
  fi
  if [[ ! -e _test_prefix.lib-prefix ]]; then
    cat /dev/null > _test_prefix.lib-prefix
  fi
}

run_test_all_modes() {
  if ! grep '%%' $1 > /dev/null; then
    SRFLAGS_PLUS_INIT="$SRFLAGS_PREF"
  else
    SRFLAGS_PLUS_INIT="$SRFLAGS_NAT_LIB"
  fi

  SRFLAGS_PLUS="$SRFLAGS_PLUS_INIT"
  SRFLAGS= $2 $1
  SRFLAGS=--markup-context $2 $1
  SRFLAGS=-OP $2 $1
  SRFLAGS=-OR $2 $1
  SRFLAGS=-OPR $2 $1
  SRFLAGS_PLUS="$SRFLAGS_NAT_LIB"
  SRFLAGS=-Od $2 $1
  SRFLAGS=-OdP $2 $1
  SRFLAGS=-OdR $2 $1
  SRFLAGS=-OdPR $2 $1

  if grep 'NO-WARNINGS' $1 > /dev/null; then
    echo "Pass special warning tests:"
    SRFLAGS_PLUS="$SRFLAGS_PLUS_INIT"
    SRFLAGS="-Wall -Werror" $2 $1
    echo "Special warning tests passed"
  fi

  if grep 'CONDITIONS' $1 > /dev/null; then
    echo "Pass special conditions tests:"
    SRFLAGS_PLUS="$SRFLAGS_PLUS_INIT"
    SRFLAGS=-OC $2 $1
    SRFLAGS="-OC --markup-context" $2 $1
    SRFLAGS=-OCP $2 $1
    SRFLAGS=-OCR $2 $1
    SRFLAGS=-OCPR $2 $1
    SRFLAGS_PLUS="$SRFLAGS_NAT_LIB"
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
    SRFLAGS=-ODS $2 $1
    SRFLAGS=-OCT $2 $1
    SRFLAGS=-OCD $2 $1
    SRFLAGS=-OCI $2 $1
    SRFLAGS=-OCS $2 $1
    SRFLAGS=-OCDS $2 $1
    SRFLAGS=-Oi $2 $1
    SRFLAGS=-OiD $2 $1
    SRFLAGS=-OiCD $2 $1
    SRFLAGS=-OAD $2 $1
    SRFLAGS=-OACD $2 $1
    SRFLAGS=-OAS $2 $1
    SRFLAGS=-OACS $2 $1
    SRFLAGS=-OADS $2 $1
    SRFLAGS=-OACDS $2 $1
    SRFLAGS=-OiACDS $2 $1
    SRFLAGS_PLUS="$SRFLAGS_NAT_LIB"
    SRFLAGS=-OdiACDS $2 $1
    SRFLAGS=-OCdiADPRS $2 $1
    echo "Special tree tests is passed"
  fi
}

prepare_int_test() {
  SRC=$1
  REFERENCE=${SRC%.*}

  prepare_prefix

  ../bin/rlc-core --no-sources -o ${INT} \
    "${COMMON_SRFLAGS[@]}" ${SRFLAGS_PREF} \
    --reference=${REFERENCE} >__out.txt 2>__error.txt
  if [[ $? -ge 100 ]] || [[ ! -e ${INT} ]]; then
    echo COMPILER FAILS ON CREATING ${INT}, \
      SEE __error.txt or __dump_rlc-core.txt
    exit 1
  fi
  rm __out.txt __error.txt
}

run_test_aux() {
  prepare_int_test $1
  run_test_all_modes $1 run_test_aux_with_flags
}

run_test_aux_with_flags() {
  echo Passing $1 \(flags ${SRFLAGS}\)...
  SREF=$1
  RASL=${SREF%.*}.rasl
  NATCPP=${SREF%.*}.cpp
  LIBR=${SREF%.*}.rasl-module
  LIBN=${SREF%.*}$(platform_lib_suffix)
  SATELITE=${SREF%.*}.SATELITE.ref

  if ! [[ -e "$SATELITE" ]]; then
    SATELITE=
  fi

  rm -f __dump_rlc-core.txt
  ../bin/rlc-core --keep-rasls ${SREF} --makelib "${COMMON_SRFLAGS[@]}" \
    ${SRFLAGS} ${SRFLAGS_PLUS} "$SATELITE" 2>__error.txt
  if [[ $? -ge 100 ]]; then
    echo COMPILER ON ${SREF} FAILS, SEE __error.txt or __dump_rlc-core.txt
    exit 1
  elif [[ ! -e ${LIBR} ]] && [[ ! -e ${LIBN} ]]; then
    echo COMPILATION FAILED, __error.txt:
    cat __error.txt
    exit 1
  fi
  rm __error.txt

  if [[ ! -e ${NATCPP} ]]; then
    NATCPP=
  fi

  ./${INT} ++diagnostic+config=test-diagnostics.ini
  if [[ $? -gt 0 ]]; then
    echo TEST FAILED, SEE __dump.txt
    exit 1
  fi

  rm -f ${RASL} ${NATCPP} ${LIBR} ${LIBN} __dump.txt __log.txt
  rm -f *.SATELITE.{rasl,cpp}
  rm -rf ${SREF%.*}.partial.dSYM

  echo
}

run_test_aux.BAD-SYNTAX() {
  echo Passing $1 \(syntax error recovering\)...
  SREF=$1
  RASL=${SREF%.*}.rasl
  EXE=${SREF%.*}$(platform_exe_suffix)

  rm -f __dump_rlc-core.txt
  ../bin/rlc-core --prelude=test-prelude.srefi -C ${SRFLAGS} ${SREF} \
    2>__error.txt
  if [[ $? -ge 100 ]]; then
    echo COMPILER ON ${SREF} FAILS, SEE __error.txt or __dump_rlc-core.txt
    exit 1
  fi
  if [[ -e ${RASL} ]]; then
    echo COMPILATION SUCCEEDED, BUT EXPECTED SYNTAX ERROR
    rm ${RASL}
    exit 1
  fi
  cat __error.txt
  rm __error.txt

  echo "Ok! Compiler didn't crash on invalid syntax"
  echo
}

run_test_aux.WARNING() {
  FLAG=$(grep 'WARNING' "$1")
  IFS=' ' read -a array <<< "$FLAG"
  WARN=-W"${array[2]}"

  echo Passing $1 \(flag "${WARN}"\)...
  SREF=$1
  RASL=${SREF%.*}.rasl
  CPP=${SREF%.*}.cpp
  EXE=${SREF%.*}$(platform_exe_suffix)

  rm -f __dump_rlc-core.txt
  ../bin/rlc-core ${WARN} --prelude=test-prelude.srefi -C ${SRFLAGS} ${SREF} \
    2>__error.txt
  if [[ $? -ge 100 ]]; then
    echo COMPILER ON ${SREF} FAILS, SEE __error.txt or __dump_rlc-core.txt
    exit 1
  fi
  if [[ ! -e ${RASL} ]]; then
    echo COMPILATION FAILED, __error.txt:
    cat __error.txt
    exit 1
  fi
  cat __error.txt
  rm __error.txt
  rm -f ${RASL} ${CPP}
  echo "Ok! Compiler didn't abort"
  echo

  WARN="-Werror=${array[2]}"
  echo Passing $1 \(flags "${WARN}"\)...
  rm -f __dump_rlc-core.txt
  ../bin/rlc-core ${WARN} --prelude=test-prelude.srefi -C ${SRFLAGS} ${SREF} \
    2>__error.txt
  if [[ $? -ge 100 ]]; then
    echo COMPILER ON ${SREF} FAILS, SEE __error.txt or __dump_rlc-core.txt
    exit 1
  fi
  if [[ -e ${RASL} ]]; then
    echo COMPILATION SUCCEEDED, BUT EXPECTED ERROR
    rm ${RASL}
    exit 1
  fi
  cat __error.txt
  rm __error.txt
  echo "Ok! Compiler treated warnings as errors"
  echo

}

run_test_aux.FAILURE() {
  prepare_int_test $1
  run_test_all_modes $1 run_test_aux_with_flags.FAILURE
}

run_test_aux_with_flags.FAILURE() {
  echo Passing $1 \(expecting failure, flags ${SRFLAGS}\)...
  SREF=$1
  RASL=${SREF%.*}.rasl
  NATCPP=${SREF%.*}.cpp
  LIBR=${SREF%.*}.rasl-module
  LIBN=${SREF%.*}$(platform_lib_suffix)
  SATELITE=${SREF%.*}.SATELITE.ref

  if ! [[ -e "$SATELITE" ]]; then
    SATELITE=
  fi

  rm -f __dump_rlc-core.txt
  ../bin/rlc-core --keep-rasls ${SREF} --makelib "${COMMON_SRFLAGS[@]}" \
    ${SRFLAGS} ${SRFLAGS_PLUS} "$SATELITE" 2>__error.txt
  if [[ $? -ge 100 ]] || [[ ! -e ${LIBR} ]] && [[ ! -e ${LIBN} ]]; then
    echo COMPILER ON ${SREF} FAILS, SEE __error.txt or __dump_rlc-core.txt
    exit 1
  fi
  rm __error.txt

  if [[ ! -e ${NATCPP} ]]; then
    NATCPP=
  fi

  ./${INT} ++diagnostic+config=test-diagnostics.ini
  if [[ $? -lt 100 ]]; then
    echo TEST NOT EXPECTATIVE FAILED, SEE __dump.txt
    exit 1
  fi

  rm -f ${RASL} ${NATCPP} ${LIBR} ${LIBN} __dump.txt __log.txt
  rm -f *.SATELITE.{rasl,cpp}
  rm -rf ${SREF%.*}.partial.dSYM

  echo "Ok! This failure was normal and expected"
  echo
}

run_test_aux.SATELITE() {
  echo Skip satelite part $1...
}

run_test() {
  PLATFORM_SUBDIR=$(platform_subdir_lookup ${LIBDIR})
  COMMON_SRFLAGS=(
    --cpp-command-exe="$CPPLINEE"
    --cpp-command-lib="$CPPLINEL"
    --cpp-command-exe-suf="$CPPLINEESUF"
    --cpp-command-lib-suf="$CPPLINELSUF"
    --exesuffix=$(platform_exe_suffix)
    --libsuffix=$(platform_lib_suffix)
    --prelude=test-prelude.srefi
    -D$PLATFORM_SUBDIR
    -D$LIBDIR/platform-POSIX
    -D$LIBDIR/debug
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
  SRFLAGS_NAT_LIB="
    refalrts
    refalrts-main
    refalrts-vm-api
    refalrts-platform-POSIX
    refalrts-platform-specific
  "
  SREF=$1
  SUFFIX=`echo ${SREF%.*} | sed 's/[^.]*\(\.[^.]*\)*/\1/'`
  run_test_aux${SUFFIX} $1
}

run_test_dir() {
  DIR=$(dirname $1)
  echo Passing special test in dir ${DIR}
  cd ${DIR}
  ./run.sh
  if [[ $? -gt 0 ]]; then
    echo TEST FAILED
    cd ..
    exit 1
  fi
  cd ..
}

run_all_dir_tests() {
  for d in */run.sh; do
    run_test_dir ${d}
  done
}

if [[ -z "$1" ]]; then
  for s in *.sref *.ref; do
    run_test ${s}
  done
  run_all_dir_tests
elif [[ "$1" = "--dir" ]]; then
  run_all_dir_tests
else
  for s in $*; do
    run_test ${s}
  done
fi

[[ -e _test_prefix.exe-prefix ]] && rm _test_prefix.exe-prefix
[[ -e _test_prefix.lib-prefix ]] && rm _test_prefix.lib-prefix
[[ -e ${INT} ]] && rm ${INT}
rm -rf _test_prefix.exe-prefix.partial.dSYM
