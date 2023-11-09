#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: input value.
 * Return: return the value of sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	sum = 0;
	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, unsigned int);
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
