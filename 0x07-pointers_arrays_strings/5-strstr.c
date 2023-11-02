#include "main.h"

/**
 *_strstr - A function that locates a substring
 *@haystack: Main string
 *@needle: Substring to be found
 *
 * Return: Pointer to the located substring
 * or 0 if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *s, *n;

	while (*haystack != '\0')
	{
		s = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (s);
		haystack++;

	}

	return ('\0');
}
