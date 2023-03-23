#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char.
 * @args: the va_list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer.
 * @args: the va_list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float.
 * @args: the va_list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string.
 * @args: the va_list of arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	const char types[] = "cifs";
	void (*print_fn)(va_list);

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				print_fn = (j == 0) ? print_char :
					(j == 1) ? print_int :
					(j == 2) ? print_float :
					print_string;
				print_fn(args);
				if (format[i + 1] != '\0' && types[j] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
