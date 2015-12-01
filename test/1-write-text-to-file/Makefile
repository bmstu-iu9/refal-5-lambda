RC=../../bin/srefc
CC=g++
INC=-I ../../srlib/
LIB=../../srlib/*.cpp
RLIB=-d ../../srlib/ LibraryEx

all:
	$(RC) write-file.sref $(RLIB)
	$(CC) $(INC) $(LIB) write-file.cpp -o out -DINTERPRET
