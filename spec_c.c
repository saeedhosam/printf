#include "main.h"

/**
 * spec_c - char
 * @args: list
 * @ch: int
*/
void spec_c(va_list args, int ch)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	ch++;
}
