#include <stdio.h>
#include "main.h"

/**
 * print_line - print line with '_'
 * @n: Size of the line
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
