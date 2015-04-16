#!/bin/sh
[ -e srefc ] || cp ../bin/srefc srefc
[ -e srefc-s ] || cp ../bin/srefc srefc-s
# Копирование необходимо при компиляции при помощи Cygwin или MSYS,
# поскольку на платформе Windows невозможно перезаписать исполнимый
# файл, если соответствующая ему программма выполняется.
cp srefc srefc_
../bin/lexgen Lexer.sref
../bin/srmake -s ./srefc_ -c "g++ -I../srlib -osrefc" -d ../srlib srefc
mv *.cpp ../bootstrap
mv ../srlib/LibraryEx.cpp ../bootstrap
cp ../srlib/*.cpp ../bootstrap
cp srefc ../bin
