#include <stdio.h>

/**
 * print_sign - function that prints the sign of a number
 * @n: the number to be int print_sign(int n)
 * Return: 1 at positive, 0 at zero, -1 at negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}

}
