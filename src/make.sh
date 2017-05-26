#!/bin/bash

make_subdir() {
  DIR=$1
  MAKE=$2
  (cd $DIR && source $MAKE)
}

(
  if [ -z "$RELEASE" ]; then
    # Максимум 40 000 000 байт (x32), 80 000 000 байт (x64)
    # SREFC_FLAGS используются только для сборки библиотек
    SREFC_FLAGS_PLUS="--markup-context --debug-info"
    SRMAKE_FLAGS_PLUS="
      -X--markup-context -X--debug-info
      -X-C-DMEMORY_LIMIT=2500000
      -X-C-DSTEP_LIMIT=30000000
      -X-C-DIDENTS_LIMIT=1000
      -X-C-DENABLE_DEBUGGER
    "
  else
    SREFC_FLAGS_PLUS=-OPR
    SRMAKE_FLAGS_PLUS=-X-OPR
  fi

  if [ -z "$1" ]; then
    mkdir -p ../bin
    make_subdir scripts install-scripts.sh
    make_subdir rasl-constants make.sh
    make_subdir compiler makeself-s.sh
    make_subdir lexgen makeself-s.sh
    make_subdir srmake make-s.sh
    (
      export SREFC_FLAGS="$SREFC_FLAGS $SREFC_FLAGS_PLUS"
      make_subdir srlib make.sh
    )
    make_subdir srmake make.sh
    make_subdir lexgen makeself.sh
    make_subdir compiler makeself.sh
  else
    DIR=$1
    TARGET=$2
    MAINSRC=$3
    CPPLINE_FLAGS=$4
    PATH_TO_SREFC=$5

    if [ -z "$PATH_TO_SREFC" ]; then
      PATH_TO_SREFC=../..
    fi

    source $PATH_TO_SREFC/bin/platform-specific.sh

    mkdir -p $PATH_TO_SREFC/bin
    (
      export CPPLINE_FLAGS="$CPPLINE_FLAGS"
      export SRMAKE_FLAGS="$SRMAKE_FLAGS $SRMAKE_FLAGS_PLUS"

      $PATH_TO_SREFC/bin/srmake -d ../common $MAINSRC -o$TARGET
    )
    mv $TARGET ../../bin/$TARGET$(platform_exe_suffix)

    mkdir -p ../../build/$DIR
    rm -f ../../build/$DIR/*
    find . ../common \
      \( -name '*.rasl' -o -name '*.cpp' \) \
      -exec mv '{}' ../../build/$DIR \;
    cp $PATH_TO_SREFC/srlib/scratch/*.rasl ../../build/$DIR
    cp $PATH_TO_SREFC/srlib/scratch/*.cpp ../../build/$DIR
  fi
)
