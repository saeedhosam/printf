#include "main.h"

/**
 * _printf - my printf function
 * @format: const string
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, ch = 0, len = 0;
	va_list args;

	if (format == NULL)
	return (-1);
	va_start(args, format);

	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] != '%')
		{
			if (format[i + 1] == 'c')
				spec_c(args);
			else if (format[i + 1] == 's')
				spec_s(args);
			else if (format[i + 1] == '%')
			{
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
	return (ch);
}
