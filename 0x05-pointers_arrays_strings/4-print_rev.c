#include "main.h"

/**
 * print_rev - Prints a string but in reverse
 * @s: string to be reversed
 * Return: 0 if successful
 */

void print_rev(char *s)
{
	int i = 0, p;

	while (s[i] != '\0')
	{ i++;
	}

	p = i - 1;

	while (p >= 0)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
