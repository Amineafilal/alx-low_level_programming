#include "main.h"
/**
 * free_grid - Write a function that frees a 2 dimensional grid previously.
 * @grid: input value
 * @height: input value
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
