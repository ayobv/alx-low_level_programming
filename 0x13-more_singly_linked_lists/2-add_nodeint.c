#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * add_nodeint - To Add a new node to the start of a list
 *
 * @head: Represents a pointer that points to a pointer
 * @n: The value to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aynode;

	aynode = malloc(sizeof(listint_t));
	if (aynode == NULL)
		return (NULL);

	aynode->n = n;
	aynode->next = *head;
	*head = aynode;

	return (aynode);
}
