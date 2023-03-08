#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: integer to find its power
 * @y: the power of @x
 * Return: the power of @x otherwise -1
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y > 0)
	{
		i *= _pow_recursion(x, y - 1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

	return (i);
}
