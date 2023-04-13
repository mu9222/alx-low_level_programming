#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL or pointer
 */


char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[size] != '\0')
		{
			size++;
		}
		size++;
		c = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			c[i] = str[i];
		}
		return (c);
	}

}
