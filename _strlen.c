/**
 * _strlen - counts how many character inside given strings
 *
 * @ss: the provided string
 *
 * Return: unsigned integer.
*/
int _strlen(char *ss)
{
	int i;

	for (i = 0; ss[i] != '\0';)
		i++;

	return (i);
}
