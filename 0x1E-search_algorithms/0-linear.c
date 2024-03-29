#include "search_algos.h"

/**
  * linear_search - searches for a value in an arrray of integers
  * @array: array
  * @size: size of array
  * @value: item to search
  * Return: index of value found in array otherwise -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
