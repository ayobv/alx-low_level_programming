#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements to allocate
 * @size: Size of each element in bytes
 *
 * Return: A void pointer to the allocated memory or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
