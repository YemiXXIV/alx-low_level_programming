#include "main.h"

/**
 * _memcpy - A function that copies memorry area
 *@dest:Pointer to the destination memory area.
 *@src: Pointer to the source memory area.
 *@n:Number of bytes to copy.
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
