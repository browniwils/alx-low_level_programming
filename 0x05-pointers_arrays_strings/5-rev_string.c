#include <stdio.h>

/**
 * rev_string - print reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char c;
	int i, k, j;

	j = 0;
	k = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	k = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[k];
		s[k--] = c;
	}
}
