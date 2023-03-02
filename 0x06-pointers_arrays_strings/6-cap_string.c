#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */

char *cap_string(char *str)
{
	int i;
	
	/* Capitalize first character */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - ('a' - 'A');
	}

	/* Capitalize subsequent characters after separators */
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
					str[i - 1] == '\n' || str[i - 1] == ',' ||
					str[i - 1] == ';' || str[i - 1] == '.' ||
					str[i - 1] == '!' || str[i - 1] == '?' ||
					str[i - 1] == '"' || str[i - 1] == '(' ||
					str[i - 1] == ')' || str[i - 1] == '{' ||
					str[i - 1] == '}')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
	}

	return (str);
}
