#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: 'print to standard output'
 * Return: Always 0 (success)
 */

int main(void)
{
int i , j;
for (i = 'A'; i <= 'Z'; i++)
{
char letter = tolower(i);
putchar(letter);
}

for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}

putchar('\n');
return (0);
}
