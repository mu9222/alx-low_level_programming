#include "main.h"

/**
 * _strcpy - function that reverses a string
 * @dest: first pointer
 * @src: second pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
