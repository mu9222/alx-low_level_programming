#include "main.h"

/**
 * _strpbrk - function that  locates a character in a string.
 * @s: string
 * @accept: string
 * Return: &s[i] or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
