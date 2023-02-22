#include "main.h"

/**
 * print_last_digit - print to standard output last digit of @n
 * @n: integer for checking
 * Return: last digit of @n
 */

int print_last_digit(int n)
{
int i, a;
if (n < 0)
{
n = n * -1;
}
n = n % 10;
if (i < 0)
{
a = a * -1;
}
_putchar(a + '0');
return (a);
}
