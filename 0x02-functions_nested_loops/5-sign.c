#include "main.h"
/**
 * print_sign - check the code
 *
 * Return: Always 1 oe 0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	else if (n == 0)
	{
		putchar('0');
		return 0;
	}
	else
	{
		putchar('-');
		return -1;
	}
}

