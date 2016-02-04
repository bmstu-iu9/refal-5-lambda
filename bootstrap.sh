#!/bin/bash

if [ ! -e distrib/bootstrap.sh ]; then
  git submodule init
  git submodule update
fi

( cd distrib && ./bootstrap.sh )
mkdir -p bin
cp distrib/bin/* bin

( cd src && ./make.sh )

( cd autotests && ./run.sh )
