#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments pass to the main function
 * @argv: vector of names of arguments
 * Return: alwayes return (0)
 **/


int main(int argc, char *argv[])
{
	int j, k, i = 0;

	if (argc >= 2)
	{
		for (j = 1; j < argc; j++)
		{
			k = atoi(argv[j]);
			if (k == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				i += atoi(argv[j]);
			}
		}
		printf("%d\n", i);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("0\n");
	}
	return (1);
}
