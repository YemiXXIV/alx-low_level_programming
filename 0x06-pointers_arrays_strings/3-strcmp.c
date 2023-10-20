#include "main.h"

/**
 * _strcmp - A function that compares two strings
 *@s1: First String
 *@s2: Second String
 *
 * Return: Always 0 if strings are equal,
 * a negative value if s1 < s2 , and a positive value if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
