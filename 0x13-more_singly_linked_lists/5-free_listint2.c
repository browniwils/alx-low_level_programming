#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  free up list's memories
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
	{
		return;
	}

	while ((*head) != NULL)
	{
		temp_node = (*head)->next;
		free((*head));
		(*head) = temp_node;
	}
	(*head) = NULL;
}
