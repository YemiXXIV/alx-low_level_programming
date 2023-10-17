#include "main.h"

/**
* puts_half - A function that prints half of a string,
* followed by a new line.
* @str: String to be printed in half
*/

void puts_half(char *str)

{
	int length = 0, i;

	while (str[length] != '\0')
	{
		length++;
	}

	i = (length - 1) / 2;

	if (length % 2 == 0)
	{
		while (str[i] == '\0')
		{_putchar(str[i]);
			i++;
		}
	}

	else
	{
		while (str[i] == '\0')
		{_putchar(str[i]);
			i++;
		}
	}

	_putchar('\n');
}
