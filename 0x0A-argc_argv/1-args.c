#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: number of argument supplied
 * @argv: list of argument supplied
 * Return: always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
