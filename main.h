#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _strlen(char *ss);
int spec_c(va_list args);
int spec_s(va_list args);
int spec_percent(void);
int spec_base10(int nn);
int _printf(const char *format, ...);

#endif
