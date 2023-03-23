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
	int input_1, input_2, op_result;
	char *error_message = "Error", *op;

	if (argc != 4)
	{
		printf("%s\n", error_message);
		exit(98);
	}

	if (argv[2][1])
	{
		printf("%s\n", error_message);
		exit(99);
	}

	op = argv[2];
	_operate = get_op_func(op);
	if (_operate == NULL)
	{
		printf("%s\n", error_message);
		exit(99);
	}

	input_1 = atoi(argv[1]);
	input_2 = atoi(argv[3]);

	op_result = _operate(input_1, input_2);
	printf("%d\n", op_result);

	return (0);
}
