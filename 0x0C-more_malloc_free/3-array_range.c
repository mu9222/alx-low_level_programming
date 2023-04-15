#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - function creates an array of integers
 * @min: minimum size
 * @max: maximum size
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
