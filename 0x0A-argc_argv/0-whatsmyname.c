#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line
 *@argc:  holds number of arguments
 * @argv: hold array of arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);

}
