#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function initializes the variable n with a random number
 * between -RAND_MAX/2 and +RAND_MAX/2, and prints “Last digit of n
 * is greater than 5, less than 6 but not 0, or equal to
 * zero”
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d and is ", n, n % 10);
if (n % 10 > 5)
	printf("greater than 5\n");
else if (n % 10 == 0)
	printf("0\n");
else
	printf("less than 6 and not 0\n");
return (0);
}
