#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @n: the number
 * Return: n % 10
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
