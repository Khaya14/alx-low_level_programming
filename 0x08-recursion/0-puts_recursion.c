#include "main.h"

void _puts_recursion(char *s);
/**
 * _puts_recursion - prints a string & adds a new line
 * @s - string
 * Return: no return.
 */
{ 
	if (*s =! '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
	

