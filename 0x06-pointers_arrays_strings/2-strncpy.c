#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copy strings to a string
 * @dest: to receive a copy string
 * @src: string to be copied
 * @n: number of byte
 * Return: pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (j = i; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
