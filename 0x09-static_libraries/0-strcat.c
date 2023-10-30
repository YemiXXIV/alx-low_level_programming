#include "main.h"

/**
 * _strcat - A function that concatenate two strings.
 * @dest: The first string
 * @src: The second string
 *
 * Return: A string
 */

char *_strcat(char *dest, char *src)
{
	char *m = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (m);
}
