#include "main.h"
/**
 * print_sign- entry point
 * Description : Write a function that prints the sign of a number.
 * @n: check input of function
 * Return: 1 is greater than zero, 0 n is zero, -1 is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
