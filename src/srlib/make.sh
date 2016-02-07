#!/bin/bash
../../bin/srefc-core LibraryEx
echo '//FROM Library' >> LibraryEx.cpp

mkdir -p ../../srlib/src
cp LICENSE *.h *.cpp ../../srlib
mv LibraryEx.cpp ../../srlib
cp LibraryEx.sref ../../srlib/src
