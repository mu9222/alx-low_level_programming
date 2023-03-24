#include "main.h"


/**
 * print_alphabet_x10 - print all alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int j, i;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
