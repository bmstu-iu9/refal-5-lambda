#!/bin/bash
pushd distrib
rm -rf bin compiler doc lexgen srlib srmake
cp -R ../build/* .
mkdir bin
cp ../src/scripts/srefc.bat bin
cp ../src/scripts/srefc.sh bin/srefc
cp ../src/scripts/srmake.bat bin
cp ../src/scripts/srmake.sh bin/srmake
cp -R ../srlib srlib
mkdir doc
cp -R ../doc/examples doc/examples
cp ../doc/*.pdf doc
cp ../doc/*.jpg doc
mkdir doc/OptPattern
cp ../doc/OptPattern/*.pdf doc/OptPattern
mkdir doc/historical
cp ../doc/historical/*.txt doc/historical
cp ../doc/historical/*.pdf doc/historical
cp ../doc/historical/*.jpg doc/historical
cp ../doc/historical/*.doc doc/historical
mkdir doc/historical/Дрогунов
cp ../doc/historical/Дрогунов/*.pdf doc/historical/Дрогунов
cp ../LICENSE .
cp ../README.md .
popd
