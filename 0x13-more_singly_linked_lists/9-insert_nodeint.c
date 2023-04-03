#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node a specified index
 * @head: list
 * @idx: specified index
 * @n: node data or value
 * Return: address of new node otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *temp;

	temp = (*head);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}

	while (temp != NULL && i < idx)
	{
		if (i == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
