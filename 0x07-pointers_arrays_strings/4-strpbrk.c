#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches for a bytes in a string
 * @s: string to search through
 * @accept: bytes for search
 * Return: pointer for first occurance in @s else 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				for (k = 0; k < i; k++)
				{
					s++;
				}
				return (s);
			}
		}
	}

	return (0);
}
