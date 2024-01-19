#include "main.h"

/**
 * _memcpy - copies memory area
 * 
 * @dest: the pointer to return
 * @src: source memory area
 * @n: bytes from memory area to copy
 *
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
