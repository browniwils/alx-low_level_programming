#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: previous memory
 * @old_size: size of byte for @ptr
 * @new_size: size of byte for new memory block
 * Return: pointer for new memory reallocated otherwise NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *memory, *o_memory;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	memory = malloc(new_size);
	if (memory == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_size = old_size;
	}

	o_memory = ptr;
	for (i = 0; i < new_size; i++)
	{
		memory[i] = o_memory[i];
	}
	free(ptr);
	return (memory);
}
