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
<<<<<<< HEAD
		write(1, s, _strlen(s));
	else
		write(1, null, 6);
=======
	{
	write(1, s, _strlen(s));
	}
	else
	write(1, null, 6);
>>>>>>> 7b4c131c4e7c27ea71ed26d065c545696304ed09
}
