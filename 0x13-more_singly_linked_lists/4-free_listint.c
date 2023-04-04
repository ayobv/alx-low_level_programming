#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * free_listint - Frees a list
 *
 * @head: Pointer to the head node
 */
void free_listint(listint_t *head)
{
	listint_t *aytemp;

	while (head != NULL)
	{
		aytemp = head->next;
		free(head);
		head = aytemp;
	}
}
