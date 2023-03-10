#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - print product of 2 numbers or Error
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 success or 1 failure
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i, j, prod;

		i = atoi(argv[1]);
		j = atoi(argv[2]);

		prod = i * j;

		printf("%d\n", prod);
		return (0);
	}

	printf("Error\n");
	return (1);
}
