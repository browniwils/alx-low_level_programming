#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - string palindrome
 * @s: string
 * Return: 1 for success otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return (check_palindrome(s, 0, _strlen(s)));
}

/**
 * check_palindrome - characters for palindrome in recursion
 * @s: string
 * @i: iterator
 * @len: string length
 * Return: 1 for true otherwise 0 for false
 */

int check_palindrome(char *s, int i, int len)
{
	if (s[i] != s[len - 1])
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_palindrome(s, i + 1, len - 1));
}

/**
 * _strlen - finds length of string
 * @s: string
 * Return: number of character present
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
