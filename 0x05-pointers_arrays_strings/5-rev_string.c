#include "main.h"
/**
 *rev_string - A function that reverses a string
 *@s: The string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	int beginning = 0;
	int end;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (beginning < end)
	{
		char temp = s[beginning];

		s[beginning] = s[end];
		s[end] = temp;
		beginning++;
		end--;
	}
}
