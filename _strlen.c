/**
 * _strlen - counts how many character inside given strings
 *
 * @str: the provided string
 *
 * Return: unsigned integer.
*/
unsigned int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
		i++;

	return (i);
}
