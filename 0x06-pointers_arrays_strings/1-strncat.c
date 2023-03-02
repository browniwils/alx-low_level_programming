#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate 2 lists of characters
 * @dest: first list of characters
 * @src: second list of characters
 * @n: number of byte from @src
 * Return: pointer of @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLen = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destLen + i] = src[i];
	}

	dest[destLen + i] = '\0';

	return (dest);
}
