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
	printf("%d\n", argc - 1);

	return (0);
}
