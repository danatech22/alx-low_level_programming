#include "main.h"
#include <stdlib.h>

/**
  * free_grid - removing mem allocation
  * @grid: grid to be freed
  * @height: height of matrix
  * Return: Nada
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
