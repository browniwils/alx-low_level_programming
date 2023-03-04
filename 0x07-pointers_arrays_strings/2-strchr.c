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
	while (*s != 0)
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
