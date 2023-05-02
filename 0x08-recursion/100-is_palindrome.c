#include "main.h"

/**
 * is_palindrome - function that check if a string is a palindrome or not.
 * @s: string.
 * Return: return 1 if string is a palindrome 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, str_len(s)));
}

/**
 * str_len - function that return length of a string.
 * @s: string.
 * Return: return length of the string.
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * check - function that check string is a palindrome or not.
 * @s: string.
 * @i: iterator.
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
