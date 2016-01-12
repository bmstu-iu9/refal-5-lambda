srefc -c "compile_bcc -I..\SRLib " -d ..\SRLib test.sref Library LibraryEx refalrts
test.exe
@del *.obj
@del *.tds
