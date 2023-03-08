#include <stdio.h>
#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: number to find factorial of
 * Return: factorial of a number otherwise -1
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}

	return (-1);
}
