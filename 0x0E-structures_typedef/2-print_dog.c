#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints info of dog
 * @d: dog pointer
 */

void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = nil;
	}
	else if (d->age == NULL)
	{
		d->age = 0;
	}
	else if (d->owner == NULL)
	{
		d->owner = nil;
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
