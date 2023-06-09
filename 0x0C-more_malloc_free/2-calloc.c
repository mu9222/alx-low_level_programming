#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - function creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @nmemb: type
 * Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(size * nmemb);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		str[i] = 0;
	}
	return (str);
}
