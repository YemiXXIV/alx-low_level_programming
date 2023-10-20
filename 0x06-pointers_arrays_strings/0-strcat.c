#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: The destination string
 * @src: The Source string
 *
 * Return: A pointer to the string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

        while (dest[i] != '\0')
	{
	       i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (int k = 0; k < j; k++)
	{
		dest[i + k] = src[k];
	}

	dest[i + j] = '\0';

	return (dest);
}