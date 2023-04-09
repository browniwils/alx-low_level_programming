#include "main.h"

/**
 * set_bit - sets value of an index
 * @n: number
 * @index: index
 * Return: 1 otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
	{
		return (-1);
	}

	while (index > 0)
	{
		index--;
		i *= 2;
	}

	*n += i;
	return (1);
}
