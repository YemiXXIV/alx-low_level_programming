#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: Destination string
 * @src: Source string
 *@n: Number of characters to copy
 *
 * Return: A pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *m = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (m);
}
