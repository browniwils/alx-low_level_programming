#include "lists.h"

/**
 * sum_dlistint - sums all data value of list
 * @head: head
 * Return: total
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != 0)
	{
		while (head->prev != 0)
		{
			head = head->prev;
		}

		while (head != 0)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
