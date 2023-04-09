#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert number to unsigned int
 * @b: string
 * Return: number otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int all, exp;

	if (b == 0)
	{
	 	return (0);
	}

	for (i = 0; b[i] != 0; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (exp = 1, all = 0, i--; i >= 0; i--, exp *= 2)
	{
		if (b[i] == '1')
		{
			all += exp;
		}
	}

	return (all);
}
