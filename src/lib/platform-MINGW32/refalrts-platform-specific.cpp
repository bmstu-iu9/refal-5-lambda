// Системный вызов readlink, доступный на Linux, под MinGW/MSys
// не поддерживается, однако Win32 API работает в полной мере.
// Поэтому используем реализацию для Windows
#include "../platform-Windows/refalrts-platform-specific.cpp"
