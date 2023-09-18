#include "main.h"

/**
 * _putchar - putchar func
 * @c: char
 * Return: char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
