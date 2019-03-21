#!/bin/bash

../../bin/srefc hello.rsl
if [ ! -e hello ]; then
  echo COMPILING hello.rsl TO hello.exe FAILS!
  exit 1
fi
./hello

cmp REFAL10.DAT REFAL10-SAMPLE.DAT
if [ $? -gt 0 ]; then
  echo FILES REFAL10.DAT AND REFAL10-SAMPLE.DAT IS DIFFER:
  diff -u REFAL10.DAT REFAL10-SAMPLE.DAT
  exit 1
fi

rm -f hello hello.rasl REFAL10.DAT
