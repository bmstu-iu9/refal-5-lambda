#!/bin/bash

# Подавление предупреждений плагина
SREFC_FLAGS="$SREFC_FLAGS"

compile_separated() {
  TARGET="$1"
  LIBS="$2"

  mkdir -p ${TARGET}

  ../../bin/srefc-core -C ${SREFC_FLAGS} ${LIBS} -d common

  for s in ${LIBS}; do
    grep '//FROM' < ${s}.ref > ${TARGET}/${s}.rasl.froms
    [[ -e ${s}.cpp ]] && mv ${s}.cpp ${TARGET}
    mv ${s}.rasl ${TARGET}
  done
}

compile_scratch() {
  SCRATCHDIR=../../srlib/scratch
  mkdir -p ${SCRATCHDIR}
  cp *.h *.cpp *.rasl ${SCRATCHDIR}

  compile_separated "$SCRATCHDIR" "$CSOURCES $RSOURCES"

  for d in platform-* exe platform-*/lib; do
    if [[ -d ${d} ]]; then
      mkdir -p ${SCRATCHDIR}/${d}
      cp ${d}/*.cpp ${SCRATCHDIR}/${d}
      cp ${d}/*.rasl ${SCRATCHDIR}/${d}
      for f in ${d}/*.def; do
        [[ -e ${f} ]] && cp ${f} ${SCRATCHDIR}/${d}
      done
    fi
  done


  SCRATCHDIR=../../lib/scratch
  compile_separated "$SCRATCHDIR/exe" "$RSOURCES"
  mkdir -p ${SCRATCHDIR}/debug/exe

  SCRATCHDIR=../../lib/scratch-rt
  compile_separated "$SCRATCHDIR/exe" "$CSOURCES"

  for d in . platform-* exe platform-*/lib; do
    if [[ -d ${d} ]]; then
      mkdir -p ${SCRATCHDIR}/${d}
      cp ${d}/*.cpp ${SCRATCHDIR}/${d}
      for f in ${d}/*.h ${d}/*.def; do
        [[ -e ${f} ]] && cp ${f} ${SCRATCHDIR}/${d}
      done
    fi
  done

  find "$SCRATCHDIR" -name '*.cpp' | while read cpp; do
    RASL="${cpp%.cpp}.rasl"
    [ -e "$RASL" ] || : > ${cpp%.cpp}.rasl
  done

  for d in diagnostic-initializer debugger; do
    mv ../../lib/scratch-rt/refalrts-${d}.* ../../lib/scratch/debug/exe
  done
}

prepare_prefix() {
  TARGET="$1"
  PREFIX="$2"
  LIBS="$3"

  ( cd ../lib-${PREFIX}-prefix && ./make.sh "$LIBS" )

  mv ../../bin/${PREFIX}-prefix* ${TARGET}/${PREFIX}.exe-prefix
  # Префикс не должен быть исполнимым
  chmod -x ${TARGET}/${PREFIX}.exe-prefix

  for s in ${LIBS}; do
    cat /dev/null > ${TARGET}/${s}.rasl
    echo "//PREFIX $PREFIX" > ${TARGET}/${s}.rasl.froms
  done
}

prepare_prefix_new() {
  PREFIX="$1"
  LIBS="$2"

  ( cd ../lib-${PREFIX}-prefix && ./make.sh "$LIBS" )

  mv ../../bin/${PREFIX}-prefix* ../../lib/${PREFIX}.exe-prefix
  # Префикс не должен быть исполнимым
  chmod -x ../../lib/${PREFIX}.exe-prefix
}

compile_rich() {
  RICHDIR=../../srlib/rich

  mkdir -p ${RICHDIR}
  prepare_prefix "$RICHDIR" rich "$CSOURCES $RSOURCES $RT"


  prepare_prefix_new rich "$CSOURCES $RSOURCES $RT"
  prepare_prefix_new rich-debug "$CSOURCES $RSOURCES $RTD"
}

compile_rich_debug() {
  RICHDIR=../../srlib/rich-debug

  mkdir -p ${RICHDIR}
  prepare_prefix "$RICHDIR" rich-debug "$CSOURCES $RSOURCES $RTD"
}

make_reference_rasl() {
  TARGET_FILE="$1/$2.rasl"
  REFERENCE="$2"

  cat /dev/null > ${TARGET_FILE}
  ../../bin/srefc-core -R \
    --target-file="$TARGET_FILE" \
    --reference="$REFERENCE" \
    "$TARGET_FILE"
}

compile_slim() {
  SLIMDIR=../../srlib/slim
  CSOURCES=Library

  mkdir -p ${SLIMDIR}
  prepare_prefix "$SLIMDIR" slim "$CSOURCES $RT"

  SREFC_FLAGS="$SREFC_FLAGS -Od-" compile_separated "$SLIMDIR" "$RSOURCES"
  make_reference_rasl "$SLIMDIR" Hash


  SLIMDIR=../../lib/slim

  mkdir -p ${SLIMDIR}/exe
  prepare_prefix_new slim "$CSOURCES $RT"
  prepare_prefix_new slim-debug "$CSOURCES $RTD"

  SREFC_FLAGS="$SREFC_FLAGS -Od-" compile_separated "$SLIMDIR/exe" "$RSOURCES"
}

compile_slim_debug() {
  SLIMDIR=../../srlib/slim-debug
  CSOURCES=Library

  mkdir -p ${SLIMDIR}
  prepare_prefix "$SLIMDIR" slim-debug "$CSOURCES $RTD"

  SREFC_FLAGS="$SREFC_FLAGS -Od-" compile_separated "$SLIMDIR" "$RSOURCES"
  make_reference_rasl "$SLIMDIR" Hash
}

prepare_common() {
  mkdir -p ../../srlib/common
  cp -R common/* ../../srlib/common
}

compile_references() {
  mkdir -p ../../lib/references

  for s in ${CSOURCES} ${RSOURCES}; do
    ../../bin/srefc-core --no-sources -R \
      -o ../../lib/references/${s}.rasl --reference=${s}
  done
}

(
  CSOURCES="Library Hash"
  RSOURCES="LibraryEx GetOpt Platform"
  RT="
    refalrts
    refalrts-dynamic
    refalrts-functions
    refalrts-main
    refalrts-platform-specific
    refalrts-profiler
    refalrts-vm
    refalrts-vm-api
    refalrts-platform-specific
    refalrts-platform-POSIX
  "
  RTD="
    $RT
    refalrts-debugger
    refalrts-diagnostic-initializer
  "

  mkdir -p ../../srlib/src

  cp LICENSE ../../srlib
  for s in ${CSOURCES} ${RSOURCES}; do
    cp ${s}.ref ../../srlib/src
  done

  prepare_common
  compile_scratch
  compile_references
  compile_rich
  compile_rich_debug
  compile_slim
  compile_slim_debug
)
