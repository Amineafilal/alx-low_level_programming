#include "main.h"

/**
 * get_bit - Write a function that returns the value of a bit
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve (starting from 0)
 * Return: The value of the bit at the specified index, or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	n >>= index;
	return (n & 1);
}
