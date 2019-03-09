@echo off
refc test.ref
call srefc -C test.ref
if exist decompiler.exe erase decompiler.exe
call srmake -X--markup-context decompiler
decompiler test.rsl > test.out
type test.out
