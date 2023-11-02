#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: number of bytes from second string
 *
 * Return: 0 if the function fails, pointer if otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j] != '\0')
	{
		j++;
	}

	pointer = malloc((j * sizeof(char)) + n + 1);
	if (pointer == NULL)
		return (0);

	for (i = 0; i < j + n; i++)
	{
		if (!(i >= j))
			pointer[i] = s1[i];
		else
			pointer[i] = s2[i - j];
	}
	pointer[i] = '\0';
	return (pointer);

}

