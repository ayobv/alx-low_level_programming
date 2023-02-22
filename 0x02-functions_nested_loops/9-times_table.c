#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * times_table - prints nothing
 *
 * This function prints 9 times table
 *
 * _putchar - prints character
 *
 * Return: Always a value
 */
void times_table(void)
{
	int dav, sad, d;

	for (dav = 0; dav <= 9; dav++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (sad = 1; sad <= 9; sad++)
		{
			d = (dav * sad);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (sad < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}


