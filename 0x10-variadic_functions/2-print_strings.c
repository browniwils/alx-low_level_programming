#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings from supplied arguments
 * @separator: string for to be used in between printed strings
 * @n: number of arguments supplied
 * @...: arguments to be supplied
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	unsigned int i;
	char *s;

	va_start(argv, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(argv, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("%s", "(nil)");
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(argv);
}
