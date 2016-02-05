@echo off
..\..\bin\lexgen Lexer.sref
call ..\make compiler srefc-core srefc
