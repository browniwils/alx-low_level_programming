#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of @s2 needed
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, strlen1 = 0, strlen2 = 0;
	char *memory;

	while (s1 && s1[strlen1])
	{
		strlen1++;
	}
	while (s2 && s2[strlen2])
	{
		strlen2++;
	}

	if (n >= strlen2)
	{
		n = strlen2;
	}

	memory = malloc(sizeof(char) * (strlen1 + n + 1));
	if (memory == NULL)
	{
		return (NULL);
	}
	while (i < strlen1)
	{
		memory[i] = s1[i];
		i++;
	}
	while (n < strlen2 && i < (strlen1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= strlen2 && i < (strlen1 + strlen2))
	{
		memory[i++] = s2[j++];
	}
	memory[i] = '\0';
	return (s);
}
