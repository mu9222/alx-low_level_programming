#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: the pointer
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
