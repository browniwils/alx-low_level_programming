#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of 2 diagonals of a square matrix
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int ld, rd;

	ld = 0;
	rd = 0;

	for (i = 0; i < size; i++)
	{
		ld += a[(size * i) + i];
		rd += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, ", ld);
	printf("%d\n", rd);
}
