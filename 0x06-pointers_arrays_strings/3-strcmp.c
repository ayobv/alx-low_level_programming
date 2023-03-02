#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * considered to be respectively less than, equal to, or greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else
	{
		return (s1[i]);
	}
}
