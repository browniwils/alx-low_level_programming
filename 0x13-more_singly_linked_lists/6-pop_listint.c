#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node from a list
 * @head: list
 * Return: element value otherwise 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int el_val;

	if (head == NULL || (*head) == NULL)
	{
		return (0);
	}

	el_val = (*head)->n;
	temp = (*head)->next;
	free((*head));
	(*head) = temp;

	return (el_val);
}
