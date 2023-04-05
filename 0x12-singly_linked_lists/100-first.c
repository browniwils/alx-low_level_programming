#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - prints something before the main function
 */

void print_before_main(void)
{
	char *str = "You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n";
	printf("%s", str);
}
