#include "function_pointers.h"

/**
 * array_iterator - A function that executes a
 * function given as a parameter on each element of an array.
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to be executed
 *
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
