#include *main.h*
#include <unistd.h>

/**
 *
 * _putchar - writes character c to stdout
 *
 * Return 0 (success)
 */
int__putchar(char c)
{
        return (write(1, &c, 1));
}
