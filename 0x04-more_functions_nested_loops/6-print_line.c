#include "main.h"
/**
 * print_line - entry point
 * @n: First integer value
 * Description : Write a function that draws a straight line in the terminal..
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
