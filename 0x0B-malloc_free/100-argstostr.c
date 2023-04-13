#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments pass to the main function
 * @av: vector of names of arguments
 * Return: NULL or address of av
 **/

char *argstostr(int ac, char **av)
{
	char *c;
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (ac > 1 && av != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				j++;
			}
			c = malloc(sizeof(char) * j);
		}
		if (c == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < ac; i++)
		{
			while (av[i][j] != '\0')
			{
				c[i] = av[i][j];
				j++;
			}
			c[i] = '\n';
		}
		return (c);
	}
	return (0);
}
