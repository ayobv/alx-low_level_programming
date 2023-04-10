#include "main.h"
/**
 * clear_bit - makes bit 0
 * @n: pointer to the number that would be modified
 * @index: index of the bit
 *
 * Return: 1 if success, or -1 for error
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
