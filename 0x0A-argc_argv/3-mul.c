#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments pass to the main function
 * @argv: vector of names of arguments
 * Return: alwayes return (0)
 **/


int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
