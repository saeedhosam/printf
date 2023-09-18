#include <stdarg.h>
#include <unistd.h>

/**
 * spec_c - prints the %c format specifier
 *
 * @args: from the variadic functions macros
 * @num: int
 *
 * Return: nothing.
*/
void spec_c(va_list args, int num)
{
	char c;

	c = va_arg(args, int);
	num++;
	write(1, &c, 1);
}
