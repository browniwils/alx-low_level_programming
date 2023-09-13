#include "search_algos.h"

/**
 * r_search - searches for a value in an array of
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: index of the number
 */
int r_search(int *array, size_t size, int value)
{
	size_t semi_arr = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (semi_arr && size % 2 == 0)
		semi_arr--;

	if (value == array[semi_arr])
		return ((int)semi_arr);

	if (value < array[semi_arr])
		return (r_search(array, semi_arr, value));

	semi_arr++;
	return (r_search(array + semi_arr, size - semi_arr, value) + semi_arr);
}

/**
 * binary_search - search for value in array
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int i;

	i = r_search(array, size, value);

	if (i >= 0 && array[i] != value)
	{
		return (-1);
	}

	return (i);
}