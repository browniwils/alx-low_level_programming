#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of char
 * @size: represents the size of array to be created
 * @c: characters to be inside the array created
 * Return: a pointer to the array created otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	int i;
	int arr_size = size;
	char *s;

	if (arr_size < 1)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * arr_size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < arr_size; i++)
	{
		s[i] = c;
	}

	return (s);
}
