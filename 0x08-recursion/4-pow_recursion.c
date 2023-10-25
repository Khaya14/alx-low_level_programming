#include "main.h"

/**
 * _pow_recursion - function that returns a value that has a power
 *
 * @y: base value
 * @x: exponent value
 *
 * Return: power number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
