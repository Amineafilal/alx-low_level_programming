#include "main.h"
/**
 * _pow_recursion - Write a function that returns the value.
 * @x: input
 * @y: input
 * Return: Return the value of x and y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
