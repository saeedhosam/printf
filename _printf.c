#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - A custome function identical to the popular printf
 *
 * @format: text to be printed on terminal
 *
 * Return: 0 on Success.
*/
int _printf(const char *format, ...)
{
	int charsnum = 1, nn, i;
	char *ss;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				spec_c(args, charsnum);
			}
			else if (format[i] == 's')
			{
				ss = va_arg(args, char *);
				charsnum = charsnum + _strlen(ss);
				spec_s(ss);
			}
			else if (format[i] == 'i' || format[i] == 'd')
			{
				nn = va_arg(args, int);
				spec_base10(nn);
			}
			else if (format[i] == '%')
			{
				print_37(charsnum);
			}
		}
		else
		{
			write(1, &format[i], 1);
			charsnum++;
		}
	}
	va_end(args);
	return (charsnum);
}
