#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - finds a square root of an integer
 * @n: integer to find square root
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n > 1)
	{
		return (root(n, 1));
	}
	else if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (-1);
}

/**
 * root - helps _sqrt_recurssion
 * @n: integer
 * @i: recursion increment integer
 * Return: integer
 */

int root(int n, int i)
{
	if (n > (i * i))
	{
		return (root(n, i + 1));
	}
	else if (n == (i * i))
	{
		return (i);
	}

	return (-1);
}
