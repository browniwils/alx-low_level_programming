#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node in list
 * @head: head
 * @index: position of nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == 0)
	{
		return (NULL);
	}

	while (head->prev != 0)
	{
		head = head->prev;
	}

	for (i = 0; head != 0; i++)
	{
		if (i == index)
		{
			break;
		}
		head = head->next;
	}
	return (head);
}
