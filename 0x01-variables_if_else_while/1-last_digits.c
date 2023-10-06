#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determine which numbers are < 5 & which aren't.
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	m = n % 10;
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5", n, m);
	else if (n < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");

	return (0);
}
