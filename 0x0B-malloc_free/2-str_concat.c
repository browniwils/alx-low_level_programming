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
	int i, s1len = 0, s2len = 0;
	char *arr;

	while (s1 != NULL && s1[s1len] != 0)
	{
		s1len++;
	}
	while (s2 != NULL && s2[s2len] != 0)
	{
		s2len++;
	}
	arr = malloc((sizeof(char) * (s1len + s2len - 1)) + 2);
	if (arr == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; i < s1len; i++)
		{
			arr[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (; i < (s1len + s2len); i++)
		{
			arr[i] = s2[i - s1len];
		}
	}
	arr[i] = '\0';
	return (arr);
}
