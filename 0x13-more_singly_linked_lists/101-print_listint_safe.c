#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints list a loop safely
 * @head: list head
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_1 = NULL, *temp_2 = NULL;
	size_t nodes = 0, temp_node;
	void *ptr;

	temp_1 = head;
	while (temp_1 != NULL)
	{
		ptr = (void *)temp_1;
		printf("[%p] %d\n", ptr, temp_1->n);

		nodes++;
		temp_1 = temp_1->next;
		temp_2 = head;
		temp_node = 0;
	
		while (temp_node == nodes)
		{
			if (temp_1 == temp_2)
			{
				ptr = (void *)temp_1;
				printf("-> [%p] %d\n", ptr, temp_1->n);
				return (nodes);
			}
			temp_2 = temp_2->next;
			temp_node++;
		}
		if (head == NULL)
		{
			exit(98);
		}
	}
	return (nodes);
}
