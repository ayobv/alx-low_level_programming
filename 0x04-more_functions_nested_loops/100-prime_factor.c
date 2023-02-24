#include "main.h"
#include <stdio.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
    long factor = 2;

    while (factor * factor <= n)
    {
        if (n % factor == 0)
        {
            n = n / factor;
        }
        else
        {
            factor++;
        }
    }

    return n;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    long n = 612852475143;
    long largest = largest_prime_factor(n);

    printf("%ld\n", largest);

    return 0;
}
