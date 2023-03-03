#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words
 * @s: string for capitalization
 * Return: pointer to @s
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char wordSep[13] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (i = 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}

		for (j = 0; wordSep[j] != '\0'; j++)
		{
			if (s[i] == wordSep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 2] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
				break;
			}
		}
		i++;
	}

	return (s);
}
