#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/srefc -OC -R module.sref
../../../bin/srmake -X-OC -X--markup-context caller.ref
./caller
if [ $? -gt 0 ]; then
  echo TEST FAILED!
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller
fi
