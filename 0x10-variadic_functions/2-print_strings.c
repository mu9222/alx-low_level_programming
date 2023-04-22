#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separator between elements
 * @n: number of parameters
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (separator == NULL)
			printf("%s", str);
		if (str == NULL)
			printf("(nil)");
		if (i == (n - 1))
			printf("%s", str);
		printf("%s%s", str, separator);
		va_end(ap);
	}
	printf("\n");
}
