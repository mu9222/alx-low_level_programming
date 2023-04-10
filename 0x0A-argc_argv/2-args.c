#include "main.h"

/**
 * main - function that prints all arguments it receives.
 * @argc: number of arguments pass to the main function
 * @argv: vector of names of arguments
 * Return: alwayes return (0)
 **/


int main(int argc, char *argv[])
{
	char *c;
	int i;
	int j = 0;

	for (i = 0; i < argc; i++)
	{
		c = argv[i];
		j = 0;
		while (c[j] != '\0')
		{
			_putchar(c[j]);
			j++;
		}
		_putchar('\n');
	}
	return (0);
}
