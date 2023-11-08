#include "function_pointers.h"
/**
 * array_iterator - Write a function that executes a function.
 * @array: input value of pointer.
 * @size: the size of the array.
 * @action: pointer to the function.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
