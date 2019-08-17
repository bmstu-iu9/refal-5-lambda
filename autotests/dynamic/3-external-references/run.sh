#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/srefc --keep-rasls -OC -R module.sref
../../../bin/srmake --keep-rasls -X-OC -X--markup-context caller.ref -r module
./caller
if [ $? -gt 0 ]; then
  echo TEST FAILED!
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller
fi
