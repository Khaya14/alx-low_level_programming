#include "main.h"

/**
 * _strncat - concatenates two strings,
 * 
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * 
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int str1 = 0, str2 = 0;

	while (*(dest + str1) != '\0')
	{
		str1++;
	}

	while (str2 < n)
	{
		*(dest + str1) = *(src + str2);
		if (*(src + str2) == '\0')
			break;
		str1++;
		str2++;
	}
	return (dest);
}
