@echo off
..\..\bin\lexgen %LEXGEN_FLAGS% DFA-Lexer.ref
..\..\bin\lexgen %LEXGEN_FLAGS% Flex-Lexer.ref
call ..\make lexgen lexgen LexGen

