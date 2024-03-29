#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: The unsigned long integer
 * @index: The index of the bit to retrieve starting from 0
 *
 * Return: The value of the bit at the specified index,
 * or -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}
