#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: Pointer to a pointer to the first node
 * @idx: Index of the list for new node initialized at 0.
 * @n: Value in new node
 *
 * Return: Address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ano_ayonode, *prev_ano_ayonode, *new_ayonode;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		prev_ano_ayonode = *head;
		if (prev_ano_ayonode == NULL)
			return (NULL);

		for (i = 0; i < idx - 1; i++)
		{
			prev_ano_ayonode = prev_ano_ayonode->next;
			if (prev_ano_ayonode == NULL)
				return (NULL);
		}
	}

	new_ayonode = malloc(sizeof(listint_t));
	if (new_ayonode == NULL)
		return (NULL);

	new_ayonode->n = n;

	if (idx == 0)
	{
		new_ayonode->next = *head;
		*head = new_ayonode;
	}
	else
	{
		ano_ayonode = prev_ano_ayonode->next;
		prev_ano_ayonode->next = new_ayonode;
		new_ayonode->next = ano_ayonode;
	}

	return (new_ayonode);
}
