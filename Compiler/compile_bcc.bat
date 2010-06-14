rem @echo off
setlocal
set path=%path%;C:\Borland\BCC55\Bin
bcc32 -I"C:\Borland\BCC55\Include" -L"C:\Borland\BCC55\Lib" %*
del *.obj
endlocal