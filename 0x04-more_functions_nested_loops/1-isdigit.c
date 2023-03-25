#include <ctype.h>

/**
 * _isdigit - function that check if the passed character is a digit or not
 * @c: the number to be checked
 * Return: on digit c = 1 and c = 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	return (0);
}
