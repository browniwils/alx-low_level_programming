#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: 'print to standard output'
 * Return: Always 0 (success)
 */

int main(void)
{
int i;
for (i = 'Z'; i >= 'A'; i--)
{
char letter = tolower(i);
putchar(letter);
}

putchar('\n');
return (0);
}
