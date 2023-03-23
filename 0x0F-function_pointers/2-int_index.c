#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first element for which cmp function does not return 0,
 * -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
