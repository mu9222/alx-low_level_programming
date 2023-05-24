#include <stdio.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: decimal number.
 * @index: index of bit.
 * Return: 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
