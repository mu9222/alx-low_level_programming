#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: two string after concatenate them
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && k < n)
	{
		dest[i] = src[j];
		j++;
		i++;
		k++;
	}

	/*dest[i] = '\0';*/
	return (dest);
}
