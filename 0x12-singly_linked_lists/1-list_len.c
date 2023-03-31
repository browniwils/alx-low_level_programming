#include "lists.h"

/**
 * list_len - count number of elements in a linked list
 * @h: linked list
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	unsigned int num_element = 0;

	while (h)
	{
		num_element++;
		h = h->next;
	}
	return (num_element);
}
