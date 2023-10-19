#include "main.h"
/**
 * print_number - Write a function that prints an integer.
 * @n: input
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	putchar((n % 10) + '0');
}
