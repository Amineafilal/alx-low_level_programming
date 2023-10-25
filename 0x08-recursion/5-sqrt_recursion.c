#include "main.h"
/**
 * _sqrt - Write a function that find the natural square.
 * @n: input
 * @find: input
 * Return: Return the value of n and find
*/
int _sqrt(int n, int find)
{
	if (find * find == n)
	{
		return (find);
	}
	if (find * find > n)
	{
		return (-1);
	}
	return (_sqrt(n, find + 1));
}

/**
 * _sqrt_recursion - Write a function that returns the natural square.
 * @n: input
 * Return: Return the value of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
