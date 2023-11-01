#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - A function that concatenate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string, or NULL on error
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int  i, j, k1 = 0, k2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[k1] != '\0')
		k1++;
	while (s2[k2] != '\0')
		k2++;

	c = (char *)malloc((k1 + k2 + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < k1; i++)
		c[i] = s1[i];

	for (j = 0; j < k2; j++)
		c[i + j] = s2[j];

	c[i + j] = '\0';

	return (c);
}
