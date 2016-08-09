#!/bin/bash

prepare_srclib() {
  ../../bin/srefc-core $SREFC_FLAGS $1
  grep '//FROM' < $1.sref >> $1.cpp
  mv $1.cpp ../../srlib
  cp $1.sref ../../srlib/src
}


mkdir -p ../../srlib/src
cp LICENSE *.h *.cpp ../../srlib
prepare_srclib LibraryEx
prepare_srclib GetOpt