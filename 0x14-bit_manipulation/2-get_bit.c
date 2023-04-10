#include "main.h"

/**
 * get_bit - will get value of a bit at an index
 * @n: The number the result will come from
 * @index: The index
 *
 * Return: The value of the bit, or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
