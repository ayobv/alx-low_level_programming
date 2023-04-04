#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node in linked list,
 * and returns the head node's data (n)
 * @head: pointer to pointer to the beginning
 *
 * Return: the head node's data (n) or 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ayvarb;

	if (*head == NULL)
		return (0);

	ayvarb = *head;
	n = ayvarb->n;
	*head = ayvarb->next;
	free(ayvarb);

	return (n);
}
