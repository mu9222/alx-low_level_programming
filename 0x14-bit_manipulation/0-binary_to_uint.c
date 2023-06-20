#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: number to convert.
 * Return: number after conversion.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conv_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		conv_val = 2 * conv_val + (b[i] - '0');
	}

	return (conv_val);
}
