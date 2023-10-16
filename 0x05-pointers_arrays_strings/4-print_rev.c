#include "main.h"
/**
 * print_rev - entry point
 * @s: integer value
 * Description: Write a function that prints a string.
*/
void print_rev(char *s)
{
	int c, lenght;

	lenght = 0;
	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
	}
	for (c = lenght - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
