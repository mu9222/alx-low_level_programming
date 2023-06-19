#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: the number to be checked
 * Return: on upper c = 1 and c = 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
