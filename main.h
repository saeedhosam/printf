#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

unsigned int _strlen(const char *str);
void spec_c(va_list args);
void spec_s(va_list args);
void spec_base10(va_list args);
int _printf(const char *format, ...);

#endif
