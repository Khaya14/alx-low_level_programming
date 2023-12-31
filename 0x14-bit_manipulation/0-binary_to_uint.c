#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int.
 *
 * @b: binary number
 *
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len, temp;

	if (!b)
		return (0);

	num = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, temp = 1; len >= 0; len--, temp *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			num += temp;
		}
	}

	return (num);
}


