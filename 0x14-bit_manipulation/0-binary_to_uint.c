#include "main.h"
/**
 * verify_string - a function that verify string.
 * @b: input value.
 * Return: return 1.
*/
int verify_string(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}
	return (1);
}
/**
 * binary_to_uint - Write a function that converts a binary number.
 * @b: input value.
 * Return: return value of convert.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int length = 0, base = 1;

	if (!verify_string(b))
	{
		return (0);
	}
	while (b[length] != '\0')
	{
		length++;
	}
	while (length)
	{
		length--;
		convert += ((b[length] - '0') * base);
		base *= 2;
	}
	return (convert);
}
