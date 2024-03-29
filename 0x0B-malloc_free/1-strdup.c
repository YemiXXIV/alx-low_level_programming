#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Diplocate a string using malloc
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if it fao;s
 */

char *_strdup(char *str)
{
	char *j;
	unsigned int l = 0;
	unsigned int k;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	j = (char *)malloc((l + 1) * sizeof(char));

	if (j == NULL)
		return (NULL);

	for (k = 0; k <= l; k++)
		j[k] = str[k];

	return (j);
}
