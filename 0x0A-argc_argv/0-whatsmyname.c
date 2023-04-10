#include "main.h"

/**
 * main - function that prints its name, followed by a new line
 * @argc: number of arguments pass to the main function
 * @argv: vector of names of arguments
 * Return: alwayes return (0)
 **/


int main(int argc __attribute__((unused)), char *argv[])
{
	char *c;
	int i = 0;

	c = argv[0];
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
