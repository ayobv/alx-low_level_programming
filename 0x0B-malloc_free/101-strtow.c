#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * free_words - Frees an array of words
 * @words: The array of words to free
 */
void free_words(char **words)
{
	int i;

	for (i = 0; words[i]; i++)
		free(words[i]);

	free(words);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of words, or NULL if failed
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_words(str);

	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < count; i++)
	{
		while (str[k] == ' ')
			k++;

		n = 0;

		for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
			n++;

		words[i] = malloc(sizeof(char) * (n + 1));

		if (words[i] == NULL)
		{
			free_words(words);
			return (NULL);
		}

		for (j = 0; j < n; j++)
			words[i][j] = str[k + j];

		words[i][j] = '\0';

		k += n;
	}

	words[i] = NULL;

	return (words);
}
