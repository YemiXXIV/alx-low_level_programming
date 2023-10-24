#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 *@s: Pointer to the memory area
 *@b: The constant byte
 *@n: Number of bytes
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);

}
