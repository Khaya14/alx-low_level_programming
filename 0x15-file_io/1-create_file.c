#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename:the filename
 * @text_content: content written into the file
 *
 * Return: If successful, 1. if fails, -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fname;
	int temp;
	int rite;

	if (!filename)
		return (-1);

	fname = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fname == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (temp = 0; text_content[temp]; temp++)
		;
	rite = write(fname, text_content, temp);

	if (rite == -1)
		return (-1);

	close(fname);

	return (1);
}
