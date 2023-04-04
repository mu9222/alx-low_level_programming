#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: string
 * Return: pointer or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] >= '\0'; i++)
		{
			if (haystack[i - 1] == needle[i - 1] && haystack[i] == needle[i] && needle[i + 1] == '\0')
				return (needle);
		}
		haystack++;
	}
	return (0);
}
