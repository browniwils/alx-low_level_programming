#include "lists.h"

/**
 * dlistint_len - gets size of list
 * @h: head
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	if (h == 0)
	{
		return (size);
	}

	while (h != 0)
	{
		size++;
		h = h->next;
	}
	return (size);
}
