#!/bin/bash

echo "* * * * * * * * * * * * * * * * * * * * * * * * *"
echo "* U P D A T E   V E R S I O N   N U M B E R !!! *"
echo "*       file: docs/setup.sh                     *"
echo "*       file: src/common/Version.ref            *"
echo "*       file: src/interpreter/main.ref          *"
echo "* * * * * * * * * * * * * * * * * * * * * * * * *"

( cd src && RELEASE=1 ./make.sh )

pushd distrib || exit
rm -rf bin scripts compiler doc docs lexgen lib make editors rsl-decompiler
rm -f lib-prefixes/*.ref*
cp -R ../build/{compiler,lexgen,interpreter,make,rsl-decompiler} .
mkdir bin
cp ../src/scripts/rlc-rlmake.bat bin/rlc.bat
cp ../src/scripts/rlc-rlmake.sh bin/rlc
cp ../src/scripts/rlc-rlmake.bat bin/rlmake.bat
cp ../src/scripts/rlc-rlmake.sh bin/rlmake
cp ../src/scripts/rlc-rlmake.bat bin/srefc.bat
cp ../src/scripts/rlc-rlmake.sh bin/srefc
mkdir scripts
cp ../scripts/* scripts
cp -R ../lib lib
rm -f lib/*.*-prefix *.dll *.so
cp ../src/lib/prefixes/*.ref* lib-prefixes
mkdir doc
cp -R ../doc/examples doc/examples
cp ../doc/*.pdf doc
cp ../doc/*.jpg doc
mkdir doc/OptPattern
cp ../doc/OptPattern/*.pdf doc/OptPattern
cp ../doc/OptPattern/*.md doc/OptPattern
mkdir doc/historical
cp ../doc/historical/*.txt doc/historical
cp ../doc/historical/*.pdf doc/historical
cp ../doc/historical/*.jpg doc/historical
cp ../doc/historical/*.doc doc/historical
mkdir doc/historical/Drogunov
cp ../doc/historical/Drogunov/*.pdf doc/historical/Drogunov
mkdir docs
cp ../docs/*.md docs
cp ../docs/*.ref docs
cp ../docs/*.yml docs
cp ../LICENSE .
cp ../README.md .
cp ../README.en.md .
mkdir editors
cp -R ../editors/* editors
./bootstrap.sh
popd || exit

echo "* * * * * * * * * * * * * * * * * * * * * * * * *"
echo "* U P D A T E   V E R S I O N   N U M B E R !!! *"
echo "*       file: docs/setup.sh                     *"
echo "*       file: src/common/Version.ref            *"
echo "*       file: src/interpreter/main.ref          *"
echo "* * * * * * * * * * * * * * * * * * * * * * * * *"
