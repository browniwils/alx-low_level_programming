#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees up a list
 * @h: list head
 * Return: number of freed nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes = 0;
	int d;

	if (h == NULL || (*h) == NULL)
	{
		return (0);
	}

	while ((*h) != NULL)
	{
		d = (*h) - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free((*h));
			(*h) = temp;
			nodes++;
		}
		else
		{
			free((*h));
			(*h) = NULL;
			nodes++;
			break;
		}
	}
	(*h) = NULL;
	return (nodes);
}
