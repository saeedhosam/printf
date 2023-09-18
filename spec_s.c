#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * spec_s - prints the %s format specifier
 *
 * @ss: the string needs to be printed lol
 *
 * Return: nothing.
*/
void spec_s(char *ss)
{
	int i;

	for (i = 0; ss[i]; i++)
		write(1, &ss[i], 1);
}
