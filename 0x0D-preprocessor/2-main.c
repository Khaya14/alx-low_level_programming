#include <stdlib.h>
#ifdef MAIN_C
#define MAIN_C

/**
 * main - function that will preint the file that is being run.
 *
 * Return: Nothing
 */
int main(void)
{
	FILE = *fh;
	char c;

	fp = fopen(__FILE__, "r");

	while ((c = getc(fp)) != EOF)
		putchar(c);

	fclose(fp);
	return (0);
}
