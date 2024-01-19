#include "main.h"

/**
 * _strpbrk - searches through a string for any set of bytes.
 * 
 * @s: the first string to be searched.
 * @accept: the set of bytes to be searched for.
 * 
 * Return: If a set is matched
 * (a pointer to the byte in s that matches one of the
 * bytes in accept), or NULL if no such byte is found or matched
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int k, m;

	for (k = 0; *(s + k) != '\0'; k++)
	{
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + k) == *(accept + m))
				return (s + k);
		}
	}
	return ('\0');
}
