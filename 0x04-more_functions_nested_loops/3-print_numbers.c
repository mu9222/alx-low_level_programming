#include <ctype.h>

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i);
		i++;
	}
	putchar("\n");
}
