#include "lists.h"

/**
 * listint_len - counts number of elements in a list
 * @h: list
 * Return: total number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
