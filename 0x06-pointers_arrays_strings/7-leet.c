#include <stdio.h>
#include "main.c"

/**
 * leet - encode string
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	char enc[5] = "43071";
	char code[5] = "AEOTL";
	int dbUL = 32; /* difference between uppercase and lowercase */
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == code[j] || s[i] == code[j] + dbUL)
			{
				s[i] = enc[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
