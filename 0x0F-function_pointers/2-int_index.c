#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: list of integer to search from
 * @size: size of integer list
 * @cmp: callback function to check if array element is and integer
 * Return: index of found integer otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
