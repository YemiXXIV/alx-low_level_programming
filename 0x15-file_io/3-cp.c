#include "main.h"

/**
 * file_from - A function to open and read a file
 * @arg1: Pointer to the file
 * @buffer: Pointer to the temporary buffer
 *
 * Return: A pointer to the buffer
 */

char *file_from(char *arg1, char *buffer)
{
	int f, cf;
	ssize_t p, b = 0;

	f = open(arg1, O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	while ((p = read(f, buffer + b, 1024)) > 0)
	{
		b = b + p;
	}
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	cf = close(f);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	return (buffer);
}

/**
 * main - A function to copy the content from a file to another file
 * @argc: Number of arguments
 * @argv: A pointer to an array of arguments
 *
 * Return: 1 if successful, -1 if otherwise
 */

int main(int argc, char **argv)
{
	int fs, cs, count;
	ssize_t w;
	char *r;
	char buffer[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r = file_from(argv[1], buffer);
	fs = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (r[count])
		count++;

	w = write(fs, r, count);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
		exit(99);
	}
	cs = close(fs);
	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs);
		exit(100);
	}
	return (1);
}
