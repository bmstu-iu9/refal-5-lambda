#!/bin/bash

rm -f REFAL1.DAT dump.txt
../../../bin/srmake -R test.ref
RL_MODULE_PATH="" \
  ../../../bin/rlgo --step-limit=1000 --dump-file=dump.txt ./test

if [[ -e REFAL1.DAT ]]; then
  echo The REFAL1.DAT file must not exist
  exit 1
fi

if [[ ! -e dump.txt ]]; then
  echo The dump.txt file does not exist
  exit 1
fi

rm -f test.rasl-module dump.txt
