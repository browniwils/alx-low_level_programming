#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary numbers
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int move;
	unsigned long int temp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	temp = n;
	move = 0;
	while ((temp >>= 1) > 0)
	{
		move++;
	}

	while (move >= 0)
	{
		if ((n >> move) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		move--;
	}
}
