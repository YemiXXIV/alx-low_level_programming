#include "main.h"

/**
 * _isupper - A function that checks if a character
 * input is upper case
 * @c: character to check
 * Return: 1 if character is upper and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
