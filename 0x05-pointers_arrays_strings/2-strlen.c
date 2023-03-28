#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the pointer
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	while (s != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
