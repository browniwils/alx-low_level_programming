#include "main.h"

/**
 * print_last_digit - print to standard output last digit of @n
 * @n: integer for checking
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
int i;
if (n < 0)
{
n = n * -1;
}
i = n % 10;
if (i < 0)
{
i = i * -1;
}
_putchar(i + '0');
return (i);
}
