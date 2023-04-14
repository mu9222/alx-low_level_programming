#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, size_s1 = 0, size_s2 = 0;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size_s1] != '\0')
	{
		size_s1++;
	} while (s2[size_s2] != '\0')
	{
		size_s2++;
	}
	(n < size_s2) ? (j = size_s1 + n + 1) : (j = size_s1 + size_s2 + 1);
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
	}
	c[i] = '\0';
	return (c);
}
