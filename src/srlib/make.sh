#!/bin/bash

compile_separated() {
  TARGET="$1"
  LIBS="$2"

  ../../bin/srefc-core -C $SREFC_FLAGS $LIBS

  for s in $LIBS; do
    grep '//FROM' < $s.ref > $TARGET/$s.rasl.froms
    [ -e $s.cpp ] && mv $s.cpp $TARGET
    mv $s.rasl $TARGET
  done
}

compile_scratch() {
  SCRATCHDIR=../../srlib/scratch
  mkdir -p $SCRATCHDIR
  cp *.h *.cpp *.rasl $SCRATCHDIR

  compile_separated "$SCRATCHDIR" "$CSOURCES $RSOURCES"

  for d in platform-*; do
    if [ -d $d ]; then
      mkdir -p $SCRATCHDIR/$d
      cp $d/*.cpp $SCRATCHDIR/$d
      cp $d/*.rasl $SCRATCHDIR/$d
    fi
  done
}

prepare_prefix() {
  TARGET="$1"
  PREFIX="$2"
  LIBS="$3"

  ( cd ../srlib-$PREFIX-prefix && ./make.sh "$LIBS" )

  mv ../../bin/$PREFIX-prefix* $TARGET/$PREFIX.exe-prefix
  # Префикс не должен быть исполнимым
  chmod -x $TARGET/$PREFIX.exe-prefix

  for s in $LIBS; do
    cat /dev/null > $TARGET/$s.rasl
    echo "//PREFIX $PREFIX" > $TARGET/$s.rasl.froms
  done
}

compile_rich() {
  RICHDIR=../../srlib/rich

  mkdir -p $RICHDIR
  prepare_prefix "$RICHDIR" rich "$CSOURCES $RSOURCES $RT"
}

compile_rich_debug() {
  RICHDIR=../../srlib/rich-debug

  mkdir -p $RICHDIR
  prepare_prefix "$RICHDIR" rich-debug "$CSOURCES $RSOURCES $RTD"
}

compile_slim() {
  SLIMDIR=../../srlib/slim

  mkdir -p $SLIMDIR
  prepare_prefix "$SLIMDIR" slim "$CSOURCES $RT"

  SREFC_FLAGS="$SREFC_FLAGS -Od-" compile_separated "$SLIMDIR" "$RSOURCES"
}

compile_slim_debug() {
  SLIMDIR=../../srlib/slim-debug

  mkdir -p $SLIMDIR
  prepare_prefix "$SLIMDIR" slim-debug "$CSOURCES $RTD"

  SREFC_FLAGS="$SREFC_FLAGS -Od-" compile_separated "$SLIMDIR" "$RSOURCES"
}

prepare_common() {
  mkdir -p ../../srlib/common
  cp -R common/* ../../srlib/common
}

(
  CSOURCES="Library Hash"
  RSOURCES="LibraryEx GetOpt"
  RT="
    refalrts
    refalrts-functions
    refalrts-main
    refalrts-platform-specific
    refalrts-profiler
    refalrts-vm
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
  for s in $CSOURCES $RSOURCES; do
    cp $s.ref ../../srlib/src
  done

  prepare_common
  compile_scratch
  compile_rich
  compile_rich_debug
  compile_slim
  compile_slim_debug
)
