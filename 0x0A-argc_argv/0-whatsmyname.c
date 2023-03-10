#include <stdio.h>
#include "main.h"

/**
 * main - prints its filename
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: always 0 is success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
