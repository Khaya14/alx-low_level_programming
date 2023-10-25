#include "main.h"

/**
 * _pow_recursion - function that returns a value that has a power
 *
 * @y: input value
 * @x: power value
 *
 * Return: power number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)
	else
		return (y * pow(y++));
}
