#include "main.h"

/**
 * _strspn - A function that gets the length
 * of a prefix substring
 * @s: String to be searched
 * @accept: String containing characters to match against
 *
 * Return: Number of bytes in the initial segment of s
 * which contains only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int matched = 1;

	while (*s && matched)
	{
		matched = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				matched = 1;
				break;
			}
		}

		if (matched)
			s++;
	}

	return (c);
}
