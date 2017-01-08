#!/bin/bash

prepare_srclib() {
  ../../bin/srefc-core $SREFC_FLAGS $1
  grep '//FROM' < $1.sref >> $1.cpp
  grep '//FROM' < $1.sref >> $1.cpp.froms
  [ -e $1.native.cpp ] && mv $1.native.cpp ../../srlib
  mv $1.cpp ../../srlib
  mv $1.cpp.froms ../../srlib
  cp $1.sref ../../srlib/src
}


mkdir -p ../../srlib/src
cp LICENSE *.h *.cpp ../../srlib
prepare_srclib Library
prepare_srclib LibraryEx
prepare_srclib GetOpt
prepare_srclib Hash
