#include "main.h"

/**
 * _memset - fills memory with constant values
 * 
 * @s: pointer to char params
 * @b: constant byte
 * @n: byte of mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
