#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: total number of array items
 */

void reverse_array(int *a, int n)
{
	int i, j, t;
	
	if (n > 0)
	{
		j = n - 1;
		for (i = 0; i < n / 2; i++)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
}
