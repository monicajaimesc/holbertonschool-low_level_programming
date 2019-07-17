#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2 dimensional grid by your alloc_grid
 *
 * @grid: wanna be free
 * @height: height
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0 ; i < height ; i++)
		free(*(grid + i));

	free(grid);
}
