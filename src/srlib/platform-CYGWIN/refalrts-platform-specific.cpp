// CYGWIN эмулирует системный вызов readlink, получает имя в правильной
// кодировке (по умолчанию — UTF-8). Если использовать путь platform-Windows,
// то имя возвращается в CP1251, что может быть несовместимо с эмулируемым
// fopen’ом (хотя я не проверял).
#include "../platform-Linux/refalrts-platform-specific.cpp"
