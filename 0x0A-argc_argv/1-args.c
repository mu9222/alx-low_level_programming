#include "main.h"

/**
 * main - function that prints the number of arguments passed into it.
 * @argc: number of arguments pass to the main function
 * @argv: vector of names of arguments
 * Return: alwayes return (0)
 **/


int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	i--;
	_putchar(i + '0');
	_putchar('\n');
	return (0);
}
