#include "main.h"

/**
 *_strpbrk - A function that searches a string
 * for any of a set of bytes.
 *@s: String to be searched
 *@accept: bytes
 *
 * Return: length of prefix string
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
