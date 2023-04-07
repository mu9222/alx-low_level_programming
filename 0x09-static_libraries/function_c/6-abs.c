#include <stdio.h>
#include "main.h"

/**
 * _abs - function that prints the sign of a number
 * @n: the number to be int print_sign(int n)
 * Return: 1 at positive, 0 at zero, -1 at negative
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}

}
