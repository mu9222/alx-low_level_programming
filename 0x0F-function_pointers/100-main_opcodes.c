#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	unsigned char *ptr = (unsigned char *) main;
	int i, n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", *(ptr + i));
	}
	printf("\n");
	return (0);
}
