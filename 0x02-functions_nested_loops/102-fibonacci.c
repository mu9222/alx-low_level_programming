#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned int f[51] = {0};

	for (i = 1; i <= 50; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		printf("%d, ", f[i]);
	}
	printf("\n");
	return (0);
}
