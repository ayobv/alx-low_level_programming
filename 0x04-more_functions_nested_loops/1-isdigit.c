#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - check code
 *
 * return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
