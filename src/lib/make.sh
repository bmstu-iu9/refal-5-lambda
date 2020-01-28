#!/bin/bash

# Подавление предупреждений плагина
SREFC_FLAGS="$SREFC_FLAGS"

compile_separated() {
  TARGET="$1"
  LIBS="$2"

  mkdir -p ${TARGET}

  for s in ${LIBS}; do
    ../../bin/srefc-core -C ${SREFC_FLAGS} ${s} -d common
    ../../bin/srefc-core --no-sources -R -o inco.bin --incorporated=${s}
    grep '//FROM' < ${s}.ref > ${TARGET}/${s}.rasl.froms
    [[ -e ${s}.cpp ]] && mv ${s}.cpp ${TARGET}
    cat inco.bin >> ${s}.rasl
    mv ${s}.rasl ${TARGET}
    rm inco.bin
  done
}

compile_scratch() {
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
  PREFIX="$1"
  LIBS="$2"

  ( cd ../lib-${PREFIX}-prefix && ./make.sh "$LIBS" )

  mv ../../bin/${PREFIX}-prefix* ../../lib/${PREFIX}.exe-prefix
  # Префикс не должен быть исполнимым
  chmod -x ../../lib/${PREFIX}.exe-prefix
}

compile_rich() {
  #prepare_prefix rich "$CSOURCES $RSOURCES $RT"
  #prepare_prefix rich-debug "$CSOURCES $RSOURCES $RTD"
  :
}

compile_slim() {
  SLIMDIR=../../lib/slim

  mkdir -p ${SLIMDIR}/exe
  #prepare_prefix slim "$CSOURCES $RT"
  #prepare_prefix slim-debug "$CSOURCES $RTD"

  SREFC_FLAGS="$SREFC_FLAGS -Od-" compile_separated "$SLIMDIR/exe" "$RSOURCES"
}

prepare_common() {
  mkdir -p ../../lib/common
  cp -R common/* ../../lib/common
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

  mkdir -p ../../lib/src

  cp LICENSE ../../lib
  for s in ${CSOURCES} ${RSOURCES}; do
    cp ${s}.ref ../../lib/src
  done

  prepare_common
  compile_scratch
  compile_references
  compile_rich
  compile_slim
)
