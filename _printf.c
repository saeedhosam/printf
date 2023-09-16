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
	unsigned int i, j = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				spec_c(args);
			else if (format[i + 1] == 's')
				spec_s(args);
			else if (format[i + 1] == '%')
			{
				j = 1;
				write(1, &format[i], 1);
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
				spec_base10(args);
			i++;
		}
		else
			write(1, &format[i], 1);
	}

	va_end(args);
	if (j == 1)
		return (_strlen(format) - 1);
	return (_strlen(format));
}
