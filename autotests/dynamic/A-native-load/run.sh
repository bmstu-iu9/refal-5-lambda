#!/bin/bash

rm -f *.rasl-module *.rasl caller *.so
../../../bin/rlmake --scratch --keep-rasls -l module.sref
../../../bin/rlmake --keep-rasls -X--markup-context caller.ref
./caller
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller *.so *.cpp *.lst *.dll
fi
