#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area to different memory area
 * @dest: list of memory to receive copied memory
 * @src: list of memory to be copied
 * @n: number of list of memory to be copied
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
