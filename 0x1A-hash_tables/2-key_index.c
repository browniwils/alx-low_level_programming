#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key: key
 * @size: size of the array in hash table
 * Return: position
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int postion;

	position = hash_djb2(key) % size;
	return (postion);
}
