#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you will need to flip to get from one number to another
 * @n: The first unsigned long int integer
 * @m: The second unsigned long int integer
 *
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
