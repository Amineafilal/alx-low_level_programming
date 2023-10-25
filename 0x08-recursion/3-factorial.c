#include "main.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: input
 * Return: Return the value of n
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
