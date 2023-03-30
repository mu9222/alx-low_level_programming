#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer number
 */

void print_number(int n)
{
	unsigned int l;

	if (n < 0)
	{
		l = -n;
		_putchar('-');
	}
	else
	{
		l = n;
	}

	if (l / 10)
	{
		print_number(l / 10);
	}
	_putchar((n % 10) + '0');
}
