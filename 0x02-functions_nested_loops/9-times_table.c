#include "main.h"

/**
 * times_table - To print the 9 times table.
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (a == 0)
			{
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			if (a != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
