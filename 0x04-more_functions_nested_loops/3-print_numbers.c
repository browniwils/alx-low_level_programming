#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print number to standard output
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

