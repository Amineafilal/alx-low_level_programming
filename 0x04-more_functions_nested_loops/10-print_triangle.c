#include "main.h"
/**
 * print_triangle - entry point
 * @size: integer value
 * Description : Write a function that prints a triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size  != 0 && size  >= 0)
	{
		for (i = 1; i <= size ; i++)
		{
			for (j = 1 ; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 1 ; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
