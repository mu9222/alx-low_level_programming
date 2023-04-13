#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of array
 * Return: pointer to allocate memory space
 */


void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	else
	{
		return (str);
	}
}
