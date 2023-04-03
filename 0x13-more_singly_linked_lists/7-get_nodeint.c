#include "lists.h"

/**
 * get_nodeint_at_index - gets the node element from the list
 * @head: list
 * @index: index of the list needed
 * Return: number position of index of a node otherwise NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}
