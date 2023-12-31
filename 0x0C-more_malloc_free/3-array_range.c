#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 *
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ar = malloc(sizeof(int) * l);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < l; i++, min++)
		ar[i] = min;

	return (ar);
}
