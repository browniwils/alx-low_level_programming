#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints info of dog
 * @d: dog pointer
 */

void print_dog(struct dog *d)
{
	char *nill = "(nil)";

	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name) ? d->name : nill);
	printf("Age: %f\n", (d->age) ? d->age : 0.0);
	printf("Owner: %s\n", (d->owner) ? d->owner : nill);
}
