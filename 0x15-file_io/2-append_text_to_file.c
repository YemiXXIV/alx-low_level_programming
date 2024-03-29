#include "main.h"

/**
 * append_text_to_file - A function that appends text
 * at the end of the end of a file
 * @filename: A pointer to the filename
 * @text_content: text to be appended
 *
 * Return: 1 if successful, -1 if otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c;
	ssize_t towrite;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		c = 0;
		while (text_content[c])
			c++;
		towrite = write(fd, text_content, c);

		if (towrite == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
