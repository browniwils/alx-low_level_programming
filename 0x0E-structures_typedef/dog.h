#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type for dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name,
	float age
	char *owner
}

typedef struct dog dog_t;

#endif
