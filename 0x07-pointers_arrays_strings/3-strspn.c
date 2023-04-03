#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: character
 * Return: length of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}

	return (j);
}
