#include "main.h"

/**
 * print_triangle - function that prints line
 * @size: the size of triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 1; i < (size - j); i++)
			{
				_putchar(' ');
			}
			for (k = (size - j); k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
