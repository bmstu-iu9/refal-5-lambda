@echo off
set FILES=SRMake.sref FileScanner.sref FindFile ParseCmdLine
set FILES=%FILES% Library LibraryEx refalrts
..\Compiler\srefc -c "g++ -I../SRLib -o srmake" -d ../SRLib -d ../Compiler %FILES%