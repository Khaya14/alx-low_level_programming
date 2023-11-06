#include <stdio.h>
#ifdef MAIN_C_
#define MAIN_C_

/**
 * main - function that will preint the file that is being run.
 *
 * Return: Nothing
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

#endif
