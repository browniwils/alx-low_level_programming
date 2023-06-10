#include "hash_tables.h"

/**
 * shash_table_create - creates sorted hash table
 * @size: size of the hash table
 * Return: pointer to the new table, otherwise
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shast;

	shast = malloc(sizeof(shash_table_t));
	if (shast == NULL)
	{
		return (NULL);
	}
	shast->size = size;
	shast->shead = NULL;
	shast->stail = NULL;
	shast->array = malloc(sizeof(shash_node_t) * size);
	if (shast->array == NULL)
	{
		free(shast);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		shast->array[i] = NULL;
	}
	return (shast);
}

/**
 * make_shash_node - makes a node for the sorted hash table
 * @key: key for the data
 * @value: data to be stored
 * Return: pointer to the new node, otherwise NULL
 */

shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shan;

	shan = malloc(sizeof(shash_node_t));
	if (shan == NULL)
	{
		return (NULL);
	}
	shan->key = strdup(key);
	if (shan->key == NULL)
	{
		free(shan);
		return (NULL);
	}
	shan->value = strdup(value);
	if (shan->value == NULL)
	{
		free(shan->key);
		free(shan);
		return (NULL);
	}
	shan->next = shan->snext = shan->sprev = NULL;
	return (shan);
}

/**
 * add_to_sorted_list - add a node to the sorted by key in linked list
 * @table: the sorted hash table
 * @node: the node to add
 */

void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	temp = table->shead;
	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev != NULL)
			{
				node->sprev->snext = node;
			}
			else
			{
				table->shead = node;
			}
			return;
		}
		temp = temp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - sets key to value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: data to add
 * Return: 1 on success, otherwise 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *shan, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	shan = make_shash_node(key, value);
	if (shan == NULL)
	{
		return (0);
	}
	shan->next = ht->array[index];
	ht->array[index] = shan;
	add_to_sorted_list(ht, shan);
	return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to data
 * Return: the value associated with key, otherwise NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints sorted hash table
 * @ht: hash table to print
 */

void shash_table_print(const shash_table_t *ht)
{
	char flag = 0;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints sorted hash table in reverse
 * @ht: hash table to print
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	char flag = 0;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *next;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
