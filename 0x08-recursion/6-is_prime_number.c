#include "main.h"
/**
 * _prime_numberinit - Write a function that returns 1 if the input integer
 * @i: input
 * @n: input
 * Return: Return the value of n and i
*/
int _prime_numberinit(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_prime_numberinit(n, i - 1));
}

/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * @n: input
 * Return: Return the value of n
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_numberinit(n, n - 1));
}
