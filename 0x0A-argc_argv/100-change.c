#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that prints the minimum number of coins.
 * @argc: number of arguments pass to the main function
 * @argv: vector of names of arguments
 * Return: alwayes return (0)
 **/

int main(int argc, char *argv[])
{
	int k, j = 0;

	if (argc == 2)
	{
		k = atoi(argv[1]);
		while (k > 0)
		{
			if (k > 24)
			{	k -= 25;
				j++;
			} else if (k < 25 && k > 9)
			{	k -= 10;
				j++;
			} else if (k < 10 && k > 4)
			{	k -= 5;
				j++;
			} else if (k < 5 && k > 1)
			{	k -= 2;
				j++;
			} else if (k < 2 && k > 0)
			{	k -= 1;
				j++;
			}
		}
		printf("%d\n", j);
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
