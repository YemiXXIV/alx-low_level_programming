#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: number of arguments passed
 * @argv: Array of argument passed
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
