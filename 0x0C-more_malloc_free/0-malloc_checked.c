#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: number of memory needed
 * Return: pointer to the allocated memory otherwise termination is caused
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(sizeof(int) * b);
	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}
