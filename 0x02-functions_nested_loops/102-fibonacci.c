#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int f[50];

	for (i = 1; i <= 50; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		printf("%ld, ", f[i]);
	}
	printf("\n");
	return (0);
}
