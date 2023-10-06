#include <stdio.h>

/**
 * main - Code begins here
 *
 * print alphabets in both lowercase & uppercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
