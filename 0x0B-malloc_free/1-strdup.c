#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * containing a duplicate of the string passed as a parameter
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, fir = 0;

	if (str == NULL)
		return (NULL);

	while (str[fir])
		fir++;

	dup_str = malloc(sizeof(char) * (fir + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < fir; i++)
		dup_str[i] = str[i];

	dup_str[fir] = '\0';

	return (dup_str);
}
