#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - create instance of dog
 * @d: name of instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of doge
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
