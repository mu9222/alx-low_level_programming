#include <math.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long j, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (j = 1; j <= square; j++)
	{
		if (number % j == 0)
		{
			maxf = number / j;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
