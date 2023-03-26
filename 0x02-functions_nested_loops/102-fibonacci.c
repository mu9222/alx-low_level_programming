#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i = 0;
	unsigned long int f[100] = {1};

	printf("1, ");
	for (i = 1; i < 50; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (i == 49)
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
