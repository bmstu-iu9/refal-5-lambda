RC=../../bin/srefc
CC=g++
INC=-I ../../srlib/
LIB=../../srlib/*.cpp
RLIB=-d ../../srlib/ LibraryEx
TARGET=cut

all:
	$(RC) $(TARGET).sref $(RLIB)
	$(CC) $(INC) $(LIB) $(TARGET).cpp -o out
