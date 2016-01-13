#!/bin/sh
export MODULES='SRMake FileScanner FindFile ParseCmdLine
  Library LibraryEx refalrts sUtilitiesBanner'
export GCCLINE='g++ -I../srlib -osrmake -DDONT_PRINT_STATISTICS'
../bin/srefc -c "$GCCLINE" -d ../srlib -d ../Compiler -d ../version $MODULES
cp srmake ../bin
rm *.cpp
