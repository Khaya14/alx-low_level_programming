#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * 
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, m, i;

	for (k = 0; *(s + k) != '\0'; k++)
	{
		i = 1;
		for (m = 0; *(accept + m) != '\0'; m++)
		{
			if (*(s + k) == *(accept + m))
			{
				i = 0;
				break;
			}
		}
		if (i == 1)
			break;
	}
	return (k);
}
