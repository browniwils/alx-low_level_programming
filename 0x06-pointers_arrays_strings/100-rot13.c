#include <stdio.h>
#include "main.h"

/**
 * rot13 - encrypt string
 * @s: string to be encrypted
 * Return: encrypted string
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 26 * 2; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = cipher[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
