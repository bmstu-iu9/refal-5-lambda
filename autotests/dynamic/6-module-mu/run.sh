#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/rlc --keep-rasls -OC -R module-A.sref -OG-
../../../bin/rlc --keep-rasls -OC -R module-B.sref -OG-
../../../bin/rlmake --keep-rasls -X-OC -X--markup-context caller.ref -X-OG-
./caller
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller *.lst
fi
