#include "main.h"
#include <stddef.h>

/**
 * _strlen - calculate the length of a string recursively
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen(s + 1) + 1);
}
/**
 * _is_palindrome - check if a string is a palindrome recursively
 * @s: the string to check
 * @i: the start index
 * @j: the end index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _is_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);

	return (_is_palindrome(s, i + 1, j - 1));
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
		return (0);

	len = _strlen(s);

	return (_is_palindrome(s, 0, len - 1));
}
