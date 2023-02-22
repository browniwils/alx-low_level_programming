#include "main.h"

/**
 * print _sign - print to standard output the state of a number
 * Returns: 1 if output is addition sign otherwise 0 else -1 if output is minus sign
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
