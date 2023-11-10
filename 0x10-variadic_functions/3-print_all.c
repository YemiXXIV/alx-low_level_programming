#include "variadic_functions.h"

/**
 * print_char - A function that prints char
 * @arg: Argument passed
 */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - A function that prints int
 * @arg: argument
 */

void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * print_float - A function that prints float
 * @arg: argument
 */

void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - A function that prints strings.
 * @arg: argument
 */

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - A function that prints anything.
 * @format: format specifier
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i, j;
	char *s = "";

	print data[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);

	i = 0;
	while (format && *(format + i))
	{
		j = 0;
		while (j < 4 && *(format + i) != *(data[j].c))
		{
			j++;
		}

		if (j < 4)
		{
			printf("%s", s);
			data[j].f_pr(arg);
			s = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(arg);
}
