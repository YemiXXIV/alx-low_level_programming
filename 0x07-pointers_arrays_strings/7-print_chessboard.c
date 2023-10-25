#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A functions that prints the chessboard
 * @a: 2D array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; jn++)
		{
		_putchar(a[i][j]);
	}
		_putchar('\n');
	}
}
