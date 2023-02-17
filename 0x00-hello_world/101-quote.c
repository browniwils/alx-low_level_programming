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
const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int messageLength = strlen(msg);
write(1, msg, messageLength);
return (1);
}
