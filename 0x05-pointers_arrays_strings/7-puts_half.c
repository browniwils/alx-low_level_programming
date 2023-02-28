#include "main.h"

/**
 * puts_half - prints half of a string
 * @s: string to be printed
 */
void puts_half(char *s)
{
	int i, slen = 0;

	while (s[slen] != '\0')
	{
		slen++;
	}

	if (slen % 2 == 0)
	{
		for (i = slen / 2; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		for (i = (slen - 1) / 2; i < slen - 1; i++)
		{
			_putchar(s[i + 1]);
		}
	}
	_putchar('\n');
}
