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

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(atoi(argv[i]))))
		{
			if (atoi(argv[i]) > 0)
			{
				j = atoi(argv[i]);
				results += j;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", results);
	return (0);
}
