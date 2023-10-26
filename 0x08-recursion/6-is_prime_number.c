#include "main.h"

/**
 * _prime_number - check if number is a prime
 * @n: number to be checked
 * @r: random number
 *
 * Return: 1 if prime its a prime number, 0 if otherwise.
 */

int _prime_number(int n, int r)
{
	if (n % r == 0)
	{
		if (n == r)
			return (1);
		else
			return (0);
	}
	{
		return (_prime(n, r + 1));
	}
}


/**
 * is_prime_number - A function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: The integer to be inputted
 *
 * Return: 1 if the input integer is a prime number
 * 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	{
		return (_prime_number(n, 2));
	}

}
