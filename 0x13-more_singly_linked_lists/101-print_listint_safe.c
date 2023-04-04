#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr = head, *check;

	while (ptr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)ptr, ptr->n);

		ptr = ptr->next;

		check = head;
		for (size_t i = 0; i < count; i++)
		{
			if (check == ptr)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				exit(98);
			}

			check = check->next;
		}
	}

	return (count);
}
