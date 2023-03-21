#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type for dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: Info about my dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type defination for struct dog
 */

typedef struct dog dog_t;

#endif