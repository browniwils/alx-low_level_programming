#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate 2 lists of characters
 * @dest: first list of characters
 * @src: second list of characters
 * Return: pointer of @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (src[srcLen] != '\0')
	{
		srcLen++;
	}

	for (i = destLen; i <= destLen + srcLen; i++)
	{
		if (i == destLen + srcLen)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i - destLen];
		}
	}

	return (dest);
}
