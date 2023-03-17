#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: minimum range start
 * @max: maximum range end
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *memory;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	memory = malloc(sizeof(int) * (max  - min + 1));
	if (memory == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		memory[i] = min + i;
	}
	return (memory);
}
