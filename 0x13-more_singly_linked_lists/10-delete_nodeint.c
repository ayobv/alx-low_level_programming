#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer to head
 * @index: index of node
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ayo_curr, *ayo_prev;
	unsigned int i;

	if (!*head)
		return (-1);

	ayo_curr = *head;
	ayo_prev = NULL;

	for (i = 0; i <= index && ayo_curr != NULL; i++)
	{
		if (i == index)
		{
			if (index == 0)
				*head = ayo_curr->next;
			else
				ayo_prev->next = ayo_curr->next;
			free(ayo_curr);
			return (1);
		}
		ayo_prev = ayo_curr;
		ayo_curr = ayo_curr->next;
	}
	return (-1);
}
