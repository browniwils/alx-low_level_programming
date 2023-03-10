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
	int i, j, k;
	int results = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if ((argv[i][j] < 48 || argv[i][j] > 57) && argv[i][j] != 45)
			{
				printf("Error\n");
				return (1);
			}
		}

		if (atoi(argv[i]) > 0)
		{
			k = atoi(argv[i]);
			results += k;
		}
	}

	printf("%d\n", results);
	return (0);
}
