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
int spec_base10(int nn)
{
	int pntd, charsnum = 0;
	char minus = '-';

	if (nn == -2147483648)
	{
		write(1, &minus, 1);
		charsnum++;
		nn = -1 * (nn + 1);
	}

	if (nn < 0)
	{
		write(1, &minus, 1);
		nn = nn * -1;
		charsnum++;
	}

	if (nn > 9)
	{
		spec_base10(nn / 10);
		charsnum++;
	}

	pntd = '0' + (nn % 10);

	write(1, &pntd, 1);
	charsnum++;

	return (charsnum);
}
