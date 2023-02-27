#include <stdio.h>

/**
 * _strlen - finds length of array
 * @s: list of array
 * Return: the total of elements in array
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
