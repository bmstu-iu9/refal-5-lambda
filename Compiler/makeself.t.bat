@..\lexgen\lexgen Lexer.sref
@copy srefc.exe srefc_.exe
@set modules=Srefc.sref Driver.sref Lexer.sref Algorithm.sref
@set modules=%modules% Error.sref Generator.sref SymTable.sref
@set modules=%modules% FindFile ParseCmdLine Context.sref
@set modules=%modules% Algorithm_v1 Algorithm_v2
@set modules=%modules% Library LibraryEx refalrts.cpp
@set modules=%modules% Alg_Pattern_v1 Alg_Pattern_v2
@rem srefc_ -c "compile_cl -I..\SRLib -DOPTIMIZE_RESULT " -d ..\SRLib %modules%
@srefc_ -c "compile_bcc -esrefc.pv1.rv1.exe -I..\SRLib -DOLD_PATTERN" -d ..\SRLib %modules%
@srefc_ -c "compile_bcc -esrefc.pv2.rv1.exe -I..\SRLib" -d ..\SRLib %modules%
@srefc_ -c "compile_bcc -esrefc.pv2.rv2.exe -I..\SRLib -DOPTIMIZE_RESULT" -d ..\SRLib %modules%
@del *.obj
@del *.tds
