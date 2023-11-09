#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name
 * @name: Name to be printed
 * @f: Pointer to function
 *
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}}
