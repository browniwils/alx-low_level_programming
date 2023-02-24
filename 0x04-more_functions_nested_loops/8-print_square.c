#include <stdio.h>
#include "main.h"

/**
 * print_square - print '#' in square shape
 * @size: rep the size of square
 */

void print_square(int size)
{
	if (size > 0)
	{

		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i == size - 1)
			{
				break;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
