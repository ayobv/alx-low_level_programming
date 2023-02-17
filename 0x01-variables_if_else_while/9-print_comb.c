#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints all combination of single digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
		if (b < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
