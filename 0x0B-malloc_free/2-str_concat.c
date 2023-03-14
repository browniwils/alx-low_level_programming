#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concantenate to string in a new array
 * @s1: string 1
 * @s2: string 2
 * Return: new array of string 1 and 2 otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, s1len = 0, s2len = 0;
	char *arr;

	while (s1 && s1[s1len])
	{
		s1len++;
	}
	while (s2 && s2[s2len])
	{
		s2len++;
	}
	arr = malloc(sizeof(char) * (s1len + s2len + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		for (i = 0; i < s1len; i++)
		{
			arr[i] = s1[i];
		}
	}
	if (s2)
	{
		for (; i < (s1len + s2len); i++)
		{
			arr[i] = s2[j];
		}
	}
	arr[i] = '\0';
	return (arr);
}
