#include <stdarg.h>
#include <unistd.h>

/**
 * spec_c - prints the %c format specifier
 *
 * @args: from the variadic functions macros
 *
 * Return: nothing.
*/
void spec_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
}
