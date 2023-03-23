#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments supplied
 * @...: arguments to be supplied
 * Return: sum results
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argv;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(argv, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argv, unsigned int);
	}

	va_end(argv);

	return (sum);
}
