#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @n: first integer pointer
 * @m: second integer pointer
 */

void swap_int(int *n, int *m)
{
	int i;

	i = *n;
	*n = *m;
	*m = i;
}
