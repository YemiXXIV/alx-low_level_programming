#include "main.h"
#include <stdio.h>

/**
 *print_array - Function to print elements of an array of integers
 *@a: The array to be printed.
 *@n: The number of elements to print.
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0;
	     s < n;
	     s++)
	{
		printf("%d", a[s]);

		if (s < n - 1)
		{
			printf(", ");
				}
	}

	printf("\n");
}
