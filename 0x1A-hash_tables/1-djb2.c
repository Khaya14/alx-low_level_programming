#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count_h;

	hash = 5381;
	while ((count_h = *str++))
		hash = ((hash << 5) + hash) + count_h; /* hash * 33 + count */

	return (hash);
}
