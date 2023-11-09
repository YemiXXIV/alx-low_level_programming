#include "3-calc.h"

/**
 * op_add - A function that add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (0);
}

/**
 * op_sub - A function that subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (0);
}

/**
 * op_mul - A function that multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (0);
}

/**
 * op_div - A function that divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_div(int a, int b)
{
	printf("%d\n", a / b);
	return (0);
}

/**
 * op_mod - A function that prints the modulo of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 if successful. 1 otherwise.
 */

int op_mod(int a, int b)
{
	printf("%d\n", a % b);
	return (0);
}
