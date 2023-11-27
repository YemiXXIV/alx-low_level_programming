#include "main.h"

/**
 * read_textfile - A function that reads a text file
 * and prints it to POSIX.
 * @filename: A pointer to the file to be read
 * @letters: Number of letters to be read and printed
 *
 * Return: Number of letters read and printed and O if otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	size_t toread, towrite;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	toread = read(fd, c, letters);
	towrite = write(STDOUT_FILENO, c, toread);

	close(fd);

	free(c);

	return (towrite);
}
