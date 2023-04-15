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
	unsigned int i, j = 0, k, size_s1 = 0, size_s2 = 0;
	char *c;

	while (s1[size_s1] != '\0')
	{
		size_s1++;
	} while (s2[size_s2] != '\0')
	{
		size_s2++;
	}
	(n < size_s2) ? (j = size_s1 + n) : (j = size_s1 + size_s2 + 1);
	c = malloc(sizeof(char) * j);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size_s1; i++)
	{
		c[i] = s1[i];
	}
	for (i = size_s1, k = 0; i < j; i++, k++)
	{
		c[i] = s2[k];
	}
	if (n < size_s2)
		c[i] = '\0';
	return (c);
}
