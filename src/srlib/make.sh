#!/bin/bash
../../bin/srefc LibraryEx

mkdir -p ../../srlib/src
cp LICENSE *.h *.cpp ../../srlib
mv LibraryEx.cpp ../../srlib
cp LibraryEx.sref ../../srlib/src
