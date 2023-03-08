#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: string to get length from
 * Return: length of string otherwise -1
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != 0)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
