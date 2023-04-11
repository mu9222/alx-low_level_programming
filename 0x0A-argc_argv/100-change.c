#include <stdlib.h>
#include <stdio.h>


/**
 * main - function that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments pass to the main function
 * @argv: vector of names of arguments
 * Return: alwayes return (0)
 **/


int main(int argc, char *argv[])
{
	int k = 0, i;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		while (i != 0 )
		{
			if (i % 25 == 0)
			{
				k++;
				i -= 25;
			}
			else if (i % 10 == 0)
			{
				k++;
				i -= 10;
			}
			else if (i % 5 == 0)
			{
				k++;
				i -= 5;
			}
			else if (i % 2 == 0)
			{
				k++;
				i -= 2;
			}
			else if (i % 1 == 0)
			{
				k++;
				i -= 1;
			}
		}
		printf("%d\n", k);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		printf("0\n");
	}
	return (0);
}
