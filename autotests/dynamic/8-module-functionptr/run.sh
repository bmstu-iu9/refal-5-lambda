#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/srefc --keep-rasls -OC -R module-A.sref
../../../bin/srefc --keep-rasls -OC -R module-B.sref
../../../bin/srmake --keep-rasls -X-OC -X--markup-context caller.ref
./caller
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller
fi
