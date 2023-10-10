#include "main.h"
/**
 * print_alphabet_x10- entry point
 * Description : Write a function that prints 10 times the alphabet.
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
