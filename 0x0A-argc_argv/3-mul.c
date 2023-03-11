#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, d;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc >= 3)
	{
		i = atoi(argv[1]);
		d = atoi(argv[2]);

		printf("%d\n", i * d);
	}
	return (0);
}
