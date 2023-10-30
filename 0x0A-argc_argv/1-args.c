#include <stdio.h>

/**
 * main - A program that prints the number of
 * arguments passed into it
 *@argc: Number of argument passed into it
 *@argv: Array of arguments passed into it
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int m = 0;

	printf("%d\n", argc - 1);

	if (argc > m)
	{
		printf("%s", argv[m]);
	}

	return (0);
}
