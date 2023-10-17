#include "main.h"

/**
* puts_half - A function that prints half of a string,
* followed by a new line.
* @str: String to be printed in half
*/

void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}

	else
	{
		start = (length - 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	i++;
}
_putchar('\n');
}
