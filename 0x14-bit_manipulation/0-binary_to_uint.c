#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one
 * or more chars in the string @b that is not 0 or 1 and @b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int result = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[1] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
		i++;
	}

	return (result);
}
