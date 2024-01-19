#include "main.h"

/**
 * _strcat - appends src to the dest string
 * 
 * @dest: string to append by src
 * src: string to append to dest
 *
 * Return: address of dest
 */

char *_strcat(char *dest, char *src)
{
	int k, m;

	k = m = 0;
	while (*(dest + k))
		k++;
	while ((*(dest + k) = *(src + m)))
	{
		k++;
		m++;
	}
	return (dest);
}
