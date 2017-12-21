#!/bin/bash

if [ ! -e distrib/bootstrap.sh ]; then
  git submodule init
  git submodule update
fi

echo Prepare config...
( source scripts/load-config.sh . || : )

echo Prepare stable version \(distrib\)...
( cd distrib && ./bootstrap.sh ) || exit 1
mkdir -p bin

echo Compile sources...
( cd src && ./make.sh )

if [ "$1" != "--no-tests" ]; then
  echo Starting autotests...
  ( cd autotests && ./run.sh )
fi
