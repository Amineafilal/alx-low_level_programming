#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer..
 * @array: input value of pointer.
 * @size: the number of elements.
 * @cmp: pointer to the function for compare values.
 * Return: return the value of -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
