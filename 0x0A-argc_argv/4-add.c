#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m, add = 0;

	if (argc == 1)
	{
		printf("%d\n", add);
		return (0);
	}

	for (m = 1; m < argc; m++)
	{
		char *arg = argv[m];

		int n = 0;

		while (arg[n])
		{
			if (!isdigit(arg[n]))
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		add += atoi(arg);
	}

	printf("%d\n", add);
	return (0);
}
