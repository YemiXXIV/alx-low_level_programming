#include "main.h"

/**
 * jack_bauer - To print 24 hours in minutes.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int j;

	for (j = 0; j < 24; j++)
	{
		int k;

		for (k = 0; k < 60; k++)
		{
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar(':');
			_putchar('0' + (k / 10));
			_putchar('0' + (k % 10));
			_putchar('\n');
		}
	}
}
