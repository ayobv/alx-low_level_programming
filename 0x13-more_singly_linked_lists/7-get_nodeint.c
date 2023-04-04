#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head node
 * @index: index of the node
 *
 * Return: pointer to the nth node of the list, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aynodes = head;

	while (aynodes != NULL)
	{
		if (i == index)
			return (aynodes);
		i++;
		aynodes = aynodes->next;
	}
	return (NULL);
}
