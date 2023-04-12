#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: specific char
 * Return: NULL or pointer
 */


char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(c) * size);
		for (i = 0; i <= size; i++)
		{
			str[i] = c;
		}
		return (malloc(sizeof(c) * size));
	}

}
