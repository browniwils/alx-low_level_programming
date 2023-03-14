#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string to a new string
 * @str: string to be copied
 * Return: a pointer to new string otherwise NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != 0)
	{
		i++;
	}

	arr = malloc((sizeof(char) * i) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}
