@echo off
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% DFA-Lexer.ref
..\..\distrib\bin\lexgen %LEXGEN_FLAGS% Flex-Lexer.ref
call ..\make lexgen rl-lexgen main "" ..\..\distrib
copy ..\..\bin\rl-lexgen.exe ..\..\bin\lexgen.exe
