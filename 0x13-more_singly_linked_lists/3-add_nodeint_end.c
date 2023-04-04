#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint_end - To add a new node at the end
 *
 * @head: Double pointer to the head node
 * @n: Value to be added to aynode
 *
 * Return: The address of the new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_aynode, *aylast_node;

	new_aynode = malloc(sizeof(listint_t));
	if (new_aynode == NULL)
		return (NULL);

	new_aynode->n = n;
	new_aynode->next = NULL;

	if (*head == NULL)
	{
		*head = new_aynode;
		return (new_aynode);
	}

	aylast_node = *head;
	while (aylast_node->next != NULL)
		aylast_node = aylast_node->next;

	aylast_node->next = new_aynode;
	return (new_aynode);
}
