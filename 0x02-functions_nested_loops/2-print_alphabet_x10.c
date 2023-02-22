#include "main.h"

/**
 * print_alphabet - entry point
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
int i = 10;
char alphabet = 'a';
while (i <= 10)
{
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
i++;
}
_putchar('\n');
return;
}
