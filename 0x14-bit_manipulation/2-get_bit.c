#include <stdio.h>
#include "main.h"

/**
 * get_bit - get value of a bit at an index
 * @n: number
 * @i: index
 * Return: index's value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
	{
		return (-1);
	}
	val = n >> index;
	return (val & 1);
}
