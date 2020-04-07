#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/rlmake --keep-rasls -X-OC -X--markup-context caller.ref
./caller
if [[ $? -eq 0 ]]; then
  echo TEST FAILED! Program must be fail!
  exit 1
else
  echo Test OK! This failure is normal and expected!
  rm -f *.rasl-module *.rasl caller
  exit 0
fi
