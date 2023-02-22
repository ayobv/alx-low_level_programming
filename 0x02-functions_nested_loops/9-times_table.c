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

            if (j == 0)
            {
                /* print the first column with no commas */
                _putchar('0' + result);
            }
            else
            {
                /* print the other columns with commas and spaces */
                _putchar(',');
                _putchar(' ');

                if (result < 10)
                {
                    /* add an extra space for single-digit numbers */
                    _putchar(' ');
                }

                _putchar('0' + result);
            }
        }

        /* print a newline at the end of each row */
        _putchar('\n');
    }
}


