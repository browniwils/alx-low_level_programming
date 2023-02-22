#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int i = 0;
char ch;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
