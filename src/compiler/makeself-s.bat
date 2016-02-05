@echo off
..\..\distrib\bin\lexgen Lexer.sref
call ..\make compiler srefc-core srefc "" ..\..\distrib
