#!/bin/bash

prepare_srclib() {
  ../../bin/srefc-core $SREFC_FLAGS $1
  grep '//FROM' < $1.sref >> $1.rasl.froms
  [ -e $1.cpp ] && mv $1.cpp ../../srlib
  mv $1.rasl ../../srlib
  mv $1.rasl.cpp ../../srlib
  mv $1.rasl.froms ../../srlib
  cp $1.sref ../../srlib/src
}


mkdir -p ../../srlib/src
cp LICENSE *.h *.rasl *.cpp ../../srlib
prepare_srclib Library
prepare_srclib LibraryEx
prepare_srclib GetOpt
prepare_srclib Hash
