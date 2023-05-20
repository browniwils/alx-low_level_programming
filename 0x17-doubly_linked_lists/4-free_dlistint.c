#include "lists.h"

/**
 * free_dlistint -frees list
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != 0)
	{
		while (head->prev != 0)
		{
			head = head->prev;
		}

		temp = head;
		while (temp != 0)
		{
			head = head->next;
			free(temp);
		}
	}
}
