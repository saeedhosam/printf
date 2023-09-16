#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * spec_base10 - prints the %d and &i format specifier
 *
 * @args: from the variadic functions macros
 *
 * Return: nothing.
*/
void spec_base10(va_list args)
{
	int n = va_arg(args, int);
	int i, j, k, y = n, minus = n;
	char *numstr;
	char c = '-';

	if (n < 0)
		n *= -1;

	for (k = 0; y != 0; k++)
		y = y / 10;

	numstr = malloc(sizeof(char) * k);

	for (i = 0; n != 0; i++)
	{
		numstr[i] = n % 10 + '0';
		n = n / 10;
	}

	for (j = 0; j < i / 2; j++)
	{
		char c = numstr[j];

		numstr[j] = numstr[i - j - 1];
		numstr[i - j - 1] = c;
	}

	if (minus < 0)
		write(1, &c, 1);

	write(1, numstr, k);
	free(numstr);
}
