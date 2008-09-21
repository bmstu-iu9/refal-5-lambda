@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% ..\srlib\LibraryEx.sref
@if "%1" == "run" refgo -l100 srefc %modules% >out1 && copy *.cpp *.cpp.bak && srefc.exe %modules% >out2
@if "%1" == "runc" ren srefc.exe srefc_.exe && srefc_ %modules%
@if "%1" == "debug" echo Y | refgo -l100 srefc %modules% > __out 2> __err
@if "%1" == "zagotovki" refgo -l100 srefc Zagotovki.sref
@if "%1" == "test" refgo -l100 srefc Test.sref ..\srlib\LibraryEx.sref && Test.exe
@del *.obj *.tds