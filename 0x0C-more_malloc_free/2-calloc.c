#include "main.h"
/**
 * *_calloc - Write a function that allocates memory for an array.
 * @nmemb: input value
 * @size: input value
 * Return: Return value of gridp.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *gridp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	gridp = malloc(nmemb * size);
	if (gridp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			gridp[i] = 0;
		}
		return (gridp);
	}
}
