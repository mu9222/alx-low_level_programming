#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: matrix
 * @size: size of matrix
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 = sum1 + a[i * size + i];
			}
			if (j == (size - 1 - i) || (j == (size - 1 - i) && j == i))
			{
				sum2 = sum2 + a[i * size + (size - i - 1)];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);

}

