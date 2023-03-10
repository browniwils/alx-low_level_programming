#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints a number
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 as success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int results = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		results += atoi(argv[i]);
	}

	printf("%d\n", results);
	return (0);
}
