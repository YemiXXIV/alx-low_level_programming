#include "main.h"

/**
 *_strstr - A function that locates a substring
 *@haystack: Main string
 *@needle: Substring to be found
 *
 * Return: Pointer to the located substring
 * or NULL if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start_haystack = haystack;

		while (*needle == *haystack && *needle)
		{
			haystack++;
			needle++;
		}

		if (!*needle)
			return (start_haystack);
		haystack = start_haystack + 1;
	}

	return (NULL);
}
