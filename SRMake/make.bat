@echo off
refgo ..\SRMake\srmake %1 %2 %3 %4 %5 %6 %7 %8 %9
del *.mref
del *.ref
rem rmdir /s /q Info
rmdir /s /q ROut
rmdir /s /q Defs