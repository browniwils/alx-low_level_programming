#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees up dog memory
 * @d: pointer to dog instance
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
