#include "main.h"
/**
 * *array_range - Write a function that creates an array of integers.
 * @min: input value
 * @max: input value
 * Return: Return value of minmaxp.
*/

int *array_range(int min, int max)
{
	int i, *minmaxp, count = 0;

	if (min > max)
	{
		return (NULL);
	}
	minmaxp = (int *)malloc(sizeof(int) * (max - min + 1));
	if (minmaxp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			minmaxp[count] = i;
			count++;
		}
		return (minmaxp);
	}
}
