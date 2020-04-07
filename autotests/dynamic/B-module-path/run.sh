#!/bin/bash

rm -f -- *.rasl-module *.rasl caller
../../../bin/srefc --keep-rasls -OC -R a/foo.sref
../../../bin/srefc --keep-rasls -OC -R b/bar.sref
../../../bin/rlmake --keep-rasls -X-OC -X--markup-context caller.ref
RL_MODULE_PATH=a:b ./caller
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  echo Test OK!
  rm -f -- *.rasl-module *.rasl caller
fi
