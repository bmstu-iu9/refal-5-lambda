#!/bin/sh
export MODULES='SRMake FileScanner FindFile ParseCmdLine
  Library LibraryEx refalrts'
export GCCLINE='g++ -I../srlib -osrmake -DDONT_PRINT_STATISTICS'
../bin/srefc -c "$GCCLINE" -d ../srlib -d ../compiler $MODULES
cp srmake ../bin
rm *.cpp
