#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints last digit
 *
 * This function prints last digits
 *
 * @num: is any integer
 *
 * Return: Always absolute value of last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar('0' + abs(last_digit));
	return (abs(last_digit));
}
