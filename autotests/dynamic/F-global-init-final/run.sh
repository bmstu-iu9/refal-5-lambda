#!/bin/bash

check_exist() {
  if [[ -e $1 ]]; then
    echo File $1 exists...
    rm $1
  else
    echo TEST FAILED: file $1 does not exist!
    exit 1
  fi
}

rm -f *.rasl-module *.rasl caller

../../../bin/rlc --keep-rasls -OG- main.ref lib1.ref lib2.ref --log=log.txt
./main
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  check_exist 1-init.ok
  check_exist 2-go.ok
  check_exist 3-final.ok

  echo Test OK!
  rm -f *.rasl-module *.rasl caller log.txt
fi

../../../bin/rlc --keep-rasls -OG main.ref lib1.ref lib2.ref --log=log.txt
./main
if [[ $? -gt 0 ]]; then
  echo TEST FAILED!
  exit 1
else
  check_exist 1-init.ok
  check_exist 2-go.ok
  check_exist 3-final.ok

  echo Test OK!
  rm -f *.rasl-module *.rasl caller *-locals.lst log.txt
fi
