#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i;
	unsigned long int f[100] = {0};

	for (i = 1; i <= 51; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (i == 51)
		{
			printf("%ld", f[i]);
		break;
		}
		else
		{
			printf("%ld, ", f[i]);
		}
	}
	printf("\n");
	return (0);
}
