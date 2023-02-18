#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: 'Print to standard output'
 * Return: Always 0 (success)
 */

int main(void)
{
int i;
char c;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (c = 'A'; c <= 'F'; c++)
{
putchar(tolower(c));
}
putchar('\n');
return (0);
}
