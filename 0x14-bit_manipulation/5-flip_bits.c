#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: decimal number.
 * @m: decimal number.
 * Return: the number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclu = n ^ m;
	unsigned long int curr;
	int i, num_bits = 0;

	for (i = 63; i >= 0; i--)
	{
		curr = exclu >> i;
		if (curr & 1)
			num_bits++;
	}
	return (num_bits);
}
