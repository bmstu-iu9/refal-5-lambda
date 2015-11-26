RC=../../bin/srefc
CC=g++ -DINTERPRET
INC=-I ../../srlib/
LIB=../../srlib/*.cpp

all:
	$(RC) write-text.sref
	$(CC) $(INC) $(LIB) write-text.cpp -o out
