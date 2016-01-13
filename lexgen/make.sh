#!/bin/sh
export GCCLINE='g++ -I../srlib -DDONT_PRINT_STATISTICS -o lexgen'
export MODULES='LexGen Generator Library LibraryEx refalrts sUtilitiesBanner Escape'
../bin/srefc -c "$GCCLINE" -d ../srlib -d ../compiler -d ../version $MODULES
cp lexgen ../bin/lexgen
rm *.cpp