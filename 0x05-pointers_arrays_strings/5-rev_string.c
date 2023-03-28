#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the pointer
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[j++])
	{
		i++;
	}
	for (j = i - 1; j >= i / 2; j--)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
	}
}
