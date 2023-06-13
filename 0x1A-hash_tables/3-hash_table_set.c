#include "hash_tables.h"

/**
 * create_new_node - create new node
 * @key: key, key cannot be an empty string
 * @value: value associated with key.
 * Return: 1 on success, otherwise 0
 */

hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *n_node;

	n_node = malloc(sizeof(hash_node_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = NULL;

	return (n_node);
}

/**
 * hash_table_set - adds an item to the hash table
 * @ht: hash table
 * @key: key, it can not be empty string
 * @value: value associated with the key
 * Return: 1 on success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *n_node;
	unsigned long int index;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		n_node = create_new_node(key, value);
		if (n_node == NULL)
			return (0);
		ht->array[index] = n_node;
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	n_node = create_new_node(key, value);
	if (n_node == NULL)
		return (0);
	n_node->next = ht->array[index];
	ht->array[index] = n_node;
	return (1);
}
