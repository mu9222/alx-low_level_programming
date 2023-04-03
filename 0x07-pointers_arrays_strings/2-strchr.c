#include "main.h"

/**
 * _memcpy - function that  locates a character in a string.
 * @s: string
 * @c: character
 * Return: dest
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;
	char b;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			b = s[i];
			s[j] = b;
			j++;
		}
		i++;
	}
	return (s);
}
