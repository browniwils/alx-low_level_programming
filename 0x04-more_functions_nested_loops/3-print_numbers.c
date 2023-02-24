#include <stdio.h>

/**
 * print_number - display number to standard output
 */

void print_number(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

