#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of number.
 *
 * @n: input number
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + _sqrt_recursion(n, c + 1));
}
