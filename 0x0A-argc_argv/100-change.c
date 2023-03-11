#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int t, c;
	unsigned int m;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (t > 1)
		{
			for (m = 0; m < sizeof(cents[m]); m++)
			{
				if (t >= cents[m])
				{
					c += t / cents[m];
					t = t % cents[m];
				}
			}
		}
		if (t == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", c);
	return (0);
}
