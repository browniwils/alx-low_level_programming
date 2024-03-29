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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
