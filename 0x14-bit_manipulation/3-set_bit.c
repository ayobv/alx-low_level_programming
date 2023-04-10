#include "main.h"

/**
 * set_bit - will set bit to 1
 * @n: A pointer to the number that will be modified
 * @index: The index
 *
 * Return: 1 if success, or -1 if otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
