#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index.
 *
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if it is successful, -1 if it encounters an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
