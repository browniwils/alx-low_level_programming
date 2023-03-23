#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - detects operator and choose a function base on it
 * @s: pointer to the character operator
 * Return: pointer to the function get_op_func selects
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
