#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for a array
 * @nmemb: elements of array
 * @size: size of byte -> @nmemb
 * Return: pointer to allocated memory otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb < 1 || size < 1)
	{
		return (NULL);
	}

	memory = malloc(size * nmemb);
	if (memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		memory[i] = 0;
	}
	return (memory);
}
