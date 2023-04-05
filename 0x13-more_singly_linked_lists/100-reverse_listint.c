#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: list
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_item, *current_item;

	while ((*head) != NULL)
	{
		next_item = (*head)->next;
		(*head)->next = current_item;
		current_item = (*head);
		(*head) = next_item;
	}

	(*head) = current_item;
	return (*head);
}
