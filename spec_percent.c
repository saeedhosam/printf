#include <stdarg.h>
#include <unistd.h>

/**
 * spec_percent - prints the %% format specifier
 *
 * Return: int.
*/
int spec_percent()
{
	int charsnum = 0;

	write(1, "%", 1);
	charsnum++;
	return (charsnum);
}
