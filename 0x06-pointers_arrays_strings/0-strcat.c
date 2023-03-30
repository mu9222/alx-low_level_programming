#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: two string after concatenate them
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (k = 0; k >= j ; k++)
	{
		dest[i] = src[k];
	}
	return (dest);
}
