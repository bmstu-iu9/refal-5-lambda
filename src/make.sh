#!/bin/bash

make_subdir() {
  DIR=$1
  MAKE=$2
  (cd $DIR && source $MAKE)
}

if [ -z "$1" ]; then
  make_subdir compiler makeself-s.sh
  make_subdir srlib make.sh
  make_subdir compiler makeself.sh
  make_subdir lexgen make.sh
  make_subdir srmake make.sh
else
  source ../../c-plus-plus.conf.sh

  DIR=$1
  TARGET=$2
  MAINSRC=$3
  FLAGS=$4
  PATH_TO_SREFC=$5

  if [ -z "$PATH_TO_SREFC" ]; then
    PATH_TO_SREFC=../..
  fi

  mkdir -p $PATH_TO_SREFC/bin
  $PATH_TO_SREFC/bin/srmake \
    -s $PATH_TO_SREFC/bin/srefc \
    -c "$CPPLINE -I$PATH_TO_SREFC/srlib -o../../bin/$TARGET" \
    -d ../common -d $PATH_TO_SREFC/srlib $MAINSRC

  mkdir -p ../../build/$DIR
  mv *.cpp ../../build/$DIR
  mv ../common/*.cpp ../../build/$DIR
  cp $PATH_TO_SREFC/srlib/*.cpp ../../build/$DIR
fi
