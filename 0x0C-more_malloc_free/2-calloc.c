#include "main.h"
/**
 * *_calloc - Write a function that allocates memory for an array.
 * @nmemb: input value
 * @size: input value
 * Return: Return value of gridp.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int **gridp = 0;
	unsigned int *data = NULL;
	unsigned int i, j;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	gridp = (unsigned int **)malloc(sizeof(unsigned int *) * nmemb + sizeof(unsigned int) * nmemb * size);
	if (gridp == NULL)
	{
		return (NULL);
	}
	data = (unsigned int *)(gridp + size);
	for (i = 0; i < size; i++)
	{
		gridp[i] = data + i * nmemb;
		if (gridp[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(gridp[i]);
			}
			free(gridp);
			return (NULL);
		}
	}
	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < nmemb; j++)
		{
			gridp[i][j] = 0;
		}
	}
	return (gridp);
}
