#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function initializes the variable n with a random number
 * between -RAND_MAX/2 and +RAND_MAX/2, and prints whether the number
 * is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0) 
   	 printf("%d is positive\n", n);
    	else if (n < 0) 
        printf("%d is negative\n", n);
    	else 
        printf("%d is zero\n", n);
    return (0);
}
