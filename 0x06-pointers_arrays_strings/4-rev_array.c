#include "main.h"

/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 * @a: Array of integers
 * @n: Number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int g, h;

	for (h = 0; h < n / 2; h++)
	{
		g = a[h];
		a[h] = a[n - h - 1];
		a[n - h - 1] = g;
	}
}
