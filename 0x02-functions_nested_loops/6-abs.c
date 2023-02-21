#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * int_abs - to convert to absolute
 *
 * This function returns absolue number
 *
 * @n: represent int
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

