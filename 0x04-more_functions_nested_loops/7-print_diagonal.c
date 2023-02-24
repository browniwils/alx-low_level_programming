#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print '\' in diagonal
 * @n: number of '\' to be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			if (i == n - 1)
			{
				_putchar('\\');
				break;
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
