#!/bin/bash

make_subdir() {
  DIR=$1
  MAKE=$2
  (cd $DIR && source $MAKE)
}

if [ -z "$1" ]; then
  make_subdir scripts install-scripts.sh
  make_subdir compiler makeself-s.sh
  cp ../distrib/bin/srmake-core ../bin
  make_subdir srmake make.sh
  make_subdir srlib make.sh
  make_subdir lexgen make.sh
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

  mkdir -p $PATH_TO_SREFC/bin
  (
    export CPPLINE_FLAGS="$CPPLINE_FLAGS -o../../bin/$TARGET"
    $PATH_TO_SREFC/bin/srmake -d ../common $MAINSRC
  )

  mkdir -p ../../build/$DIR
  mv *.cpp ../../build/$DIR
  mv ../common/*.cpp ../../build/$DIR
  cp $PATH_TO_SREFC/srlib/*.cpp ../../build/$DIR
fi
