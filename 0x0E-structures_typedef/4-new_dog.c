#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get length of a string
 * @s: string to get length
 * Return: string length
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy string to another
 * @a: to receive string @b
 * @b: to send to string @a
 * Return: @a
 */

char *_strcpy(char *a, char *b)
{
	unsigned int i;

	if (b == NULL)
	{
		return (b);
	}

	for (i = 0; b[i] != 0; i++)
	{
		a[i] = b[i];
	}
	a[i] = '\0';
	return (a);
}

/**
 * new_dog - creates a new dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to dog instance otherwise null if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len;
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	my_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->owner = _strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
