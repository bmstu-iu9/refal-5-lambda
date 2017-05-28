#!/bin/bash

compile_scratch() {
  SCRATCHDIR=../../srlib/scratch
  mkdir -p $SCRATCHDIR
  cp *.h *.cpp *.rasl $SCRATCHDIR

  ../../bin/srefc-core -C $SREFC_FLAGS $SOURCES

  for s in $SOURCES; do
    grep '//FROM' < $s.sref > $SCRATCHDIR/$s.rasl.froms
    [ -e $s.cpp ] && mv $s.cpp $SCRATCHDIR
    mv $s.rasl $SCRATCHDIR
  done

  for d in platform-*; do
    if [ -d $d ]; then
      mkdir -p $SCRATCHDIR/$d
      cp $d/*.cpp $SCRATCHDIR/$d
      cp $d/*.rasl $SCRATCHDIR/$d
    fi
  done
}

compile_rich() {
  RICHDIR=../../srlib/rich
  mkdir -p $RICHDIR
  ../../bin/srefc --scratch -o $RICHDIR/rich.exe-prefix $SOURCES $RT
  for s in $SOURCES; do
    rm -f $s.cpp $s.rasl
  done
  for s in $SOURCES $RT; do
    cat /dev/null > $RICHDIR/$s.rasl
    echo '//PREFIX rich' > $RICHDIR/$s.rasl.froms
  done
}

(
  SOURCES="Library LibraryEx GetOpt Hash"
  RT="refalrts refalrts-platform-specific"

  mkdir -p ../../srlib/src
  cp LICENSE ../../srlib
  for s in $SOURCES; do
    cp $s.sref ../../srlib/src
  done

  compile_scratch
  compile_rich
)
