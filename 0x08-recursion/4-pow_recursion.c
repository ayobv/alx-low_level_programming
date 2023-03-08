#include "main.h"

/**
 * _pow_recursion - Computes x raised to the power of y recursively.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
