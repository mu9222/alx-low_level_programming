#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @width: width of array
 * @height: height of array
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int **l;
	int i, j, k;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	else
	{
		l = malloc(sizeof(int *) * height);
		if (l == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			l[k] = malloc(sizeof(int) * width);
			if (l[k] == NULL)
			{
				for (; k >= 0; k--)
				{
					free(l[k]);
				}
				free(l);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				l[height][width] = 0;
			}
		}
		return (l);
	}
}
