#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i, start;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	for (i = start; i < len; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
