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
	char *create;
	unsigned int i;

	if (size == 0)
		return ("NULL");

	create = malloc(sizeof(c) * size)

	if (create == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		create[i] = c;

	return (create);
}
