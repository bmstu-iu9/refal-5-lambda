#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/rlc-core -R -o target.rasl-module --keep-rasls unit1.ref unit2.ref
if [[ -e target.rasl-module ]]; then
  echo TEST FAILED: linker error is expected!
  exit 1
else
  echo Test OK: linker found expected errors!
  rm -f *.rasl-module *.rasl caller
  exit 0
fi
