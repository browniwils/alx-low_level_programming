#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		free_hash_list(node);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_hash_list - frees a hash_node_t list
 * @head: head of linked list
 */

void free_hash_list(hash_node_t *head)
{
	hash_node_t *curr, *next;

	curr = head;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr->key);
		free(curr->value);
		free(curr);
		curr = next;
	}
}
