#include <stdio.h>
#include "main.h"

/**
 * _strcpy - returns a string for a pointer
 * @dest: array of characters
 * @src: string
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int slen, i;

	slen = 0;

	while (src[slen] != '\0')
	{
		slen++;
	}

	for (i = 0; i < slen; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
