@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% Lexer.sref
call ..\make compiler srefc-core srefc "" ..\..\distrib
