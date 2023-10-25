#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - A functions that prints a chessboard
 * @a: 2D array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
		_putchar(a[row][column]);
	}
		_putchar('\n');
	}
}
