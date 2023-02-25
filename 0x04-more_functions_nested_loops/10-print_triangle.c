#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print '#' in triangular shape
 * @n: szie of shape
 */

void print_triangle(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			int j = i, k = 1;

			while (j < n)
			{
				_putchar(' ');
				j++;
			}
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
