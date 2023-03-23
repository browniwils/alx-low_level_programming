#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry which perform operation on a given arguments
 * and print the results
 * @argv: number of arguments supplied
 * @argc: list of arguments supplied
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int (*_operate)(int, int);
	int input_1, input_2;
	char *error_message = "Error";

	if (argc != 4)
	{
		printf("%s\n", error_message);
		exit(98);
	}

	_operate = get_op_func(argv[2]);
	if (_operate == NULL || argv[2][1])
	{
		printf("%s\n", error_message);
		exit(99);
	}

	input_1 = atoi(argv[1]);
	input_2 = atoi(argv[3]);

	printf("%d\n", _operate(input_1, input_2));

	return (0);
}
