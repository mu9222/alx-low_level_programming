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
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (malloc(sizeof(c) * size));
	}

}
