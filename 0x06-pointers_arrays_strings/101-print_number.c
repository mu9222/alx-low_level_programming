#include "main.h"

/**
 * print_number - function that encodes a string using rot13.
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((a % 10) + '0');
}
