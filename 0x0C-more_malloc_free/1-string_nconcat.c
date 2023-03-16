#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to use from s2
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		exit(98);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];
	
	new_str[i + j] = '\0';

	return (new_str);
}
