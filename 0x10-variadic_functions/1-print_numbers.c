#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers from supplied arguments
 * @separator: string for to be used in between printed numbers
 * @n: number of arguments supplied
 * @...: arguments to be supplied
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	unsigned int i;

	va_start(argv, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argv, int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argv);
}
