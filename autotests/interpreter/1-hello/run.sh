#!/bin/bash

rm -f REFAL1.DAT
../../../bin/rlmake -R hello.ref
RL_MODULE_PATH="" ../../../bin/rlgo --show-cookies=false ./hello argument
if [[ ! -e REFAL1.DAT ]]; then
  echo File REFAL1.DAT is not exit
  exit 1
fi

if ! cmp REFAL1.DAT REFAL1.DAT-sample; then
  echo Files REFAL1.DAT REFAL1.DAT-sample are differ
  diff -u REFAL1.DAT REFAL1.DAT-sample
  exit 1
fi

rm -f hello.rasl-module REFAL1.DAT
