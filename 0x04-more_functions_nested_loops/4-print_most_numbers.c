#include <stdio.h>
#include "main.c"

/**
 * print_most_numbers - print numbers to stdo
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
