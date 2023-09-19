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
	int i;
	int charsnum = 0, nn;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				charsnum = charsnum + spec_c(args);
			else if (format[i] == 's')
				charsnum = charsnum + spec_s(args);
			else if (format[i] == 'i' || format[i] == 'd')
			{
				nn = va_arg(args, int);
				charsnum = charsnum + spec_base10(nn);
			} else if (format[i] == '%')
				charsnum = charsnum + spec_percent();
			else
			{
				write(1, &format[i - 1], 1);
				write(1, &format[i], 1);
				charsnum = charsnum + 2;
			}
		} else
		{
			write(1, &format[i], 1);
			charsnum++;
		}
	}

	va_end(args);
	return (charsnum);
}
