#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: results a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between the integers
 */

int op_sub(int a, int b)
{
	if (a > b)
	{
		return (a - b);
	}

	return (b - a);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divdies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of dividing a by b
 */

int op_div(int a, int b)
{
	char *error_message = "Error";

	if (b == 0)
	{
		printf("%s\n", error_message);
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: the reminder of dividing a by b
 */

int op_mod(int a, int b)
{
	char *error_message = "Error";

	if (b == 0)
	{
		printf("%s\n", error_message);
		exit(100);
	}
	return (a % b);
}
