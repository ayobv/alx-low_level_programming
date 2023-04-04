#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - This would prints all
 *		the elements of a listint_t list
 *
 * @h: Pointer to the head node in the list
 *
 * Return: The count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t aynode_number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		aynode_number++;
		h = h->next;
	}
	return (aynode_number);
}
