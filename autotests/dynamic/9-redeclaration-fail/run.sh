#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/srmake -X-OC -X--markup-context caller.ref
./caller
if [ $? -eq 0 ]; then
  echo TEST FAILED! Program must be fail!
else
  echo Test OK! This failure is normal and expected!
  rm -f *.rasl-module *.rasl caller
fi
