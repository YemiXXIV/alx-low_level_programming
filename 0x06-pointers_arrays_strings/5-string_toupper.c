#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase
 * @str: A pointer to the input string.
 *
 * Return: Pointer to the modified string
 */

char *string_toupper(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] >= 'z')
		{
			str[j] = str[j] - 32;
		}
		j++;
	}

	return (str);
}
