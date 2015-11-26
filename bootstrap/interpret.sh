#!/bin/sh
mkdir -p ../bin
g++ -I../srlib -o../bin/srefc *.cpp -DINTERPRET
