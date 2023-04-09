#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number
 * Return: number of bits that was fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j = 0;

	i = n ^ m;
	while (i != 0)
	{
		j++;
		i &= (i - 1);
	}
	return (j);
}
