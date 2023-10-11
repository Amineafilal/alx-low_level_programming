#include "main.h"
/**
 * _abs- entry point
 * Description : Write a function that computes the absolute value.
 * @n: take in integer type input for function
 * Return: 1 if abs, n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
