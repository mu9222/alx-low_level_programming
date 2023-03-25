#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic character
 * @c: the number to be checked
 * Return: on alphabetic character 1 and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
