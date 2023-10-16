#include "main.h"

/**
 * swap_int - To swap the value of two integers via pointers
 * @a: First pointer.
 * @b: Second pointer.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
