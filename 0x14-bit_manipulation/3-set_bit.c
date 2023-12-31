#include "main.h"

/**
 * set_bit - Write a function that sets the value of a bit.
 * @n: input value.
 * @index: input value.
 * Return: return 1.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
