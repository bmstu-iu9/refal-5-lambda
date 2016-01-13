#!/bin/sh
export MODULES='Srefc Parser Lexer Algorithm Error Generator
  SymTable FindFile ParseCmdLine Context
  Library LibraryEx refalrts Version Escape'
# Копирование необходимо при компиляции при помощи Cygwin или MSYS,
# поскольку на платформе Windows невозможно перезаписать исполнимый
# файл, если соответствующая ему программма выполняется.
[ -e srefc ] || cp ../bin/srefc srefc
[ -e srefc-s ] || cp ../bin/srefc srefc-s
cp srefc srefc_
../bin/lexgen Lexer.sref
./srefc_ -c "g++ -I../srlib -osrefc" -d ../srlib $MODULES
mv *.cpp ../bootstrap
mv ../srlib/LibraryEx.cpp ../bootstrap
cp ../srlib/*.cpp ../bootstrap
cp srefc ../bin
