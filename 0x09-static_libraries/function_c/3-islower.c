#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function that checks for lowercase character
 * @c: the number to be checked
 * Return: on lower c = 1 and c = 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
