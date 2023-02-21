#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _abs - to convert to absolute
 *
 * This function converts to absolute
 *
 * @n: represents int
 * 
 * Return: Always positive
 */

int _abs(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}

