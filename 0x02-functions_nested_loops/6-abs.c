#include "main.h"

/**
 * _abs - To print absolute value of integer.
 * @n: integer that will be printed
 * Return: absolute value of integer.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * (-1);
		return (n);
	}

	return (n);
}
