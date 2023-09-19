#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * spec_s - prints the %s format specifier
 *
 * @args: from the stdarg library
 *
 * Return: nothing.
*/
int spec_s(va_list args)
{
	int charsnum = 0;
	char *ss = va_arg(args, char *);
	int i;

	for (i = 0; ss[i]; i++)
	{
		write(1, &ss[i], 1);
		charsnum++;
	}
	return (charsnum);
}
