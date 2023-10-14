#include "main.h"
/**
 * print_number - entry point
 * @n: integer value
 * Description: Write a function that prints an integer.
*/
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
