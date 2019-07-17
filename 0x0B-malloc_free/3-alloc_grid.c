#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - returns a ptr to a 2 dimensional array int
 *@width : columns
 *@height ; rows
 *
 * Return: dest
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);
	/* print space for height and width */

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);

	}
	/* print the element of the array via pointer */ 

	for (i = 0; i < height; i++)
	{
	*(p + i) = (int *) malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			free(p);
			for (k = 0 ; k < i ; k++)
				free(*(p + k));
			return (NULL);
		}
	}
	/* height = rows done into pointer and free of trash */ 
 
	/* create pointer for the two dimensional array with address */

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}

	return (p);
}

