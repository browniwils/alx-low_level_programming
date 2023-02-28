#include <stdio.h>
#include "main.h"

/**
 * _puts - prints array of characters to stdo
 * @s: array of characters
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
