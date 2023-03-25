#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @n: the number
 * Return: n % 10
 */

int print_last_digit(int n)
{

	if (n < 0)
	{
		_putchar(-1 * (n % 10));
		return (-1 * (n % 10));
	}
	else
	{
		_putchar(n % 10);
		return (n % 10);
	}
}
