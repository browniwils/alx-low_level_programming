#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list
 * @head: head
 * @n: node data value
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *h;

	node = malloc(sizeof(dlistint_t));
	if (node == 0)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	h = *head;
	if (h != 0)
	{
		while (h->next != 0)
		{
			h = h->next;
		}
		h->next = node;
	}
	else
	{
		*head = node;
	}
	node->prev = h;
	return (node);
}
