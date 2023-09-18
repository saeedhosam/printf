#include "main.h"

/**
 * spec_s - string printer
 * @args: list
 * @len: int
*/
void spec_s(va_list args, int len)
{
	char *s = va_arg(args, char *);

		while (s[len] != '\0')
		len++;
		write(1, s, len);
}
