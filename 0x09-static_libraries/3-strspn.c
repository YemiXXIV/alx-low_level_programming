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
	unsigned int i, j, k;

	i = j = k = 0;

	if (*s == '\0' || *accept == '\0')
	{
		return (k);
	}

	while (s[j] != ',')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				k++;
			}
			i++;
		}
		j++;
	}

	return (k);
}
