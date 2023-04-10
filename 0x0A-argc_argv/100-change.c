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
	char *c;

	if (argc >= 2)
	{
		for (j = 1; j < argc; j++)
		{
			c = argv[j];
			k = 0;
			while (c[k] != '\0')
			{
				if (!(c[k] > '0' && c[k] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
				k++;
			}
			i += atoi(argv[j]);
		}
		printf("%d\n", i);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
