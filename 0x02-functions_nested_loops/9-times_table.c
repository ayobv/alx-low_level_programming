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
	int i, j, result;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}

