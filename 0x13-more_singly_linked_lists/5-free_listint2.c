#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * free_listint2 - Frees a list and sets the head to NULL
 *
 * @head: Pointer to the head node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aytemp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		aytemp = (*head)->next;
		free(*head);
		*head = aytemp;
	}

	head = NULL;
}
