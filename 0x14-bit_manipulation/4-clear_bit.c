#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set value of a bit to 0 at an index
 * @n: number
 * @index: index
 * Return: 1 otherwise 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int val;

	if (index > 64)
	{
		return (-1);
	}

	val = index;
	i = 1;
	while (val > 0)
	{
		i *= 2;
		val--;
	}

	if ((*n >> index) & 1)
	{
		*n -= i;
	}
	return (1);
}
