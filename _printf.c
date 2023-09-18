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
				break;
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
