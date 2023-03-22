#include "main.h"

/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: the function to use to print the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char))
{
	while (*name != '\0')
	{
		f(*name);
		name++;
	}
}
