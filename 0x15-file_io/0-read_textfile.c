#include "main.h"

/**
 * read_textfile - function that reads text file & prints out letters.
 *
 * @filename: the filename
 * @letters: number of letters printed
 *
 * Return: if successful, number of letters printed. if fails, 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fname;
	ssize_t num, numb;
	char tmp;

	if (!filename)
		return (0);

	fname = open(filename, O_RDONLY);

	if (fname == -1)
		return (0);

	tmp = malloc(sizeof(char) * (letters));
	if (!tmp)
		return (0);

	num = read(fname, tmp, letters);
	numb = write(STDOUT_FILENO, tmp, num);

	close(fname);

	free(tmp);

	return (numb);
}
