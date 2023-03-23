#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: A function that takes a char* argument and returns void
 *
 * Description: This function prints the specified name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
