#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value of the int from 402 to 98 via a pointer
 *
 * @n: Pointer to an int.
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	*p = 98;
	printf("n=%d\n", n);
	return (0);
}
