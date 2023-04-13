#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, size_s1 = 0, size_s2 = 0;
	char *c;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[size_s1] != '\0')
		{
			size_s1++;
		}
		while (s2[size_s2] != '\0')
		{
			size_s2++;
		}
		j = size_s1 + size_s2 + 2;
		c = malloc(sizeof(char) * j);
		if (c == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size_s1; i++)
			{
				c[i] = s1[i];
			}
			for (i = size_s1, k = 0; i < j; i++, k++)
			{
				c[i] = s2[k];
			}
			return (c);
		}
	}

}