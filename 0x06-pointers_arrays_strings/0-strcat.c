include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: The destination string
 * @src: The Source string
 *
 * Return: A string.
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

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

	return (i);
}
