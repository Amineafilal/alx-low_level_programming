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
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == 0)
		{
			for (j = 0; j <= i; j++)
				free(arr[j]);
		}
	}
	for (i = 0, j = 0; i < width; i++, j++)
	{
		arr[i][j] = 0;
	}
	return (arr);
}
