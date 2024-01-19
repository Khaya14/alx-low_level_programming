#include "main.h"

/**
 * _strchr - locates character in string
 * 
 * @s: source string
 * @c: character to find
 * 
 * Return: the string from character found
 */

char *_strchr(char *s, char c)
{
	int p = 0, w;

	while (s[p])
	{
		p++;
	}

	for (w = 0; w <= p; w++)
	{
		if (c == s[w])
		{
			s += w;
			return (s);
		}
	}

	return ('\0');
}
