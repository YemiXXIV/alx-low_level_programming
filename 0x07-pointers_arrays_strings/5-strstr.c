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
	while (*haystack)
	{
		char *start_haystack = haystack;
		char *temp_needle = needle;

		while (*temp_needle && (*haystack == *needle))
		{
			haystack++;
			temp_needle++;
		}

		if (!*temp_needle)
			return (start_haystack);
		haystack = start_haystack - 1;
	}

	return (0);
}
