#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory by constant byte
 * @s: the list of memory in question
 * @b: constant byte
 * @n: number of memory of @s
 * Return: pointer of @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
