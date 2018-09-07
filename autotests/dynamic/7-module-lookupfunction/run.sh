#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/srefc -OC -R module-A.sref
../../../bin/srefc -OC -R module-B.sref
../../../bin/srmake -X-OC -X--markup-context caller.ref
./caller
if [ $? -gt 0 ]; then
  echo TEST FAILED!
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller
fi
