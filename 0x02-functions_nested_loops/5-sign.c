#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_sign - check the code
 *
 * @n: any int number
 * Return: Always 1 oe 0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

