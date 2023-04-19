#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
		if (!cmp(array[i]) && i == (size - 1))
			return (-1);
	}
	return (i);
}

