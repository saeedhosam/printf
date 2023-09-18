#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
void spec_c(va_list args, int ch);
void spec_s(va_list args, int len);
void spec_base10(va_list args);

#endif
