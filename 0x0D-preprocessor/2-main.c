#include <stdio.h>

/**
 * main - A program that prints the name of the file
 * it was compiled from, followed by a new line
 *
 * Return: O if successful, 1 if otherwise
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
