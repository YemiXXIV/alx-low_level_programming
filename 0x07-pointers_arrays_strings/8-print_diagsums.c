#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals
 * of a square matrix of integers.
 * @a: array
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0,
	s2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			s1 += a[i];
		}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
		{
			s2 += a[i];
		}
	}
	printf("%d, %d\n", s1, s2);
}
