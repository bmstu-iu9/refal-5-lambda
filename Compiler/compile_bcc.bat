rem @echo off
setlocal
bcc32 -I"C:\Program Files\BCC55\Include" -L"C:\Program Files\BCC55\Lib" %*
del *.obj
endlocal