#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the function.
 *
 * @ac: argument count
 * @av: array
 *
 * Return: If successful, 0.
 */

int main(int ac, char *av[])
{
	int fname, ftemp, fstat, fwr;
	mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fname = open(av[1], O_RDONLY);
	if (fname == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	ftemp = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (ftemp == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	fstat = 1;
	while (fstat)
	{
		fstat = read(fname, buffer, BUFSIZE);
		if (fstat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (fstat > 0)
		{
			fwr = write(fname, buffer, fstat);
			if (fwr != fstat || fwr == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(fname) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fname %d\n", fname), exit(100);
	if (close(ftemp) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fname %d\n", ftemp), exit(100);
	return (0);
}
