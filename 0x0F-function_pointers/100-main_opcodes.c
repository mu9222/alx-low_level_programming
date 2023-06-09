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
	char *ptr;
	int i, n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *) main;
	for (i = 0; i < n_bytes; i++)
	{
		if (i == n_bytes - 1)
		{
			printf("%02hhx\n", *(ptr + i));
			break;
		}
		printf("%02hhx ", *(ptr + i));
	}
	return (0);
}
