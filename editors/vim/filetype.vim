augroup filetypedetect
au BufNewFile,BufRead *.mref	setf mrefal
au BufNewFile,BufRead *.sref	setf mrefal
au BufNewFile,BufRead *.ref	setf mrefal
augroup END
