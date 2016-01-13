#!/bin/sh
export GCCLINE='g++ -I../srlib -DDONT_PRINT_STATISTICS -o lexgen'
../bin/srmake -s ../bin/srefc -c "$GCCLINE" -d ../srlib -d ../compiler LexGen
cp lexgen ../bin/lexgen
rm *.cpp