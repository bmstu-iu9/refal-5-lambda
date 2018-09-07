#!/bin/bash

rm -f *.rasl-module *.rasl caller
../../../bin/srefc -OC -R module.sref
../../../bin/srefc -OC -R A-BCE.sref -r B-D -r C-D -r E-F
../../../bin/srefc -OC -R B-D.sref -r D-G
../../../bin/srefc -OC -R C-D.sref -r D-G
../../../bin/srefc -OC -R D-G.sref -r G
../../../bin/srefc -OC -R E-F.sref -r F-E
../../../bin/srefc -OC -R F-E.sref -r E-F
../../../bin/srefc -OC -R G.sref
../../../bin/srmake -X-OC -X--markup-context caller.ref
./caller
if [ $? -gt 0 ]; then
  echo TEST FAILED!
else
  echo Test OK!
  rm -f *.rasl-module *.rasl caller
fi
