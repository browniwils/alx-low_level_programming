#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a specified index
 * @head: list
 * @index: index at which element must be deleted
 * Return: 1 if succeed otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	temp = (*head);
	if ((*head) == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < (index - 1))
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}

	prev = temp->next;
	temp->next = prev->next;
	free(prev);
	return (1);
}
