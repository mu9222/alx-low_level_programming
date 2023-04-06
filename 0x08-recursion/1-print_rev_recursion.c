#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in inverse.
 * @s: string
 */

void _print_rev_recursion(char *s)
{

	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
