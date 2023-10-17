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
	int start = (length + 1) / 2;

	while (str[length] != '\0')
	{
		length++;
	}

	while (str[i] != '\0')
	{
		if (i >= start)
		{_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
