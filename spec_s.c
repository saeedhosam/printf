#include "main.h"

/**
 * spec_s - string printer
 * @args: list
 * @len: int
*/
void spec_s(va_list args, int len)
{
	char *s = va_arg(args, char *);

<<<<<<< HEAD
		while (s[len] != '\0')
		len++;
		write(1, s, len);
=======
	s = va_arg(args, char *);
	if (s != NULL)
		write(1, s, _strlen(s));
	else
		write(1, null, 6);
>>>>>>> 6a49d495362b48fe7e6c9c571c67b87ace7249bb
}
