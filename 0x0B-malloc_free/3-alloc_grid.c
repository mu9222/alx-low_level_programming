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
	int **l, i, j;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	else
	{
		l = malloc(sizeof(int) * width * height);
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				l[height][width] = 0;
			}
		}
	}
	return (l);
}
