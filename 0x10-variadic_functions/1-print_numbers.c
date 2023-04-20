#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_number - function that prints numbers, followed by a new line.
 * @separator: separator between elements
 * @n: number of parameters
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);

		if (i == (n - 1))
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}

	va_end(ap);
	printf("\n");
}
