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

	
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			ch++;
			write(1, &format[i], 1);
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '%')
			{
				write(1, &format[i], 1);
				ch++;
			}
			else if (format[i] == 'c')
			{
				spec_c(args, ch);
			}
			else if (format[i] == 's')
			{
				spec_s(args, len);
				ch += len;
			}
		}
	}
	va_end(args);
	return (ch);
}
