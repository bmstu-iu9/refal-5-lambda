@echo off
call ..\..\bin\srefc hello.rsl
hello.exe
fc REFAL10.DAT REFAL10-SAMPLE.DAT
erase hello.exe hello.rasl REFAL10.DAT
