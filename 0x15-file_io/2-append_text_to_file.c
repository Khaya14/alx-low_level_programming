#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: the filename
 * @text_content: the added content
 *
 * Return: If file exists, 1. If files dont exist, -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fname;
	int temp;
	int rite;

	if (!filename)
		return (-1);

	fname = open(filename, O_WRONLY | O_APPEND);

	if (fname == -1)
		return (-1);

	if (text_content)
	{
		for (temp = 0; text_content[temp]; temp++)
			;

		rite = write(fname, text_content, temp);

		if (rite == 1)
			return (-1);
	}

	close(fd);

	return (1);
}
