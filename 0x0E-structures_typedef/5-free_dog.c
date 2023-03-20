#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to the dog to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
