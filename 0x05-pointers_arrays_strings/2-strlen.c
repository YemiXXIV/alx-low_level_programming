#include "main.h"

/**
 * 2-strlen - returns the length of a string
 * @s: The string with length thaat will be calculated.
 * Return: 0
 */

int_strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
