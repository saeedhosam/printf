#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int print_37(int num);
int _strlen(char *ss);
void spec_c(va_list args, int num);
void spec_s(char *ss);
int spec_base10(int nn);
int _printf(const char *format, ...);

#endif
