#include "main.h"

/**
 * flip_bits - returns bits needed to flip to get
 *             another number.
 * @n: number to flip
 * @m: second number
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ayo = n ^ m;
	unsigned int ayo_bit = 0;

	while (ayo > 0)
	{
		if (ayo & 1)
			ayo_bit++;
		ayo >>= 1;
	}

	return (ayo_bit);
}
