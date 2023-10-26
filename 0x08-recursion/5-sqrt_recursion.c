#include "main.h"

/**
 * _sqrt_recursion - A function that
 * returns the natural square root of a number
 * @n: The integer
 *
 * Return: if n is not a natural square root, return -1
 * The natural square root of n if otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	{
		return (sqrt_recursive(n, 0));
	}

}
/**
 * sqrt_recursive - Recursive function to find the square root.
 * @n: Number to find the square root
 * @g: Square root guesses
 *
 * Return: g if the square root if found, -1 if not
 */
	int sqrt_recursive(int n, int g)
	{
		if (g * g > n)
		{
			return (-1);
		}

		if (g * g == n)
		{
			return (g);
		}

		{
			return (sqrt_recursive(n, g + 1));
		}
	}
