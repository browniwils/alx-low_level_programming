#include <stdio.h>
#include "main.h"

/**
 * _strchr - search for a character in string
 * @s: string to search a character from
 * @c: character for searching
 * Return: pointer of first @c in @s if @c is found in @s else NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}
	return (&s[i]);
}
