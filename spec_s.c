#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * spec_s - prints the %s format specifier
 *
 * @args: from the variadic functions macros
 *
 * Return: nothing.
*/
void spec_s(va_list args)
{
	char *s;
	char *null = "(null)";

	s = va_arg(args, char *);
	if (s != NULL)
		write(1, s, _strlen(s));
	else
		write(1, null, 6);
}
