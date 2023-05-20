#include "lists.h"

/**
 * add_dnodeint - new node at front of list
 * @head: head
 * @n: node value
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *h;

	node = malloc(sizeof(dlistint_t));
	if (node == 0)
	{
		return (0);
	}

	node->n = n;
	node->prev = NULL;
	h = *head;

	if (h != 0)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	node->next = h;
	if (h != 0)
	{
		h->prev = node;
	}
	*head = node;
	return (node);
}
