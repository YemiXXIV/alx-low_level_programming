#include "function_pointers.h"

/**
 *int_index - A function that searches for an integer.
 * @array: Pointer to the array
 * @cmp: Pointer to the function to compare
 * @size: Number of elements in the array
 *
 * Return: index of the first element for which cmp function
 * does nto return 0, if no element matches or size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
