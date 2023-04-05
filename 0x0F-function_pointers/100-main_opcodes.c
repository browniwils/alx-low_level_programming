#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for printing its own opcodes
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int b, i;
	char *list, *e = "Error\n";

	if (argc != 2)
	{
		printf("%s\n", e);
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("%s\n", e);
		exit(2);
	}

	list = (char *)main;
	for (i = 0; i < b; i++)
	{
		if (i == (b - 1))
		{
			printf("%02hhx\n", list[i]);
			break;
		}
		printf("%02hhx ", list[i]);
	}
	return (0);
}
