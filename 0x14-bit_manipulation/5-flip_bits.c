#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}