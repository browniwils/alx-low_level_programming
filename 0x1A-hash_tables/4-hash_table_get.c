#include "hash_tables.h"

/**
 * hash_table_get - get value associated with a key.
 * @ht: hash table to search
 * @key: search key
 * Return: value index key if found, otherwise 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	indx = key_index((unsigned char *) key, ht->size);
	if (ht->array[indx] == NULL || ht->array[indx] == 0)
	{
		return (NULL);
	}

	if (strcmp(ht->array[indx]->key, key) == 0)
	{
		return (ht->array[indx]->value);
	}
	node = ht->array[indx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
