#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of array
 * @arr: array
 * @n: array lenght
 */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", arr[i]);
		}
		else
		{
			printf("%d, ", arr[i]);
		}
	}
}
