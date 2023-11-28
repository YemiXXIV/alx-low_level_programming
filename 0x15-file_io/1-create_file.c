#include "main.h"

/**
 * create_file - A function thatcreates a file
 * @filename: A pointer to the filename
 * @text_content: A pointer to the text content
 *
 * Return: 1 if successfyl, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t towrite;
	int c;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	c = 0;
	while (text_content[c])
		c++;

	towrite = write(fd, text_content, c);

	if (towrite == -1)
		return (-1);

	close(fd);

	return (1);
}
