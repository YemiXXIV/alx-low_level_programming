#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit
 * to 0 at a given index.
 * @n: Pointer to the unsigned long integer
 * @index: The index of the bit to clear starting from 0
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	*n = *n & (~mask);

	return (1);
}
