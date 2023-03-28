#include "main.h"

/**
 * _puts - function that returns the length of a string
 * @str: the pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
