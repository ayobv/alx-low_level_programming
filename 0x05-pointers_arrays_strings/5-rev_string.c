#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end)
		end++;

	end--;

	while (start < end)
	{
		char tmp = *start;
		*start++ = *end;
		*end-- = tmp;
	}
}
