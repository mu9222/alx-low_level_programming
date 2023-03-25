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
		return (-1 * (n % 10));
	}
	else 
	{
		return (n % 10);
	}
}
