#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * sum_listint - Returns the sum of elements
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the elements of the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *another = head;

	while (another != NULL)
	{
		sum += another->n;
		another = another->next;
	}

	return (sum);
}
