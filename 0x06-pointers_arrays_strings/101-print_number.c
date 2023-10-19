#include "main.h"
/**
 * print_number - Write a function that prints an integer.
 * @n: input
 */
void print_number(int n)
{
	unsigned int c = n;

	if (n < 0)
	{
		_putchar('-');
		c = -c;
	}
	if (c > 9)
	{
		print_number(c / 10);
	}
	_putchar((c % 10) + '0');
}
