#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/srefc --keep-rasls -OC -R module.sref -r foo
../../../bin/srmake --keep-rasls -X-OC -X--markup-context \
  caller.ref -r module --incorporated=foo
./caller
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller
fi
