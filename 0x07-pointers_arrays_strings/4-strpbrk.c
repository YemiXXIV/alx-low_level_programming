#include "main.h"

/**
 *_strpbrk - A function that searches a string
 * for any of a set of bytes.
 *@s: String to be searched
 *@accept:
 *
 * Return: length of prefix
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
