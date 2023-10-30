#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: storage char
 *
 * Return: NULL, if size is 0 or a pointer if it fails.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return ("NULL");

	cr = malloc(sizeof(c) * size)

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
