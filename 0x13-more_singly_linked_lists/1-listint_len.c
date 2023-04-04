#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - will return the count of elements
 * @h: The pointer to the first node in the list
 *
 * Return: The count of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t aycount = 0;

	while (h != NULL)
	{
		aycount++;
		h = h->next;
	}

	return (aycount);
}
