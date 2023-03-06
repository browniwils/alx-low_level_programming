#include <stdio.h>
#include "main.h"

/**
 * _strstr - find occurance of substring in a string
 * @haystack: string for finding occurance
 * @needle: occurance to be found
 * Return: pointer to the begining of substring in @haystack
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		
		if (needle[j] == 0)
		{
			return (&haystack[i]);
		}
	}

	return (0);
}
