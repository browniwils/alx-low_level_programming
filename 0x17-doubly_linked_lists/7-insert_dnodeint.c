#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at specific index
 * @h: head
 * @idx: index
 * @n: value of new node
 * Return: address to new node otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *head;
	unsigned int i = 1;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		if (head != 0)
		{
			while (head->prev != 0)
			{
				head = head->prev;
			}
		while (head != 0)
		{
			if (i == idx)
			{
				if (head->next == 0)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node != 0)
					{
						node->n = n;
						node->next = head->next;
						node->prev = head;
						head->next->prev = node;
						head->next = node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (node);
}
