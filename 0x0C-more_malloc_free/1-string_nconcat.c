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
	unsigned int i = 0, j = 0, k = 0, size_s1 = 0, size_s2 = 0;
	char *c;

	while (s1 && s1[size_s1])
		size_s1++;

	while (s2 && s2[size_s2])
		size_s2++;

	if (n < size_s2)
		c = malloc(sizeof(char) * (size_s1 + n + 1));
	else
		c = malloc(sizeof(char) * (size_s1 + size_s2 + 1));

	if (c == NULL)
		return (NULL);

	while (i < size_s1)
	{
		c[i] = s1[i];
		i++;
	}
	while (n < size_s2 && i < (size_s1 + n))
		c[i++] = s2[k++];

	while (n >= size_s2 && i < (size_s1 + size_s2))
		c[i++] = s2[j++];

	c[i] = '\0';
	return (c);
}
