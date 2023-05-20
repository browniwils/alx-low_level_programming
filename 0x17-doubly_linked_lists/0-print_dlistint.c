#include "lists.h"

/**
 * print_dlistint - prints all list data value
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	if (h == 0)
	{
		return (size);
	}

	while (h != 0)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
