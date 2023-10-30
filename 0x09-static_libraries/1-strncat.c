#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: number ofbytes to concatenate
 *
 * Return:dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int o;
	char *k = dest;

	while (*k != '\0')
	{
		k++;
	}

	for (o = 0; o < n && *src != '\0'; o++)
	{
		*k = *src;
		src++;
		k++;
	}

	*k = '\0';

	return (dest);
}
