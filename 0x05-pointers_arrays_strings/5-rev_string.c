#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the pointer
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char rev[100];

	while (s[i] != '\0')
	{
		rev[i] = s[i];
		i++;
	}
	i--;
	for (; i >= 0 ; i--)
	{
		s[j] = rev[i];
		j++;
	}
}
