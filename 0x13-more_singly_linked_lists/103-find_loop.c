#include "lists.h"

/**
 * find_listint_loop - finds loop in list
 * @head: list head
 * Return: finded loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp_1, *temp_2;

	temp_1 = head;
	temp_2 = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp_1 != NULL && temp_2 != NULL && temp_2->next != NULL)
	{
		temp_2 = temp_2->next->next;
		temp_1 = temp_1->next;
		if (temp_1 == temp_2)
		{
			temp_1 = head;
			while (temp_1 != temp_2)
			{
				temp_1 = temp_1->next;
				temp_2 = temp_2->next;
			}
			return (temp_2);
		}
	}
	return (NULL);
}
