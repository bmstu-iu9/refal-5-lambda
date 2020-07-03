#!/bin/bash

rm -f *.rasl-module *.rasl caller

../../../bin/rlc --keep-rasls main.ref lib.ref --log=log.txt
./main
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller log.txt
fi

../../../bin/rlc --keep-rasls -OG main.ref lib.ref --log=log.txt
./main
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller *-locals.lst log.txt
fi
