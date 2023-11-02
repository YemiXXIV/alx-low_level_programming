#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for
 * an array and initialize to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = (char *)malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
