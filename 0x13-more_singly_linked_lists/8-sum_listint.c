#include "lists.h"

/**
 * sum_listint - sums up the data of list
 * @head: list
 * Return: sum results otherwise 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
