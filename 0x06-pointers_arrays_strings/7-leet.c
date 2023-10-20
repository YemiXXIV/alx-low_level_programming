#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 *@str: String to be encoded
 *
 * Return: A pointer to the string encoded
 */

char *leet(char *str)
{
	char *old = "aAeEoOtTlL";
	char *new = "4433007711";
	int m, n;

	for (m = 0; str[m] != '\0'; m++)
	{
		for (n = 0; old[n] != '\0'; n++)
		{
			if (str[m] == old[n])
			{
				str[m] = new[n];
				break;
			}
		}
	}

	return (str);
}
