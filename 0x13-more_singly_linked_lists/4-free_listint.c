#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  free up list's memories
 * @head: pointer to list
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
