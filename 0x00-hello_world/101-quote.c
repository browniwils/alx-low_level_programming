#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - The entry point
 * Description: 'main prints message to standard output
 * Return: Aways 1 as failure
 */

int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}