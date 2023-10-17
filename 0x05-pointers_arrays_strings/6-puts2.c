#include "main.h"

/**
 *puts2 - A function that prints every other character of a string,
 *starting with the first character, followed by a new line
 * @str: String to be printed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;

		if (str[i] != '\0')
		{
			i++;
		}
	}

	putchar('\n');
}
