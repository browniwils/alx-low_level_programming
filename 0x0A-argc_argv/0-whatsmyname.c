#include <stdio.h>

/**
 * main - prints its filename
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: always 0 is success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
