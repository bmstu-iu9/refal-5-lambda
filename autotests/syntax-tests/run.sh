#!/bin/bash

for s in tests/negative/*.sref; do
  echo Passing $s...
  ../../bin/srefc-core --grammar-check $s >__out.txt 2>__error.txt
  RET=$?
  if [ $RET -ge 100 ]; then
    cat __out.txt
    echo COMPILER FAILS, see __error.txt
    exit 1
  fi

  if [ $RET -lt 1 ]; then
    cat __out.txt
    echo COMPILER SUCCESSED, BUT EXPECTED SYNTAX ERRORS
    exit 1
  fi
done

for s in tests/positive/*.sref; do
  echo Passing $s...
  ../../bin/srefc-core --grammar-check $s >__out.txt 2>__error.txt
  RET=$?
  if [ $RET -ge 100 ]; then
    cat __out.txt
    echo COMPILER FAILS, see __error.txt
    exit 1
  fi

  if [ $RET -ge 1 ]; then
    cat __out.txt
    echo FOUND UNEXPECTED SYNTAX ERRORS ON POSITIVE TEST
    exit 1
  fi
done

rm -f __out.txt __error.txt
