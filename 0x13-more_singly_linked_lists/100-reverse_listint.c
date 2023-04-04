#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * reverse_listint - Reverses a list.
 * @head: Pointer to a pointer to the head node.
 *
 * Return: A pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ayo_curr = NULL, *ayo_prev = NULL;

	while (*head != NULL)
	{
		ayo_curr = (*head)->next;
		(*head)->next = ayo_prev;
		ayo_prev = *head;
		*head = ayo_curr;
	}

	*head = ayo_prev;
	return (*head);
}
