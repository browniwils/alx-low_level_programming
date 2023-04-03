#include "lists.h"

/**
 * print_listint - prints all element in listint_t list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_node++;
		h = h->next;
	}
	return (n_node);
}
