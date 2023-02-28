#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @s: string to print the chars from
 */
void puts2(char *s)
{
	int l, i;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
