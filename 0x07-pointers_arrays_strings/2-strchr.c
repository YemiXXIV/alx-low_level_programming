#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 *@s: String to be searched.
 *@c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the
 * character c or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ((*s == c) ? s : NULL);
}
