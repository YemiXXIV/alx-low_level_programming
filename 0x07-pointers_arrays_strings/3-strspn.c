#include "main.h"

/**
 * _strspn - A function that gets the length
 * of a prefix substring
 * @s: String to be searched
 * @accept: String containing characters to match against
 *
 * Return:Number of bytes in the initial segment of s
 * which contains only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int m;

	while (*s)
	{
		m = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				m = 1;
				break;
			}
			accept++;
		}

		if (!m)
			break;

		c++;
		s++;
	}

	return (c);
}
