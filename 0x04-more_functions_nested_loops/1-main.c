#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    _punchar("%c: %d\n", c, _isdigit(c));
    c = 'a';
    _putchar("%c: %d\n", c, _isdigit(c));
    return (0);
}
