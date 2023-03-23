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

	op = argv[2];
	_operate = get_op_func(argv[2]);
	if (_operate == NULL || op == 0)
	{
		printf("%s\n", error_message);
		exit(99);
	}

	input_1 = atoi(argv[1]);
	input_2 = atoi(argv[3]);

	if ((*(op) != 37 || *(op) != 47) && input_2 == 0)
	{
		printf("%s\n", error_message);
		exit(100);
	}

	op_result = _operate(input_1, input_2);
	printf("%d\n", op_result);

	return (0);
}
