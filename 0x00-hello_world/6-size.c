#include <stdio.h>
/**
 * main - prints out sizes of data types
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu\n", sizeof(a)"byte(s)");
	printf("Size of an int: %lu\n", sizeof(b)"byte(s)");
	printf("Size of a long int: %lu\n", sizeof(c)"byte(s)");
	printf("Size of a long long int: %lu\n", sizeof(d)"byte(s)");
	printf("Size of a float: %lu\n", sizeof(e)"byte(s)");
	return (0);
}
