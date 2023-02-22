#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prints to 98
 *
 * This function prints to 98
 *
 * @n: is any integer
 *
 * @i: is any integer
 *
 * Return: Always absolute value of last digit
 */

void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

