#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - get lenght of a string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - joins two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of @s2 needed
 * Return: new string of 1 and 2 pointer otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, strlen1, strlen2;
	char *memory;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strlen1 = _strlen(s1);
	strlen2 = _strlen(s2);

	if (n >= strlen2)
	{
		n = strlen2;
	}

	memory = malloc(sizeof(char) * (strlen1 + n + 1));
	if (memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen1; i++)
	{
		memory[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		memory[strlen1 + i] = s2[i];
	}

	memory[strlen1 + i] = '\0';
	return (memory);
}
