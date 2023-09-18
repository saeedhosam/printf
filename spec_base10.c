#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * spec_base10 - prints the %d and &i format specifier
 *
 * @nn: the integer needs to be implemented
 *
 * Return: nothing.
*/
void spec_base10(int nn)
{
	int pntd;
	char minus = '-';

	if (nn < 0)
	{
		nn = nn * -1;
		write(1, &minus, 1);
	}

	if (nn > 9)
		spec_base10(nn / 10);

	pntd = '0' + (nn % 10);

	write(1, &pntd, 1);
}
