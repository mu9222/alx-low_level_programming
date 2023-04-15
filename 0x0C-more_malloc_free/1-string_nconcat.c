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

	while (s1 && s1[size_s1])
	{
		size_s1++;
	} while (s2 && s2[size_s2])
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
	c[i] = '\0';
	return (c);
}
/*char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}*/
