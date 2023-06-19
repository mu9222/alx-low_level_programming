#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte.
 * @dest: string
 * @src: string that copy
 * @n: size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
