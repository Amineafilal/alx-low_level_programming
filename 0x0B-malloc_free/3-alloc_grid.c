#include "main.h"
/**
 * **alloc_grid - Write a function that returns a pointer .
 * @width: input value
 * @height: input value
 * Return: Return value of gridp.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridp;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridp = (int **)malloc(sizeof(int *) * height);

	if (gridp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gridp[i] = (int *)malloc(sizeof(int) * width);
		if (gridp[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(gridp[j]);
			free(gridp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			gridp[i][j] = 0;
		}
	}
	return (gridp);
}
