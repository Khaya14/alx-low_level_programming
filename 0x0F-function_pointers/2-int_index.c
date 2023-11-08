#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: input array
 * @size: size of array
 * @cmp: pointer to the function thats going to be used when
 * comparing values.
 *
 * Return: index of first element for which the cmp function
 * doesn't return 0. If no elements match, return -1. If size <= 0,
 * return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (in = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
