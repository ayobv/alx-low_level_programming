#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}

