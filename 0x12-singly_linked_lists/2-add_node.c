#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: pointer to the head of node
 * @str: string
 * Return: address of new element otherwise null
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	while (str[len] != 0)
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
